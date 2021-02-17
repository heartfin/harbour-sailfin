/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2021 Chris Josten

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

#include "JellyfinQt/playbackmanager.h"

#include "JellyfinQt/DTO/dto.h"
#include "JellyfinQt/DTO/userdata.h"

namespace Jellyfin {

PlaybackManager::PlaybackManager(QObject *parent)
    : QObject(parent) {
    m_updateTimer.setInterval(10000); // 10 seconds
    m_updateTimer.setSingleShot(false);
    connect(&m_updateTimer, &QTimer::timeout, this, &PlaybackManager::updatePlaybackInfo);
}

void PlaybackManager::fetchStreamUrl() {
    if (m_item == nullptr || m_apiClient == nullptr) {
        qDebug() << "Item or apiClient not set";
        return;
    }
    m_resumePosition = 0;
    if (m_resumePlayback && !m_item->property("userData").isNull()) {
        UserData* userData = qvariant_cast<UserData *>(m_item->property("userData"));
        if (userData != nullptr) {
            m_resumePosition = userData->playbackPositionTicks();
        }
    }
    QUrlQuery params;
    params.addQueryItem("UserId", m_apiClient->userId());
    params.addQueryItem("StartTimeTicks", QString::number(m_resumePosition));
    params.addQueryItem("IsPlayback", "true");
    params.addQueryItem("AutoOpenLiveStream", this->m_autoOpen ? "true" : "false");
    params.addQueryItem("MediaSourceId", this->m_item->jellyfinId());
    params.addQueryItem("SubtitleStreamIndex", QString::number(m_subtitleIndex));
    params.addQueryItem("AudioStreamIndex", QString::number(m_audioIndex));

    QJsonObject root;
    root["DeviceProfile"] = m_apiClient->playbackDeviceProfile();

    QNetworkReply *rep = m_apiClient->post("/Items/" + this->m_item->jellyfinId() + "/PlaybackInfo", QJsonDocument(root), params);
    connect(rep, &QNetworkReply::finished, this, [this, rep]() {
        QJsonObject root = QJsonDocument::fromJson(rep->readAll()).object();
        this->m_playSessionId = root["PlaySessionId"].toString();
        qDebug() << "Session id: " << this->m_playSessionId;

        if (this->m_autoOpen) {
            QJsonArray mediaSources = root["MediaSources"].toArray();
            QJsonObject firstMediaSource = mediaSources[0].toObject();
            //FIXME: relies on the fact that the returned transcode url always has a query!
            if (firstMediaSource.isEmpty()) {
                qWarning() << "No media source found";
            } else if (firstMediaSource["SupportsDirectStream"].toBool()) {
                QUrlQuery query;
                query.addQueryItem("mediaSourceId", firstMediaSource["Id"].toString());
                query.addQueryItem("deviceId", m_apiClient->m_deviceId);
                query.addQueryItem("api_key", m_apiClient->token());
                query.addQueryItem("Static", "True");
                QString mediaType = "unknown";
                if (m_item->mediaType() == "Audio") {
                    mediaType = "Audio";
                } else if (m_item->mediaType() == "Video") {
                    mediaType = "Videos";
                }
                QString streamUrl = this->m_apiClient->baseUrl() + "/" + mediaType + "/" + m_item->jellyfinId() + "/stream."
                        + firstMediaSource["Container"].toString() + "?" + query.toString(QUrl::EncodeReserved);
                setStreamUrl(streamUrl);
                this->m_playMethod = DirectPlay;
            } else if (firstMediaSource["SupportsTranscoding"].toBool() && !firstMediaSource["TranscodingUrl"].isNull()) {
                QString streamUrl = this->m_apiClient->baseUrl()
                        + firstMediaSource["TranscodingUrl"].toString();

                this->m_playMethod = Transcode;
                setStreamUrl(streamUrl);
            } else {
                qDebug() << "No stream url found";
                return;
            }
            qDebug() << "Found stream url: " << this->m_streamUrl;
        }

        rep->deleteLater();
    });
}

void PlaybackManager::setItem(Item *newItem) {
    if (m_mediaPlayer != nullptr) m_mediaPlayer->stop();

    // If we own the item, delete it.
    if (m_item != nullptr && m_item->parent() == this) {
        m_item->deleteLater();
    }
    this->m_item = newItem;
    emit itemChanged(newItem);
    // Don't try to start fetching when we're not completely parsed yet.
    if (m_qmlIsParsingComponent) return;

    if (m_apiClient == nullptr) {
        qWarning() << "apiClient is not set on this MediaSource instance! Aborting.";
        return;
    }
    // Deinitialize the streamUrl
    setStreamUrl("");
    if (newItem != nullptr) {
        if (newItem->parent() != this) {
            // The new item may outlive the lifetime of the element it was created on. In the Sailfish
            // application for example, the player is given an Jellyfin::Item that sits on a Page on a PageStack.
            // As soon as the user pops the Page from the PageStack, newItem would be destroyed. Therefore, we
            // take ownership of the given newItem, as this object will usually exist throughout the lifetime of
            // the application. A better solution would be to create a copy of the newItem, but no way I'm going
            // to create an handwritten copy of that.
            QQmlEngine::setObjectOwnership(newItem, QQmlEngine::ObjectOwnership::CppOwnership);
            newItem->setParent(this);
        }
        if (m_item->status() == RemoteData::Ready) {
            fetchStreamUrl();
        } else {
            connect(m_item, &RemoteData::ready, [this]() -> void {
                fetchStreamUrl();
            });
        }
    }
}

void PlaybackManager::setStreamUrl(const QString &streamUrl) {
    this->m_streamUrl = streamUrl;
    // Inspired by PHP naming schemes
    QUrl realStreamUrl(streamUrl);
    Q_ASSERT_X(realStreamUrl.isValid(), "setStreamUrl", "StreamURL Jellyfin returned is not valid");
    if (m_mediaPlayer != nullptr) {
        m_mediaPlayer->setMedia(QMediaContent(realStreamUrl));
    }
    emit streamUrlChanged(streamUrl);
}

void PlaybackManager::mediaPlayerPositionChanged(qint64 position) {
    if (position == 0 && m_oldPosition != 0) {
        // Save the old position when stop gets called. The QMediaPlayer will try to set
        // position to 0 when stopped, but we don't want to report that to Jellyfin. We
        // want the old position.
        m_stopPosition = m_oldPosition;
    }
    m_oldPosition = position;
}

void PlaybackManager::mediaPlayerStateChanged(QMediaPlayer::State newState) {
    if (m_oldState == newState) return;
    if (m_oldState == QMediaPlayer::StoppedState) {
        // We're transitioning from stopped to either playing or paused.
        // Set up the recurring timer
        m_updateTimer.start();
        postPlaybackInfo(Started);
    } else if (newState == QMediaPlayer::StoppedState) {
        // We've stopped playing the media. Post a stop signal.
        m_updateTimer.stop();
        postPlaybackInfo(Stopped);
    } else {
        postPlaybackInfo(Progress);
    }
    m_oldState = newState;
}

void PlaybackManager::mediaPlayerMediaStatusChanged(QMediaPlayer::MediaStatus newStatus) {
    if (newStatus == QMediaPlayer::LoadedMedia) {
        m_mediaPlayer->play();
        if (m_resumePlayback) {
            qDebug() << "Resuming playback by seeking to " << (m_resumePosition / MS_TICK_FACTOR);
            m_mediaPlayer->setPosition(m_resumePosition / MS_TICK_FACTOR);
        }
    }
}

void PlaybackManager::setMediaPlayer(QObject *qmlMediaPlayer) {
    if (m_mediaPlayer != nullptr) {
        // Clean up the old media player.
        disconnect(m_mediaPlayer, &QMediaPlayer::stateChanged, this, &PlaybackManager::mediaPlayerStateChanged);
        disconnect(m_mediaPlayer, &QMediaPlayer::positionChanged, this, &PlaybackManager::mediaPlayerPositionChanged);
        disconnect(m_mediaPlayer, &QMediaPlayer::mediaStatusChanged, this, &PlaybackManager::mediaPlayerMediaStatusChanged);
    }

    m_qmlMediaPlayer = qmlMediaPlayer;
    if (qmlMediaPlayer != nullptr) {
        m_mediaPlayer = qvariant_cast<QMediaPlayer *>(qmlMediaPlayer->property("mediaObject"));
        Q_ASSERT_X(m_mediaPlayer != nullptr, "setMediaPlayer", "The mediaPlayer property must contain a qml MediaPlayer with the mediaObject property");

        // Connect signals from the new media player
        connect(m_mediaPlayer, &QMediaPlayer::stateChanged, this, &PlaybackManager::mediaPlayerStateChanged);
        connect(m_mediaPlayer, &QMediaPlayer::positionChanged, this, &PlaybackManager::mediaPlayerPositionChanged);
        connect(m_mediaPlayer, &QMediaPlayer::mediaStatusChanged, this, &PlaybackManager::mediaPlayerMediaStatusChanged);
    }
}

void PlaybackManager::updatePlaybackInfo() {
    postPlaybackInfo(Progress);
}

void PlaybackManager::playItem(const QString &itemId) {
    Item *newItem = new Item(itemId, m_apiClient, this);
    setItem(newItem);
}

void PlaybackManager::next() {
    Q_UNIMPLEMENTED();
}

void PlaybackManager::previous() {
    Q_UNIMPLEMENTED();
}

void PlaybackManager::postPlaybackInfo(PlaybackInfoType type) {
    QJsonObject root;

    if (m_item == nullptr) {
        qWarning() << "Item is null. Not posting playback info";
        return;
    }
    root["ItemId"] = m_item->jellyfinId();
    root["SessionId"] = m_playSessionId;

    switch(type) {
    case Started: // FALLTHROUGH
    case Progress:

        root["IsPaused"] = m_mediaPlayer->state() != QMediaPlayer::PlayingState;
        root["IsMuted"] = false;

        root["AudioStreamIndex"] = m_audioIndex;
        root["SubtitleStreamIndex"] = m_subtitleIndex;

        root["PlayMethod"] = QVariant::fromValue(m_playMethod).toString();
        root["PositionTicks"] = m_mediaPlayer->position() * MS_TICK_FACTOR;
        break;
    case Stopped:
        root["PositionTicks"] = m_stopPosition * MS_TICK_FACTOR;
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

    QNetworkReply *rep = m_apiClient->post(path, QJsonDocument(root));
    connect(rep, &QNetworkReply::finished, this, [rep](){
        rep->deleteLater();
    });
    m_apiClient->setDefaultErrorHandler(rep);
}

void PlaybackManager::componentComplete() {
    if (m_apiClient == nullptr) qWarning() << "No ApiClient set for PlaybackManager";
    m_qmlIsParsingComponent = false;
    if (m_item != nullptr) {
        if (m_item->status() == RemoteData::Ready) {
            fetchStreamUrl();
        } else {
            connect(m_item, &RemoteData::ready, [this]() -> void {
                fetchStreamUrl();
            });
        }
    }
}

}
