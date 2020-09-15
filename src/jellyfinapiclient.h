#ifndef JELLYFIN_API_CLIENT
#define JELLYFIN_API_CLIENT

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonValue>

#include <QObject>
#include <QString>
#include <QtQml>
#include <QUuid>

#include <QNetworkReply>
#include <QUrlQuery>

#include "credentialmanager.h"

class JellyfinApiClient : public QObject {
    Q_OBJECT
public:
    explicit JellyfinApiClient(QObject *parent = nullptr);
    Q_PROPERTY(QString baseUrl MEMBER m_baseUrl NOTIFY baseUrlChanged)
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
    QNetworkReply *post(const QString &path, const QJsonDocument &data = QJsonDocument());
    void getPublicUsers();

    enum ApiError {
        JSON_ERROR,
        UNEXPECTED_REPLY,
        UNEXPECTED_STATUS,
        INVALID_PASSWORD
    };

    QString &userId() { return m_userId; }
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
    void initialize();
    /*
     * Try to connect with the server. Tries to resolve redirects and retrieves information
     * about the login procedure. Emits connectionSuccess on success, networkError or ConnectionFailed
     * otherwise.
     */
    void setupConnection();
    void authenticate(QString username, QString password, bool storeCredentials = false);
    void fetchItem(const QString &id);

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
     * @brief getBrandingConfiguration Gets the login message and custom CSS (which we ignore)
     */
    void getBrandingConfiguration();


private:
    CredentialsManager * m_credManager;
    QString m_token;
    QString m_deviceName;
    QString m_deviceId;

    QString m_userId = "";

    void setAuthenticated(bool authenticated) {
        this->m_authenticated = authenticated;
        emit authenticatedChanged(authenticated);
    }
    void setUserId(QString userId) {
        this->m_userId = userId;
        emit userIdChanged(userId);
    }

    bool m_authenticated = false;
    QString m_baseUrl;

    QNetworkAccessManager m_naManager;
    static inline int statusCode(QNetworkReply *rep) {
        return rep->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    }
};


#endif // JELLYFIN_API_CLIENT
