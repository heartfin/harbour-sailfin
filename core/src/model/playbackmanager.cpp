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

#include <JellyfinQt/model/playbackmanager.h>

#include <QTimer>

#include <JellyfinQt/dto/playbackinforesponse.h>
#include <JellyfinQt/loader/http/userlibrary.h>
#include <JellyfinQt/loader/http/mediainfo.h>
#include <JellyfinQt/model/playbackreporter.h>
#include <JellyfinQt/model/playlist.h>
#include <JellyfinQt/viewmodel/settings.h>

namespace Jellyfin {
namespace Model {

Q_LOGGING_CATEGORY(playbackManager, "jellyfinqt.model.playbackmanager");

class PlaybackManagerPrivate {
    Q_DECLARE_PUBLIC(PlaybackManager);
public:
    PlaybackManagerPrivate(PlaybackManager *q);
    ApiClient *m_apiClient = nullptr;

    /// Timer used to notify ourselves when we need to preload the next item
    QTimer m_preloadTimer;

    PlaybackManagerError m_error;
    QString m_errorString;
    QString m_playSessionId;
    QString m_nextPlaySessionId;

    /// The index of the mediastreams of the to-be-played item containing the audio
    int m_audioIndex = 0;
    /// The index of the mediastreams of the to-be-played item containing subtitles
    int m_subtitleIndex = -1;

    /// The currently playing item
    QSharedPointer<Model::Item> m_item;
    /// The item that will be played next
    QSharedPointer<Model::Item> m_nextItem;

    PlayerState m_state;

    Model::Playlist *m_queue;
    int m_queueIndex = 0;

    bool m_resumePlayback = false;
    /// The position in ticks to resume playback from
    qint64 m_resumePosition = 0;

    bool m_handlePlaystateCommands = true;

    PlaybackManager *q_ptr;

