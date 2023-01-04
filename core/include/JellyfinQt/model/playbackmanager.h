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
#ifndef JELLYFIN_MODEL_PLAYBACKMANAGER_H
#define JELLYFIN_MODEL_PLAYBACKMANAGER_H

#include <QLoggingCategory>
#include <QObject>
#include <QSharedPointer>

#include <JellyfinQt/dto/playmethod.h>
#include <JellyfinQt/model/player.h>

namespace Jellyfin {
namespace Model {

class Item;
class Playlist;

Q_DECLARE_LOGGING_CATEGORY(playbackManager);

class PlaybackManagerErrorClass {
    Q_GADGET
public:
    enum Value {
        NoError,
        PlaybackInfoError,
        RemoteClientNotReachable,
        PlayerGeneralError
    };
    Q_ENUM(Value);
};

using PlaybackManagerError = PlaybackManagerErrorClass::Value;

class PlaybackManagerPrivate;
/**
 * @brief Base class for a playback manager.
 *
 * Besides some glue code for the properties,
 * most of the actual playback logic is implemented in the two subclasses: {@link LocalPlaybackManager}
 * and {@link RemotePlaybackManager}
 */
class PlaybackManager : public QObject {
    Q_OBJECT
    Q_DECLARE_PRIVATE(PlaybackManager);
    Q_PROPERTY(bool resumePlayback READ resumePlayback WRITE setResumePlayback NOTIFY resumePlaybackChanged)
    Q_PROPERTY(int audioIndex READ audioIndex WRITE setAudioIndex NOTIFY audioIndexChanged)
    Q_PROPERTY(int subtitleIndex READ subtitleIndex WRITE setSubtitleIndex NOTIFY subtitleIndexChanged)
    /**
     * @brief The position in ticks in the currently playing item
     */
    Q_PROPERTY(qint64 position READ position NOTIFY positionChanged)
    /**
     * @brief The duration in ticks of the currently playing item
     */
    Q_PROPERTY(qint64 duration READ duration NOTIFY durationChanged)
    /**
     * @brief Whether the playbackmanager is currently able to seek
     */
    Q_PROPERTY(bool seekable READ seekable NOTIFY seekableChanged)
    /**
     * @brief Whether the currently playing item has audio
     */
    Q_PROPERTY(bool hasAudio READ hasAudio NOTIFY hasAudioChanged)
    /**
     * @brief Whether the currently playing item has video
     */
    Q_PROPERTY(bool hasVideo READ hasVideo NOTIFY hasVideoChanged)
    Q_PROPERTY(Jellyfin::Model::PlayerStateClass::Value playbackState READ playbackState NOTIFY playbackStateChanged)
    Q_PROPERTY(Jellyfin::Model::MediaStatusClass::Value mediaStatus READ mediaStatus NOTIFY mediaStatusChanged)
    Q_PROPERTY(int queueIndex READ queueIndex NOTIFY queueIndexChanged)
public:
    explicit PlaybackManager(QObject *parent = nullptr);
    virtual ~PlaybackManager();
    void swap(PlaybackManager& other);

    ApiClient * apiClient() const;
    void setApiClient(ApiClient *apiClient);

    // Getters
    QSharedPointer<Item> currentItem() const;
    Playlist *queue() const;
    int queueIndex() const;

    bool resumePlayback() const;
    void setResumePlayback(bool newResumePlayback);
    int audioIndex() const;
    void setAudioIndex(int newAudioIndex);
    int subtitleIndex() const;
    void setSubtitleIndex(int newSubtitleIndex);

    virtual PlayerState playbackState() const = 0;
    virtual MediaStatus mediaStatus() const = 0;
    virtual bool hasNext() const = 0;
    virtual bool hasPrevious() const = 0;
    virtual PlaybackManagerError error() const = 0;

    virtual const QString &errorString() const = 0;
    virtual qint64 position() const = 0;
    virtual qint64 duration() const = 0;
    virtual bool seekable() const = 0;
    virtual bool hasAudio() const = 0;
    virtual bool hasVideo() const = 0;

