/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2021 Chris Josten

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "JellyfinQt/apiclient.h"

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/websocket.h"


namespace Jellyfin {

ApiClient::ApiClient(QObject *parent)
    : QObject(parent),
      m_webSocket(new WebSocket(this)),
      m_eventbus(new EventBus(this)),
      m_deviceName(QHostInfo::localHostName()) {

    m_deviceId = Support::uuidToString(retrieveDeviceId());

    m_credManager = CredentialsManager::newInstance(this);

    generateDeviceProfile();
}

QString ApiClient::version() const {
    return QString(SAILFIN_VERSION);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
// BASE HTTP METHODS                                                                              //
////////////////////////////////////////////////////////////////////////////////////////////////////


void ApiClient::addBaseRequestHeaders(QNetworkRequest &request, const QString &path, const QUrlQuery &params) {
    addTokenHeader(request);
    request.setRawHeader("Accept", "application/json;"); // profile=\"CamelCase\"");
    request.setHeader(QNetworkRequest::UserAgentHeader, QString("Sailfin/%1").arg(version()));
    QString url = this->m_baseUrl + path;
    if (!params.isEmpty()) url += "?" + params.toString(QUrl::EncodeReserved);
    request.setUrl(url);
}

void ApiClient::addTokenHeader(QNetworkRequest &request) {
    QString authentication =   "MediaBrowser ";
    authentication        +=   "Client=\"Sailfin\"";
    authentication        += ", Device=\"" + m_deviceName + "\"";
    authentication        += ", DeviceId=\"" + m_deviceId + "\"";
    authentication        += ", Version=\"" + version() + "\"";
    if (m_authenticated) {
        authentication    += ", token=\"" + m_token + "\"";
    }
    request.setRawHeader("X-Emby-Authorization", authentication.toUtf8());
}

QNetworkReply *ApiClient::get(const QString &path, const QUrlQuery &params) {
    QNetworkRequest req;
    addBaseRequestHeaders(req, path, params);
    qDebug() << "GET  " << req.url();
    return m_naManager.get(req);
}
QNetworkReply *ApiClient::post(const QString &path, const QJsonDocument &data, const QUrlQuery &params) {

    QNetworkRequest req;
    req.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    addBaseRequestHeaders(req, path, params);
    qDebug() << "POST " << req.url();
    if (data.isEmpty())
        return m_naManager.post(req, QByteArray());
    else {
        return m_naManager.post(req, data.toJson(QJsonDocument::Compact));
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
// Nice to have methods                                                                           //
////////////////////////////////////////////////////////////////////////////////////////////////////

void ApiClient::restoreSavedSession(){
    QObject *ctx1 = new QObject(this);
    connect(m_credManager, &CredentialsManager::serversListed, ctx1, [this, ctx1](const QStringList &servers) {
        qDebug() << "Servers listed: " << servers;
        if (servers.size() == 0) {
            emit this->setupRequired();
            return;
        }

        //FIXME: support multiple servers
        QString server = servers[0];
        this->m_baseUrl = server;
        qDebug() << "Server: " << server;
        QObject *ctx2 = new QObject(this);
        connect(m_credManager, &CredentialsManager::usersListed, ctx2, [this, server, ctx2](const QStringList &users) {
            if (users.size() == 0) {
                emit this->setupRequired();
                return;
            }
            //FIXME: support multiple users
            QString user = users[0];
            qDebug() << "User: " << user;

            QObject *ctx3 = new QObject(this);
            connect(m_credManager, &CredentialsManager::tokenRetrieved, ctx3, [this, ctx3]
                    (const QString &server, const QString &user, const QString &token) {
                Q_UNUSED(server)
                this->m_token = token;
                this->setUserId(user);
                this->setAuthenticated(true);
                this->postCapabilities();
                disconnect(ctx3);
            }, Qt::UniqueConnection);
            m_credManager->get(server, user);
            delete ctx2;
        }, Qt::UniqueConnection);
        m_credManager->listUsers(server);
        qDebug() << "Listing users";
        delete ctx1;
    }, Qt::UniqueConnection);
    qDebug() << "Listing servers";
    m_credManager->listServers();
}

void ApiClient::setupConnection() {
    // First detect redirects:
    // Note that this is done without calling JellyfinApiClient::get since that automatically includes the base_url,
    // which is something we want to avoid here.
    QNetworkRequest req = QNetworkRequest(m_baseUrl);
#if QT_VERSION >= QT_VERSION_CHECK(5, 9, 0)
    req.setAttribute(QNetworkRequest::RedirectPolicyAttribute, QNetworkRequest::NoLessSafeRedirectPolicy);
#else
    req.setAttribute(QNetworkRequest::FollowRedirectsAttribute, true);
#endif
    QNetworkReply *rep = m_naManager.get(req);
    connect(rep, &QNetworkReply::finished, this, [rep, this](){
        int status = statusCode(rep);
        qDebug() << status;

        QString newUrl = rep->url().toString();
        // If the server wants to redirect us to their web interface, we have to chop the last part of the url off.
        if (newUrl.endsWith("/web/index.html")) {
            newUrl.chop(QString("/web/index.html").size());
            this->setBaseUrl(newUrl);
        }
        this->getBrandingConfiguration();
        rep->deleteLater();
    });
    connect(rep, &QNetworkReply::redirected, this, [req] (const QUrl &url) {
        qDebug() << "Redirect from " << req.url() << " to " << url;
    });
    setDefaultErrorHandler(rep);
}

void ApiClient::getBrandingConfiguration() {
    QNetworkReply *rep = get("/Branding/Configuration");
    connect(rep, &QNetworkReply::finished, this, [rep, this]() {
        qDebug() << "RESPONSE: " << statusCode(rep);
        switch(statusCode(rep)) {
            case 200:
                QJsonDocument response = QJsonDocument::fromJson(rep->readAll());
                if (response.isNull() || !response.isObject()) {
                    emit this->connectionFailed(ApiError::JSON_ERROR);
                } else {
                    QJsonObject obj = response.object();
                    if (obj.contains("LoginDisclaimer")) {
                        qDebug() << "Login disclaimer: " << obj["LoginDisclaimer"];
                        emit this->connectionSuccess(obj["LoginDisclaimer"].toString());
                    } else {
                        emit this->connectionSuccess("");
                    }
                }
                break;
        }
        rep->deleteLater();
    });
    setDefaultErrorHandler(rep);
}

void ApiClient::authenticate(QString username, QString password, bool storeCredentials) {
    QJsonObject requestData;

    requestData["Username"] = username;
    requestData["Pw"] = password;
    QNetworkReply *rep = post("/Users/authenticatebyname", QJsonDocument(requestData));
    connect(rep, &QNetworkReply::finished, this, [rep, username, storeCredentials, this]() {
        int status = rep->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        qDebug() << "Got reply with status code " << status;
        if (status >= 200 && status < 300) {
            QJsonObject authInfo = QJsonDocument::fromJson(rep->readAll()).object();
            this->m_token = authInfo["AccessToken"].toString();

            // Fool this class's addRequestheaders to add the token, without
            // notifying QML that we're authenticated, to prevent other requests going first.
            this->m_authenticated = true;
            this->setUserId(authInfo["User"].toObject()["Id"].toString());
            this->postCapabilities();
            this->setAuthenticated(true);

            if (storeCredentials) {
                m_credManager->store(this->m_baseUrl, this->m_userId, this->m_token);
            }
        } else if(status >= 400 && status < 500) {
            if (status == 401) {
                emit authenticationError(ApiError::INVALID_PASSWORD);
            } else {
                emit authenticationError(ApiError::UNEXPECTED_STATUS);
            }
        }
        rep->deleteLater();
    });
    setDefaultErrorHandler(rep);
}

void ApiClient::deleteSession() {
    QNetworkReply *rep = post("/Sessions/Logout");
    connect(rep, &QNetworkReply::finished, this, [rep, this] {
        m_credManager->remove(m_baseUrl, m_userId);
        this->setAuthenticated(false);
        emit this->setupRequired();
        rep->deleteLater();
    });
}

void ApiClient::postCapabilities() {
    QJsonObject capabilities;
    QList<DTO::GeneralCommandType> supportedCommands;
    supportedCommands.reserve(m_supportedCommands.size());
    for (int i = 0; i < m_supportedCommands.size(); i++) {
        if (m_supportedCommands[i].canConvert<DTO::GeneralCommandType>()) {
            supportedCommands.append(m_supportedCommands[i].value<DTO::GeneralCommandType>());
        }
    }
    QList<int> foo = {1, 2, 3};
    qDebug() << Support::toJsonValue<int>(3713);
    qDebug() << Support::toJsonValue<QList<int>>(foo);
    capabilities["SupportedCommands"] = Support::toJsonValue<QList<DTO::GeneralCommandType>>(supportedCommands);
    capabilities["SupportsPersistentIdentifier"] = true;
    capabilities["SupportsMediaControl"] = false;
    capabilities["SupportsSync"] = false;
    capabilities["SupportsContentUploading"] = false;
    capabilities["AppStoreUrl"] = "https://chris.netsoj.nl/projects/harbour-sailfin";
    capabilities["IconUrl"] = "https://chris.netsoj.nl/static/img/logo.png";
    capabilities["DeviceProfile"] = m_deviceProfile;
    QNetworkReply *rep = post("/Sessions/Capabilities/Full", QJsonDocument(capabilities));
    setDefaultErrorHandler(rep);
}

QString ApiClient::downloadUrl(const QString &itemId) const {
    return m_baseUrl + "/Items/" + itemId + "/Download?api_key=" + this->m_token;
}

void ApiClient::generateDeviceProfile() {
    QJsonObject root = Model::DeviceProfile::generateProfile();
    m_playbackDeviceProfile = QJsonObject(root);
    root["Name"] = m_deviceName;
    root["Id"] = m_deviceId;
    root["FriendlyName"] = QSysInfo::prettyProductName();
    QJsonArray playableMediaTypes;
    playableMediaTypes.append("Audio");
    playableMediaTypes.append("Video");
    playableMediaTypes.append("Photo");
    root["PlayableMediaTypes"] = playableMediaTypes;

    m_deviceProfile = root;
    emit deviceProfileChanged();
}

void ApiClient::defaultNetworkErrorHandler(QNetworkReply::NetworkError error) {
    QObject *signalSender = sender();
    QNetworkReply *rep = dynamic_cast<QNetworkReply *>(signalSender);
    if (rep != nullptr && statusCode(rep) == 401) {
        this->setAuthenticated(false);
        emit this->setupRequired();
        emit this->authenticationError(ApiError::INVALID_PASSWORD);
        rep->deleteLater();
    } else {
        emit this->networkError(error);
    }
}

void ApiClient::onUserDataChanged(const QString &itemId, UserData *userData) {
    emit userDataChanged(itemId, userData);
}

void ApiClient::setAuthenticated(bool authenticated) {
    this->m_authenticated = authenticated;
    if (authenticated) m_webSocket->open();
    emit authenticatedChanged(authenticated);
}

QUuid ApiClient::retrieveDeviceId() {
    // This should probably not block the main thread, but on the other side,
    // the file is not too big.
    QString path = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);

    QDir folder(path);
    static QString fileName = QStringLiteral("deviceid");
    if (!path.isEmpty() && !folder.exists(fileName)) {
            folder.mkpath(".");
            QFile uuidFile(folder.absoluteFilePath(fileName));
            if (uuidFile.open(QIODevice::WriteOnly)) {
                QUuid uuid =  QUuid::createUuid();
                uuidFile.write(uuid.toByteArray());
                uuidFile.close();
                return uuid;
            } else {
                qDebug() << "Could not persist device id";
                return QUuid::createUuid();
            }
    } else {
        QFile uuidFile(folder.absoluteFilePath(fileName));
        if (uuidFile.open(QIODevice::ReadOnly)) {
            QUuid uuid(uuidFile.readAll());
            uuidFile.close();
            if (uuid.isNull()) {
                qDebug() << "UUID file contains junk. Recreating";
                uuidFile.remove();
                uuidFile.open(QIODevice::WriteOnly);
                uuid = QUuid::createUuid();
                uuidFile.write(uuid.toByteArray());
                uuidFile.close();
            }
            return uuid;
        } else {
            qDebug() << "Could not open device id file. Generating a random one.";
            return QUuid::createUuid();
        }
    }
}

}