    virtual void setItem(QSharedPointer<Model::Item> newItem);
    void skipToItemIndex(int index);
    void setState(PlayerState newState);
};

PlaybackManagerPrivate::PlaybackManagerPrivate(PlaybackManager *q)
    : q_ptr(q) {
}


void PlaybackManagerPrivate::setItem(QSharedPointer<Model::Item> newItem) {
    Q_Q(PlaybackManager);
    this->m_item = newItem;
    emit q->itemChanged();
}

void PlaybackManagerPrivate::skipToItemIndex(int index) {
    Q_Q(PlaybackManager);
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
    emit q->hasNextChanged(m_queue->hasNext());
    emit q->hasPreviousChanged(m_queue->hasPrevious());

}

void PlaybackManagerPrivate::setState(PlayerState newState) {
    Q_Q(PlaybackManager);

    m_state = newState;
    emit q->playbackStateChanged(newState);
}
/*****************************************************************************
 * PlaybackManager                                                           *
 *****************************************************************************/

PlaybackManager::PlaybackManager(QObject *parent)
    : PlaybackManager(new PlaybackManagerPrivate(this), parent) {
    Q_D(PlaybackManager);
}

PlaybackManager::PlaybackManager(PlaybackManagerPrivate *d, QObject *parent)
    : QObject(parent) {
    QScopedPointer<PlaybackManagerPrivate> foo(d);
    d_ptr.swap(foo);
    d_ptr->m_queue = new Playlist(this);
}

PlaybackManager::~PlaybackManager() {}

ApiClient *PlaybackManager::apiClient() const {
    const Q_D(PlaybackManager);
    return d->m_apiClient;
}

void PlaybackManager::setApiClient(ApiClient *apiClient) {
    Q_D(PlaybackManager);
    d->m_apiClient = apiClient;
}

QSharedPointer<Item> PlaybackManager::currentItem() const {
    const Q_D(PlaybackManager);
    return d->m_item;
}

Playlist *PlaybackManager::queue() const {
    const Q_D(PlaybackManager);
    return d->m_queue;
}

int PlaybackManager::queueIndex() const {
    const Q_D(PlaybackManager);
    return d->m_queueIndex;
}

void PlaybackManager::swap(PlaybackManager &other) {
    other.queue()->clearList();
    other.queue()->appendToList(this->queue()->queueAndList());
    other.playItemInList(this->queue()->queueAndList(), this->queue()->currentItemIndexInList() >= 0
                                                            ? this->queue()->currentItemIndexInList()
                                                            : 0);
    other.seek(position());
}

void PlaybackManager::playItemId(const QString &id) {}

bool PlaybackManager::resumePlayback() const {
    const Q_D(PlaybackManager);
    return d->m_resumePlayback;
}

void PlaybackManager::setResumePlayback(bool newResumePlayback) {
    Q_D(PlaybackManager);
    d->m_resumePlayback = newResumePlayback;
    emit resumePlaybackChanged(newResumePlayback);
}

int PlaybackManager::audioIndex() const {
    const Q_D(PlaybackManager);
    return d->m_audioIndex;
}

void PlaybackManager::setAudioIndex(int newAudioIndex) {
    Q_D(PlaybackManager);
    d->m_audioIndex = newAudioIndex;
    emit audioIndexChanged(newAudioIndex);
}

int PlaybackManager::subtitleIndex() const {
    const Q_D(PlaybackManager);
    return d->m_subtitleIndex;
}

void PlaybackManager::setSubtitleIndex(int newSubtitleIndex) {
    Q_D(PlaybackManager);
    d->m_subtitleIndex = newSubtitleIndex;
    emit subtitleIndexChanged(newSubtitleIndex);
}

void PlaybackManager::setItem(QSharedPointer<Item> item) {
    Q_D(PlaybackManager);
    d->m_item = item;
    emit itemChanged();
}

void PlaybackManager::setQueueIndex(int index)
{
    Q_D(PlaybackManager);
    d->m_queueIndex = index;
    emit queueIndexChanged(index);
}

/*****************************************************************************
 * LocalPlaybackManagerPrivate                                               *
 *****************************************************************************/

class LocalPlaybackManagerPrivate : public PlaybackManagerPrivate {
    Q_DECLARE_PUBLIC(LocalPlaybackManager);
public:
    explicit LocalPlaybackManagerPrivate(LocalPlaybackManager *q);
    Player *m_mediaPlayer;
    // Properties for making the streaming request.
    QUrl m_streamUrl;
    QUrl m_nextStreamUrl;
    DTO::PlayMethod m_playMethod = DTO::PlayMethod::Transcode;


    void setItem(QSharedPointer<Model::Item> newItem) override;
    void setStreamUrl(const QUrl &streamUrl);
    void requestItemUrl(QSharedPointer<Model::Item> item);

    // slots
    void handlePlaybackInfoResponse(QString itemId, QString mediaType, DTO::PlaybackInfoResponse &response);
    /// Called when we have fetched the playback URL and playSession
    void onItemUrlReceived(const QString &itemId, const QUrl &url, const QString &playSession,
                                 // Fully specify class to please MOC
                                 Jellyfin::DTO::PlayMethodClass::Value playMethod);
    /// Called when we have encountered an error
    void onItemErrorReceived(const QString &itemId, const QString &errorString);



