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

    /*explicit LoadException(const LoadException &other)
          : m_message(other.m_message) {}*/

    virtual const char *what() const noexcept override;

    virtual QException *clone() const override;
    virtual void raise() const override;
private:
    std::string m_message;
};

static const int HTTP_TIMEOUT = 30000; // 30 seconds;

/**
 * Interface describing a way to load items. Used to abstract away
 * the difference between loading from a cache or loading over the network.
 *
 * To implement this class, implement prepareLoad() and load(). These are always called
 * in the same order, but prepareLoad() must always be called on the same thread as the
 * m_apiClient, while load() may be called on another thread.
 *
 * @note: Loaders should NEVER call load() again while load() is running on another
 * thread or change the apiClient while running. This will result in undefined behaviour.
 * Please use a Mutex to enforce this.
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
     * @brief Called just before load() is called. In constrast to load,
     * this runs on the same thread as the ApiClient object.
     */
    virtual void prepareLoad() {};

    /**
     * @brief load Loads the given resource. This usually run on a different thread.
     * @return The resource if successfull.
     */
    virtual std::optional<R> load() {
        throw LoadException(QStringLiteral("Loader not set"));
    }
    /**
     * @brief Heuristic to determine if this resource can be loaded via this loaded.
     *
     * For example, a Loader that requires the network to be available should return false
     * if the network is not available.
     * @return True if this loader is available, false otherwise.
     */
    virtual bool isAvailable() const { return false; };
    void setApiClient(ApiClient *newApiClient) { m_apiClient = newApiClient; }
    ApiClient *apiClient() const { return m_apiClient; }
    void setParameters(const P &parameters) { m_parameters = parameters; }
protected:
    Jellyfin::ApiClient *m_apiClient;
    P m_parameters;
};

/**
 * Implementation of Loader that loads Items over HTTP
 */
template <typename R, typename P>
class HttpLoader : public Loader<R, P> {
public:
    explicit HttpLoader(Jellyfin::ApiClient *apiClient)
        : Loader<R, P> (apiClient) {}

    virtual void prepareLoad() override {
        m_reply = this->m_apiClient->get(path(this->m_parameters), query(this->m_parameters));
        m_requestFinishedConnection = QObject::connect(m_reply, &QNetworkReply::finished, [&]() { this->requestFinished(); });
    }

    virtual std::optional<R> load() override {
        Q_ASSERT_X(m_reply != nullptr, "HttpLoader::load", "prepareLoad() must be called before load()");
        QMutexLocker locker(&m_mutex);
        while (!m_reply->isFinished()) {
            m_waitCondition.wait(&m_mutex);
        }
        QByteArray array = m_reply->readAll();
        if (m_reply->error() != QNetworkReply::NoError) {
            m_reply->deleteLater();
            //: An HTTP has occurred. First argument is replaced by QNetworkReply->errorString()
            throw LoadException(QObject::tr("HTTP error: %1").arg(m_reply->errorString()));
        }
        m_reply->deleteLater();
        m_reply = nullptr;
        QJsonParseError error;
        QJsonDocument document = QJsonDocument::fromJson(array, &error);
        if (error.error != QJsonParseError::NoError) {
            qWarning() << array;
            throw LoadException(error.errorString().toLocal8Bit().constData());
        }
        if (document.isNull() || document.isEmpty()) {
            return std::nullopt;
        } else if (document.isArray()) {
            return std::optional<R>(fromJsonValue<R>(document.array()));
        } else if (document.isObject()){
            return std::optional<R>(fromJsonValue<R>(document.object()));
        } else {
            return std::nullopt;
        }
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
private:
    QNetworkReply *m_reply = nullptr;
    QWaitCondition m_waitCondition;
    QMutex m_mutex;
    QMetaObject::Connection m_requestFinishedConnection;

    void requestFinished() {
        QObject::disconnect(m_requestFinishedConnection);
        m_waitCondition.wakeAll();
    }
};

} // NS Support
} // NS Jellyfin

#endif // JELLYFIN_SUPPORT_LOADER_H
