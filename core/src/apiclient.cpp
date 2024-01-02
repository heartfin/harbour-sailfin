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

#include <QSharedPointer>

#include "JellyfinQt/dto/clientcapabilitiesdto.h"
#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/viewmodel/settings.h"
#include "JellyfinQt/websocket.h"



namespace Jellyfin {

class ApiClientPrivate {
public:
    ApiClientPrivate(ApiClient *parent);
    virtual ~ApiClientPrivate() {}

    // Exposed properties
    ViewModel::Settings *settings;
    WebSocket *webSocket;
    EventBus *eventbus;
    CredentialsManager *credManager;

    // Authentication-related variables
    QString token;
    QString baseUrl;
    QString appName;
    QString deviceName;
    QString deviceId;
    Model::DeviceType deviceType = Model::DeviceType::Unknown;
    QString userId;

    bool online = true;
    QSharedPointer<DTO::DeviceProfile> deviceProfile;
    QSharedPointer<DTO::ClientCapabilitiesDto> clientCapabilities;
    QList<DTO::GeneralCommandType> supportedCommands;

    bool authenticated = false;

    /**
     * @brief Retrieves the device ID or generates a random one.
     */
    QUuid retrieveDeviceId() const;

    bool componentBeingParsed = false;

};

ApiClient::ApiClient(QObject *parent)
    : QObject(parent),
      d_ptr(new ApiClientPrivate(this)) {
    Q_D(ApiClient);

    d->deviceId = Support::toString(d->retrieveDeviceId());
    d->deviceName = QHostInfo::localHostName();
    d->credManager = CredentialsManager::newInstance(this);
    connect(d->credManager, &CredentialsManager::serversListed, this, &ApiClient::credManagerServersListed);
    connect(d->credManager, &CredentialsManager::usersListed, this, &ApiClient::credManagerUsersListed);
    connect(d->credManager, &CredentialsManager::tokenRetrieved, this, &ApiClient::credManagerTokenRetrieved);
    connect(d->settings, &ViewModel::Settings::maxStreamingBitRateChanged, this, [d](qint32 newBitrate){
        d->deviceProfile->setMaxStreamingBitrate(newBitrate);
    });
}

ApiClient::~ApiClient() {

}

bool ApiClient::authenticated() const {
    Q_D(const ApiClient);
    return d->authenticated;
}

const QString &ApiClient::baseUrl() const {
    Q_D(const ApiClient);
    return d->baseUrl;
}

void ApiClient::setBaseUrl(const QString &url) {
    Q_D(ApiClient);
    d->baseUrl = url;
    if (d->baseUrl.endsWith("/")) {
        d->baseUrl.chop(1);
    }
    emit this->baseUrlChanged(d->baseUrl);
}

const QString &ApiClient::appName() const {
    const Q_D(ApiClient);
    return d->appName;
}

void ApiClient::setAppName(const QString &name) {
    Q_D(ApiClient);
    d->appName = name;
    emit appNameChanged(name);

    if (!d->componentBeingParsed) {
        generateDeviceProfile();
    }
}

const QString &ApiClient::userId() const {
    Q_D(const ApiClient);
    return d->userId;
}

void ApiClient::setUserId(const QString &userId) {
    Q_D(ApiClient);
    d->userId = userId;
    emit userIdChanged(userId);
}

const QString &ApiClient::deviceId() const {
    Q_D(const ApiClient);
    return d->deviceId;
}

Model::DeviceType ApiClient::deviceType() const {
    Q_D(const ApiClient);
    return d->deviceType;
}

void ApiClient::setDeviceType(Model::DeviceType newDeviceType) {
    Q_D(ApiClient);
    d->deviceType =newDeviceType;
    emit deviceTypeChanged();
}

EventBus *ApiClient::eventbus() const {
    Q_D(const ApiClient);
    return d->eventbus;
}
WebSocket *ApiClient::websocket() const {
    Q_D(const ApiClient);
    return d->webSocket;
}

QString ApiClient::version() const {
    return QString(SAILFIN_VERSION);
}

bool ApiClient::online() const {
    Q_D(const ApiClient);
    return d->online;
}

const QString &ApiClient::token() const {
    Q_D(const ApiClient);
    return d->token;
}

ViewModel::Settings *ApiClient::settings() const {
    Q_D(const ApiClient);
    return d->settings;
}

QVariantList ApiClient::supportedCommands() const {
    Q_D(const ApiClient);
    QVariantList result;
    result.reserve(d->supportedCommands.size());
    for(auto it = d->supportedCommands.begin(); it != d->supportedCommands.end(); it++) {
        result.append(QVariant::fromValue<DTO::GeneralCommandType>(*it));
    }
    return result;
}

void ApiClient::setSupportedCommands(QVariantList newSupportedCommands) {
    Q_D(ApiClient);
    d->supportedCommands.clear();
    d->supportedCommands.reserve(newSupportedCommands.size());
    for (int i = 0; i < newSupportedCommands.size(); i++) {
        if (newSupportedCommands[i].canConvert<DTO::GeneralCommandType>()) {
            d->supportedCommands.append(newSupportedCommands[i].value<DTO::GeneralCommandType>());
        }
    }
    qDebug() << "Supported commands changed: " << d->supportedCommands;
    emit supportedCommandsChanged();

    if (!d->componentBeingParsed) {
        this->generateDeviceProfile();
    }
}
QSharedPointer<DTO::DeviceProfile> ApiClient::deviceProfile() const {
    Q_D(const ApiClient);
    return d->deviceProfile;
}

const QJsonObject ApiClient::deviceProfileJson() const {
    Q_D(const ApiClient);
    return d->deviceProfile->toJson();
}
const QJsonObject ApiClient::clientCapabilities() const {
    Q_D(const ApiClient);
    return d->clientCapabilities->toJson();
}

// QQMLParserStatus implementation
void ApiClient::classBegin() {
    Q_D(ApiClient);
    d->componentBeingParsed = true;
}

void ApiClient::componentComplete() {
    Q_D(ApiClient);
    d->componentBeingParsed = false;

    // Generate the device profile after all properties have been parsed.
    generateDeviceProfile();
}


////////////////////////////////////////////////////////////////////////////////////////////////////
// BASE HTTP METHODS                                                                              //
////////////////////////////////////////////////////////////////////////////////////////////////////


void ApiClient::addBaseRequestHeaders(QNetworkRequest &request, const QString &path, const QUrlQuery &params) const {
    Q_D(const ApiClient);
    addTokenHeader(request);
    request.setRawHeader("Accept", "application/json;"); // profile=\"CamelCase\"");
    request.setHeader(QNetworkRequest::UserAgentHeader, QString("Sailfin/%1").arg(version()));
    QString url = d->baseUrl + path;
    if (!params.isEmpty()) url += "?" + params.toString(QUrl::EncodeReserved);
    request.setUrl(url);
}

void ApiClient::addTokenHeader(QNetworkRequest &request) const {
    Q_D(const ApiClient);
    QString authentication =   "MediaBrowser ";
    authentication        +=   "Client=\"" +d->appName +"\"";
    authentication        += ", Device=\"" + d->deviceName + "\"";
    authentication        += ", DeviceId=\"" + d->deviceId + "\"";
    authentication        += ", Version=\"" + version() + "\"";
    if (d->authenticated) {
        authentication    += ", Token=\"" + d->token + "\"";
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

QNetworkReply *ApiClient::post(const QString &path, const QByteArray &data, const QUrlQuery &params) {
    QNetworkRequest req;
    req.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    addBaseRequestHeaders(req, path, params);
    qDebug() << "POST " << req.url();
    qDebug() << "   DATA: " << data;
    if (data.isEmpty())
        return m_naManager.post(req, QByteArray());
    else {
        return m_naManager.post(req, data);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
// Nice to have methods                                                                           //
////////////////////////////////////////////////////////////////////////////////////////////////////

void ApiClient::restoreSavedSession(){
    Q_D(ApiClient);
    d->credManager->listServers();
}

void ApiClient::credManagerServersListed(QStringList servers) {
    Q_D(ApiClient);
    qDebug() << "Servers listed: " << servers;
    if (servers.size() == 0) {
        emit this->setupRequired();
        return;
    }

    //FIXME: support multiple servers
    QString server = servers[0];
    d->baseUrl = server;
    qDebug() << "Chosen server: " << server;
    d->credManager->listUsers(server);
}

void ApiClient::credManagerUsersListed(const QString &server, QStringList users) {
    Q_D(ApiClient);
    if (users.size() == 0) {
        emit this->setupRequired();
        return;
    }
    //FIXME: support multiple users
    QString user = users[0];
    qDebug() << "Chosen user: " << user;

    d->credManager->get(server, user);
}
void ApiClient::credManagerTokenRetrieved(const QString &server, const QString &user, const QString &token) {
    Q_D(ApiClient);
    d->token = token;
    qDebug() << "Token retreived, logged in as user " << user;
    this->setUserId(user);
    this->setAuthenticated(true);
    this->postCapabilities();
}

void ApiClient::setupConnection() {
    Q_D(ApiClient);
    // First detect redirects:
    // Note that this is done without calling JellyfinApiClient::get since that automatically includes the base_url,
    // which is something we want to avoid here.
    QNetworkRequest req = QNetworkRequest(d->baseUrl);
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
    Q_D(ApiClient);
    QJsonObject requestData;

    requestData["Username"] = username;
    requestData["Pw"] = password;
    QNetworkReply *rep = post("/Users/authenticatebyname", QJsonDocument(requestData));
    connect(rep, &QNetworkReply::finished, this, [rep, username, storeCredentials, this]() {
        Q_D(ApiClient);
        int status = rep->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        qDebug() << "Got reply with status code " << status;
        if (status >= 200 && status < 300) {
            QJsonObject authInfo = QJsonDocument::fromJson(rep->readAll()).object();
            d->token = authInfo["AccessToken"].toString();

            // Fool this class's addRequestheaders to add the token, without
            // notifying QML that we're authenticated, to prevent other requests going first.
            d->authenticated = true;
            this->setUserId(authInfo["User"].toObject()["Id"].toString());
            this->postCapabilities();
            this->setAuthenticated(true);

            if (storeCredentials) {
                d->credManager->store(d->baseUrl, d->userId, d->token);
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
        Q_D(ApiClient);
        d->credManager->remove(d->baseUrl, d->userId);
        this->setAuthenticated(false);
        emit this->setupRequired();
        rep->deleteLater();
    });
}

void ApiClient::postCapabilities() {
    Q_D(const ApiClient);
    QNetworkReply *rep = post("/Sessions/Capabilities/Full", QJsonDocument(d->clientCapabilities->toJson()));
    setDefaultErrorHandler(rep);
}

QString ApiClient::downloadUrl(const QString &itemId) const {
    Q_D(const ApiClient);
    return d->baseUrl + "/Items/" + itemId + "/Download?api_key=" + d->token;
}

void ApiClient::generateDeviceProfile() {
    Q_D(ApiClient);
    QSharedPointer<DTO::DeviceProfile> deviceProfile = QSharedPointer<DTO::DeviceProfile>::create(Model::DeviceProfile::generateProfile());
    deviceProfile->setJellyfinId(d->deviceId);
    deviceProfile->setFriendlyName(QSysInfo::prettyProductName());
    deviceProfile->setMaxStreamingBitrate(d->settings->maxStreamingBitRate());
    d->deviceProfile = deviceProfile;

    QSharedPointer<DTO::ClientCapabilitiesDto> clientCapabilities = QSharedPointer<DTO::ClientCapabilitiesDto>::create(true,  // supports mediaControl
                                                                                                                       false, // supports content uploading
                                                                                                                       true,  // supports persistent identifier
                                                                                                                       false, // supports sync
                                                                                                                       deviceProfile);
    clientCapabilities->setPlayableMediaTypes({"Audio", "Video", "Photo"});
    clientCapabilities->setSupportedCommands(d->supportedCommands);
    clientCapabilities->setAppStoreUrl("https://chris.netsoj.nl/projects/harbour-sailfin");
    clientCapabilities->setIconUrl("https://chris.netsoj.nl/static/img/logo.png");

    d->clientCapabilities = clientCapabilities;
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
    Q_D(ApiClient);
    d->authenticated = authenticated;
    emit authenticatedChanged(authenticated);
}

QUuid ApiClientPrivate::retrieveDeviceId() const {
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

////////////////////////////////////////////////////////////////////////////////////////////////////
// PRIVATE                                                                                        //
////////////////////////////////////////////////////////////////////////////////////////////////////

ApiClientPrivate::ApiClientPrivate(ApiClient *apiClient)
    : settings(new ViewModel::Settings(apiClient)),
      webSocket(new WebSocket(apiClient)),
      eventbus(new EventBus(apiClient)) {

}

}
