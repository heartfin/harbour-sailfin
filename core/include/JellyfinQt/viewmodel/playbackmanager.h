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
#ifndef JELLYFIN_VIEWMODEL_PLAYBACKMANAGER_H
#define JELLYFIN_VIEWMODEL_PLAYBACKMANAGER_H

#include <QAbstractItemModel>
#include <QJsonArray>
#include <QJsonObject>
#include <QFuture>
#include <QObject>
#include <QtGlobal>
#include <QUrlQuery>
#include <QVariant>

#include <QtMultimedia/QMediaPlayer>
#include <QtMultimedia/QMediaPlaylist>

#include <functional>

#include "../dto/baseitemdto.h"
#include "../support/jsonconv.h"
#include "../viewmodel/item.h"

#include "../apiclient.h"


namespace Jellyfin {

// Forward declaration of Jellyfin::ApiClient found in jellyfinapiclient.h
class ApiClient;
class ItemModel;
class RemoteItem;

namespace ViewModel {

/**
 * @brief The PlaybackManager class manages the playback of Jellyfin items. It fetches streams based on Jellyfin items, posts
 * the current playback state to the Jellyfin Server, contains the actual media player and so on.
 *
 * The PlaybackManager actually keeps two mediaPlayers, m_mediaPlayer1 and m_mediaPlayer2. When one is playing, the other is
 * preloading the next item in the queue. The current media player is pointed to by m_mediaPlayer.
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
    using FetchCallback = std::function<void(QUrl &&, PlayMethod)>;

    explicit PlaybackManager(QObject *parent = nullptr);

    Q_PROPERTY(ApiClient *apiClient MEMBER m_apiClient WRITE setApiClient)
    Q_PROPERTY(QString streamUrl READ streamUrl NOTIFY streamUrlChanged)
    Q_PROPERTY(bool autoOpen MEMBER m_autoOpen NOTIFY autoOpenChanged)
    Q_PROPERTY(int audioIndex MEMBER m_audioIndex NOTIFY audioIndexChanged)
    Q_PROPERTY(int subtitleIndex MEMBER m_subtitleIndex NOTIFY subtitleIndexChanged)
    Q_PROPERTY(bool resumePlayback MEMBER m_resumePlayback NOTIFY resumePlaybackChanged)
    Q_PROPERTY(PlayMethod playMethod READ playMethod NOTIFY playMethodChanged)

    // Current Item and queue informatoion
    Q_PROPERTY(Model::Item *item READ item NOTIFY itemChanged)
    Q_PROPERTY(QAbstractItemModel *queue READ queue NOTIFY queueChanged)
    Q_PROPERTY(int queueIndex READ queueIndex NOTIFY queueIndexChanged)

    // Current media player related property getters
    Q_PROPERTY(qint64 duration READ duration NOTIFY durationChanged)
    Q_PROPERTY(QMediaPlayer::Error error READ error NOTIFY errorChanged)
    Q_PROPERTY(QString errorString READ errorString NOTIFY errorStringChanged)
    Q_PROPERTY(bool hasVideo READ hasVideo NOTIFY hasVideoChanged)
    Q_PROPERTY(QObject* mediaObject READ mediaObject NOTIFY mediaObjectChanged)
    Q_PROPERTY(QMediaPlayer::MediaStatus mediaStatus READ mediaStatus NOTIFY mediaStatusChanged)
    Q_PROPERTY(QMediaPlayer::State playbackState READ playbackState NOTIFY playbackStateChanged)
    Q_PROPERTY(qint64 position READ position NOTIFY positionChanged)

    Model::Item *item() const { return m_item.data(); }
    void setApiClient(ApiClient *apiClient);

    QString streamUrl() const { return m_streamUrl; }
    PlayMethod playMethod() const { return m_playMethod; }
    QObject *mediaObject() const { return m_mediaPlayer; }
    qint64 position() const { return m_mediaPlayer->position(); }
    qint64 duration() const { return m_mediaPlayer->duration(); }
    ItemModel *queue() const { return m_queue; }
    int queueIndex() const { return m_queueIndex; }

    // Current media player related property getters
    QMediaPlayer::State playbackState() const { return m_playbackState; }
    QMediaPlayer::MediaStatus mediaStatus() const { return m_mediaPlayer->mediaStatus(); }
    bool hasVideo() const { return m_mediaPlayer->isVideoAvailable(); }
    QMediaPlayer::Error error () const { return m_mediaPlayer->error(); }
    QString errorString() const { return m_mediaPlayer->errorString(); }
signals:
    void itemChanged(BaseItemDto *newItemId);
    void streamUrlChanged(const QString &newStreamUrl);
    void autoOpenChanged(bool autoOpen);
    void audioIndexChanged(int audioIndex);
    void subtitleIndexChanged(int subtitleIndex);
    void mediaPlayerChanged(QObject *newMediaPlayer);
    void resumePlaybackChanged(bool newResumePlayback);
    void playMethodChanged(PlayMethod newPlayMethod);

    // Current media player related property signals
    void mediaObjectChanged(QObject *newMediaObject);
    void positionChanged(qint64 newPosition);
    void durationChanged(qint64 newDuration);
    void queueChanged(ItemModel *newQue);
    void queueIndexChanged(int newIndex);
    void playbackStateChanged(QMediaPlayer::State newState);
    void mediaStatusChanged(QMediaPlayer::MediaStatus newMediaStatus);
    void hasVideoChanged(bool newHasVideo);
    void errorChanged(QMediaPlayer::Error newError);
    void errorStringChanged(const QString &newErrorString);
public slots:
    /**
     * @brief playItem Plays the item with the given id. This will construct the Jellyfin::Item internally
     * and delete it later.
     * @param itemId The id of the item to play.
     */
    void playItem(const QString &itemId);
    void playItemInList(ItemModel *itemList, int index);
    void play() { m_mediaPlayer->play(); }
    void pause() { m_mediaPlayer->pause(); }
    void seek(qint64 pos) { m_mediaPlayer->setPosition(pos); }
    void stop() { m_mediaPlayer->stop(); }

