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
#include "../dto/playbackinfodto.h"
#include "../dto/playbackinforesponse.h"
#include "../dto/playmethod.h"
#include "../loader/requesttypes.h"
#include "../model/playlist.h"
#include "../support/jsonconv.h"
#include "../viewmodel/item.h"
#include "../viewmodel/playlist.h"
#include "../apiclient.h"
#include "itemmodel.h"


namespace Jellyfin {

// Forward declaration of Jellyfin::ApiClient found in jellyfinapiclient.h
class ApiClient;
class ItemModel;
class RemoteItem;

namespace ViewModel {

// Later defined in this file
class ItemUrlFetcherThread;

/**
 * @brief The PlaybackManager class manages the playback of Jellyfin items. It fetches streams based on Jellyfin items, posts
 * the current playback state to the Jellyfin Server, contains the actual media player and so on.
 *
 * The PlaybackManager actually keeps two mediaPlayers, m_mediaPlayer1 and m_mediaPlayer2. When one is playing, the other is
 * preloading the next item in the queue. The current media player is pointed to by m_mediaPlayer.
 */
class PlaybackManager : public QObject, public QQmlParserStatus {
    friend class ItemUrlFetcherThread;
    Q_OBJECT
    Q_INTERFACES(QQmlParserStatus)
public:
    using ItemUrlLoader = Support::Loader<DTO::PlaybackInfoResponse, Jellyfin::Loader::GetPostedPlaybackInfoParams>;

    explicit PlaybackManager(QObject *parent = nullptr);

    Q_PROPERTY(ApiClient *apiClient MEMBER m_apiClient WRITE setApiClient)
    Q_PROPERTY(QString streamUrl READ streamUrl NOTIFY streamUrlChanged)
    Q_PROPERTY(bool autoOpen MEMBER m_autoOpen NOTIFY autoOpenChanged)
    Q_PROPERTY(int audioIndex MEMBER m_audioIndex NOTIFY audioIndexChanged)
    Q_PROPERTY(int subtitleIndex MEMBER m_subtitleIndex NOTIFY subtitleIndexChanged)
    Q_PROPERTY(bool resumePlayback MEMBER m_resumePlayback NOTIFY resumePlaybackChanged)
    Q_PROPERTY(Jellyfin::DTO::PlayMethodClass::Value playMethod READ playMethod NOTIFY playMethodChanged)

    // Current Item and queue informatoion
    Q_PROPERTY(QObject *item READ item NOTIFY itemChanged)
    Q_PROPERTY(int queueIndex READ queueIndex NOTIFY queueIndexChanged)
    Q_PROPERTY(Jellyfin::ViewModel::Playlist *queue READ queue NOTIFY queueChanged)

    // Current media player related property getters
    Q_PROPERTY(qint64 duration READ duration NOTIFY durationChanged)
    Q_PROPERTY(QMediaPlayer::Error error READ error NOTIFY errorChanged)
    Q_PROPERTY(QString errorString READ errorString NOTIFY errorStringChanged)
    Q_PROPERTY(bool hasVideo READ hasVideo NOTIFY hasVideoChanged)
    Q_PROPERTY(bool seekable READ seekable NOTIFY seekableChanged)
    Q_PROPERTY(QObject* mediaObject READ mediaObject NOTIFY mediaObjectChanged)
    Q_PROPERTY(QMediaPlayer::MediaStatus mediaStatus READ mediaStatus NOTIFY mediaStatusChanged)
    Q_PROPERTY(QMediaPlayer::State playbackState READ playbackState NOTIFY playbackStateChanged)
    Q_PROPERTY(qint64 position READ position NOTIFY positionChanged)
    Q_PROPERTY(bool hasNext READ hasNext NOTIFY hasNextChanged)
    Q_PROPERTY(bool hasPrevious READ hasPrevious NOTIFY hasPreviousChanged)

    ViewModel::Item *item() const { return m_displayItem; }
    QSharedPointer<Model::Item> dataItem() const { return m_item; }
    ApiClient *apiClient() const { return m_apiClient; }
    void setApiClient(ApiClient *apiClient);

    QString streamUrl() const { return m_streamUrl; }
    PlayMethod playMethod() const { return m_playMethod; }
    QObject *mediaObject() const { return m_mediaPlayer; }
    qint64 position() const { return m_mediaPlayer->position(); }
    qint64 duration() const { return m_mediaPlayer->duration(); }
    ViewModel::Playlist *queue() const { return m_displayQueue; }
    int queueIndex() const { return m_queueIndex; }
    bool hasNext() const { return m_queue->hasNext(); }
    bool hasPrevious() const { return m_queue->hasPrevious(); }

