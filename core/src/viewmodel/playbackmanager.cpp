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
#include <utility>

namespace Jellyfin {
class ItemModel;

namespace DTO {
    using UserData = UserItemDataDto;
}

namespace ViewModel {

PlaybackManager::PlaybackManager(QObject *parent)
    : QObject(parent),
      m_item(nullptr),
      m_mediaPlayer(new QMediaPlayer(this)),
      m_urlFetcherThread(new ItemUrlFetcherThread(this)),
      m_queue(new Model::Playlist(this)) {

    m_displayQueue = new ViewModel::Playlist(m_queue, this);
    // Set up connections.
    m_updateTimer.setInterval(10000); // 10 seconds
    m_updateTimer.setSingleShot(false);

    m_preloadTimer.setSingleShot(true);

    connect(this, &QObject::destroyed, this, &PlaybackManager::onDestroyed);
    connect(&m_updateTimer, &QTimer::timeout, this, &PlaybackManager::updatePlaybackInfo);
    connect(m_urlFetcherThread, &ItemUrlFetcherThread::itemUrlFetched, this, &PlaybackManager::onItemExtraDataReceived);
    m_urlFetcherThread->start();

    connect(m_mediaPlayer, &QMediaPlayer::stateChanged, this, &PlaybackManager::mediaPlayerStateChanged);
    connect(m_mediaPlayer, &QMediaPlayer::positionChanged, this, &PlaybackManager::mediaPlayerPositionChanged);
    connect(m_mediaPlayer, &QMediaPlayer::durationChanged, this, &PlaybackManager::mediaPlayerDurationChanged);
    connect(m_mediaPlayer, &QMediaPlayer::mediaStatusChanged, this, &PlaybackManager::mediaPlayerMediaStatusChanged);
    connect(m_mediaPlayer, &QMediaPlayer::videoAvailableChanged, this, &PlaybackManager::hasVideoChanged);
    connect(m_mediaPlayer, &QMediaPlayer::seekableChanged, this, &PlaybackManager::seekableChanged);
    //                     I do not like the complicated overload cast
    connect(m_mediaPlayer, SIGNAL(error(QMediaPlayer::Error)), this, SLOT(mediaPlayerError(QMediaPlayer::Error)));

}

void PlaybackManager::onDestroyed() {
    m_urlFetcherThread->cleanlyStop();
}

void PlaybackManager::setApiClient(ApiClient *apiClient) {
    if (!m_item.isNull()) {
        m_item->setApiClient(apiClient);
    }
    m_apiClient = apiClient;
}

void PlaybackManager::setItem(QSharedPointer<Model::Item> newItem) {
    if (m_mediaPlayer != nullptr) m_mediaPlayer->stop();
    bool shouldFetchStreamUrl = !newItem.isNull()
            && ((m_streamUrl.isEmpty()     || (!m_item.isNull()
                 && m_item->jellyfinId()      != newItem->jellyfinId()))
            ||  (m_nextStreamUrl.isEmpty() || (!m_nextItem.isNull()
                 && m_nextItem->jellyfinId()  != newItem->jellyfinId())));

    this->m_item = newItem;

    if (newItem.isNull()) {
        m_displayItem->setData(QSharedPointer<Model::Item>::create());
    } else {
        m_displayItem->setData(newItem);
    }
    emit itemChanged(m_displayItem);

    if (m_apiClient == nullptr) {
        qWarning() << "apiClient is not set on this MediaSource instance! Aborting.";
        return;
    }
    // Deinitialize the streamUrl
    if (shouldFetchStreamUrl) {
        setStreamUrl(QUrl());
        m_urlFetcherThread->addItemToQueue(m_item);
    }
}


void PlaybackManager::setStreamUrl(const QUrl &streamUrl) {
    m_streamUrl = streamUrl.toString();
    // Inspired by PHP naming schemes
    Q_ASSERT_X(streamUrl.isValid() || streamUrl.isEmpty(), "setStreamUrl", "StreamURL Jellyfin returned is not valid");
    emit streamUrlChanged(m_streamUrl);
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
    emit playbackStateChanged(newState);
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
    } else if (newStatus == QMediaPlayer::EndOfMedia) {
        next();
    }
}

void PlaybackManager::mediaPlayerDurationChanged(qint64 newDuration) {
    emit durationChanged(newDuration);
    if (newDuration > 0 && !m_nextItem.isNull()) {
        m_preloadTimer.stop();
        m_preloadTimer.start(std::max(static_cast<int>(newDuration - PRELOAD_DURATION), 0));
    }
}

void PlaybackManager::mediaPlayerError(QMediaPlayer::Error error) {
    emit errorChanged(error);
    emit errorStringChanged(m_mediaPlayer->errorString());
}

void PlaybackManager::updatePlaybackInfo() {
    postPlaybackInfo(Progress);
}

void PlaybackManager::playItem(Item *item) {
    setItem(item->data());
}

void PlaybackManager::playItemInList(ItemModel *playlist, int index) {
    m_queue->clearList();
    m_queue->appendToList(*playlist);
    m_queue->play(index);
    m_queueIndex = index;
    emit queueIndexChanged(m_queueIndex);
    setItem(playlist->itemAt(index));
}

void PlaybackManager::skipToItemIndex(int index) {
    if (index < m_queue->queueSize()) {
        // Skip until we hit the right number in the queue
        index++;
        while(index != 0) {
            m_queue->next();
            index--;
        }
    } else {
        m_queue->play(index);
    }
    setItem(m_queue->currentItem());
}

void PlaybackManager::next() {
    m_mediaPlayer->stop();
    m_mediaPlayer->setMedia(QMediaContent());

    if (m_nextItem.isNull()) {
        setItem(m_queue->nextItem());
        m_queue->next();
        m_nextItem.clear();
    } else {
        m_item = m_nextItem;
        setItem(m_nextItem);
    }
    m_mediaPlayer->play();
}

void PlaybackManager::previous() {
    m_mediaPlayer->stop();
    m_mediaPlayer->setPosition(0);
    m_nextStreamUrl = m_streamUrl;
    m_streamUrl = QString();
    m_nextItem = m_item;

    m_queue->previous();
    setItem(m_queue->currentItem());
    m_mediaPlayer->play();
}

void PlaybackManager::postPlaybackInfo(PlaybackInfoType type) {
    QJsonObject root;

    if (m_item == nullptr) {
        qWarning() << "Item is null. Not posting playback info";
        return;
    }
    root["ItemId"] = Support::toString(m_item->jellyfinId());
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
}

// ItemUrlFetcherThread
ItemUrlFetcherThread::ItemUrlFetcherThread(PlaybackManager *manager) :
    QThread(manager),
    m_parent(manager),
    m_loader(new Jellyfin::Loader::HTTP::GetPostedPlaybackInfoLoader(manager->m_apiClient)) {

    connect(this, &ItemUrlFetcherThread::prepareLoaderRequested, this, &ItemUrlFetcherThread::onPrepareLoader);
}

void ItemUrlFetcherThread::addItemToQueue(QSharedPointer<Model::Item> item) {
    QMutexLocker locker(&m_queueModifyMutex);
    m_queue.enqueue(item);
    m_urlWaitCondition.wakeOne();
}

void ItemUrlFetcherThread::cleanlyStop() {
    m_keepRunning = false;
    m_urlWaitCondition.wakeAll();
}

void ItemUrlFetcherThread::onPrepareLoader() {
    m_loader->setApiClient(m_parent->m_apiClient);
    m_loader->prepareLoad();
    m_loaderPrepared = true;
    m_waitLoaderPrepared.wakeOne();
}

void ItemUrlFetcherThread::run() {
    while (m_keepRunning) {
        m_urlWaitConditionMutex.lock();
        while(m_queue.isEmpty() && m_keepRunning) {
            m_urlWaitCondition.wait(&m_urlWaitConditionMutex);
        }
        m_urlWaitConditionMutex.unlock();
        if (!m_keepRunning) break;

        Jellyfin::Loader::GetPostedPlaybackInfoParams params;
        QSharedPointer<Model::Item> item = m_queue.dequeue();
        m_queueModifyMutex.lock();
        params.setItemId(item->jellyfinId());
        m_queueModifyMutex.unlock();
        params.setUserId(m_parent->m_apiClient->userId());
        params.setEnableDirectPlay(true);
        params.setEnableDirectStream(true);
        params.setEnableTranscoding(true);

        m_loaderPrepared = false;
        m_loader->setParameters(params);

        // We cannot call m_loader->prepareLoad() from this thread, so we must
        // emit a signal and hope for the best
        emit prepareLoaderRequested(QPrivateSignal());
        m_waitLoaderPreparedMutex.lock();
        while (!m_loaderPrepared) {
            m_waitLoaderPrepared.wait(&m_waitLoaderPreparedMutex);
        }
        m_waitLoaderPreparedMutex.unlock();

        DTO::PlaybackInfoResponse response;
        try {
            std::optional<DTO::PlaybackInfoResponse> responseOpt = m_loader->load();
            if (responseOpt.has_value()) {
                response = responseOpt.value();
            } else {
                qWarning() << "Cannot retrieve URL of " << params.itemId();
                continue;
            }
        }  catch (QException &e) {
            qWarning() << "Cannot retrieve URL of " << params.itemId() << ": " << e.what();
            continue;
        }

        //TODO: move the item URL fetching logic out of this function, into MediaSourceInfo?
        QList<DTO::MediaSourceInfo> mediaSources = response.mediaSources();
        QUrl resultingUrl;
        QString playSession = response.playSessionId();
        PlayMethod playMethod = PlayMethod::EnumNotSet;
        for (int i = 0; i < mediaSources.size(); i++) {
            const DTO::MediaSourceInfo &source = mediaSources.at(i);
            if (source.supportsDirectPlay() && QFile::exists(source.path())) {
                resultingUrl = QUrl::fromLocalFile(source.path());
                playMethod = PlayMethod::DirectPlay;
            } else if (source.supportsDirectStream()) {
                QString mediaType = item->mediaType();
                if (mediaType == "Video") {
                    mediaType.append('s');
                }
                QUrlQuery query;
                query.addQueryItem("mediaSourceId", source.jellyfinId());
                query.addQueryItem("deviceId", m_parent->m_apiClient->deviceId());
                query.addQueryItem("api_key", m_parent->m_apiClient->token());
                query.addQueryItem("Static", "True");
                resultingUrl = QUrl(this->m_parent->m_apiClient->baseUrl() + "/" + mediaType + "/" + params.itemId()
                        + "/stream." + source.container() + "?" + query.toString(QUrl::EncodeReserved));
                playMethod = PlayMethod::DirectStream;
            } else if (source.supportsTranscoding()) {
                resultingUrl = QUrl(m_parent->m_apiClient->baseUrl() + source.transcodingUrl());
                playMethod = PlayMethod::Transcode;
            } else {
                qDebug() << "No suitable sources for item " << item->jellyfinId();
            }
            if (!resultingUrl.isEmpty()) break;
        }
        if (resultingUrl.isEmpty()) {
            qWarning() << "Could not find suitable media source for item " << params.itemId();
            emit itemUrlFetchError(item->jellyfinId(), tr("Cannot fetch stream URL"));
        } else {
            emit itemUrlFetched(item->jellyfinId(), resultingUrl, playSession, playMethod);
        }
    }
}

void PlaybackManager::onItemExtraDataReceived(const QString &itemId, const QUrl &url,
                                              const QString &playSession, PlayMethod playMethod) {
    Q_UNUSED(url)
    Q_UNUSED(playSession)
    if (!m_item.isNull() && m_item->jellyfinId() == itemId) {
        // We want to play the item probably right now
        m_playSessionId = playSession;
        m_playMethod = playMethod;
        setStreamUrl(url);
        emit playMethodChanged(m_playMethod);
        m_mediaPlayer->setMedia(QMediaContent(url));
        m_mediaPlayer->play();
    } else {
        qDebug() << "Late reply for " << itemId << " received, ignoring";
    }

}
/// Called when the fetcherThread encountered an error
void PlaybackManager::onItemErrorReceived(const QString &itemId, const QString &errorString) {
    Q_UNUSED(itemId)
    Q_UNUSED(errorString)
}

} // NS ViewModel
} // NS Jellyfin
