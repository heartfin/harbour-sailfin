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
#include <QVariant>

#include <QUrlQuery>

#include <QtMultimedia/QMediaPlayer>


#include "jellyfinapiclient.h"

namespace Jellyfin {

class PlaybackManager : public QObject {
    Q_OBJECT
public:
    enum PlayMethod {
        Transcode,
        Stream,
        DirectPlay
    };
    Q_ENUM(PlayMethod)

    explicit PlaybackManager(QObject *parent = nullptr);
    Q_PROPERTY(ApiClient *apiClient MEMBER m_apiClient)
    Q_PROPERTY(QString itemId READ itemId WRITE setItemId NOTIFY itemIdChanged)
    Q_PROPERTY(QString streamUrl READ streamUrl NOTIFY streamUrlChanged)
    Q_PROPERTY(bool autoOpen MEMBER m_autoOpen NOTIFY autoOpenChanged)
    Q_PROPERTY(int audioIndex MEMBER m_audioIndex NOTIFY audioIndexChanged)
    Q_PROPERTY(int subtitleIndex MEMBER m_subtitleIndex NOTIFY subtitleIndexChanged)
    Q_PROPERTY(qint64 position MEMBER m_position WRITE setPosition NOTIFY positionChanged)
    Q_PROPERTY(QMediaPlayer::State state READ state WRITE setState NOTIFY stateChanged)

    QString itemId() const { return m_itemId; }
    void setItemId(const QString &newItemId);

    QMediaPlayer::State state() const { return m_state; }
    void setState(QMediaPlayer::State newState);

    void setPosition(qint64 position);

    QString streamUrl() const { return m_streamUrl; }
signals:
    void itemIdChanged(const QString &newItemId);
    void streamUrlChanged(const QString &newStreamUrl);
    void autoOpenChanged(bool autoOpen);
    void audioIndexChanged(int audioIndex);
    void subtitleIndexChanged(int subtitleIndex);
    void positionChanged(qint64 position);
    void stateChanged(QMediaPlayer::State state);

public slots:
    void updatePlaybackInfo();

private:
    QTimer m_updateTimer;
    ApiClient *m_apiClient = nullptr;
    QString m_itemId;
    QString m_streamUrl;
    QString m_playSessionId;
    int m_audioIndex = 0;
    int m_subtitleIndex = -1;
    qint64 m_position = 0;
    qint64 m_stopPosition = 0;
    PlayMethod m_playMethod;
    QMediaPlayer::State m_state = QMediaPlayer::StoppedState;

    /**
     * @brief Whether to automatically open the livestream of the item;
     */
    bool m_autoOpen = false;

    void fetchStreamUrl();
    void setStreamUrl(const QString &streamUrl);

    // Factor to multiply with when converting from milliseconds to ticks.
    const int MS_TICK_FACTOR = 10000;

    enum PlaybackInfoType { Started, Stopped, Progress };

    /**
     * @brief Posts the playback information
     */
    void postPlaybackInfo(PlaybackInfoType type);
};

}

#endif // JELLYFIN_MEDIA_SOURCE_H
