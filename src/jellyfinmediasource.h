/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2020 Chris Josten

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

#ifndef JELLYFIN_MEDIA_SOURCE_H
#define JELLYFIN_MEDIA_SOURCE_H

#include <QJsonArray>
#include <QJsonObject>
#include <QObject>

#include <QUrlQuery>

#include <QtMultimedia/QMediaPlayer>


#include "jellyfinapiclient.h"

namespace Jellyfin {

class MediaSource : public QObject {
    Q_OBJECT
public:
    explicit MediaSource(QObject *parent = nullptr);
    Q_PROPERTY(ApiClient *apiClient MEMBER m_apiClient)
    Q_PROPERTY(QString itemId READ itemId WRITE setItemId NOTIFY itemIdChanged)
    Q_PROPERTY(QString streamUrl READ streamUrl NOTIFY streamUrlChanged)
    Q_PROPERTY(bool autoOpen MEMBER m_autoOpen NOTIFY autoOpenChanged)
    Q_PROPERTY(int audioIndex MEMBER m_audioIndex NOTIFY audioIndexChanged)
    Q_PROPERTY(int subtitleIndex MEMBER m_subtitleIndex NOTIFY subtitleIndexChanged)

    QString itemId() const { return m_itemId; }
    void setItemId(const QString &newItemId);

    QString streamUrl() const { return m_streamUrl; }
signals:
    void itemIdChanged(const QString &newItemId);
    void streamUrlChanged(const QString &newStreamUrl);
    void autoOpenChanged(bool autoOpen);
    void audioIndexChanged(int audioIndex);
    void subtitleIndexChanged(int subtitleIndex);

public slots:
    void play();
    void pause();
    void stop();

private:
    ApiClient *m_apiClient = nullptr;
    QString m_itemId;
    QString m_streamUrl;
    QString m_playSessionId;
    int m_audioIndex = 0;
    int m_subtitleIndex = -1;

    /**
     * @brief Whether to automatically open the livestream of the item;
     */
    bool m_autoOpen = false;

    void fetchStreamUrl();
    void setStreamUrl(const QString &streamUrl);
};

}

#endif // JELLYFIN_MEDIA_SOURCE_H
