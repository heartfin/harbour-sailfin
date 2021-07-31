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
#include "../dto/playmethod.h"
#include "../loader/requesttypes.h"
#include "../loader/http/getpostedplaybackinfo.h"
#include "../model/playlist.h"
#include "../support/jsonconv.h"
#include "../viewmodel/item.h"
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
    using FetchCallback = std::function<void(QUrl &&, PlayMethod)>;

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
    // Q_PROPERTY(QAbstractItemModel *queue READ queue NOTIFY queueChanged)
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

    ViewModel::Item *item() const { return m_displayItem; }
    void setApiClient(ApiClient *apiClient);

    QString streamUrl() const { return m_streamUrl; }
    PlayMethod playMethod() const { return m_playMethod; }
    QObject *mediaObject() const { return m_mediaPlayer; }
    qint64 position() const { return m_mediaPlayer->position(); }
    qint64 duration() const { return m_mediaPlayer->duration(); }
    //ItemModel *queue() const { return m_queue; }
    int queueIndex() const { return m_queueIndex; }

    // Current media player related property getters
    QMediaPlayer::State playbackState() const { return m_playbackState; }
    QMediaPlayer::MediaStatus mediaStatus() const { return m_mediaPlayer->mediaStatus(); }
    bool hasVideo() const { return m_mediaPlayer->isVideoAvailable(); }
    QMediaPlayer::Error error () const { return m_mediaPlayer->error(); }
    QString errorString() const { return m_mediaPlayer->errorString(); }
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
    //void queueChanged(ItemModel *newQue);
    void queueIndexChanged(int newIndex);
    void playbackStateChanged(QMediaPlayer::State newState);
    void mediaStatusChanged(QMediaPlayer::MediaStatus newMediaStatus);
    void hasVideoChanged(bool newHasVideo);
    void errorChanged(QMediaPlayer::Error newError);
    void errorStringChanged(const QString &newErrorString);
public slots:
    /**
     * @brief playItem Replaces the current queue and plays the item with the given id.
     *
     * This will construct the Jellyfin::Item internally
     * and delete it later.
     * @param item The item to play.
     */
    void playItem(Item *item);
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
    void mediaPlayerDurationChanged(qint64 newDuration);
    /**
     * @brief updatePlaybackInfo Updates the Jellyfin server with the current playback progress etc.
     */
    void updatePlaybackInfo();

    /// Called when the fetcherThread has fetched the playback URL and playSession
    void onItemExtraDataReceived(const QString &itemId, const QUrl &url, const QString &playSession,
                                 // Fully specify class to please MOC
                                 Jellyfin::DTO::PlayMethodClass::Value playMethod);
    /// Called when the fetcherThread encountered an error
    void onItemErrorReceived(const QString &itemId, const QString &errorString);
    void onDestroyed();

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

    // Properties for making the streaming request.
    QString m_streamUrl;
    QString m_nextStreamUrl;
    QString m_playSessionId;
    QString m_nextPlaySessionId;
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

    // Playback-related members
    ItemUrlFetcherThread *m_urlFetcherThread;

    QMediaPlayer::State m_oldState = QMediaPlayer::StoppedState;
    PlayMethod m_playMethod = PlayMethod::Transcode;
    QMediaPlayer::State m_playbackState = QMediaPlayer::StoppedState;
    /// Pointer to the current media player.
    QMediaPlayer *m_mediaPlayer = nullptr;

    // There are 2 media players over here, so one is able to preload the next song
    // before the other starts playing

    /// Media player 1
    QMediaPlayer *m_mediaPlayer1;
    /// Media player 2
    QMediaPlayer *m_mediaPlayer2;

    Model::Playlist *m_queue = nullptr;
    int m_queueIndex = 0;
    bool m_resumePlayback = true;

    // Helper methods
    void setItem(QSharedPointer<Model::Item> newItem);
    void swapMediaPlayer();

    void setStreamUrl(const QUrl &streamUrl);
    void setPlaybackState(QMediaPlayer::State newState);

    /**
     * @brief Posts the playback information
     */
    void postPlaybackInfo(PlaybackInfoType type);


    // QQmlParserListener interface
    void classBegin() override { m_qmlIsParsingComponent = true; }
    void componentComplete() override;
    bool m_qmlIsParsingComponent = false;

    /// Time in ms at what moment this playbackmanager should start loading the next item.
    const qint64 PRELOAD_DURATION = 15 * 1000;
};

/// Thread that fetches the Item's stream URL always in the given order they were requested
class ItemUrlFetcherThread : public QThread {
    Q_OBJECT
public:
    ItemUrlFetcherThread(PlaybackManager *manager);

    /**
     * @brief Adds an item to the queue of items that should be requested
     * @param item The item to fetch the URL of
     */
    void addItemToQueue(QSharedPointer<Model::Item> item);

signals:
    /**
     * @brief Emitted when the url of the item with the itemId has been retrieved.
     * @param itemId The id of the item of which the URL has been retrieved
     * @param itemUrl The retrieved url
     * @param playSession The playsession set by the Jellyfin Server
     */
    void itemUrlFetched(QString itemId, QUrl itemUrl, QString playSession, Jellyfin::DTO::PlayMethodClass::Value playMethod);
    void itemUrlFetchError(QString itemId, QString errorString);

    void prepareLoaderRequested(QPrivateSignal);
public slots:
    /**
     * @brief Ask the thread nicely to stop running.
     */
    void cleanlyStop();
private slots:
    void onPrepareLoader();
protected:
    void run() override;
private:
    PlaybackManager *m_parent;
    Support::Loader<DTO::PlaybackInfoResponse, Jellyfin::Loader::GetPostedPlaybackInfoParams> *m_loader;

    QMutex m_queueModifyMutex;
    QQueue<QSharedPointer<Model::Item>> m_queue;

    QMutex m_urlWaitConditionMutex;
    /// WaitCondition on which this threads waits until an Item is put into the queue
    QWaitCondition m_urlWaitCondition;

    QMutex m_waitLoaderPreparedMutex;
    /// WaitCondition on which this threads waits until the loader has been prepared.
    QWaitCondition m_waitLoaderPrepared;

    bool m_keepRunning = true;
    bool m_loaderPrepared = false;
};

} // NS ViewModel
} // NS Jellyfin

#endif // JELLYFIN_VIEWMODEL_PLAYBACKMANAGER_H
