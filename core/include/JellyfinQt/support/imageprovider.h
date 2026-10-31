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
#ifndef JELLYFIN_SUPPORT_IMAGEPROVIDER_H
#define JELLYFIN_SUPPORT_IMAGEPROVIDER_H

#include <QImage>
#include <QPointer>
#include <QQuickImageProvider>
#include <QSize>
#include <QString>

class QNetworkReply;

namespace Jellyfin {

class ApiClient;

namespace Support {

/**
 * @brief Image provider that loads images from the Jellyfin server using the
 * Authorization header of an ApiClient.
 *
 * QML's Image element cannot set HTTP headers, so URLs with authentication had to
 * carry the token as a query parameter. Newer Jellyfin servers reject that unless
 * "legacy authorization" is enabled. This provider performs the request in C++
 * with the proper header instead.
 *
 * Usage from QML: `image://jellyfin/<path relative to the server base url>`, for example
 * `image://jellyfin/Items/<itemId>/Download`. ApiClient::imageProviderUrl() builds these.
 */
class ApiImageProvider : public QQuickAsyncImageProvider {
public:
    static const char *PROVIDER_ID;

    explicit ApiImageProvider(ApiClient *apiClient);
    QQuickImageResponse *requestImageResponse(const QString &id, const QSize &requestedSize) override;

private:
    QPointer<ApiClient> m_apiClient;
};

class ApiImageResponse : public QQuickImageResponse {
    Q_OBJECT
public:
    ApiImageResponse(ApiClient *apiClient, const QString &path, const QSize &requestedSize);

    QQuickTextureFactory *textureFactory() const override;
    QString errorString() const override;
    void cancel() override;

private slots:
    // Must run in the thread of the ApiClient
    void start();
    void abort();
    void onFinished();

private:
    void finishWithError(const QString &error);

    QPointer<ApiClient> m_apiClient;
    QString m_path;
    QSize m_requestedSize;
    QPointer<QNetworkReply> m_reply;
    QImage m_image;
    QString m_errorString;
    bool m_cancelled = false;
};

} // NS Support
} // NS Jellyfin

#endif // JELLYFIN_SUPPORT_IMAGEPROVIDER_H
