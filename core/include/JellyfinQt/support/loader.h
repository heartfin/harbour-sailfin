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
#include <QObject>
#include <QUrlQuery>
#include <QString>

#include <QtConcurrent/QtConcurrent>

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
 * @brief Base class for loaders that defines available signals.
 */
class LoaderBase : public QObject {
    Q_OBJECT
signals:
    /**
     * @brief Emitted when an error has occurred during loading and no result
     * is available.
     */
    void error(QString message = QString());
    /**
     * @brief Emitted when data was successfully loaded.
     */
    void ready();
};

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
class Loader : public LoaderBase {
public:
    explicit Loader(ApiClient *apiClient)
        : m_apiClient(apiClient) {}

    /**
     * @brief load Loads the given resource asynchronously.
     */
    virtual void load() {
        throw LoadException(QStringLiteral("Loader not set"));
    }

    /**
     * @brief Retrieves the loaded resource. Only valid after the ready signal has been emitted.
     * @return The loaded resource
     */
    R result() const {
        return m_result;
    }

    /**
     * @returns whether this loader is already fetching a resource
     */
    virtual void cancel() {}

    bool isRunning() const {
        return m_isRunning;
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
    R m_result;
    bool m_isRunning = false;

    void stopWithError(QString message = QString()) {
        m_isRunning = false;
        emit this->error(message);
    }
};

/**
 * Implementation of Loader that loads Items over HTTP
 */
template <typename R, typename P>
class HttpLoader : public Loader<R, P> {
public:
    explicit HttpLoader(Jellyfin::ApiClient *apiClient)
        : Loader<R, P> (apiClient) {
        this->connect(&m_parsedWatcher, &QFutureWatcher<std::optional<R>>::finished, this, &HttpLoader<R, P>::onResponseParsed);
    }

    virtual void load() override {
        if (m_reply != nullptr) {
            this->m_reply->deleteLater();
        }
        this->m_isRunning = true;
        m_reply = this->m_apiClient->get(path(this->m_parameters), query(this->m_parameters));
        this->connect(m_reply, &QNetworkReply::finished, this, &HttpLoader<R, P>::onRequestFinished);
    }

    virtual void cancel() override {
        if (m_reply == nullptr) return;
        if (m_reply->isRunning()) {
            m_reply->abort();
            m_reply->deleteLater();
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
    QFutureWatcher<std::optional<R>> m_parsedWatcher;

    void onRequestFinished() {
        if (m_reply->error() != QNetworkReply::NoError) {
            m_reply->deleteLater();
            //: An HTTP has occurred. First argument is replaced by QNetworkReply->errorString()
            this->stopWithError(QStringLiteral("HTTP error: %1").arg(m_reply->errorString()));
        }
        QByteArray array = m_reply->readAll();
        m_reply->deleteLater();
        m_reply = nullptr;
        m_parsedWatcher.setFuture(QtConcurrent::run(this, &HttpLoader<R, P>::parseResponse, array));
    }

    std::optional<R> parseResponse(QByteArray response) {
        QJsonParseError error;
        QJsonDocument document = QJsonDocument::fromJson(response, &error);
        if (error.error != QJsonParseError::NoError) {
            qWarning() << response;
            this->stopWithError(error.errorString().toLocal8Bit().constData());
        }
        if (document.isNull() || document.isEmpty()) {
            this->stopWithError(QStringLiteral("Unexpected empty JSON response"));
            return std::nullopt;
        } else if (document.isArray()) {
            return std::make_optional<R>(fromJsonValue<R>(document.array()));
        } else if (document.isObject()){
            return std::make_optional<R>(fromJsonValue<R>(document.object()));
        } else {
            this->stopWithError(QStringLiteral("Unexpected JSON response"));
            return std::nullopt;
        }
    }

    void onResponseParsed() {
        if (m_parsedWatcher.result().has_value()) {
            R result = m_parsedWatcher.result().value();
            this->m_result = result;
            this->m_isRunning = false;
            emit this->ready();
        } else {
            this->m_isRunning = false;
        }
    }
};

} // NS Support
} // NS Jellyfin

#endif // JELLYFIN_SUPPORT_LOADER_H