    /**
     * @brief Start playing the given item
     */
    virtual void playItem(QSharedPointer<Model::Item> item) = 0;
    /**
     * @brief Set the playlist to the given playlist and start playing the item at the given index
     * @param items The list of items to play
     * @param index Index of the item to play
     */
    virtual void playItemInList(const QList<QSharedPointer<Model::Item>> &items, int index) = 0;
    static const qint64 MS_TICK_FACTOR = 10000;
protected:
    void setItem(QSharedPointer<Item> item);

signals:
    void playbackStateChanged(Jellyfin::Model::PlayerStateClass::Value newPlaybackState);
    void mediaStatusChanged(Jellyfin::Model::MediaStatusClass::Value newMediaStatus);
    void queueChanged(Jellyfin::Model::Playlist *newPlaylist);
    void hasNextChanged(bool newHasNext);
    void hasPreviousChanged(bool newHasPrevious);
    void itemChanged();
    void queueIndexChanged(int index);
    void errorChanged(Jellyfin::Model::PlaybackManagerErrorClass::Value newError);
    void errorStringChanged(const QString &newErrorString);
    void positionChanged(qint64 newPosition);
    void durationChanged(qint64 newDuration);
    void seekableChanged(bool newSeekable);
    void hasAudioChanged();
    void hasVideoChanged();
    void resumePlaybackChanged(bool newPlaybackChanged);
    void audioIndexChanged(int newAudioIndex);
    void subtitleIndexChanged(int newSubtitleIndex);

public slots:
    virtual void pause() = 0;
    virtual void play() = 0;
    virtual void playItemId(const QString &id) = 0;
    virtual void previous() = 0;
    virtual void next() = 0;
    /**
     * @brief Play the item at the index in the current playlist
     * @param index the item to go to;
     */
    virtual void goTo(int index) = 0;
    virtual void stop() = 0;
    virtual void seek(qint64 pos) = 0;
protected:
    explicit PlaybackManager(PlaybackManagerPrivate *d, QObject *parent = nullptr);
    QScopedPointer<PlaybackManagerPrivate> d_ptr;
};

class LocalPlaybackManagerPrivate;
/**
 * @brief Controls playback whithin this app.
 *
 * This class mostly consists of bookkeeping between the actual media player implementation (which is
 * abstracted into yet another class) and the ViewModel.
 *
 * It does things like:
 * * Fetching the actual media URL of an item and deciding which playback method to use
 * * Managing the current playlist state and instructing the media player which item to play next
 * * Keeping track of the playback state that the user would expect from a media player,
 *   instead of what the media player implementation reports.
 *
 */
class LocalPlaybackManager : public PlaybackManager {
    Q_DECLARE_PRIVATE(LocalPlaybackManager);
    Q_OBJECT
    Q_PROPERTY(Jellyfin::Model::Player *player READ player NOTIFY playerChanged)
    Q_PROPERTY(Jellyfin::DTO::PlayMethodClass::Value playMethod READ playMethod NOTIFY playMethodChanged)
    Q_PROPERTY(QUrl streamUrl READ streamUrl NOTIFY streamUrlChanged)
public:
    explicit LocalPlaybackManager(QObject *parent = nullptr);

    Player *player() const;
    QString sessionId() const;
    DTO::PlayMethod playMethod() const;
    const QUrl &streamUrl() const;

    PlayerState playbackState() const override;
    MediaStatus mediaStatus() const override;
    PlaybackManagerError error() const override;
    const QString& errorString() const override;
    qint64 position() const override;
    qint64 duration() const override;
    bool seekable() const override;
    bool hasAudio() const override;
    bool hasVideo() const override;

    bool hasNext() const override;
    bool hasPrevious() const override;

    void playItemInList(const QList<QSharedPointer<Model::Item>> &items, int index) override;

public slots:
    void pause() override;
    void play() override;
    void playItem(QSharedPointer<Model::Item> item) override;
    void playItemId(const QString &itemId) override;
    void next() override;
    void previous() override;
    void stop() override;
    void seek(qint64 pos) override;
    void goTo(int index) override;
signals:
    void playerChanged(Jellyfin::Model::Player *newPlayer);
    void playMethodChanged(Jellyfin::DTO::PlayMethodClass::Value newPlayMethod);
    void streamUrlChanged(const QUrl &newStreamUrl);
};

/**
 * @brief Controls playback for remote devices, such as other Jellyfin clients, over the network.
 */
class RemoteJellyfinPlaybackManager {

};

} // NS Model
} // NS Jellyfin

#endif // JELLYFIN_MODEL_PLAYBACKMANAGER_H
