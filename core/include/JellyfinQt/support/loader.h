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
protected:
    explicit LoaderBase(ApiClient *apiClient)
        : m_apiClient(apiClient) {}

public:
    /**
     * @brief load Loads the given resource asynchronously.
     */
    virtual void load() {
        throw LoadException(QStringLiteral("Loader not set"));
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
protected:
    Jellyfin::ApiClient *m_apiClient;
    bool m_isRunning = false;

    void stopWithError(QString message = QString()) {
        m_isRunning = false;
        emit this->error(message);
    }
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
    using ResultType = std::optional<R>;
    explicit Loader(ApiClient *apiClient)
        : LoaderBase(apiClient) {}

    /**
     * @brief Retrieves the loaded resource. Only valid after the ready signal has been emitted.
     *
     * @return The loaded resource.
     */
    R result() const {
        return m_result.value();
    }

    bool hasResult() const {
        return m_result;
    }
    /**
     * @brief Sets the parameters for this loader.
     * @param parameters The parameters to set
     *
     * This method will copy the parameters. The parameters must have a
     * copy constructor.
     */
    void setParameters(const P &parameters) {
        m_parameters = parameters;
    }

protected:
    std::optional<P> m_parameters;
    ResultType m_result;

    ResultType createFailureResult() {
        return std::nullopt;
    }

    ResultType createSuccessResult(R &&result) {
        return std::make_optional<R>(result);
    }

    static R createDummyResponse() {
        return fromJsonValue<R>(QJsonValue());
    }

};

template <typename P>
class Loader<void, P> : public LoaderBase {
public:
    using ResultType = bool;
    explicit Loader(ApiClient *apiClient)
        : LoaderBase(apiClient) {}

    void result() const { }

    bool hasResult() const {
        return m_result;
    }
    /**
     * @brief Sets the parameters for this loader.
     * @param parameters The parameters to set
     *
     * This method will copy the parameters. The parameters must have a
     * copy constructor.
     */
    void setParameters(const P &parameters) {
        m_parameters = parameters;
    }

protected:
    std::optional<P> m_parameters;
    ResultType m_result;

    ResultType createFailureResult() {
        return false;
    }

    ResultType createSuccessResult(void) {
        return true;
    }

    static void createDummyResponse() { }
};

template<typename R, typename P>
class HttpLoaderBase : public Loader<R, P> {
public:
    explicit HttpLoaderBase(Jellyfin::ApiClient *apiClient)
        : Loader<R, P> (apiClient) {}

    typename Loader<R, P>::ResultType parseResponse(int /*statusCode*/, QByteArray response) {
        QJsonParseError error;
        QJsonDocument document = QJsonDocument::fromJson(response, &error);
        if (error.error != QJsonParseError::NoError) {
            qWarning() << response;
            this->stopWithError(error.errorString().toLocal8Bit().constData());
        }
        if (document.isNull() || document.isEmpty()) {
            this->stopWithError(QStringLiteral("Unexpected empty JSON response"));
            return this->createFailureResult();
        } else if (document.isArray()) {
            return this->createSuccessResult(fromJsonValue<R>(document.array()));
        } else if (document.isObject()){
            return this->createSuccessResult(fromJsonValue<R>(document.object()));
        } else {
            this->stopWithError(QStringLiteral("Unexpected JSON response"));
            return this->createFailureResult();
        }
    }

};

// Specialisation for void result
template<typename P>
class HttpLoaderBase<void, P> : public Loader<void, P> {
public:
    explicit HttpLoaderBase(Jellyfin::ApiClient *apiClient)
        : Loader<void, P> (apiClient) {}

    typename Loader<void, P>::ResultType parseResponse(int statusCode, QByteArray response) {
        return statusCode == 204;
    }
};

// Specialisation for endpoints that return "true" or "false" as response.
template<typename P>
class HttpLoaderBase<bool, P> : public Loader<bool, P> {
public:
    explicit HttpLoaderBase(Jellyfin::ApiClient *apiClient)
        : Loader<bool, P> (apiClient) {}