    /**
     * @brief previous Play the previous track in the current playlist.
     */
    void previous();

    /**
     * @brief next Play the next track in the current playlist.
     */
    void next();

private slots:
    void mediaPlayerStateChanged(QMediaPlayer::State newState);
    void mediaPlayerPositionChanged(qint64 position);
    void mediaPlayerMediaStatusChanged(QMediaPlayer::MediaStatus newStatus);
    void mediaPlayerError(QMediaPlayer::Error error);
    /**
     * @brief updatePlaybackInfo Updates the Jellyfin server with the current playback progress etc.
     */
    void updatePlaybackInfo();

private:
    QTimer m_updateTimer;
    ApiClient *m_apiClient = nullptr;
    QSharedPointer<Model::Item> m_item;
    QString m_streamUrl;
    QString m_playSessionId;
    int m_audioIndex = 0;
    int m_subtitleIndex = -1;
    qint64 m_resumePosition = 0;
    qint64 m_oldPosition = 0;
    qint64 m_stopPosition = 0;
    QMediaPlayer::State m_oldState = QMediaPlayer::StoppedState;
    PlayMethod m_playMethod = Transcode;
    QMediaPlayer::State m_playbackState = QMediaPlayer::StoppedState;
    // Pointer to the current media player.
    QMediaPlayer *m_mediaPlayer = nullptr;

    QMediaPlayer *m_mediaPlayer1;
    QMediaPlayer *m_mediaPlayer2;
    ItemModel *m_queue = nullptr;
    int m_queueIndex = 0;
    bool m_resumePlayback = true;

    void setItem(ViewModel::Item *newItem);
    void swapMediaPlayer();

    bool m_qmlIsParsingComponent = false;

    /**
     * @brief Whether to automatically open the livestream of the item;
     */
    bool m_autoOpen = false;

    /**
     * @brief Retrieves the URL of the stream to open.
     */
    void fetchStreamUrl(const Model::Item *item, bool autoOpen, const FetchCallback &callback);
    void fetchAndSetStreamUrl(const Model::Item *item);
    void setStreamUrl(const QString &streamUrl);
    void setPlaybackState(QMediaPlayer::State newState);

    Model::Item *nextItem();
    void setQueue(ItemModel *itemModel);

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

} // NS ViewModel
} // NS Jellyfin

#endif // JELLYFIN_VIEWMODEL_PLAYBACKMANAGER_H
