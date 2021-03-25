/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2021 Chris Josten and the Sailfin Contributors.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
#ifndef JELLYFIN_SUPPORT_LOADER_H
#define JELLYFIN_SUPPORT_LOADER_H

#include <initializer_list>
#include <optional>
#include <string>
#include <variant>

#include <QException>
#include <QJsonDocument>
#include <QUrlQuery>
#include <QString>

#include "../apiclient.h"
#include "jsonconv.h"

namespace Jellyfin {
namespace Support {


class LoadException : public QException {
public:
    explicit LoadException(const QString &message)
          : m_message(message.toStdString()) {}
    virtual const char *what() const noexcept override;
private:
    std::string m_message;
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
public:
    explicit Loader(ApiClient *apiClient)
        : m_apiClient(apiClient) {}
    /**
     * @brief load Loads the given resource.
     * @param parameters Parameters to determine which resource should be loaded.
     * @return The resource if successfull.
     */
    virtual std::optional<R> load(const P &parameters) const {
        Q_UNUSED(parameters)
        throw new LoadException(QStringLiteral("Loader not set"));
    }
    /**
     * @brief Heuristic to determine if this resource can be loaded via this loaded.
     *
     * For example, a Loader that requires the network to be available should return false
     * if the network is not available.
     * @return True if this loader is available, false otherwise.
     */
    virtual bool isAvailable() const { return false; };
protected:
    Jellyfin::ApiClient *m_apiClient;
};

/**
 * Implementation of a Loader that tries multiple loaders.
 */
template <typename R, typename P>
class MultipleChoiceLoader : public Loader<R, P> {
    using L = Loader<R, P>;
public:
    explicit MultipleChoiceLoader(ApiClient *apiClient,
                                  std::initializer_list<L> loaders)
        : L(apiClient), m_loaders(loaders) {}

    virtual std::optional<R> load(const P &parameters) const override {
        for(auto it = m_loaders.begin(); it != m_loaders.end(); it++) {
            if (it->isAvailable()) {
                try {
                    std::optional<R> res = it->load(parameters);
                    if (res.has_value()) return res;
                }  catch (LoadException e) {
                    qDebug() << "Error while loading: " << e.what();
                }
            }
        }
        qDebug() << "No loaders were able to fulfill the request";
        return std::nullopt;
    }

private:
    QList<L> m_loaders;
};

/**
 * Implementation of Loader that loads Items over HTTP
 */
template <typename R, typename P>
class HttpLoader : public Loader<R, P> {
public:
    explicit HttpLoader(Jellyfin::ApiClient *apiClient)
        : Loader<R, P> (apiClient) {}

    virtual std::optional<R> load(const P &parameters) const override {
        QNetworkReply *reply = this->m_apiClient->get(path(parameters), query(parameters));
        QByteArray array;
        while (!reply->atEnd()) {
            if (!reply->waitForReadyRead(HTTP_TIMEOUT)) {
                if (reply->error() == QNetworkReply::NoError) {
                    reply->deleteLater();
                    //: Loading from a resource failed due to the server taking too long to respond
                    throw LoadException(QObject::tr("Network timeout"));
                }
                reply->deleteLater();
                //: An HTTP has occurred. First argument is replaced by QNetworkReply->errorString()
                throw LoadException(QObject::tr("HTTP error: %1").arg(reply->errorString()));
            }
            array.append(reply->readAll());
        }
        reply->deleteLater();
        QJsonParseError error;
        QJsonDocument document = QJsonDocument::fromJson(array, &error);
        if (error.error != QJsonParseError::NoError) {
            throw LoadException(error.errorString().toLocal8Bit().constData());
        }
        return fromJsonValue<R>(QJsonValue(document.object()));
    }

    bool isAvailable() const override {
        if (this->m_apiClient == nullptr) {
            return false;
        }
        return this->m_apiClient->online();
    }
protected:
    /**
     * @brief Subclasses should override this method to return the path to this endpoint,
     *        with all path parameters inserted.
     * @param parameters The parameters for this request.
     * @return The path for this endpoint
     */
    virtual QString path(const P &parameters) const = 0;
    virtual QUrlQuery query(const P &parameters) const = 0;
};

} // NS Support
} // NS Jellyfin

#endif // JELLYFIN_SUPPORT_LOADER_H
