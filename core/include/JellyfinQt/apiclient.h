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

#ifndef JELLYFIN_API_CLIENT
#define JELLYFIN_API_CLIENT

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonValue>

#include <QHostInfo>
#include <QObject>
#include <QQmlListProperty>
#include <QQmlParserStatus>
#include <QScopedPointer>
#include <QString>
#include <QSysInfo>
#include <QtQml>
#include <QUuid>

#include <QNetworkReply>
#include <QUrlQuery>

#include "dto/generalcommandtype.h"
#include "credentialmanager.h"
#include "model/controllablesession.h"
#include "model/deviceprofile.h"
#include "eventbus.h"

namespace Jellyfin {
class PlaybackManager;
class WebSocket;

namespace ViewModel {
class Settings;
}

namespace DTO {
    class UserItemDataDto; // Keep it as an opaque pointer
    using UserData = UserItemDataDto;
}

using namespace DTO;

class ApiClientPrivate;

/**
 * @brief An Api client for Jellyfin. Handles requests and authentication.
 *
 * This class should also be given to certain models and other sources, so they are able to make
 * requests to the correct server.
 *
 * General usage is as follows:
 * 1. (Optional) Call restoreSavedSession(). This will try to load previously saved credentials and connect to the server.
 *    If all succeeds, the property authenticated should be set to true and its signal should be emitted. All is done.
 *    If it fails, setupRequired will be emitted. Continue following these steps.
 * 2. If opting in to manually manage the session or restoreSavedSession() failed, you'll need to set the property
 *    baseUrl to the root of the Jellyfin server, e.g. "https://jellyfin.example.com:8098", so not the url to the
 *    web interface! Nearby servers can be discovered using Jellyfin::ServerDiscoveryModel.
 * 3. Call ::setupConnection(). First of all, the client will try to resolve any redirects and will update
 *    the baseUrl property if following redirects. Then it will emit connectionSuccess(QString). The QString from
 *    the signal contains a user-oriented login message configured by the user that should be displayed in the URL
 *    somewhere.
 * 4. After ::connected is emitted, call ::authenticate(QString, QString, bool). with the username and password.
 *    The last boolean argument is used if you want to have the ApiClient store your credentials, so that they
 *    later can be used with restoreSavedSession().
 * 5. If the authenticated property is set to true, you are now authenticated! If loginError() is emitted, you aren't and
 *    you should go back to step 4.
 *
 * These steps might change. I'm considering decoupling CredentialsManager from this class to clean some code up.
 */
class ApiClient : public QObject, public QQmlParserStatus {
    friend class WebSocket;
    friend class PlaybackManager;
    Q_OBJECT
    Q_INTERFACES(QQmlParserStatus)
    Q_DECLARE_PRIVATE(ApiClient);
public:
    explicit ApiClient(QObject *parent = nullptr);
    virtual ~ApiClient();
    Q_PROPERTY(QString baseUrl READ baseUrl WRITE setBaseUrl NOTIFY baseUrlChanged)
    Q_PROPERTY(QString appName READ appName WRITE setAppName NOTIFY appNameChanged)
    Q_PROPERTY(Jellyfin::Model::DeviceTypeClass::Value deviceType READ deviceType WRITE setDeviceType NOTIFY deviceTypeChanged)
    Q_PROPERTY(bool authenticated READ authenticated WRITE setAuthenticated NOTIFY authenticatedChanged)
    Q_PROPERTY(QString userId READ userId NOTIFY userIdChanged)
    Q_PROPERTY(QJsonObject deviceProfile READ deviceProfileJson NOTIFY deviceProfileChanged)
    Q_PROPERTY(QString version READ version)
    Q_PROPERTY(Jellyfin::EventBus *eventbus READ eventbus FINAL)
    Q_PROPERTY(Jellyfin::WebSocket *websocket READ websocket FINAL)
    Q_PROPERTY(QVariantList supportedCommands READ supportedCommands WRITE setSupportedCommands NOTIFY supportedCommandsChanged)
    Q_PROPERTY(Jellyfin::ViewModel::Settings *settings READ settings NOTIFY settingsChanged)
    /**
     * Wether this ApiClient operates in "online mode".
     *
     * When operating in offline mode, this client will not make network requests and only use a local cache, making
     * certain features unavailable.
     */
    Q_PROPERTY(bool online READ online NOTIFY onlineChanged)

    bool authenticated() const;
    void setBaseUrl(const QString &url);
    void setAppName(const QString &appName);
    void setDeviceType(Model::DeviceType deviceType);

    QNetworkReply *get(const QString &path, const QUrlQuery &params = QUrlQuery());
    QNetworkReply *post(const QString &path, const QJsonDocument &data, const QUrlQuery &params = QUrlQuery());
    QNetworkReply *post(const QString &path, const QByteArray &data = QByteArray(), const QUrlQuery &params = QUrlQuery());

    enum ApiError {
        JSON_ERROR,
        UNEXPECTED_REPLY,
        UNEXPECTED_STATUS,
        INVALID_PASSWORD
    };
    Q_ENUM(ApiError)

