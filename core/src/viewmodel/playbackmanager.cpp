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

#include "JellyfinQt/viewmodel/playbackmanager.h"

#include "JellyfinQt/apimodel.h"
#include <JellyfinQt/dto/playstatecommand.h>
#include <JellyfinQt/dto/playstaterequest.h>

#include <JellyfinQt/dto/useritemdatadto.h>
#include <JellyfinQt/model/controllablesession.h>
#include <JellyfinQt/model/playbackmanager.h>
#include <JellyfinQt/viewmodel/settings.h>

#include <QSharedPointer>

#include <utility>

namespace Jellyfin {
class ItemModel;

namespace DTO {
    using UserData = UserItemDataDto;
}

namespace ViewModel {

Q_LOGGING_CATEGORY(playbackManager, "jellyfin.viewmodel.playbackmanager")

class PlaybackManagerPrivate {
    Q_DECLARE_PUBLIC(PlaybackManager);
public:
    explicit PlaybackManagerPrivate(PlaybackManager *q);
    PlaybackManager *q_ptr = nullptr;

    ApiClient *m_apiClient = nullptr;
    QSharedPointer<Model::ControllableSession> m_session;
    QScopedPointer<Model::PlaybackManager> m_impl;

    /// The currently played item that will be shown in the GUI
    ViewModel::Item *m_displayItem = nullptr;
    /// The currently played queue that will be shown in the GUI
    ViewModel::Playlist *m_displayQueue = nullptr;

