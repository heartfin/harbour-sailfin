#ifndef JELLYFIN_SUPPORT_LOADER_H
#define JELLYFIN_SUPPORT_LOADER_H

#include <exception>
#include <stdexcept>

#include <QJsonDocument>
#include <QUrlQuery>
#include <QString>

#include <JellyfinQt/apiclient.h>

namespace Jellfyin {
namespace Support {


class LoadException : public std::runtime_error {
public:
    explicit LoadException(const char *message)
        : std::runtime_error(message) {}
};

static const int HTTP_TIMEOUT = 30000; // 30 seconds;

/**
 * Interface describing a way to load items. Used to abstract away
 * the difference between loading from a cache or loading over the network.
 *
 * @tparam R the type of data that should be fetched, R for result.
 * @tparam P the type of paramaters given, to determine which resource should
 *           be loaded.
 */
template <typename R, typename P>
class Loader {
    using ApiClient = Jellyfin::ApiClient;
public:
    explicit Loader(ApiClient *apiClient) : m_apiClient(apiClient) {}
    /**
     * @brief load Loads the given resource.
     * @param parameters Parameters to determine which resource should be loaded.
     * @return The resource if successfull.
     */
    virtual R load(const P &parameters) const;
    /**
     * @brief Heuristic to determine if this resource can be loaded via this loaded.
     *
     * For example, a Loader that requires the network to be available should return false
     * if the network is not available.
     * @return True if this loader is available, false otherwise.
     */
    virtual bool isAvailable() const;
protected:
    ApiClient *m_apiClient;
};

template <typename R, typename P>
class HttpLoader : public Loader<R, P> {
public:
    R load(const P &parameters) const override {
        QNetworkReply *reply = m_apiClient->get(url(parameters), query(parameters));
        QByteArray array;
        while (!reply->atEnd()) {
            if (!reply->waitForReadyRead(HTTP_TIMEOUT)) {
                if (reply->error() == QNetworkReply::NoError) {
                    reply->deleteLater();
                    throw LoadException("HTTP timeout");
                }
                reply->deleteLater();
                throw LoadException("HTTP error");
            }
            array.append(reply->readAll());
        }
        reply->deleteLater();
        QJsonParseError error;
        QJsonDocument document = QJsonDocument::fromJson(array, &error);
        if (error.error != QJsonParseError::NoError) {
            throw LoadException(error.errorString().toLocal8Bit().constData());
        }
        return parse(document);
    }
protected:
    virtual const QString url(const P &parameters) const;
    virtual const QUrlQuery query(const P &parameters) const;
    virtual R parse(const QJsonObject &object) const;
};

} // NS Support
} // NS Jellyfin

#endif // JELLYFIN_SUPPORT_LOADER_H