    const QString &baseUrl() const;
    const QString &appName() const;
    const QString &userId() const;
    const QString &deviceId() const;
    Model::DeviceType deviceType() const;
    /**
     * @brief QML applications can set this type to indicate which commands they support.
     *
     * These commands can be sent by other Jellyfin clients to instruct this Jellyfin client to play a
     * certain item, control playback and so on.
     *
     * This property must be set before restoreSavedSession() is called and not be changed afterwards.
     * The list support commands will be sent to the Jellyfin server. QML applications should listen to
     * the events emitted by the eventBus and act accordingly.
     */
    QVariantList supportedCommands() const ;
    void setSupportedCommands(QVariantList newSupportedCommands);
    const QJsonObject deviceProfileJson() const;
    QSharedPointer<DTO::DeviceProfile> deviceProfile() const;
    const QJsonObject clientCapabilities() const;
    /**
     * @brief Retrieves the authentication token. Null QString if not authenticated.
     * @note This is not the full authentication header, just the token.
     */
    const QString &token() const;
    QString version() const;
    bool online() const;

    EventBus *eventbus() const;
    WebSocket *websocket() const;
    ViewModel::Settings * settings() const;

    /**
     * @brief Sets the error handler of a reply to this classes default error handler
     * @param rep The reply to set the error handler on.
     *
     * Motivation for this helper is because I forget the correct signature each time, with all the
     * funky casts.
     */
    void setDefaultErrorHandler(QNetworkReply *rep) {
#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
        connect(rep, &QNetworkReply::errorOccurred, this, &ApiClient::defaultNetworkErrorHandler);
#else
        connect(rep, static_cast<void (QNetworkReply::*)(QNetworkReply::NetworkError)>(&QNetworkReply::error),
                this, &ApiClient::defaultNetworkErrorHandler);
#endif
    }
signals:
    /*
     * Emitted when the server requires authentication. Please authenticate your user via authenticate.
     */
    void authenticationRequired();

    void authenticationError(ApiError error);

    void connectionFailed(ApiError error);
    void connectionSuccess(QString loginMessage);
    void networkError(QNetworkReply::NetworkError error);

    void authenticatedChanged(bool authenticated);
    void baseUrlChanged(const QString &baseUrl);
    void appNameChanged(const QString &newAppName);
    void settingsChanged();

    /**
     * @brief Set-up is required. You'll need to manually set up the baseUrl-property, call setupConnection
     * afterwards and finally call authenticate.
     */
    void setupRequired();

    void userIdChanged(QString userId);

    void deviceProfileChanged();
    void deviceTypeChanged();

    void supportedCommandsChanged();
    void onlineChanged();
    /**
     * @brief Emitted after submitQuickConnectCode succeeded
     */
    void quickConnectAccepted();
    /**
     * @brief Emitted after submitQuickConnectCode failed
     */
    void quickConnectRejected();

    /**
     * @brief onUserDataChanged Emitted when the user data of an item is changed on the server.
     * @param itemId The id of the item being changed
     * @param userData The new user data
     *
     * Note: only Jellyfin::UserData should connect to this signal, they will update themselves!
     * Note: the userData is only valid during this callback, afterwards it is deleted!
     */
    void userDataChanged(const QString &itemId, UserData *userData);

public slots:
    /**
     * @brief Tries to access credentials and connect to a server. If nothing has been configured yet,
     * emits setupRequired();
     */
    void restoreSavedSession();
    /*
     * Try to connect with the server. Tries to resolve redirects and retrieves information
     * about the login procedure. Emits connectionSuccess on success, networkError or ConnectionFailed
     * otherwise.
     */
    void setupConnection();
    void authenticate(QString username, QString password, bool storeCredentials = false);
    void submitQuickConnectCode(const QString &code);

    /**
     * @brief Logs the user out and clears the session.
     */
    void deleteSession();

    /**
     * @brief Shares the capabilities of this device to the server.
     */
    void postCapabilities();
    QString downloadUrl(const QString &itemId) const;

protected slots:
    void defaultNetworkErrorHandler(QNetworkReply::NetworkError error);
    void onUserDataChanged(const QString &itemId, UserData *newData);
    void credManagerServersListed(QStringList users);
    void credManagerUsersListed(const QString &server, QStringList users);
    void credManagerTokenRetrieved(const QString &server, const QString &user, const QString &token);

    void classBegin() override;
    void componentComplete() override;

protected:
    /**
     * @brief Adds default headers to each request, like authentication headers etc.
     * @param request The request to add headers to
     * @param path The path to which the request is being made
     */
    void addBaseRequestHeaders(QNetworkRequest &request, const QString &path, const QUrlQuery &params = QUrlQuery()) const;

    /**
     * @brief Adds the authorization to the header
     * @param The request to add the header to
     */
    void addTokenHeader(QNetworkRequest &request) const;

    /**
     * @brief getBrandingConfiguration Gets the login message and custom CSS (which we ignore)
     */
    void getBrandingConfiguration();

    /**
     * @brief Generates a profile, containing the name of the application, manufacturer and most importantly,
     * which media types this device supports.
     *
     * The actual detection of supported media types is done within jellyfindeviceprofile.cpp, since the code
     * is a big mess and should be safely contained in it's own file.
     */
    void generateDeviceProfile();


private:
    QScopedPointer<ApiClientPrivate> d_ptr;
    QNetworkAccessManager m_naManager;
    /*
     * State information
     */
    /*
     * Setters
     */
    void setAuthenticated(bool authenticated);
    void setUserId(const QString &userId);

    /**
     * @brief Returns the statusCode of a QNetworkReply
     * @param The reply to obtain the statusCode of
     * @return The statuscode of the reply
     *
     * Seriously, Qt, why is your method to obtain the status code of a request so tedious?
     * It could've just been a rep->statusCode();
     */
    static inline int statusCode(QNetworkReply *rep) {
        return rep->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    }

};
} // NS Jellyfin

#endif // JELLYFIN_API_CLIENT
