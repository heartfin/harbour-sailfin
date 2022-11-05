/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2021-2022 Chris Josten and the Sailfin Contributors.
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
#include <QLoggingCategory>
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
#include "../model/player.h"
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

namespace DTO {
class PlaystateRequest;
}

namespace ViewModel {
Q_DECLARE_LOGGING_CATEGORY(playbackManager);

class PlaybackManagerPrivate;

/**
 * @brief The PlaybackManager class manages the playback of Jellyfin items.
 *
 * It is a small wrapper around an instance of Jellyfin::Model::PlaybackManager,
 * which do the actual work. The Jellyfin::Model::PlaybackManager can be switched
 * on the fly, allowing this class to switch between controlling the playback locally
 * or remote.
 */
class PlaybackManager : public QObject, public QQmlParserStatus {
    Q_OBJECT
    Q_DECLARE_PRIVATE(PlaybackManager);
    Q_INTERFACES(QQmlParserStatus)
public:

    explicit PlaybackManager(QObject *parent = nullptr);
    virtual ~PlaybackManager();

    Q_PROPERTY(ApiClient *apiClient READ apiClient WRITE setApiClient)
    Q_PROPERTY(int audioIndex READ audioIndex WRITE setAudioIndex NOTIFY audioIndexChanged)
    Q_PROPERTY(int subtitleIndex READ subtitleIndex WRITE setSubtitleIndex NOTIFY subtitleIndexChanged)
    Q_PROPERTY(QString streamUrl READ streamUrl NOTIFY streamUrlChanged)
    //Q_PROPERTY(bool autoOpen MEMBER m_autoOpen NOTIFY autoOpenChanged)
    /**
     * Whether the player should resume playback.
     */
    Q_PROPERTY(bool resumePlayback READ resumePlayback WRITE setResumePlayback NOTIFY resumePlaybackChanged)
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
    Q_PROPERTY(QObject* mediaObject READ mediaObject NOTIFY mediaObjectChanged);
    Q_PROPERTY(Jellyfin::Model::MediaStatusClass::Value mediaStatus READ mediaStatus NOTIFY mediaStatusChanged)
    Q_PROPERTY(Jellyfin::Model::PlayerStateClass::Value playbackState READ playbackState NOTIFY playbackStateChanged)
    Q_PROPERTY(qint64 position READ position NOTIFY positionChanged)
    Q_PROPERTY(bool hasNext READ hasNext NOTIFY hasNextChanged)
    Q_PROPERTY(bool hasPrevious READ hasPrevious NOTIFY hasPreviousChanged)
    /// Whether playstate commands received over the websocket should be handled
    Q_PROPERTY(bool handlePlaystateCommands READ handlePlaystateCommands WRITE setHandlePlaystateCommands NOTIFY handlePlaystateCommandsChanged)

    // R/W props
    ApiClient *apiClient() const;
    void setApiClient(ApiClient *apiClient);
    bool resumePlayback() const;
    void setResumePlayback(bool newResumePlayback);
    int audioIndex() const;
    void setAudioIndex(int newAudioIndex);
    int subtitleIndex() const;
    void setSubtitleIndex(int newAudioIndex);

    ViewModel::Item *item() const;
    QSharedPointer<Model::Item> dataItem() const;

    QString streamUrl() const;
    PlayMethod playMethod() const;
    qint64 position() const;
    qint64 duration() const;
    ViewModel::Playlist *queue() const;
    int queueIndex() const;
    bool hasNext() const;
    bool hasPrevious() const;

    // Current media player related property getters
    QObject* mediaObject() const;
    Model::PlayerState playbackState() const;
    Model::MediaStatus mediaStatus() const;
    bool hasVideo() const;
    bool seekable() const;
    QMediaPlayer::Error error () const;
    QString errorString() const;

    bool handlePlaystateCommands() const;
    void setHandlePlaystateCommands(bool newHandlePlaystateCommands);
signals:
    void itemChanged();
    void streamUrlChanged(const QString &newStreamUrl);
    void autoOpenChanged(bool autoOpen);
    void audioIndexChanged(int audioIndex);
    void subtitleIndexChanged(int subtitleIndex);
    void mediaPlayerChanged(QObject *newMediaPlayer);
    void resumePlaybackChanged(bool newResumePlayback);
    void playMethodChanged(PlayMethod newPlayMethod);

    // Emitted when seek has been called.
    void seeked(qint64 newPosition);

    void hasNextChanged(bool newHasNext);
    void hasPreviousChanged(bool newHasPrevious);

    // Current media player related property signals
    void mediaObjectChanged(QObject *newPlayer);
    void positionChanged(qint64 newPosition);
    void durationChanged(qint64 newDuration);
    void queueChanged(QAbstractItemModel *newQueue);
    void queueIndexChanged(int newIndex);
    void playbackStateChanged(Jellyfin::Model::PlayerStateClass::Value newState);
    void mediaStatusChanged(Jellyfin::Model::MediaStatusClass::Value newMediaStatus);
    void hasVideoChanged(bool newHasVideo);
    void seekableChanged(bool newSeekable);
    void errorChanged(QMediaPlayer::Error newError);
    void errorStringChanged(const QString &newErrorString);
    void handlePlaystateCommandsChanged(bool newHandlePlaystateCommands);
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
    void pause();
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

    void handlePlaystateRequest(const DTO::PlaystateRequest &request);

private slots:
    void mediaPlayerItemChanged();
private:
    /// Factor to multiply with when converting from milliseconds to ticks.
    const static int MS_TICK_FACTOR = 10000;



    QMediaPlayer::Error m_error = QMediaPlayer::NoError;

    // QQmlParserListener interface
    void classBegin() override { m_qmlIsParsingComponent = true; }
    void componentComplete() override;
    bool m_qmlIsParsingComponent = false;

    QScopedPointer<PlaybackManagerPrivate> d_ptr;
};

} // NS ViewModel
} // NS Jellyfin

#endif // JELLYFIN_VIEWMODEL_PLAYBACKMANAGER_H
