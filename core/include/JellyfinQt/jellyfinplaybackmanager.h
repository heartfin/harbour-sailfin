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
#include <QtGlobal>
#include <QVariant>

#include <QUrlQuery>

#include <QtMultimedia/QMediaPlayer>


#include "jellyfinapiclient.h"
#include "jellyfinitem.h"

namespace Jellyfin {

// Forward declaration of Jellyfin::Item found in jellyfinitem.h
class Item;
// Forward declaration of Jellyfin::ApiClient found in jellyfinapiclient.h
class ApiClient;

/**
 * @brief The PlaybackManager class manages the playback of Jellyfin items. It fetches streams based on Jellyfin items, posts
 * the current playback state to the Jellyfin Server and so on.
 */
class PlaybackManager : public QObject, public QQmlParserStatus {
    Q_OBJECT
    Q_INTERFACES(QQmlParserStatus)
public:
    enum PlayMethod {
        Transcode,
        Stream,
        DirectPlay
    };
    Q_ENUM(PlayMethod)

    explicit PlaybackManager(QObject *parent = nullptr);
    Q_PROPERTY(ApiClient *apiClient MEMBER m_apiClient)
    Q_PROPERTY(Item *item READ item WRITE setItem NOTIFY itemChanged)
    Q_PROPERTY(QString streamUrl READ streamUrl NOTIFY streamUrlChanged)
    Q_PROPERTY(bool autoOpen MEMBER m_autoOpen NOTIFY autoOpenChanged)
    Q_PROPERTY(int audioIndex MEMBER m_audioIndex NOTIFY audioIndexChanged)
    Q_PROPERTY(int subtitleIndex MEMBER m_subtitleIndex NOTIFY subtitleIndexChanged)
    Q_PROPERTY(bool resumePlayback MEMBER m_resumePlayback NOTIFY resumePlaybackChanged)
    Q_PROPERTY(QObject* mediaPlayer READ mediaPlayer WRITE setMediaPlayer NOTIFY mediaPlayerChanged)
    Q_PROPERTY(PlayMethod playMethod READ playMethod NOTIFY playMethodChanged)

    Item *item() const { return m_item; }
    void setItem(Item *newItem);

    QObject *mediaPlayer() const {
        return m_qmlMediaPlayer;
    }
    void setMediaPlayer(QObject *qmlMediaPlayer);

    QString streamUrl() const { return m_streamUrl; }
    PlayMethod playMethod() const { return m_playMethod; }
signals:
    void itemChanged(Item *newItemId);
    void streamUrlChanged(const QString &newStreamUrl);
    void autoOpenChanged(bool autoOpen);
    void audioIndexChanged(int audioIndex);
    void subtitleIndexChanged(int subtitleIndex);
    void mediaPlayerChanged(QObject *newMediaPlayer);
    void resumePlaybackChanged(bool newResumePlayback);
    void playMethodChanged(PlayMethod newPlayMethod);

public slots:
    void updatePlaybackInfo();
    /**
     * @brief playItem Plays the item with the given id. This will construct the Jellyfin::Item internally
     * and delete it later.
     * @param itemId The id of the item to play.
     */
    void playItem(const QString &itemId);
private slots:
    void mediaPlayerStateChanged(QMediaPlayer::State newState);
    void mediaPlayerPositionChanged(qint64 position);
    void mediaPlayerMediaStatusChanged(QMediaPlayer::MediaStatus newStatus);

private:
    QTimer m_updateTimer;
    ApiClient *m_apiClient = nullptr;
    Item *m_item = nullptr;
    QString m_streamUrl;
    QString m_playSessionId;
    int m_audioIndex = 0;
    int m_subtitleIndex = -1;
    qint64 m_resumePosition = 0;
    qint64 m_oldPosition = 0;
    qint64 m_stopPosition = 0;
    QMediaPlayer::State m_oldState = QMediaPlayer::StoppedState;
    PlayMethod m_playMethod = Transcode;
    QObject *m_qmlMediaPlayer = nullptr;
    QMediaPlayer * m_mediaPlayer = nullptr;
    bool m_resumePlayback = true;

    bool m_qmlIsParsingComponent = false;

    /**
     * @brief Whether to automatically open the livestream of the item;
     */
    bool m_autoOpen = false;

    /**
     * @brief Retrieves the URL of the stream to open.
     */
    void fetchStreamUrl();
    void setStreamUrl(const QString &streamUrl);

    // Factor to multiply with when converting from milliseconds to ticks.
    const static int MS_TICK_FACTOR = 10000;

    enum PlaybackInfoType { Started, Stopped, Progress };

    /**
     * @brief Posts the playback information
     */
    void postPlaybackInfo(PlaybackInfoType type);

    void classBegin() override {
        m_qmlIsParsingComponent = true;
    }
    void componentComplete() override;
};

}

#endif // JELLYFIN_MEDIA_SOURCE_H
