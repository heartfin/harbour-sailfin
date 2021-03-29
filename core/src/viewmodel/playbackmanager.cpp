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

#include "JellyfinQt/viewmodel/playbackmanager.h"

#include "JellyfinQt/apimodel.h"

// #include "JellyfinQt/DTO/dto.h"
#include <JellyfinQt/dto/useritemdatadto.h>

namespace Jellyfin {
class ItemModel;

namespace DTO {
    using UserData = UserItemDataDto;
}

namespace ViewModel {

PlaybackManager::PlaybackManager(QObject *parent)
    : QObject(parent),
      m_item(nullptr),
      m_mediaPlayer1(new QMediaPlayer(this)),
      m_mediaPlayer2(new QMediaPlayer(this)) {
    // Set up connections.
    swapMediaPlayer();
    m_updateTimer.setInterval(10000); // 10 seconds
    m_updateTimer.setSingleShot(false);
    connect(&m_updateTimer, &QTimer::timeout, this, &PlaybackManager::updatePlaybackInfo);
}

void PlaybackManager::setApiClient(ApiClient *apiClient) {
    m_item->setApiClient(apiClient);
}

void PlaybackManager::fetchStreamUrl(const Model::Item *item, bool autoOpen, const FetchCallback &callback) {
    if (item == nullptr || m_apiClient == nullptr) {
        qDebug() << "Item or apiClient not set";
        return;
    }
    QString itemId(item->jellyfinId());
    m_resumePosition = 0;
    if (m_resumePlayback && !item->userData().isNull()) {
        QSharedPointer<UserData> userData = m_item->userData();
        if (!userData.isNull()) {
            m_resumePosition = userData->playbackPositionTicks();
        }
    }
    QUrlQuery params;
    params.addQueryItem("UserId", m_apiClient->userId());
    params.addQueryItem("StartTimeTicks", QString::number(m_resumePosition));
    params.addQueryItem("IsPlayback", "true");
    params.addQueryItem("AutoOpenLiveStream", autoOpen? "true" : "false");
    params.addQueryItem("MediaSourceId", itemId);
    params.addQueryItem("SubtitleStreamIndex", QString::number(m_subtitleIndex));
    params.addQueryItem("AudioStreamIndex", QString::number(m_audioIndex));

    QJsonObject root;
    root["DeviceProfile"] = m_apiClient->playbackDeviceProfile();

    QNetworkReply *rep = m_apiClient->post("/Items/" + itemId + "/PlaybackInfo", QJsonDocument(root), params);
    connect(rep, &QNetworkReply::finished, this, [this, rep, callback, itemId]() {
        QJsonObject root = QJsonDocument::fromJson(rep->readAll()).object();
        this->m_playSessionId = root["PlaySessionId"].toString();
        qDebug() << "Session id: " << this->m_playSessionId;

        if (this->m_autoOpen) {
            QJsonArray mediaSources = root["MediaSources"].toArray();
            QJsonObject firstMediaSource = mediaSources[0].toObject();
            //FIXME: relies on the fact that the returned transcode url always has at least one result!
            if (firstMediaSource.isEmpty()) {
                qWarning() << "No media source found";
            } else if (firstMediaSource["SupportsDirectStream"].toBool()) {
                QUrlQuery query;
                query.addQueryItem("mediaSourceId", firstMediaSource["Id"].toString());
                query.addQueryItem("deviceId", m_apiClient->deviceId());
                query.addQueryItem("api_key", m_apiClient->token());
                query.addQueryItem("Static", "True");
                QString mediaType = "unknown";
                if (m_item->mediaType() == "Audio") {
                    mediaType = "Audio";
                } else if (m_item->mediaType() == "Video") {
                    mediaType = "Videos";
                }
                QString streamUrl = this->m_apiClient->baseUrl() + "/" + mediaType + "/" + itemId + "/stream."
                        + firstMediaSource["Container"].toString() + "?" + query.toString(QUrl::EncodeReserved);
                callback(QUrl(streamUrl), DirectPlay);
            } else if (firstMediaSource["SupportsTranscoding"].toBool() && !firstMediaSource["TranscodingUrl"].isNull()) {
                QString streamUrl = this->m_apiClient->baseUrl()
                        + firstMediaSource["TranscodingUrl"].toString();

                this->m_playMethod = Transcode;
                callback(QUrl(streamUrl), Transcode);
            } else {
                qDebug() << "No stream url found";
                return;
            }
        }
        rep->deleteLater();
    });
}

void PlaybackManager::fetchAndSetStreamUrl(const Model::Item *item) {
    fetchStreamUrl(item, m_autoOpen, [this, item](QUrl &&url, PlayMethod playbackMethod) {
        if (m_item == item) {
            setStreamUrl(url.toString());
            m_playMethod = playbackMethod;
            emit playMethodChanged(m_playMethod);
            m_mediaPlayer->setMedia(QMediaContent(url));
            m_mediaPlayer->play();
        }
    });

}

void PlaybackManager::setItem(ViewModel::Item *newItem) {
    if (m_mediaPlayer != nullptr) m_mediaPlayer->stop();


    if (newItem != nullptr) {
        this->m_item = newItem->data();
    }
    //emit itemChanged(newItem);

    if (m_apiClient == nullptr) {
        qWarning() << "apiClient is not set on this MediaSource instance! Aborting.";
        return;
    }
    // Deinitialize the streamUrl
    setStreamUrl("");
    if (newItem != nullptr) {
        fetchAndSetStreamUrl(m_item.data());
    }
}


void PlaybackManager::setStreamUrl(const QString &streamUrl) {
    this->m_streamUrl = streamUrl;
    // Inspired by PHP naming schemes
    QUrl realStreamUrl(streamUrl);
    Q_ASSERT_X(realStreamUrl.isValid(), "setStreamUrl", "StreamURL Jellyfin returned is not valid");
    emit streamUrlChanged(streamUrl);
}

void PlaybackManager::setPlaybackState(QMediaPlayer::State newState) {
    if (newState != m_playbackState) {
        m_playbackState = newState;
        emit playbackStateChanged(newState);
    }
}

void PlaybackManager::mediaPlayerPositionChanged(qint64 position) {
    emit positionChanged(position);
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
        setPlaybackState(QMediaPlayer::StoppedState);
    } else {
        postPlaybackInfo(Progress);
    }
    m_oldState = newState;
}

void PlaybackManager::mediaPlayerMediaStatusChanged(QMediaPlayer::MediaStatus newStatus) {
    emit mediaStatusChanged(newStatus);
    if (newStatus == QMediaPlayer::LoadedMedia) {
        m_mediaPlayer->play();
        setPlaybackState(playbackState());
        if (m_resumePlayback) {
            qDebug() << "Resuming playback by seeking to " << (m_resumePosition / MS_TICK_FACTOR);
            m_mediaPlayer->setPosition(m_resumePosition / MS_TICK_FACTOR);
        }
    }
}

void PlaybackManager::mediaPlayerError(QMediaPlayer::Error error) {
    emit errorChanged(error);
    emit errorStringChanged(m_mediaPlayer->errorString());
}

void PlaybackManager::updatePlaybackInfo() {
    postPlaybackInfo(Progress);
}

void PlaybackManager::playItem(const QString &itemId) {
    Q_UNUSED(itemId)
    Q_UNIMPLEMENTED();
    /*RemoteItem *newItem = new RemoteItem(itemId, m_apiClient, this);
    ItemModel *queue = new UserItemModel(this);
    setQueue(queue);
    QString parentId = newItem->data()->parentId();
    queue->setParentId(parentId);
    queue->setLimit(10000);
    queue->setApiClient(m_apiClient);
    queue->reload();
    setItem(newItem->data());
    connect(queue, &BaseApiModel::ready, this, [this, queue, newItem]() {
        for (int i = 0; i < queue->size(); i++) {
            if (queue->at(i)->jellyfinId() == newItem->jellyfinId()) {
                m_queueIndex = i;
                emit queueIndexChanged(m_queueIndex);
                break;
            }
        }
    });*/
    setPlaybackState(QMediaPlayer::PlayingState);
}

void PlaybackManager::playItemInList(ItemModel *playlist, int itemIdx) {
    playlist->setParent(this);
    setQueue(playlist);
    m_queueIndex = itemIdx;
    emit queueIndexChanged(m_queueIndex);
    //setItem(playlist->at(itemIdx));
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
    root["ItemId"] = Support::uuidToString(m_item->jellyfinId());
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

void PlaybackManager::swapMediaPlayer() {
    if (m_mediaPlayer != nullptr) {
        disconnect(m_mediaPlayer, &QMediaPlayer::stateChanged, this, &PlaybackManager::mediaPlayerStateChanged);
        disconnect(m_mediaPlayer, &QMediaPlayer::positionChanged, this, &PlaybackManager::mediaPlayerPositionChanged);
        disconnect(m_mediaPlayer, &QMediaPlayer::durationChanged, this, &PlaybackManager::durationChanged);
        disconnect(m_mediaPlayer, &QMediaPlayer::mediaStatusChanged, this, &PlaybackManager::mediaPlayerMediaStatusChanged);
        disconnect(m_mediaPlayer, &QMediaPlayer::videoAvailableChanged, this, &PlaybackManager::hasVideoChanged);
        //                     I do not like the complicated overload cast
        disconnect(m_mediaPlayer, SIGNAL(error(QMediaPlayer::error)), this, SLOT(mediaPlayerError(QmediaPlayer::error)));
    }
    if (m_mediaPlayer == m_mediaPlayer1) {
        m_mediaPlayer = m_mediaPlayer2;
        emit mediaPlayerChanged(m_mediaPlayer);
    } else {
        m_mediaPlayer = m_mediaPlayer1;
        emit mediaPlayerChanged(m_mediaPlayer);
    }
    connect(m_mediaPlayer, &QMediaPlayer::stateChanged, this, &PlaybackManager::mediaPlayerStateChanged);
    connect(m_mediaPlayer, &QMediaPlayer::positionChanged, this, &PlaybackManager::mediaPlayerPositionChanged);
    connect(m_mediaPlayer, &QMediaPlayer::durationChanged, this, &PlaybackManager::durationChanged);
    connect(m_mediaPlayer, &QMediaPlayer::mediaStatusChanged, this, &PlaybackManager::mediaPlayerMediaStatusChanged);
    connect(m_mediaPlayer, &QMediaPlayer::videoAvailableChanged, this, &PlaybackManager::hasVideoChanged);
    //                     I do not like the complicated overload cast
    connect(m_mediaPlayer, SIGNAL(error(QMediaPlayer::error)), this, SLOT(mediaPlayerError(QmediaPlayer::error)));
}

Model::Item *PlaybackManager::nextItem() {
    if (m_queue == nullptr) return nullptr;
    // TODO: shuffle etc.
    if (m_queueIndex < m_queue->size()) {
        //return m_queue->at(m_queueIndex + 1);
    }
    return nullptr;
}

void PlaybackManager::setQueue(ItemModel *model) {
    if (m_queue != nullptr) {
        if (QQmlEngine::objectOwnership(m_queue) == QQmlEngine::CppOwnership) {
            m_queue->deleteLater();
        } else {
            m_queue->setParent(nullptr);
        }
    }
    m_queue = model;
    emit queueChanged(m_queue);
}

void PlaybackManager::componentComplete() {
    if (m_apiClient == nullptr) qWarning() << "No ApiClient set for PlaybackManager";
    m_qmlIsParsingComponent = false;
    if (!m_item.isNull()) {
        fetchAndSetStreamUrl(m_item.data());
    }
}

} // NS ViewModel
} // NS Jellyfin