    // Current media player related property getters
    QMediaPlayer::State playbackState() const { return m_playbackState; }
    QMediaPlayer::MediaStatus mediaStatus() const { return m_mediaPlayer->mediaStatus(); }
    bool hasVideo() const { return m_mediaPlayer->isVideoAvailable(); }
    bool seekable() const { return m_mediaPlayer->isSeekable(); }
    QMediaPlayer::Error error () const;
    QString errorString() const;
signals:
    void itemChanged(ViewModel::Item *newItemId);
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
    void queueChanged(QAbstractItemModel *newQueue);
    void queueIndexChanged(int newIndex);
    void playbackStateChanged(QMediaPlayer::State newState);
    void mediaStatusChanged(QMediaPlayer::MediaStatus newMediaStatus);
    void hasVideoChanged(bool newHasVideo);
    void seekableChanged(bool newSeekable);
    void errorChanged(QMediaPlayer::Error newError);
    void errorStringChanged(const QString &newErrorString);
    void hasNextChanged(bool newHasNext);
    void hasPreviousChanged(bool newHasPrevious);
public slots:
    /**
     * @brief playItem Replaces the current queue and plays the given item.
     *
     * This will construct the Jellyfin::Item internally
     * and delete it later.
     * @param item The item to play.
     */
    void playItem(Item *item);

    void playItem(QSharedPointer<Model::Item> item);
    /**
     * @brief playItem Replaces the current queue and plays the item with the given id.
     *
     * This will construct the Jellyfin::Item internally
     * and delete it later.
     * @param item The itemId to play.
     */

    void playItemId(const QString &itemId);
    void playItemInList(ItemModel *itemList, int index);
    /**
     * @brief skipToItemIndex Skips to an item in the current playlist
     * @param index The index to skip to
     */
    void skipToItemIndex(int index);
    void play();
    void pause() { m_mediaPlayer->pause(); setPlaybackState(QMediaPlayer::PausedState); }
    void seek(qint64 pos);
    void stop();

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
    void mediaPlayerDurationChanged(qint64 newDuration);
    /**
     * @brief updatePlaybackInfo Updates the Jellyfin server with the current playback progress etc.
     */
    void updatePlaybackInfo();

    /// Called when we have fetched the playback URL and playSession
    void onItemUrlReceived(const QString &itemId, const QUrl &url, const QString &playSession,
                                 // Fully specify class to please MOC
                                 Jellyfin::DTO::PlayMethodClass::Value playMethod);
    /// Called when we have encountered an error
    void onItemErrorReceived(const QString &itemId, const QString &errorString);

private:
    /// Factor to multiply with when converting from milliseconds to ticks.
    const static int MS_TICK_FACTOR = 10000;
    enum PlaybackInfoType { Started, Stopped, Progress };

    /// Timer used to update the play progress on the Jellyfin server
    QTimer m_updateTimer;
    /// Timer used to notify ourselves when we need to preload the next item
    QTimer m_preloadTimer;

    ApiClient *m_apiClient = nullptr;
    /// The currently playing item
    QSharedPointer<Model::Item> m_item;
    /// The item that will be played next
    QSharedPointer<Model::Item> m_nextItem;
    /// The currently played item that will be shown in the GUI
    ViewModel::Item *m_displayItem = new ViewModel::Item(this);
    /// The currently played queue that will be shown in the GUI
    ViewModel::Playlist *m_displayQueue = nullptr;

    // Properties for making the streaming request.
    QString m_streamUrl;
    QString m_nextStreamUrl;
    QString m_playSessionId;
    QString m_nextPlaySessionId;
    QString m_errorString;
    QMediaPlayer::Error m_error = QMediaPlayer::NoError;
    /// The index of the mediastreams of the to-be-played item containing the audio
    int m_audioIndex = 0;
    /// The index of the mediastreams of the to-be-played item containing subtitles
    int m_subtitleIndex = -1;
    /// The position in ticks to resume playback from
    qint64 m_resumePosition = 0;
    /// The position in ticks the playback was stopped
    qint64 m_stopPosition = 0;

    /// Keeps track of latest playback position
    qint64 m_oldPosition = 0;
    /**
     * @brief Whether to automatically open the livestream of the item;
     */
    bool m_autoOpen = false;

    QMediaPlayer::State m_oldState = QMediaPlayer::StoppedState;
    /// State of the playbackManager. While the internal media player stops after a
    /// song has ended, this will not do so.
    QMediaPlayer::State m_playbackState = QMediaPlayer::StoppedState;
    PlayMethod m_playMethod = PlayMethod::Transcode;
    /// Pointer to the current media player.
    QMediaPlayer *m_mediaPlayer = nullptr;

    Model::Playlist *m_queue = nullptr;
    int m_queueIndex = 0;
    bool m_resumePlayback = true;

    // Helper methods
    void setItem(QSharedPointer<Model::Item> newItem);

    void setStreamUrl(const QUrl &streamUrl);
    void setPlaybackState(QMediaPlayer::State newState);

    /**
     * @brief Posts the playback information
     */
    void postPlaybackInfo(PlaybackInfoType type);

    void requestItemUrl(QSharedPointer<Model::Item> item);
    void handlePlaybackInfoResponse(QString itemId, QString mediaType, DTO::PlaybackInfoResponse &response);


    // QQmlParserListener interface
    void classBegin() override { m_qmlIsParsingComponent = true; }
    void componentComplete() override;
    bool m_qmlIsParsingComponent = false;

    /// Time in ms at what moment this playbackmanager should start loading the next item.
    const qint64 PRELOAD_DURATION = 15 * 1000;
};

} // NS ViewModel
} // NS Jellyfin

#endif // JELLYFIN_VIEWMODEL_PLAYBACKMANAGER_H
