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
#include <JellyfinQt/model/playbackreporter.h>

#include <optional>

#include <QDebug>

#include <JellyfinQt/apiclient.h>
#include <JellyfinQt/dto/playbackprogressinfo.h>
#include <JellyfinQt/model/item.h>
#include <JellyfinQt/model/playlist.h>
#include <JellyfinQt/model/playbackmanager.h>
#include <JellyfinQt/model/player.h>

namespace Jellyfin {
namespace Model {

Q_LOGGING_CATEGORY(playbackReporter, "jellyfin.model.playbackReporter");

class PlaybackReporterPrivate : public QObject {
    Q_DECLARE_PUBLIC(PlaybackReporter);
public:
    explicit PlaybackReporterPrivate(PlaybackReporter *parent)
        : QObject(parent) {
        q_ptr = parent;
    }

    PlaybackReporter *q_ptr;
    LocalPlaybackManager *m_playbackManager = nullptr;

    /// Timer used to update the play progress on the Jellyfin server
    QTimer m_updateTimer;
    enum PlaybackInfoType { Started, Stopped, Progress };
    qint64 m_oldPosition = 0;
    quint64 m_stopPosition = 0;

    PlayerState m_oldState;

    static const int MS_TICK_FACTOR = 10000;
public slots:
    void positionChanged(qint64 position);
    void playerStateChanged(Jellyfin::Model::PlayerStateClass::Value newState);

    /**
     * @brief updatePlaybackInfo Updates the Jellyfin server with the current playback progress etc.
     */
    void updatePlaybackInfo();
    void postPlaybackInfo(Jellyfin::Model::PlaybackReporterPrivate::PlaybackInfoType type);
};

// PlaybackReporter

PlaybackReporter::PlaybackReporter(QObject *parent)
    : QObject(parent),
    d_ptr(new PlaybackReporterPrivate(this)){
    Q_D(PlaybackReporter);

    d->m_updateTimer.setInterval(10000); // 10 seconds
    d->m_updateTimer.setSingleShot(false);
    connect(&d->m_updateTimer, &QTimer::timeout, d, &PlaybackReporterPrivate::updatePlaybackInfo);
}

void PlaybackReporter::setPlaybackManager(LocalPlaybackManager *playbackManager) {
    Q_D(PlaybackReporter);
    if (d->m_playbackManager != nullptr) {
        // Disconnect
        disconnect(d->m_playbackManager, &PlaybackManager::playbackStateChanged, d, &PlaybackReporterPrivate::playerStateChanged);
        disconnect(d->m_playbackManager->player(), &Player::seeked, d, &PlaybackReporterPrivate::updatePlaybackInfo);
        disconnect(d->m_playbackManager->player(), &Player::positionChanged, d, &PlaybackReporterPrivate::positionChanged);
    }

    d->m_playbackManager = playbackManager;
    if (d->m_playbackManager != nullptr) {
        this->setParent(d->m_playbackManager);
        connect(d->m_playbackManager, &PlaybackManager::playbackStateChanged, d, &PlaybackReporterPrivate::playerStateChanged);
        connect(d->m_playbackManager->player(), &Player::seeked, d, &PlaybackReporterPrivate::updatePlaybackInfo);
        connect(d->m_playbackManager->player(), &Player::positionChanged, d, &PlaybackReporterPrivate::positionChanged);
    } else {
        this->setParent(nullptr);
    }
}

// Private

void PlaybackReporterPrivate::positionChanged(qint64 newPosition) {
    if (newPosition == 0 && m_oldPosition != 0) {
        // Save the old position when stop gets called. The QMediaPlayer will try to set
        // position to 0 when stopped, but we don't want to report that to Jellyfin. We
        // want the old position.
        m_stopPosition = m_oldPosition;
    }
    m_oldPosition = newPosition;
}

void PlaybackReporterPrivate::playerStateChanged(PlayerState newState) {
    if (m_oldState == newState) return;

    if (m_oldState == PlayerState::Stopped) {
        // We're transitioning from stopped to either playing or paused.
        // Set up the recurring timer
        m_updateTimer.start();
        postPlaybackInfo(Started);
    } else if (newState == PlayerState::Stopped) {
        // We've stopped playing the media. Post a stop signal.
        m_updateTimer.stop();
        postPlaybackInfo(Stopped);
    } else {
        postPlaybackInfo(Progress);
    }
    m_oldState = newState;
}

void PlaybackReporterPrivate::updatePlaybackInfo() {
    postPlaybackInfo(Progress);
}

void PlaybackReporterPrivate::postPlaybackInfo(PlaybackInfoType type) {
    if (m_playbackManager == nullptr) {
        qCWarning(playbackReporter) << "PlaybackManager not set. Not posting playback info";
        return;
    } else if (m_playbackManager->apiClient() == nullptr) {
        qCWarning(playbackReporter) << "Set PlaybackManager does not have a apiClient set. Not posting playback info";
        return;
    } else if (m_playbackManager->currentItem().isNull()) {
        qCWarning(playbackReporter) << "Item is null. Not posting playback info";
        return;
    }
    DTO::PlaybackProgressInfo progress(
                m_playbackManager->player()->seekable(),
                m_playbackManager->currentItem(),
                m_playbackManager->currentItem()->jellyfinId(),
                m_playbackManager->player()->state() == PlayerState::Paused,
                false, // is muted?
                m_playbackManager->playMethod(),
                DTO::RepeatMode::RepeatNone);

    progress.setSessionId(m_playbackManager->sessionId());

    switch(type) {
    case Started: // FALLTHROUGH
    case Progress: {
        progress.setAudioStreamIndex(m_playbackManager->audioIndex());
        progress.setSubtitleStreamIndex(m_playbackManager->subtitleIndex());
        progress.setPositionTicks(m_playbackManager->player()->position() * MS_TICK_FACTOR);

        Playlist *playlist = m_playbackManager->queue();
        QList<DTO::QueueItem> queue;
        for (int i = 0; i < playlist->listSize(); i++) {
            DTO::QueueItem queueItem(playlist->listAt(i)->jellyfinId());
            queue.append(queueItem);
        }
        progress.setNowPlayingQueue(queue);
        break;
    }
    case Stopped:
        progress.setPositionTicks(m_stopPosition * MS_TICK_FACTOR);
        break;
    }

    QString path;
    switch (type) {
    case Started:
        path = "/Sessions/Playing";
        break;
    case Progress:
        path = "/Sessions/Playing/Progress";
        break;
    case Stopped:
        path = "/Sessions/Playing/Stopped";
        break;
    }

    // client is never null, checked at the start of this function.
    ApiClient *client = m_playbackManager->apiClient();
    QNetworkReply *rep = client->post(path, QJsonDocument(progress.toJson()));
    connect(rep, &QNetworkReply::finished, this, [rep](){
        rep->deleteLater();
    });
    client->setDefaultErrorHandler(rep);
}

} // NS Model
} // NS Jellyfin
