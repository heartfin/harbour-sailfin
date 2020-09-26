#ifndef JELLYFIN_API_CLIENT
#define JELLYFIN_API_CLIENT

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonValue>

#include <QObject>
#include <QString>
#include <QSysInfo>
#include <QtQml>
#include <QUuid>

#include <QNetworkReply>
#include <QUrlQuery>

#include "credentialmanager.h"
#include "jellyfindeviceprofile.h"

namespace Jellyfin {
class MediaSource;
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
class ApiClient : public QObject {
    friend class MediaSource;
    Q_OBJECT
public:
    explicit ApiClient(QObject *parent = nullptr);
    Q_PROPERTY(QString baseUrl MEMBER m_baseUrl READ baseUrl NOTIFY baseUrlChanged)
    Q_PROPERTY(bool authenticated READ authenticated WRITE setAuthenticated NOTIFY authenticatedChanged)
    Q_PROPERTY(QString userId READ userId NOTIFY userIdChanged)

    /*QNetworkReply *handleRequest(QString path, QStringList sort, Pagination *pagination,
                                 QVariantMap filters, QStringList fields, QStringList expand, QString id);*/

    bool authenticated() const { return m_authenticated; }
    void setBaseUrl(QString url) {
        this->m_baseUrl = url;
        if (this->m_baseUrl.endsWith("/")) {
            this->m_baseUrl.chop(1);
        }
        emit this->baseUrlChanged(m_baseUrl);
    }

    QNetworkReply *get(const QString &path, const QUrlQuery &params = QUrlQuery());
    QNetworkReply *post(const QString &path, const QJsonDocument &data = QJsonDocument(), const QUrlQuery &params = QUrlQuery());
    void getPublicUsers();

    enum ApiError {
        JSON_ERROR,
        UNEXPECTED_REPLY,
        UNEXPECTED_STATUS,
        INVALID_PASSWORD
    };

    QString &baseUrl() { return this->m_baseUrl; }
    QString &userId() { return m_userId; }
    QJsonObject &deviceProfile() { return m_deviceProfile; }
    QJsonObject &playbackDeviceProfile() { return m_playbackDeviceProfile; }
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

    /**
     * @brief Set-up is required. You'll need to manually set up the baseUrl-property, call setupConnection
     * afterwards and finally call authenticate.
     */
    void setupRequired();

    void userIdChanged(QString userId);

    void itemFetched(const QString &itemId, const QJsonObject &result);

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
    void fetchItem(const QString &id);

    /**
     * @brief Shares the capabilities of this device to the server.
     */
    void postCapabilities();

protected slots:
    void defaultNetworkErrorHandler(QNetworkReply::NetworkError error);

protected:
    /**
     * @brief Adds default headers to each request, like authentication headers etc.
     * @param request The request to add headers to
     * @param path The path to which the request is being made
     */
    void addBaseRequestHeaders(QNetworkRequest &request, const QString &path, const QUrlQuery &params = QUrlQuery());

    /**
     * @brief Adds the authorization to the header
     * @param The request to add the header to
     */
    void addTokenHeader(QNetworkRequest &request);

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
    QString &token() { return m_token; }

private:
    QNetworkAccessManager m_naManager;
    const char *m_version = SAILFIN_VERSION;
    /*
     * State information
     */
    CredentialsManager * m_credManager;
    QString m_token;
    QString m_deviceName;
    QString m_deviceId;
    QString m_userId = "";
    QJsonObject m_deviceProfile;
    QJsonObject m_playbackDeviceProfile;

    bool m_authenticated = false;
    /**
     * @brief The base url of the request.
     */
    QString m_baseUrl;

    /*
     * Setters
     */

    void setAuthenticated(bool authenticated) {
        this->m_authenticated = authenticated;
        emit authenticatedChanged(authenticated);
    }
    void setUserId(QString userId) {
        this->m_userId = userId;
        emit userIdChanged(userId);
    }

    /*
     * Utilities
     */

    /**
     * @brief Returns the statusCode of a QNetworkReply
     * @param The reply to obtain the statusCode of
     * @return The statuscode of the reply
     *
     * Seriously, Qt, why is your method to obtain the status code of a request so horrendous?
     */
    static inline int statusCode(QNetworkReply *rep) {
        return rep->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    }
};
} // NS Jellyfin

#endif // JELLYFIN_API_CLIENT
