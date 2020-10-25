/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2020 Chris Josten

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

#include "JellyfinQt/jellyfinapiclient.h"

namespace Jellyfin {

ApiClient::ApiClient(QObject *parent)
    : QObject(parent),
      m_webSocket(new WebSocket(this)) {
    m_deviceName = QHostInfo::localHostName();
    m_deviceId = QUuid::createUuid().toString(); // TODO: make this not random?
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
    if (!params.isEmpty()) url += "?" + params.toString();
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
    req.setAttribute(QNetworkRequest::FollowRedirectsAttribute, true);
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
    QNetworkReply *rep = post("/Users/Authenticatebyname", QJsonDocument(requestData));
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

void ApiClient::fetchItem(const QString &id) {
    QNetworkReply *rep = get("/Users/" + m_userId + "/Items/" + id);
    connect(rep, &QNetworkReply::finished, this, [rep, id, this]() {
        int status = statusCode(rep);
        if (status >= 200 && status < 300) {
            QJsonObject data = QJsonDocument::fromJson(rep->readAll()).object();
            emit this->itemFetched(id, data);
        }
        rep->deleteLater();
    });
    connect(rep, static_cast<void (QNetworkReply::*)(QNetworkReply::NetworkError)>(&QNetworkReply::error),
            this, [id, rep, this](QNetworkReply::NetworkError error) {
        emit this->itemFetchFailed(id, error);
        rep->deleteLater();
    });
}

void ApiClient::postCapabilities() {
    QJsonObject capabilities;
    capabilities["SupportsPersistentIdentifier"] = false; // Technically untrue, but not implemented yet.
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
    QJsonObject root = DeviceProfile::generateProfile();
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
}

void ApiClient::defaultNetworkErrorHandler(QNetworkReply::NetworkError error) {
    QObject *signalSender = sender();
    QNetworkReply *rep = dynamic_cast<QNetworkReply *>(signalSender);
    if (rep != nullptr && statusCode(rep) == 401) {
        this->setAuthenticated(false);
        emit this->authenticationError(ApiError::INVALID_PASSWORD);
    } else {
        emit this->networkError(error);
    }
    rep->deleteLater();
}

void ApiClient::onUserDataChanged(const QString &itemId, QSharedPointer<UserData> userData) {
    userDataChanged(itemId, userData);
}

void ApiClient::setAuthenticated(bool authenticated) {
    this->m_authenticated = authenticated;
    if (authenticated) m_webSocket->open();
    emit authenticatedChanged(authenticated);
}
}
