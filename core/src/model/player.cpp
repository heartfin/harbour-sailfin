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

#include <JellyfinQt/model/player.h>


#ifdef USE_QTMULTIMEDIA_PLAYER
#include <QtMultimedia>
#include <QtMultimedia/QMediaStreamsControl>
#include <QTimer>
#endif // USE_QTMULTIMEDIA_PLAYER

namespace Jellyfin {
namespace Model {

Q_LOGGING_CATEGORY(player, "jellyfin.model.player");

Player::~Player() {}

#ifdef USE_QTMULTIMEDIA_PLAYER
class QtMultimediaPlayerPrivate {
    Q_DECLARE_PUBLIC(QtMultimediaPlayer);
public:
    explicit QtMultimediaPlayerPrivate(QtMultimediaPlayer *q);
    QMediaPlayer *m_mediaPlayer;
    QMediaStreamsControl *m_mediaStreamsControl;
    QTimer m_forceSeekTimer;
    bool m_seekToResumePosition = false;
    qint64 m_resumePosition;
    int m_audioIndex = -1;
    int m_subtitleIndex = -1;

    static const qint64 MS_TICK_FACTOR = 10000;
protected:
    QtMultimediaPlayer *q_ptr;
};


QtMultimediaPlayerPrivate::QtMultimediaPlayerPrivate(QtMultimediaPlayer *q)
    : m_mediaPlayer(new QMediaPlayer(q, QMediaPlayer::VideoSurface)),
      q_ptr(q) {

    m_mediaStreamsControl = m_mediaPlayer->service()->requestControl<QMediaStreamsControl *>();
    // Yes, this is a very ugly way of forcing the video player to seek to the resume position
    q->connect(&m_forceSeekTimer, &QTimer::timeout, q, [this]() {
        if (m_seekToResumePosition && m_mediaPlayer->isSeekable()) {
            qCDebug(player) << "Trying to seek to the resume position" << (m_resumePosition / MS_TICK_FACTOR);
            if (m_mediaPlayer->position() > m_resumePosition / MS_TICK_FACTOR - 500) {
                m_seekToResumePosition = false;
                m_forceSeekTimer.stop();
            } else {
                m_mediaPlayer->setPosition(m_resumePosition / MS_TICK_FACTOR);
            }
        }
    });
    q->connect(m_mediaPlayer, &QMediaPlayer::seekableChanged, q, [this](bool newSeekable) {
        if (newSeekable && m_seekToResumePosition) {
            m_forceSeekTimer.start();
        }
    });
    m_forceSeekTimer.setInterval(500);
    m_forceSeekTimer.setSingleShot(false);

    // Connect other properties
    q->connect(m_mediaPlayer, &QMediaPlayer::stateChanged, q, [q](QMediaPlayer::State /*newState*/){
        emit q->stateChanged(q->state());
    });
    q->connect(m_mediaPlayer, &QMediaPlayer::mediaStatusChanged, q, [q, this](QMediaPlayer::MediaStatus newMediaStatus) {
        emit q->mediaStatusChanged(q->mediaStatus());
    });
    q->connect(m_mediaPlayer, &QMediaPlayer::positionChanged, q, &QtMultimediaPlayer::positionChanged);
    q->connect(m_mediaPlayer, &QMediaPlayer::durationChanged, q, &QtMultimediaPlayer::durationChanged);
    q->connect(m_mediaPlayer, &QMediaPlayer::seekableChanged, q, &QtMultimediaPlayer::seekableChanged);
    q->connect(m_mediaPlayer, &QMediaPlayer::audioAvailableChanged, q, &QtMultimediaPlayer::hasAudioChanged);
    q->connect(m_mediaPlayer, &QMediaPlayer::videoAvailableChanged, q, &QtMultimediaPlayer::hasVideoChanged);
    q->connect(m_mediaPlayer, SIGNAL(error(QMediaPlayer::Error)), q, SLOT(errorStringChanged));
    if (m_mediaStreamsControl != nullptr) {
        q->connect(m_mediaStreamsControl, &QMediaStreamsControl::streamsChanged, q, [this](){
            qCDebug(player) << m_mediaStreamsControl->streamCount() << " streams in the medi source";
            if (m_audioIndex >= 0) {
                m_mediaStreamsControl->setActive(m_audioIndex, true);
            }
            if (m_subtitleIndex >= 0) {
                m_mediaStreamsControl->setActive(m_subtitleIndex, true);
            }
        });
    }

}
QtMultimediaPlayer::QtMultimediaPlayer(QObject *parent)
    : d_ptr(new QtMultimediaPlayerPrivate(this)){
}

QtMultimediaPlayer::~QtMultimediaPlayer() {}

PlayerState QtMultimediaPlayer::state() const {
    const Q_D(QtMultimediaPlayer);
    switch(d->m_mediaPlayer->state()) {
    case QMediaPlayer::StoppedState:
        return PlayerState::Stopped;
    case QMediaPlayer::PlayingState:
        return PlayerState::Playing;
    case QMediaPlayer::PausedState:
        return PlayerState::Paused;
    default:
        Q_ASSERT_X(false, "QtMultimediaPlayer::state()", "Invalid switch case");
        return PlayerState::Stopped;
    }
}

MediaStatus QtMultimediaPlayer::mediaStatus() const {
    const Q_D(QtMultimediaPlayer);
    switch(d->m_mediaPlayer->mediaStatus()) {
    case QMediaPlayer::UnknownMediaStatus:
        return MediaStatus::Error;
    case QMediaPlayer::NoMedia:
        return MediaStatus::NoMedia;
    case QMediaPlayer::LoadingMedia:
        return MediaStatus::Loading;
    case QMediaPlayer::LoadedMedia:
        return MediaStatus::Loaded;
    case QMediaPlayer::StalledMedia:
        return MediaStatus::Stalled;
    case QMediaPlayer::BufferingMedia:
        return MediaStatus::Buffering;
    case QMediaPlayer::BufferedMedia:
        return MediaStatus::Buffered;
    case QMediaPlayer::EndOfMedia:
        return MediaStatus::EndOfMedia;
    case QMediaPlayer::InvalidMedia:
    default:
        return MediaStatus::Error;
    }
}

qint64 QtMultimediaPlayer::position() const {
    const Q_D(QtMultimediaPlayer);
    return d->m_mediaPlayer->position();
}

qint64 QtMultimediaPlayer::duration() const {
    const Q_D(QtMultimediaPlayer);
    return d->m_mediaPlayer->duration();
}

bool QtMultimediaPlayer::seekable() const {
    const Q_D(QtMultimediaPlayer);
    return d->m_mediaPlayer->isSeekable();
}

bool QtMultimediaPlayer::hasAudio() const {
    const Q_D(QtMultimediaPlayer);
    return d->m_mediaPlayer->isAudioAvailable();
}

bool QtMultimediaPlayer::hasVideo() const {
    const Q_D(QtMultimediaPlayer);
    return d->m_mediaPlayer->isVideoAvailable();
}

QString QtMultimediaPlayer::errorString() const {
    const Q_D(QtMultimediaPlayer);
    return d->m_mediaPlayer->errorString();
}

void QtMultimediaPlayer::pause() {
    Q_D(QtMultimediaPlayer);
    d->m_mediaPlayer->pause();
}

void QtMultimediaPlayer::play(qint64 startPosition) {
    Q_D(QtMultimediaPlayer);
    qCDebug(player) << "Play from position " << startPosition;
    d->m_mediaPlayer->play();
    d->m_resumePosition = startPosition;
    if (startPosition > 0) {
        d->m_seekToResumePosition = true;
    }
}

void QtMultimediaPlayer::stop() {
    Q_D(QtMultimediaPlayer);
    d->m_mediaPlayer->stop();
}

void QtMultimediaPlayer::seek(qint64 pos) {
    Q_D(QtMultimediaPlayer);
    d->m_mediaPlayer->setPosition(pos);
}

void QtMultimediaPlayer::setMedia(const QUrl &url, int audioIndex, int subtitleIndex) {
    Q_D(QtMultimediaPlayer);
    qCDebug(player) << "Media set to " << url;
    if (url.isEmpty()) {
        d->m_mediaPlayer->setMedia(QMediaContent());
    } else {
        d->m_mediaPlayer->setMedia(QMediaContent(url));
    }
    d->m_audioIndex = audioIndex;
    d->m_subtitleIndex = subtitleIndex;
    if (d->m_mediaStreamsControl != nullptr) {
        qCDebug(player) << "Total stream count: " << d->m_mediaStreamsControl->streamCount();
        if (audioIndex >= 0) {
            d->m_mediaStreamsControl->setActive(audioIndex, true);
        }
        if (subtitleIndex >= 0) {
            d->m_mediaStreamsControl->setActive(subtitleIndex, true);
        }
    }
}

QObject *QtMultimediaPlayer::videoOutputSource() const {
    const Q_D(QtMultimediaPlayer);
    return d->m_mediaPlayer;
}

#endif // USE_QTMULTIMEDIA_PLAYER

} // NS Model
} // NS Jellfyin
