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
#include "JellyfinQt/loader/http/mediainfo.h"
#include <JellyfinQt/dto/playstatecommand.h>
#include <JellyfinQt/dto/playstaterequest.h>

// #include "JellyfinQt/DTO/dto.h"
#include <JellyfinQt/loader/http/userlibrary.h>
#include <JellyfinQt/dto/useritemdatadto.h>
#include <JellyfinQt/viewmodel/settings.h>
#include <utility>

namespace Jellyfin {
class ItemModel;

namespace DTO {
    using UserData = UserItemDataDto;
}

namespace ViewModel {

Q_LOGGING_CATEGORY(playbackManager, "jellyfin.viewmodel.playbackmanager")

PlaybackManager::PlaybackManager(QObject *parent)
    : QObject(parent),
      m_item(nullptr),
      m_mediaPlayer(new QMediaPlayer(this)),
      m_queue(new Model::Playlist(this)) {

    m_displayQueue = new ViewModel::Playlist(m_queue, this);
    // Set up connections.
    m_updateTimer.setInterval(10000); // 10 seconds
    m_updateTimer.setSingleShot(false);

    m_preloadTimer.setSingleShot(true);

    connect(&m_updateTimer, &QTimer::timeout, this, &PlaybackManager::updatePlaybackInfo);

    connect(m_mediaPlayer, &QMediaPlayer::stateChanged, this, &PlaybackManager::mediaPlayerStateChanged);
    connect(m_mediaPlayer, &QMediaPlayer::positionChanged, this, &PlaybackManager::mediaPlayerPositionChanged);
    connect(m_mediaPlayer, &QMediaPlayer::durationChanged, this, &PlaybackManager::mediaPlayerDurationChanged);
    connect(m_mediaPlayer, &QMediaPlayer::mediaStatusChanged, this, &PlaybackManager::mediaPlayerMediaStatusChanged);
    connect(m_mediaPlayer, &QMediaPlayer::videoAvailableChanged, this, &PlaybackManager::hasVideoChanged);
    connect(m_mediaPlayer, &QMediaPlayer::seekableChanged, this, &PlaybackManager::seekableChanged);
    //                     I do not like the complicated overload cast
    connect(m_mediaPlayer, SIGNAL(error(QMediaPlayer::Error)), this, SLOT(mediaPlayerError(QMediaPlayer::Error)));

}

void PlaybackManager::setApiClient(ApiClient *apiClient) {
    if (m_apiClient != nullptr) {
        disconnect(m_apiClient->eventbus(), &EventBus::playstateCommandReceived, this, &PlaybackManager::handlePlaystateRequest);
    }

    if (!m_item.isNull()) {
        m_item->setApiClient(apiClient);
    }
    m_apiClient = apiClient;

    if (m_apiClient != nullptr) {
        connect(m_apiClient->eventbus(), &EventBus::playstateCommandReceived, this, &PlaybackManager::handlePlaystateRequest);
    }
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

    emit hasNextChanged(m_queue->hasNext());
    emit hasPreviousChanged(m_queue->hasPrevious());

    if (m_apiClient == nullptr) {

        qCWarning(playbackManager) << "apiClient is not set on this MediaSource instance! Aborting.";
        return;
    }
    // Deinitialize the streamUrl
    if (shouldFetchStreamUrl) {
        setStreamUrl(QUrl());
        requestItemUrl(m_item);
    } else {
        setStreamUrl(m_nextStreamUrl);
        m_mediaPlayer->play();
    }
}

QMediaPlayer::Error PlaybackManager::error() const {
    if (m_error != QMediaPlayer::NoError) {
        return m_error;
    } else {
        return m_mediaPlayer->error();
    }
}

QString PlaybackManager::errorString() const {
    if (!m_errorString.isEmpty()) {
        return m_errorString;
    } else {
        return m_mediaPlayer->errorString();
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
    } else {
        postPlaybackInfo(Progress);
    }
    m_oldState = newState;
    emit playbackStateChanged(newState);
}

void PlaybackManager::mediaPlayerMediaStatusChanged(QMediaPlayer::MediaStatus newStatus) {
    emit mediaStatusChanged(newStatus);
    if (m_playbackState == QMediaPlayer::StoppedState) return;
    if (newStatus == QMediaPlayer::LoadedMedia) {
        m_mediaPlayer->play();
        if (m_resumePlayback) {
            qCDebug(playbackManager) << "Resuming playback by seeking to " << (m_resumePosition / MS_TICK_FACTOR);
            m_mediaPlayer->setPosition(m_resumePosition / MS_TICK_FACTOR);
        }
    } else if (newStatus == QMediaPlayer::EndOfMedia) {
        if (m_queue->hasNext() && m_queue->totalSize() > 1) {
            next();
        } else {
            // End of the playlist
            setPlaybackState(QMediaPlayer::StoppedState);
        }
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
    this->playItem(item->data());
}


void PlaybackManager::playItem(QSharedPointer<Model::Item> item) {
    m_queue->clearList();
    m_queue->appendToList(item);
    setItem(item);
    emit hasNextChanged(m_queue->hasNext());
    emit hasPreviousChanged(m_queue->hasPrevious());
    setPlaybackState(QMediaPlayer::PlayingState);
}

void PlaybackManager::playItemId(const QString &id) {
    Jellyfin::Loader::HTTP::GetItemLoader *loader = new Jellyfin::Loader::HTTP::GetItemLoader(m_apiClient);
    connect(loader, &Support::LoaderBase::error, this, [loader]() {
        // TODO: error handling
        loader->deleteLater();
    });
    connect(loader, &Support::LoaderBase::ready, this, [this, loader](){
        this->playItem(QSharedPointer<Model::Item>::create(loader->result()));
        loader->deleteLater();
    });
    Jellyfin::Loader::GetItemParams params;
    params.setUserId(m_apiClient->userId());
    params.setItemId(id);
    loader->setParameters(params);
    loader->load();
}

void PlaybackManager::playItemInList(ItemModel *playlist, int index) {
    m_queue->clearList();
    m_queue->appendToList(*playlist);
    m_queue->play(index);
    m_queueIndex = index;
    emit queueIndexChanged(m_queueIndex);
    setItem(playlist->itemAt(index));
    emit hasNextChanged(m_queue->hasNext());
    emit hasPreviousChanged(m_queue->hasPrevious());
    setPlaybackState(QMediaPlayer::PlayingState);
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
    emit hasNextChanged(m_queue->hasNext());
    emit hasPreviousChanged(m_queue->hasPrevious());
}

void PlaybackManager::play() {
    m_mediaPlayer->play();
    if (m_queue->totalSize() != 0) {
        setPlaybackState(QMediaPlayer::PlayingState);
    }
}

void PlaybackManager::next() {
    m_mediaPlayer->stop();
    m_mediaPlayer->setMedia(QMediaContent());

    if (m_nextItem.isNull() || !m_queue->nextItem()->sameAs(*m_nextItem)) {
        setItem(m_queue->nextItem());
        m_nextStreamUrl = QString();
        m_queue->next();
        m_nextItem.clear();
    } else {
        m_item = m_nextItem;
        m_streamUrl = m_nextStreamUrl;

        m_nextItem.clear();
        m_nextStreamUrl = QString();

        m_queue->next();
        setItem(m_nextItem);
    }
    emit hasNextChanged(m_queue->hasNext());
    emit hasPreviousChanged(m_queue->hasPrevious());
}

void PlaybackManager::previous() {
    m_mediaPlayer->stop();
    m_mediaPlayer->setPosition(0);

    m_item.clear();
    m_streamUrl = QString();

    m_nextStreamUrl = m_streamUrl;
    m_nextItem = m_queue->nextItem();

    m_queue->previous();
    setItem(m_queue->currentItem());

    emit hasNextChanged(m_queue->hasNext());
    emit hasPreviousChanged(m_queue->hasPrevious());
}

void PlaybackManager::stop() {
    setPlaybackState(QMediaPlayer::StoppedState);
    m_queue->clearList();
    m_mediaPlayer->stop();
}

void PlaybackManager::seek(qint64 pos) {
    m_mediaPlayer->setPosition(pos);
    postPlaybackInfo(Progress);
    emit seeked(pos);
}

void PlaybackManager::handlePlaystateRequest(const DTO::PlaystateRequest &request) {
    if (!m_handlePlaystateCommands) return;
    switch(request.command()) {
    case DTO::PlaystateCommand::Pause:
        pause();
        break;
    case DTO::PlaystateCommand::PlayPause:
        if (playbackState() != QMediaPlayer::PlayingState) {
            play();
        } else {
            pause();
        }
        break;
    case DTO::PlaystateCommand::Unpause:
        play();
        break;
    case DTO::PlaystateCommand::Stop:
        stop();
        break;
    case DTO::PlaystateCommand::NextTrack:
        next();
        break;
    case DTO::PlaystateCommand::PreviousTrack:
        previous();
        break;
    case DTO::PlaystateCommand::Seek:
        if (request.seekPositionTicksNull()) {
            qCWarning(playbackManager) << "Received seek command without position argument";
        } else {
            seek(request.seekPositionTicks().value() / MS_TICK_FACTOR);
        }
        break;
    default:
        qCDebug(playbackManager) << "Unhandled PlaystateCommand: " << request.command();
        break;
    }
}

void PlaybackManager::postPlaybackInfo(PlaybackInfoType type) {
    DTO::PlaybackProgressInfo progress;

    if (m_item == nullptr) {
        qWarning() << "Item is null. Not posting playback info";
        return;
    }
    progress.setItemId(Support::toString(m_item->jellyfinId()));
    progress.setSessionId(m_playSessionId);
    progress.setRepeatMode(DTO::RepeatMode::RepeatNone);

    switch(type) {
    case Started: // FALLTHROUGH
    case Progress: {
        progress.setCanSeek(seekable());
        progress.setIsPaused(m_mediaPlayer->state() == QMediaPlayer::PausedState);
        progress.setIsMuted(false);

        progress.setAudioStreamIndex(m_audioIndex);
        progress.setSubtitleStreamIndex(m_subtitleIndex);

        progress.setPlayMethod(m_playMethod);
        progress.setPositionTicks(m_mediaPlayer->position() * MS_TICK_FACTOR);

        QList<DTO::QueueItem> queue;
        for (int i = 0; i < m_queue->listSize(); i++) {
            DTO::QueueItem queueItem;
            queueItem.setJellyfinId(m_queue->listAt(i)->jellyfinId());
            queue.append(queueItem);
        }
        progress.setNowPlayingQueue(queue);
        break;
    }
    case Stopped:
        progress.setPositionTicks(m_mediaPlayer->position() * MS_TICK_FACTOR);
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

    QNetworkReply *rep = m_apiClient->post(path, QJsonDocument(progress.toJson()));
    connect(rep, &QNetworkReply::finished, this, [rep](){
        rep->deleteLater();
    });
    m_apiClient->setDefaultErrorHandler(rep);
}

void PlaybackManager::componentComplete() {
    if (m_apiClient == nullptr) qWarning() << "No ApiClient set for PlaybackManager";
    m_qmlIsParsingComponent = false;
}

void PlaybackManager::requestItemUrl(QSharedPointer<Model::Item> item) {
    ItemUrlLoader *loader = new Jellyfin::Loader::HTTP::GetPostedPlaybackInfoLoader(m_apiClient);
    Jellyfin::Loader::GetPostedPlaybackInfoParams params;


    // Check if we'd prefer to transcode if the video file contains multiple audio tracks
    // or if a subtitle track was selected.
    // This has to be done due to the lack of support of selecting audio tracks within QtMultimedia
    bool allowTranscoding = m_apiClient->settings()->allowTranscoding();
    bool transcodePreferred = m_subtitleIndex > 0;
    int audioTracks = 0;
    const QList<DTO::MediaStream> &streams = item->mediaStreams();
    for(int i = 0; i < streams.size(); i++) {
        const DTO::MediaStream &stream = streams[i];
        if (stream.type() == MediaStreamType::Audio) {
            audioTracks++;
        }
    }
    if (audioTracks > 1) {
        transcodePreferred = true;
    }

    bool forceTranscoding = allowTranscoding && transcodePreferred;

    QSharedPointer<DTO::PlaybackInfoDto> playbackInfo = QSharedPointer<DTO::PlaybackInfoDto>::create();
    params.setItemId(item->jellyfinId());
    params.setUserId(m_apiClient->userId());
    playbackInfo->setEnableDirectPlay(true);
    playbackInfo->setEnableDirectStream(!forceTranscoding);
    playbackInfo->setEnableTranscoding(forceTranscoding || allowTranscoding);
    playbackInfo->setAudioStreamIndex(this->m_audioIndex);
    playbackInfo->setSubtitleStreamIndex(this->m_subtitleIndex);
    playbackInfo->setDeviceProfile(m_apiClient->deviceProfile());
    params.setBody(playbackInfo);

    loader->setParameters(params);
    connect(loader, &ItemUrlLoader::ready, this, [this, loader, item] {
        DTO::PlaybackInfoResponse result = loader->result();
        handlePlaybackInfoResponse(item->jellyfinId(), item->mediaType(), result);
        loader->deleteLater();
    });
    connect(loader, &ItemUrlLoader::error, this, [this, loader, item](QString message) {
        onItemErrorReceived(item->jellyfinId(), message);
        loader->deleteLater();
    });
    loader->load();
}

void PlaybackManager::handlePlaybackInfoResponse(QString itemId, QString mediaType, DTO::PlaybackInfoResponse &response) {
    //TODO: move the item URL fetching logic out of this function, into MediaSourceInfo?
    QList<DTO::MediaSourceInfo> mediaSources = response.mediaSources();
    QUrl resultingUrl;
    QString playSession = response.playSessionId();
    PlayMethod playMethod = PlayMethod::EnumNotSet;
    bool transcodingAllowed = m_apiClient->settings()->allowTranscoding();



    for (int i = 0; i < mediaSources.size(); i++) {
        const DTO::MediaSourceInfo &source = mediaSources.at(i);

        // Check if we'd prefer to transcode if the video file contains multiple audio tracks
        // or if a subtitle track was selected.
        // This has to be done due to the lack of support of selecting audio tracks within QtMultimedia
        bool transcodePreferred = false;
        if (transcodingAllowed) {
            transcodePreferred = m_subtitleIndex > 0;
            int audioTracks = 0;
            const QList<DTO::MediaStream> &streams = source.mediaStreams();
            for (int i = 0; i < streams.size(); i++) {
                DTO::MediaStream stream = streams[i];
                if (stream.type() == MediaStreamType::Audio) {
                    audioTracks++;
                }
            }
            if (audioTracks > 1) {
                transcodePreferred = true;
            }
        }


        qDebug() << "Media source: " << source.name() << "\n"
                 << "Prefer transcoding: " << transcodePreferred << "\n"
                 << "DirectPlay supported: " << source.supportsDirectPlay() << "\n"
                 << "DirectStream supported: " << source.supportsDirectStream() << "\n"
                 << "Transcode supported: " << source.supportsTranscoding();

        if (source.supportsDirectPlay() && QFile::exists(source.path())) {
            resultingUrl = QUrl::fromLocalFile(source.path());
            playMethod = PlayMethod::DirectPlay;
        } else if (source.supportsDirectStream() && !transcodePreferred) {
            if (mediaType == "Video") {
                mediaType.append('s');
            }
            QUrlQuery query;
            query.addQueryItem("mediaSourceId", source.jellyfinId());
            query.addQueryItem("deviceId", m_apiClient->deviceId());
            query.addQueryItem("api_key", m_apiClient->token());
            query.addQueryItem("Static", "True");
            resultingUrl = QUrl(m_apiClient->baseUrl() + "/" + mediaType + "/" + itemId
                    + "/stream." + source.container() + "?" + query.toString(QUrl::EncodeReserved));
            playMethod = PlayMethod::DirectStream;
        } else if (source.supportsTranscoding() && !source.transcodingUrlNull() && transcodingAllowed) {
            qDebug() << "Transcoding url: " << source.transcodingUrl();
            resultingUrl = QUrl(m_apiClient->baseUrl() + source.transcodingUrl());
            playMethod = PlayMethod::Transcode;
        } else {
            qDebug() << "No suitable sources for item " << itemId;
        }
        if (!resultingUrl.isEmpty()) break;
    }
    if (resultingUrl.isEmpty()) {
        qWarning() << "Could not find suitable media source for item " << itemId;
        onItemErrorReceived(itemId, tr("Could not find a suitable media source."));
    } else {
        emit playMethodChanged(playMethod);
        onItemUrlReceived(itemId, resultingUrl, playSession, playMethod);
    }
}

void PlaybackManager::onItemUrlReceived(const QString &itemId, const QUrl &url,
                                              const QString &playSession, PlayMethod playMethod) {
    Q_UNUSED(url)
    Q_UNUSED(playSession)
    if (!m_item.isNull() && m_item->jellyfinId() == itemId) {
        // We want to play the item probably right now
        m_playSessionId = playSession;
        m_playMethod = playMethod;
        setStreamUrl(url);
        emit playMethodChanged(m_playMethod);

        // Clear the error string if it is currently set
        if (!m_errorString.isEmpty()) {
            m_errorString.clear();
            emit errorStringChanged(m_errorString);
        }

        if (m_error != QMediaPlayer::NoError) {
            m_error = QMediaPlayer::NoError;
            emit errorChanged(error());
        }

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
    qWarning() << "Error while fetching streaming url for " << itemId << ": " << errorString;
    if (!m_item.isNull() && m_item->jellyfinId() == itemId) {
        setStreamUrl(QUrl());
        m_error = QMediaPlayer::ResourceError;
        emit errorChanged(error());
        m_errorString = errorString;
        emit errorStringChanged(errorString);
    }
}

} // NS ViewModel
} // NS Jellyfin
