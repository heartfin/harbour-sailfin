/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2026 Chris Josten and the Sailfin contributors
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
#include "JellyfinQt/support/imageprovider.h"

#include <QDebug>
#include <QImageReader>
#include <QMetaObject>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrlQuery>

#include "JellyfinQt/apiclient.h"

namespace Jellyfin {
namespace Support {

const char *ApiImageProvider::PROVIDER_ID = "jellyfin";

ApiImageProvider::ApiImageProvider(ApiClient *apiClient)
    : QQuickAsyncImageProvider(),
      m_apiClient(apiClient) {}

QQuickImageResponse *ApiImageProvider::requestImageResponse(const QString &id, const QSize &requestedSize) {
    // This may be called from a non-GUI thread. The response moves itself to the
    // thread of the ApiClient before doing any network access.
    return new ApiImageResponse(m_apiClient.data(), id, requestedSize);
}

ApiImageResponse::ApiImageResponse(ApiClient *apiClient, const QString &path, const QSize &requestedSize)
    : QQuickImageResponse(),
      m_apiClient(apiClient),
      m_path(path),
      m_requestedSize(requestedSize) {
    if (apiClient == nullptr) {
        // No thread hop needed; still emit asynchronously so the engine has connected to finished().
        QMetaObject::invokeMethod(this, "onFinished", Qt::QueuedConnection);
        return;
    }
    moveToThread(apiClient->thread());
    QMetaObject::invokeMethod(this, "start", Qt::QueuedConnection);
}

QQuickTextureFactory *ApiImageResponse::textureFactory() const {
    return QQuickTextureFactory::textureFactoryForImage(m_image);
}

QString ApiImageResponse::errorString() const {
    return m_errorString;
}

void ApiImageResponse::cancel() {
    // May be called from another thread: hop to our own thread.
    QMetaObject::invokeMethod(this, "abort", Qt::QueuedConnection);
}

void ApiImageResponse::abort() {
    m_cancelled = true;
    if (m_reply) {
        // Triggers QNetworkReply::finished, which emits our finished()
        m_reply->abort();
    }
}

void ApiImageResponse::start() {
    if (m_cancelled) {
        finishWithError(QStringLiteral("Cancelled"));
        return;
    }
    if (m_apiClient.isNull()) {
        finishWithError(QStringLiteral("No ApiClient available"));
        return;
    }

    QString path = m_path;
    QUrlQuery query;
    int queryStart = path.indexOf('?');
    if (queryStart >= 0) {
        query = QUrlQuery(path.mid(queryStart + 1));
        path = path.left(queryStart);
    }
    if (!path.startsWith('/')) {
        path.prepend('/');
    }

    QNetworkRequest request;
    m_apiClient->addBaseRequestHeaders(request, path, query);
    request.setRawHeader("Accept", "image/*,*/*;q=0.8");
#if QT_VERSION >= QT_VERSION_CHECK(5, 9, 0)
    request.setAttribute(QNetworkRequest::RedirectPolicyAttribute, QNetworkRequest::NoLessSafeRedirectPolicy);
#else
    request.setAttribute(QNetworkRequest::FollowRedirectsAttribute, true);
#endif
    qDebug() << "GET (image)" << request.url();
    m_reply = m_apiClient->m_naManager.get(request);
    connect(m_reply.data(), &QNetworkReply::finished, this, &ApiImageResponse::onFinished);
}

void ApiImageResponse::onFinished() {
    if (m_reply.isNull()) {
        finishWithError(m_apiClient.isNull() ? QStringLiteral("No ApiClient available")
                                             : QStringLiteral("Request was not started"));
        return;
    }

    QNetworkReply *reply = m_reply.data();
    reply->deleteLater();

    if (m_cancelled) {
        finishWithError(QStringLiteral("Cancelled"));
        return;
    }

    if (reply->error() != QNetworkReply::NoError) {
        int status = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        qWarning() << "Image request failed:" << reply->url() << status << reply->errorString();
        finishWithError(reply->errorString());
        return;
    }

    QImageReader imageReader(reply);
    imageReader.setAutoTransform(true);
    if (m_requestedSize.isValid() && imageReader.size().isValid()) {
        QSize scaled = imageReader.size();
        QSize target = m_requestedSize;
        // A dimension of 0 or less means "unconstrained" in the sourceSize property
        if (target.width() <= 0) target.setWidth(scaled.width());
        if (target.height() <= 0) target.setHeight(scaled.height());
        if (scaled.width() > target.width() || scaled.height() > target.height()) {
            scaled.scale(target, Qt::KeepAspectRatio);
            imageReader.setScaledSize(scaled);
        }
    }

    if (!imageReader.read(&m_image)) {
        qWarning() << "Could not decode image from" << reply->url() << imageReader.errorString();
        finishWithError(imageReader.errorString());
        return;
    }

    emit finished();
}

void ApiImageResponse::finishWithError(const QString &error) {
    m_errorString = error;
    m_image = QImage();
    emit finished();
}

} // NS Support
} // NS Jellyfin