    bool m_handlePlaystateCommands;
};

PlaybackManagerPrivate::PlaybackManagerPrivate(PlaybackManager *q)
    : q_ptr(q),
      m_session(nullptr),
      m_impl(new Model::LocalPlaybackManager(q)),
      m_displayItem(new ViewModel::Item(q)),
      m_displayQueue(new ViewModel::Playlist(m_impl->queue())) {
}

// PlaybackManager

PlaybackManager::PlaybackManager(QObject *parent)
    : QObject(parent) {
    QScopedPointer<PlaybackManagerPrivate> foo(new PlaybackManagerPrivate(this));
    d_ptr.swap(foo);
}

PlaybackManager::~PlaybackManager() {

}

void PlaybackManager::setApiClient(ApiClient *apiClient) {
    Q_D(PlaybackManager);
    if (d->m_apiClient != nullptr) {
        disconnect(d->m_apiClient->eventbus(), &EventBus::playstateCommandReceived, this, &PlaybackManager::handlePlaystateRequest);
    }

    if (!d->m_displayItem->data().isNull()) {
        d->m_displayItem->data()->setApiClient(apiClient);
    }
    d->m_apiClient = apiClient;
    d->m_impl->setApiClient(apiClient);

    if (d->m_apiClient != nullptr) {
        // Set the session to a new LocalSession in case it hasn't been set yet.
        if (d->m_session.isNull()) {
            setControllingSession(QSharedPointer<Model::LocalSession>::create(*apiClient, this));
        }
        connect(d->m_apiClient->eventbus(), &EventBus::playstateCommandReceived, this, &PlaybackManager::handlePlaystateRequest);
    }
}

bool PlaybackManager::resumePlayback() const {
    const Q_D(PlaybackManager);
    return d->m_impl->resumePlayback();
}

void PlaybackManager::setResumePlayback(bool newResumePlayback) {
    Q_D(PlaybackManager);
    return d->m_impl->setResumePlayback(newResumePlayback);
}

int PlaybackManager::audioIndex() const {
    const Q_D(PlaybackManager);
    return d->m_impl->audioIndex();
}

void PlaybackManager::setAudioIndex(int newAudioIndex){
    Q_D(PlaybackManager);
    d->m_impl->setAudioIndex(newAudioIndex);
}

int PlaybackManager::subtitleIndex() const {
    const Q_D(PlaybackManager);
    return d->m_impl->subtitleIndex();
}

void PlaybackManager::setSubtitleIndex(int newSubtitleIndex){
    Q_D(PlaybackManager);
    d->m_impl->setSubtitleIndex(newSubtitleIndex);
}

ViewModel::Item *PlaybackManager::item() const {
    const Q_D(PlaybackManager);
    return d->m_displayItem;
}
QSharedPointer<Model::Item> PlaybackManager::dataItem() const {
    const Q_D(PlaybackManager);
    return d->m_displayItem->data();
}

ApiClient * PlaybackManager::apiClient() const {
    const Q_D(PlaybackManager);
    return d->m_apiClient;
}

QSharedPointer<Model::ControllableSession> PlaybackManager::controllingSession() const {
    const Q_D(PlaybackManager);
    return d->m_session;
}

void PlaybackManager::setControllingSession(QSharedPointer<Model::ControllableSession> session) {
    Q_D(PlaybackManager);

    qCDebug(playbackManager()) << "Now controlling session " << session->name();
    session->setParent(this);

    if (!d->m_impl.isNull()) {
        disconnect(d->m_impl.data(), &Model::PlaybackManager::positionChanged, this, &PlaybackManager::positionChanged);
        disconnect(d->m_impl.data(), &Model::PlaybackManager::durationChanged, this, &PlaybackManager::durationChanged);
        disconnect(d->m_impl.data(), &Model::PlaybackManager::hasNextChanged, this, &PlaybackManager::hasNextChanged);
        disconnect(d->m_impl.data(), &Model::PlaybackManager::hasPreviousChanged, this, &PlaybackManager::hasPreviousChanged);
        disconnect(d->m_impl.data(), &Model::PlaybackManager::seekableChanged, this, &PlaybackManager::seekableChanged);
        disconnect(d->m_impl.data(), &Model::PlaybackManager::queueIndexChanged, this, &PlaybackManager::queueIndexChanged);
        disconnect(d->m_impl.data(), &Model::PlaybackManager::itemChanged, this, &PlaybackManager::mediaPlayerItemChanged);
        disconnect(d->m_impl.data(), &Model::PlaybackManager::playbackStateChanged, this, &PlaybackManager::playbackStateChanged);

        if (auto localImp = qobject_cast<Model::LocalPlaybackManager*>(d->m_impl.data())) {
            disconnect(localImp, &Model::LocalPlaybackManager::playMethodChanged, this, &PlaybackManager::playMethodChanged);
        }
        disconnect(d->m_impl.data(), &Model::PlaybackManager::mediaStatusChanged, this, &PlaybackManager::mediaStatusChanged);
    }

    Model::PlaybackManager *other = session->createPlaybackManager();

    if (!d->m_impl.isNull()) {
        bool thisIsLocal  = qobject_cast<Model::LocalPlaybackManager *>(d->m_impl.data()) != nullptr;
        //bool otherIsLocal = qobject_cast<Model::LocalPlaybackManager *>(other) != nullptr;

        // Stop playing locally when switching to another session
        if (thisIsLocal) {
            d->m_impl->stop();
        }
    }
    d->m_displayQueue->setPlaylistModel(other->queue());
    d->m_impl.reset(other);
    d->m_session.swap(session);
    // TODO: swap out playback manager
    emit controllingSessionChanged();
    emit controllingSessionIdChanged();
    emit controllingSessionNameChanged();
    emit controllingSessionLocalChanged();

    if (other != nullptr) {
        connect(d->m_impl.data(), &Model::PlaybackManager::positionChanged, this, &PlaybackManager::positionChanged);
        connect(d->m_impl.data(), &Model::PlaybackManager::durationChanged, this, &PlaybackManager::durationChanged);
        connect(d->m_impl.data(), &Model::PlaybackManager::hasNextChanged, this, &PlaybackManager::hasNextChanged);
        connect(d->m_impl.data(), &Model::PlaybackManager::hasPreviousChanged, this, &PlaybackManager::hasPreviousChanged);
        connect(d->m_impl.data(), &Model::PlaybackManager::seekableChanged, this, &PlaybackManager::seekableChanged);
        connect(d->m_impl.data(), &Model::PlaybackManager::queueIndexChanged, this, &PlaybackManager::queueIndexChanged);
        connect(d->m_impl.data(), &Model::PlaybackManager::itemChanged, this, &PlaybackManager::mediaPlayerItemChanged);
        connect(d->m_impl.data(), &Model::PlaybackManager::playbackStateChanged, this, &PlaybackManager::playbackStateChanged);

        if (auto localImp = qobject_cast<Model::LocalPlaybackManager*>(d->m_impl.data())) {
            connect(localImp, &Model::LocalPlaybackManager::streamUrlChanged, this, [this](const QUrl& newUrl){
                emit this->streamUrlChanged(newUrl.toString());
            });
            connect(localImp, &Model::LocalPlaybackManager::playMethodChanged, this, &PlaybackManager::playMethodChanged);
        }
        connect(d->m_impl.data(), &Model::PlaybackManager::mediaStatusChanged, this, &PlaybackManager::mediaStatusChanged);
    }
}

QString PlaybackManager::controllingSessionId() const {
    const Q_D(PlaybackManager);
    return d->m_session->id();
}

QString PlaybackManager::controllingSessionName() const {
    const Q_D(PlaybackManager);
    return d->m_session->name();
}

bool PlaybackManager::controllingSessionLocal() const {
    const Q_D(PlaybackManager);
    return qobject_cast<Model::LocalPlaybackManager *>(d->m_impl.data()) != nullptr;
}

QString PlaybackManager::streamUrl() const {
    const Q_D(PlaybackManager);
    if (Model::LocalPlaybackManager *lpm = qobject_cast<Model::LocalPlaybackManager *>(d->m_impl.data())) {
        return lpm->streamUrl().toString();
    } else {
        return QStringLiteral("<not playing back locally>");
    }
}

PlayMethod PlaybackManager::playMethod() const {
    const Q_D(PlaybackManager);
    if (Model::LocalPlaybackManager *lpm = qobject_cast<Model::LocalPlaybackManager *>(d->m_impl.data())) {
        return lpm->playMethod();
    } else {
        return PlayMethod::EnumNotSet;
    }
}

Model::MediaStatus PlaybackManager::mediaStatus() const {
    const Q_D(PlaybackManager);
    return d->m_impl->mediaStatus();
}

qint64 PlaybackManager::position() const {
    const Q_D(PlaybackManager);
    return d->m_impl->position();
}

qint64 PlaybackManager::duration() const {
    const Q_D(PlaybackManager);
    return d->m_impl->duration();
}

ViewModel::Playlist *PlaybackManager::queue() const {
    const Q_D(PlaybackManager);
    return d->m_displayQueue;
}

int PlaybackManager::queueIndex() const {
    const Q_D(PlaybackManager);
    return d->m_impl->queueIndex();
}

bool PlaybackManager::hasNext() const {
    const Q_D(PlaybackManager);
    return d->m_impl->hasNext();
}

bool PlaybackManager::hasPrevious() const {
    const Q_D(PlaybackManager);
    return d->m_impl->hasPrevious();
}

QObject* PlaybackManager::mediaObject() const {
    const Q_D(PlaybackManager);
    if (auto localPb = qobject_cast<Model::LocalPlaybackManager*>(d->m_impl.data())) {
        return localPb->player()->videoOutputSource();
    } else {
        return nullptr;
    }
}

Model::PlayerState PlaybackManager::playbackState() const {
    const Q_D(PlaybackManager);
    return d->m_impl->playbackState();
}

bool PlaybackManager::hasVideo() const {
    const Q_D(PlaybackManager);
    return d->m_impl->hasVideo();
}

bool PlaybackManager::seekable() const {
    const Q_D(PlaybackManager);
    return d->m_impl->seekable();
}

bool PlaybackManager::handlePlaystateCommands() const {
    const Q_D(PlaybackManager);
    return d->m_handlePlaystateCommands;
}

void PlaybackManager::setHandlePlaystateCommands(bool newHandlePlaystateCommands) {
    Q_D(PlaybackManager);
    d->m_handlePlaystateCommands = newHandlePlaystateCommands;
    emit handlePlaystateCommandsChanged(newHandlePlaystateCommands);
}

QMediaPlayer::Error PlaybackManager::error() const {
    return QMediaPlayer::NoError;
}

QString PlaybackManager::errorString() const {
    const Q_D(PlaybackManager);
    return d->m_impl->errorString();
}

void PlaybackManager::mediaPlayerItemChanged() {
    Q_D(PlaybackManager);
    d->m_displayItem->setData(d->m_impl->currentItem());
    emit itemChanged();
}

void PlaybackManager::playItem(Item *item) {
    playItem(item->data());
}


void PlaybackManager::playItem(QSharedPointer<Model::Item> item) {
    Q_D(PlaybackManager);
    d->m_impl->playItem(item);
}

void PlaybackManager::playItemId(const QString &id) {
    Q_D(PlaybackManager);
    d->m_impl->playItemId(id);
}

void PlaybackManager::playItemInList(ItemModel *playlist, int index) {
    Q_D(PlaybackManager);
    d->m_impl->playItemInList(playlist->toList(), index);
}

void PlaybackManager::skipToItemIndex(int index) {
    Q_D(PlaybackManager);
    d->m_impl->goTo(index);
}

void PlaybackManager::play() {
    Q_D(PlaybackManager);
    d->m_impl->play();
}

void PlaybackManager::pause() {
    Q_D(PlaybackManager);
    return d->m_impl->pause();
}

void PlaybackManager::seek(qint64 pos) {
    Q_D(PlaybackManager);
    d->m_impl->seek(pos);
    emit seeked(pos);
}

void PlaybackManager::stop() {
    Q_D(PlaybackManager);
    d->m_impl->stop();
}

void PlaybackManager::next() {
    Q_D(PlaybackManager);
    d->m_impl->next();
}

void PlaybackManager::previous() {
    Q_D(PlaybackManager);
    d->m_impl->previous();
}

void PlaybackManager::handlePlaystateRequest(const DTO::PlaystateRequest &request) {
    //if (!m_handlePlaystateCommands) return;
    switch(request.command()) {
    case DTO::PlaystateCommand::Pause:
        pause();
        break;
    case DTO::PlaystateCommand::PlayPause:
        if (playbackState() != Model::PlayerState::Playing) {
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

void PlaybackManager::componentComplete() {
    Q_D(PlaybackManager);
    if (d->m_apiClient == nullptr) qCWarning(playbackManager) << "No ApiClient set for PlaybackManager";
    m_qmlIsParsingComponent = false;
}

} // NS ViewModel
} // NS Jellyfin