    /**
     * @brief Whether to automatically open the livestream of the item;
     */
    bool m_autoOpen = false;
    PlaybackReporter *m_reporter = nullptr;
public slots:
    void onPlayerError();
    void onMediaStatusChanged(Jellyfin::Model::MediaStatusClass::Value newMediaStatus);
};

LocalPlaybackManagerPrivate::LocalPlaybackManagerPrivate(LocalPlaybackManager *q)
    : PlaybackManagerPrivate(q),
      m_reporter(new PlaybackReporter()){
}

void LocalPlaybackManagerPrivate::setStreamUrl(const QUrl &streamUrl) {
    Q_Q(LocalPlaybackManager);

    m_streamUrl = streamUrl;
    Q_ASSERT_X(streamUrl.isValid() || streamUrl.isEmpty(), "setStreamUrl", "StreamURL Jellyfin returned is not valid");
    emit q->streamUrlChanged(m_streamUrl);
}

void LocalPlaybackManagerPrivate::requestItemUrl(QSharedPointer<Model::Item> item) {
    Q_Q(LocalPlaybackManager);
    using ItemUrlLoader = Support::Loader<DTO::PlaybackInfoResponse, Jellyfin::Loader::GetPostedPlaybackInfoParams>;
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

    QSharedPointer<DTO::PlaybackInfoDto> playbackInfo = QSharedPointer<DTO::PlaybackInfoDto>::create(m_apiClient->deviceProfile());
    params.setItemId(item->jellyfinId());
    params.setUserId(m_apiClient->userId());
    playbackInfo->setEnableDirectPlay(true);
    playbackInfo->setEnableDirectStream(!forceTranscoding);
    playbackInfo->setEnableTranscoding(forceTranscoding || allowTranscoding);
    playbackInfo->setAudioStreamIndex(this->m_audioIndex);
    playbackInfo->setSubtitleStreamIndex(this->m_subtitleIndex);
    params.setBody(playbackInfo);

    loader->setParameters(params);
    q->connect(loader, &ItemUrlLoader::ready, q, [this, loader, item] {
        DTO::PlaybackInfoResponse result = loader->result();
        handlePlaybackInfoResponse(item->jellyfinId(), item->mediaType(), result);
        loader->deleteLater();
    });
    q->connect(loader, &ItemUrlLoader::error, q, [this, loader, item](QString message) {
        onItemErrorReceived(item->jellyfinId(), message);
        loader->deleteLater();
    });
    loader->load();
}

void LocalPlaybackManagerPrivate::setItem(QSharedPointer<Model::Item> newItem) {
    Q_Q(LocalPlaybackManager);
    if (m_mediaPlayer != nullptr) m_mediaPlayer->stop();
    bool shouldFetchStreamUrl = !newItem.isNull()
            && ((m_streamUrl.isEmpty()     || (!m_item.isNull()
                 && m_item->jellyfinId()      != newItem->jellyfinId()))
            ||  (m_nextStreamUrl.isEmpty() || (!m_nextItem.isNull()
                 && m_nextItem->jellyfinId()  != newItem->jellyfinId())));

    this->m_item = newItem;

    if (!newItem.isNull()) {
        if (!newItem->userData().isNull()) {
            m_resumePosition = newItem->userData()->playbackPositionTicks();
        }
    }
    emit q->itemChanged();

    emit q->hasNextChanged(m_queue->hasNext());
    emit q->hasPreviousChanged(m_queue->hasPrevious());

    if (m_apiClient == nullptr) {

        qCWarning(playbackManager) << "apiClient is not set on this playbackmanager instance! Aborting.";
        return;
    }
    // Deinitialize the streamUrl
    if (shouldFetchStreamUrl) {
        qCDebug(playbackManager) << "Fetching streamUrl before playing";
        setStreamUrl(QUrl());
        requestItemUrl(m_item);
    } else {
        qCDebug(playbackManager) << "StreamUrl already fetched, playing!";
        setStreamUrl(m_nextStreamUrl);
        if (m_mediaPlayer != nullptr) m_mediaPlayer->play();
    }
}

void LocalPlaybackManagerPrivate::handlePlaybackInfoResponse(QString itemId, QString mediaType, DTO::PlaybackInfoResponse &response) {
    Q_Q(LocalPlaybackManager);
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
                transcodePreferred = false;
            }
        }


