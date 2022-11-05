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

#ifndef JELLYFIN_MODEL_PLAYER_H
#define JELLYFIN_MODEL_PLAYER_H

#include <QLoggingCategory>
#include <QObject>
#include <QUrl>

namespace Jellyfin {
namespace Model {

Q_DECLARE_LOGGING_CATEGORY(player)

class PlayerStateClass {
    Q_GADGET
public:
    enum Value {
        Stopped,
        Playing,
        Paused
    };
    Q_ENUM(Value);
private:
    PlayerStateClass() {}
};

class MediaStatusClass {
    Q_GADGET
public:
    enum Value {
        NoMedia,
        Loading,
        Loaded,
        Stalled,
        Buffering,
        Buffered,
        EndOfMedia,
        Error
    };
    Q_ENUM(Value);
private:
    MediaStatusClass() {}
};

using PlayerState = PlayerStateClass::Value;
using MediaStatus = MediaStatusClass::Value;

/**
 * @brief Abstract class for a player
 */
class Player : public QObject {
    Q_OBJECT
    Q_PROPERTY(Jellyfin::Model::PlayerStateClass::Value state READ state NOTIFY stateChanged)
    Q_PROPERTY(Jellyfin::Model::MediaStatusClass::Value mediaStatus READ mediaStatus NOTIFY mediaStatusChanged)
    Q_PROPERTY(qint64 position READ position NOTIFY positionChanged)
    Q_PROPERTY(qint64 duration READ duration NOTIFY durationChanged)
    Q_PROPERTY(bool seekable READ seekable NOTIFY seekableChanged)
    Q_PROPERTY(bool hasAudio READ hasAudio NOTIFY hasAudioChanged)
    Q_PROPERTY(bool hasVideo READ hasVideo NOTIFY hasVideoChanged)
    Q_PROPERTY(QString errorString READ errorString NOTIFY errorStringChanged)
    // Used in QML by the VideoOutput
    Q_PROPERTY(QObject* videoOutputSource READ videoOutputSource NOTIFY videoOutputSourceChanged);
public:
public:
    ~Player();
    virtual PlayerState state() const = 0;
    virtual MediaStatus mediaStatus() const = 0;
    virtual qint64 position() const = 0;
    virtual qint64 duration() const = 0;
    virtual bool seekable() const = 0;
    virtual bool hasVideo() const = 0;
    virtual bool hasAudio() const = 0;
    virtual QString errorString() const = 0;
    virtual QObject *videoOutputSource() const = 0;
public slots:
    virtual void pause() = 0;
    virtual void play(qint64 startPos = 0) = 0;
    virtual void stop() = 0;
    virtual void seek(qint64 position) = 0;
    virtual void setMedia(const QUrl &url, int audioIndex = -1, int subTitleIndex = -1) = 0;

signals:
    void stateChanged(Jellyfin::Model::PlayerStateClass::Value newState);
    void mediaStatusChanged(Jellyfin::Model::MediaStatusClass::Value newMediaStatus);
    void positionChanged(qint64 newPosition);
    void durationChanged(qint64 newDuration);
    void errorStringChanged();
    /**
     * @brief Sent when the position changed due to calling the seek method.
     */
    void seeked();
    void seekableChanged(bool seekable);
    void hasAudioChanged();
    void hasVideoChanged();
    void aboutToFinish();
    void videoOutputSourceChanged();
};

#define USE_QTMULTIMEDIA_PLAYER
#ifdef USE_QTMULTIMEDIA_PLAYER
class QtMultimediaPlayerPrivate;
/**
 * @brief Player implementation that uses QtMultimedia
 */
class QtMultimediaPlayer : public Player {
    Q_OBJECT
    Q_DECLARE_PRIVATE(QtMultimediaPlayer);
public:
    explicit QtMultimediaPlayer(QObject *parent = nullptr);
    virtual ~QtMultimediaPlayer();
    PlayerState state() const override;
    MediaStatus mediaStatus() const override;
    qint64 position() const override;
    qint64 duration() const override;
    bool seekable() const override;
    bool hasVideo() const override;
    bool hasAudio() const override;
    QString errorString() const override;
    QObject *videoOutputSource() const override;
public slots:
    void pause() override;
    void play(qint64 startPos = 0) override;
    void stop() override;
    void seek(qint64 position) override;
    void setMedia(const QUrl &url, int audioIndex, int subtitleIndex) override;
private:
    QScopedPointer<QtMultimediaPlayerPrivate> d_ptr;
};
#endif // ifdef USE_QTMULTIMEDIA_PLAYER

} // NS Model
} // NS Jellyfin

#endif // JELLYFIN_MODEL_PLAYER_H