    typename Loader<bool, P>::ResultType parseResponse(int statusCode, QByteArray response) {
        QString text = QString::fromUtf8(response);

        if (text == QStringLiteral("true")) {
            return true;
        } else if (text == QStringLiteral("false")) {
            return false;
        } else {
            this->stopWithError(QStringLiteral("Could not parse boolean response: %1").arg(text));
            return std::nullopt;
        }
    }
};


/**
 * Implementation of Loader that loads Items over HTTP
 */
template <typename R, typename P>
class HttpLoader : public HttpLoaderBase<R, P> {
public:
    explicit HttpLoader(Jellyfin::ApiClient *apiClient)
        : HttpLoaderBase<R, P> (apiClient) {
        this->connect(&m_parsedWatcher, &QFutureWatcher<std::optional<R>>::finished, this, &HttpLoader<R, P>::onResponseParsed);
    }

    virtual void load() override {
        if (m_reply != nullptr) {
            this->m_reply->deleteLater();
        }
        if (!this->m_parameters) {
            this->stopWithError("No parameters set");
        }
        this->m_isRunning = true;
        switch(operation()) {
        case QNetworkAccessManager::GetOperation:
            m_reply = this->m_apiClient->get(path(this->m_parameters.value()), query(this->m_parameters.value()));
            break;
        case QNetworkAccessManager::PostOperation:
            m_reply = this->m_apiClient->post(path(this->m_parameters.value()), body(this->m_parameters.value()), query(this->m_parameters.value()));
            break;
        default:
            this->stopWithError(QStringLiteral("Unsupported network okperation %1").arg(operation()));
            return;

        }

        this->connect(m_reply, &QNetworkReply::finished, this, &HttpLoader<R, P>::onRequestFinished);
    }

    virtual void cancel() override {
        if (m_reply == nullptr) return;
        if (m_reply->isRunning()) {
            m_reply->abort();
            m_reply->deleteLater();
            m_reply = nullptr;
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
    virtual QByteArray body(const P &parameters) const = 0;
    virtual QNetworkAccessManager::Operation operation() const = 0;
private:
    QNetworkReply *m_reply = nullptr;
    QFutureWatcher<typename Loader<R, P>::ResultType> m_parsedWatcher;

    void onRequestFinished() {
        if (m_reply->error() != QNetworkReply::NoError) {
            m_reply->deleteLater();
            m_parsedWatcher.cancel();
            //: An HTTP has occurred. First argument is replaced by QNetworkReply->errorString()
            this->stopWithError(QStringLiteral("HTTP error: %1").arg(m_reply->errorString()));
            return;
        }
        QByteArray array = m_reply->readAll();
        int statusCode = m_reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        m_reply->deleteLater();
        m_reply = nullptr;
        m_parsedWatcher.setFuture(
                    QtConcurrent::run<typename HttpLoader<R, P>::ResultType, // Result
                                      HttpLoader<R, P>,                      // class
                                      int, int,                              // Argument 1
                                      QByteArray, QByteArray>                // Argument 2
                                        (this, &HttpLoader<R, P>::parseResponse, statusCode, array)
                    );
    }

    void onResponseParsed() {
        Q_ASSERT(m_parsedWatcher.isFinished());
        try {
            /* In case the result is an optional, it invokes the bool cast of std::optional, checking
               if it has a value.
               In case the result is a boolean, it just checks the boolean */
            if (m_parsedWatcher.result()) {
                this->m_result = m_parsedWatcher.result();
                this->m_isRunning = false;
                emit this->ready();
            } else {
                this->m_isRunning = false;
            }
        }  catch (QException &e) {
            this->stopWithError(e.what());
        }
    }
};

} // NS Support
} // NS Jellyfin

#endif // JELLYFIN_SUPPORT_LOADER_H