        qCDebug(playbackManager()) << "Media source: " << source.name() << "\n"
                                   << "Prefer transcoding: " << transcodePreferred << "\n"
                                   << "DirectPlay supported: " << source.supportsDirectPlay() << "\n"
                                   << "DirectStream supported: " << source.supportsDirectStream() << "\n"
                                   << "Transcode supported: " << source.supportsTranscoding() << source.transcodingUrl();

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
            qCDebug(playbackManager) << "Transcoding url: " << source.transcodingUrl();
            resultingUrl = QUrl(m_apiClient->baseUrl() + source.transcodingUrl());
            playMethod = PlayMethod::Transcode;
        } else {
            qCDebug(playbackManager) << "No suitable sources for item " << itemId;
        }
        if (!resultingUrl.isEmpty()) break;
    }
    if (resultingUrl.isEmpty()) {
        qCWarning(playbackManager) << "Could not find suitable media source for item " << itemId;
        onItemErrorReceived(itemId, q->tr("Could not find a suitable media source."));
    } else {
        emit q->playMethodChanged(playMethod);
        onItemUrlReceived(itemId, resultingUrl, playSession, playMethod);
    }
}

void LocalPlaybackManagerPrivate::onItemUrlReceived(const QString &itemId, const QUrl &url, const QString &playSession, Jellyfin::DTO::PlayMethodClass::Value playMethod) {
    Q_Q(LocalPlaybackManager);
    Q_UNUSED(playSession)
    qCDebug(playbackManager) << "Item URL received for item" << itemId;
    if (!m_item.isNull() && m_item->jellyfinId() == itemId) {
        // We want to play the item probably right now
        m_playSessionId = playSession;
        m_playMethod = playMethod;
        m_resumePosition = m_item->userData()->playbackPositionTicks();
        setStreamUrl(url);
        qCDebug(playbackManager) << "Starting playback!";
        emit q->playMethodChanged(m_playMethod);

        // Clear the error string if it is currently set
        if (!m_errorString.isEmpty()) {
            m_errorString.clear();
            emit q->errorStringChanged(m_errorString);
        }

        if (m_error != PlaybackManagerError::NoError) {
            m_error = PlaybackManagerError::NoError;
            emit q->errorChanged(m_error);
        }

        m_mediaPlayer->setMedia(url, m_audioIndex, m_subtitleIndex);
        m_mediaPlayer->play(m_resumePosition);
        m_resumePosition = 0;
    } else {
        qDebug() << "Late reply for " << itemId << " received, ignoring";
    }
}

void LocalPlaybackManagerPrivate::onItemErrorReceived(const QString &itemId, const QString &errorString) {
    Q_Q(LocalPlaybackManager);
    qWarning() << "Error while fetching streaming url for " << itemId << ": " << errorString;
    if (!m_item.isNull() && m_item->jellyfinId() == itemId) {
        setStreamUrl(QUrl());
        m_error = PlaybackManagerError::PlaybackInfoError;
        emit q->errorChanged(PlaybackManagerError::PlaybackInfoError);
        m_errorString = errorString;
        emit q->errorStringChanged(errorString);
    }
}

void LocalPlaybackManagerPrivate::onPlayerError() {
    Q_Q(LocalPlaybackManager);
    m_error = PlaybackManagerError::PlayerGeneralError;
    m_errorString = m_mediaPlayer->errorString();
    emit q->errorChanged(m_error);
    emit q->errorStringChanged(m_errorString);
    qWarning() << "Player error: " << m_errorString;
}

void LocalPlaybackManagerPrivate::onMediaStatusChanged(MediaStatus newStatus) {
    Q_Q(LocalPlaybackManager);
    if (m_state == PlayerState::Stopped) return;
    if (newStatus == MediaStatus::Loaded) {
       m_mediaPlayer->play();
    } else if (newStatus == MediaStatus::EndOfMedia) {
        if (m_queue->hasNext() && m_queue->totalSize() > 1) {
            q->next();
        } else {
            // End of the playlist
            setState(PlayerState::Stopped);
        }
    }
}


/*****************************************************************************
 * LocalPlaybackManager                                                      *
 *****************************************************************************/
LocalPlaybackManager::LocalPlaybackManager(QObject *parent)
    : PlaybackManager(new LocalPlaybackManagerPrivate(this), parent) {
    Q_D(LocalPlaybackManager);
    d->m_mediaPlayer = new QtMultimediaPlayer(this);
    d->m_reporter->setPlaybackManager(this);
    connect(d->m_mediaPlayer, &Player::positionChanged, this, &LocalPlaybackManager::positionChanged);
    connect(d->m_mediaPlayer, &Player::durationChanged, this, &LocalPlaybackManager::durationChanged);
    connect(d->m_mediaPlayer, &Player::stateChanged, this, &LocalPlaybackManager::playbackStateChanged);
    connect(d->m_mediaPlayer, &Player::seekableChanged, this, &LocalPlaybackManager::seekableChanged);
    connect(d->m_mediaPlayer, &Player::mediaStatusChanged, this, [this, d](MediaStatus newStatus) -> void {
        d->onMediaStatusChanged(newStatus);
        emit mediaStatusChanged(d->m_mediaPlayer->mediaStatus());
    });
    connect(d->m_mediaPlayer, &Player::hasAudioChanged, this, &LocalPlaybackManager::hasAudioChanged);
    connect(d->m_mediaPlayer, &Player::hasVideoChanged, this, &LocalPlaybackManager::hasVideoChanged);
    connect(d->m_mediaPlayer, &Player::errorStringChanged, this, [d]() {
        d->onPlayerError();
    });
}

Player* LocalPlaybackManager::player() const {
    const Q_D(LocalPlaybackManager);
    return d->m_mediaPlayer;
}

QString LocalPlaybackManager::sessionId() const {
    const Q_D(LocalPlaybackManager);
    return d->m_playSessionId;
}

DTO::PlayMethod LocalPlaybackManager::playMethod() const {
    const Q_D(LocalPlaybackManager);
    return d->m_playMethod;
}

const QUrl& LocalPlaybackManager::streamUrl() const {
    const Q_D(LocalPlaybackManager);
    return d->m_streamUrl;
}

PlayerState LocalPlaybackManager::playbackState() const {
    const Q_D(LocalPlaybackManager);
    return d->m_mediaPlayer->state();
}

MediaStatus LocalPlaybackManager::mediaStatus() const {
    const Q_D(LocalPlaybackManager);
    return d->m_mediaPlayer->mediaStatus();
}

PlaybackManagerError LocalPlaybackManager::error() const {
    const Q_D(LocalPlaybackManager);
    return d->m_error;
}

const QString &LocalPlaybackManager::errorString() const {
    const Q_D(LocalPlaybackManager);
    return d->m_errorString;
}

qint64 LocalPlaybackManager::position() const {
    const Q_D(LocalPlaybackManager);
    return d->m_mediaPlayer->position();
}

qint64 LocalPlaybackManager::duration() const {
    const Q_D(LocalPlaybackManager);
    return d->m_mediaPlayer->duration();
}

bool LocalPlaybackManager::seekable() const {
    const Q_D(LocalPlaybackManager);
    return d->m_mediaPlayer->seekable();
}

void LocalPlaybackManager::pause() {
    Q_D(LocalPlaybackManager);
    d->m_mediaPlayer->pause();
}

void LocalPlaybackManager::play() {
    Q_D(LocalPlaybackManager);
    if (d->m_queue->totalSize() > 0) {
        d->m_mediaPlayer->play();
        d->setState(PlayerState::Playing);
    }
}

void LocalPlaybackManager::playItem(QSharedPointer<Model::Item> item) {
    Q_D(LocalPlaybackManager);
    d->m_queue->clearList();
    d->m_queue->appendToList(item);
    d->m_queue->play();
    d->m_queueIndex = 0;

    d->setItem(item);

    emit hasNextChanged(d->m_queue->hasNext());
    emit hasPreviousChanged(d->m_queue->hasPrevious());
    d->setState(PlayerState::Playing);
}

void LocalPlaybackManager::playItemId(const QString &itemId) {
    Q_D(PlaybackManager);
    Jellyfin::Loader::HTTP::GetItemLoader *loader = new Jellyfin::Loader::HTTP::GetItemLoader(d->m_apiClient);
    connect(loader, &Support::LoaderBase::error, this, [loader]() {
        // TODO: error handling
        loader->deleteLater();
    });
    connect(loader, &Support::LoaderBase::ready, this, [this, loader](){
        this->playItem(QSharedPointer<Model::Item>::create(loader->result()));
        loader->deleteLater();
    });
    Jellyfin::Loader::GetItemParams params;
    params.setUserId(d->m_apiClient->userId());
    params.setItemId(itemId);
    loader->setParameters(params);
    loader->load();
}

void LocalPlaybackManager::playItemInList(const QList<QSharedPointer<Model::Item>> &items, int index) {
    Q_D(LocalPlaybackManager);
    d->m_queue->clearList();
    d->m_queue->appendToList(items);
    d->m_queue->play(index);

    setQueueIndex(index);

    d->setItem(items.at(index));
    emit hasNextChanged(d->m_queue->hasNext());
    emit hasPreviousChanged(d->m_queue->hasPrevious());
    d->setState(PlayerState::Playing);
}

void LocalPlaybackManager::goTo(int index) {
    Q_D(LocalPlaybackManager);
    d->m_queue->play(index);
    setQueueIndex(index);

    d->setItem(d->m_queue->currentItem());
    emit hasNextChanged(d->m_queue->hasNext());
    emit hasPreviousChanged(d->m_queue->hasPrevious());
    d->setState(PlayerState::Playing);
}

bool LocalPlaybackManager::hasNext() const {
    const Q_D(LocalPlaybackManager);
    return d->m_queue->hasNext();
}

bool LocalPlaybackManager::hasPrevious() const {
    const Q_D(LocalPlaybackManager);
    return d->m_queue->hasPrevious();
}

void LocalPlaybackManager::next() {
    Q_D(LocalPlaybackManager);
    d->m_mediaPlayer->stop();
    d->m_mediaPlayer->setMedia(QUrl());

    if (d->m_nextItem.isNull() || !d->m_queue->nextItem()->sameAs(*d->m_nextItem)) {
        d->setItem(d->m_queue->nextItem());
        d->m_nextStreamUrl = QString();
        d->m_queue->next();
        d->m_nextItem.clear();
    } else {
        d->m_item = d->m_nextItem;
        d->m_streamUrl = d->m_nextStreamUrl;

        d->m_nextItem.clear();
        d->m_nextStreamUrl = QString();

        d->m_queue->next();
        d->setItem(d->m_nextItem);
    }
    emit hasNextChanged(d->m_queue->hasNext());
    emit hasPreviousChanged(d->m_queue->hasPrevious());
}

void LocalPlaybackManager::previous() {
    Q_D(LocalPlaybackManager);
    d->m_mediaPlayer->stop();
    d->m_mediaPlayer->seek(0);

    d->m_item.clear();
    d->m_streamUrl = QString();

    d->m_nextStreamUrl = d->m_streamUrl;
    d->m_nextItem = d->m_queue->nextItem();

    d->m_queue->previous();
    d->setItem(d->m_queue->currentItem());

    emit hasNextChanged(d->m_queue->hasNext());
    emit hasPreviousChanged(d->m_queue->hasPrevious());
}

void LocalPlaybackManager::stop() {
    Q_D(LocalPlaybackManager);
    d->m_queue->clearList();
    d->m_mediaPlayer->stop();
    d->setState(PlayerState::Stopped);
}

void LocalPlaybackManager::seek(qint64 newPosition) {
    Q_D(LocalPlaybackManager);
    d->m_mediaPlayer->seek(newPosition);
}

bool LocalPlaybackManager::hasAudio() const {
    const Q_D(LocalPlaybackManager);
    return d->m_mediaPlayer->hasAudio();
}

bool LocalPlaybackManager::hasVideo() const {
    const Q_D(LocalPlaybackManager);
    return d->m_mediaPlayer->hasVideo();
}

} // NS Model
} // NS Jellyfin
