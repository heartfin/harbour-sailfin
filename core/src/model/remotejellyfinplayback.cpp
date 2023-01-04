/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2023 Chris Josten and the Sailfin Contributors.
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

#include <JellyfinQt/model/remotejellyfinplayback.h>

#include <JellyfinQt/apiclient.h>
#include <JellyfinQt/dto/sessioninfo.h>
#include <JellyfinQt/loader/http/session.h>
#include <JellyfinQt/loader/requesttypes.h>
#include <JellyfinQt/model/item.h>
#include <JellyfinQt/model/playlist.h>
#include <JellyfinQt/eventbus.h>
#include <JellyfinQt/websocket.h>

#include <QDebug>

namespace Jellyfin {
namespace Model {

RemoteJellyfinPlayback::RemoteJellyfinPlayback(ApiClient &apiClient, QString sessionId, QObject *parent)
    : PlaybackManager(parent), m_apiClient(apiClient), m_sessionId(sessionId), m_positionTimer(new QTimer(this)) {
    setApiClient(&m_apiClient);
    m_apiClient.websocket()->subscribeToSessionInfo();
    connect(m_apiClient.eventbus(), &EventBus::sessionInfoUpdated, this, &RemoteJellyfinPlayback::onSessionInfoUpdated);

    // Arm the timer
    m_positionTimer->setInterval(1000);
    connect(m_positionTimer, &QTimer::timeout, this, &RemoteJellyfinPlayback::onPositionTimerFired);
}

RemoteJellyfinPlayback::~RemoteJellyfinPlayback() {
    m_apiClient.websocket()->unsubscribeToSessionInfo();
}

PlayerState RemoteJellyfinPlayback::playbackState() const {
    return m_lastSessionInfo.has_value()
            ? m_lastSessionInfo.value().playState()->isPaused()
                    ? PlayerState::Paused
                    : PlayerState::Playing
            : PlayerState::Stopped;
}

MediaStatus RemoteJellyfinPlayback::mediaStatus() const {
    return MediaStatus::Loaded;
}

bool RemoteJellyfinPlayback::hasNext() const {
    return true;
}

bool RemoteJellyfinPlayback::hasPrevious() const {
    return true;
}

PlaybackManagerError RemoteJellyfinPlayback::error() const {
    return PlaybackManagerError::NoError;
}

const QString &RemoteJellyfinPlayback::errorString() const {
    return m_sessionId;
}

qint64 RemoteJellyfinPlayback::position() const {
    return m_position;
}

qint64 RemoteJellyfinPlayback::duration() const {
    if (!m_lastSessionInfo.has_value()
            || m_lastSessionInfo.value().nowPlayingItem().isNull()) {
        return 0;
    }
    return m_lastSessionInfo.value().nowPlayingItem()->runTimeTicks().value_or(0) / 10000;
}

bool RemoteJellyfinPlayback::seekable() const {
    if (!m_lastSessionInfo.has_value()
            || m_lastSessionInfo.value().playState().isNull()) {
        return false;
    }
    return m_lastSessionInfo.value().playState()->canSeek();
}

bool RemoteJellyfinPlayback::hasAudio() const {
    return false;
}

bool RemoteJellyfinPlayback::hasVideo() const {
    return false;
}

void RemoteJellyfinPlayback::playItem(QSharedPointer<Item> item) {
    return playItemInList({item}, 0);
}

void RemoteJellyfinPlayback::playItemInList(const QList<QSharedPointer<Item> > &items, int index) {
    // Map items to their ID
    QStringList itemIds;
    itemIds.reserve(items.size());
    for(auto it = items.begin(); it < items.end(); it++) {
        itemIds.append((*it)->jellyfinId());
    }

    if (this->resumePlayback()) {
        this->playItemInList(itemIds, index, items.at(index)->userData()->playbackPositionTicks());
    } else {
        this->playItemInList(itemIds, index);
    }
}

void RemoteJellyfinPlayback::pause() {
    sendPlaystateCommand(DTO::PlaystateCommand::Pause);
}

void RemoteJellyfinPlayback::play() {
    sendPlaystateCommand(DTO::PlaystateCommand::Unpause);
}

void RemoteJellyfinPlayback::playItemId(const QString &id) {
    playItemInList({id}, 0);
}

void RemoteJellyfinPlayback::previous() {
    sendPlaystateCommand(DTO::PlaystateCommand::PreviousTrack);
}

void RemoteJellyfinPlayback::next() {
    sendPlaystateCommand(DTO::PlaystateCommand::NextTrack);
}

void RemoteJellyfinPlayback::goTo(int index) {

}

void RemoteJellyfinPlayback::stop() {
    sendPlaystateCommand(DTO::PlaystateCommand::Stop);
}

void RemoteJellyfinPlayback::seek(qint64 pos) {
    sendPlaystateCommand(DTO::PlaystateCommand::Seek, pos * PlaybackManager::MS_TICK_FACTOR);
}

void RemoteJellyfinPlayback::onPositionTimerFired() {
    m_position += m_positionTimer->interval();
    emit positionChanged(position());
}

void RemoteJellyfinPlayback::onSessionInfoUpdated(const QString &sessionId, const SessionInfo &sessionInfo) {
    if (sessionId != m_sessionId) return;
    qDebug() << "Session info updated for " << sessionId;
    m_lastSessionInfo = sessionInfo;

    if (m_lastSessionInfo->nowPlayingItem().isNull()) {
        setItem(QSharedPointer<Model::Item>::create());
    } else {
        Jellyfin::BaseItemDto itemData = *m_lastSessionInfo->nowPlayingItem().data();
        setItem(QSharedPointer<Model::Item>::create(itemData, &m_apiClient));
    }

    // Update current position and run timer if needed
    if (m_lastSessionInfo.has_value()
            && !m_lastSessionInfo.value().playState().isNull()) {
        m_position = m_lastSessionInfo.value().playState()->positionTicks().value_or(0) / PlaybackManager::MS_TICK_FACTOR;
        if (!m_positionTimer->isActive()  && !m_lastSessionInfo.value().playState()->isPaused()) {
            m_positionTimer->start();
        } else if (m_positionTimer->isActive()  && m_lastSessionInfo.value().playState()->isPaused()) {
            m_positionTimer->stop();
        }
    } else if (m_positionTimer->isActive()){
        m_positionTimer->stop();
        m_position = 0;
    }

    emit playbackStateChanged(playbackState());
    emit durationChanged(duration());
    emit positionChanged(position());
}

void RemoteJellyfinPlayback::sendPlaystateCommand(DTO::PlaystateCommand command, qint64 seekTicks) {
    using Params = Loader::SendPlaystateCommandParams;
    using CommandLoader = Loader::HTTP::SendPlaystateCommandLoader;

    Params params;
    params.setCommand(command);
    params.setSessionId(m_sessionId);
    if (seekTicks >= 0) {
        params.setSeekPositionTicks(seekTicks);
    }

    auto loader = new CommandLoader(&m_apiClient);
    loader->setParameters(params);
    sendCommand(loader);
}

void RemoteJellyfinPlayback::sendGeneralCommand(DTO::GeneralCommandType command, QJsonObject arguments) {
    using Params = Loader::SendFullGeneralCommandParams;
    using CommandLoader = Loader::HTTP::SendFullGeneralCommandLoader;

    Params params;
    QSharedPointer<DTO::GeneralCommand> fullCommand = QSharedPointer<DTO::GeneralCommand>::create(command, m_apiClient.userId());
    fullCommand->setArguments(arguments);
    params.setBody(fullCommand);
    params.setSessionId(m_sessionId);

    auto loader = new CommandLoader(&m_apiClient);
    loader->setParameters(params);
    sendCommand(loader);
}

void RemoteJellyfinPlayback::sendCommand(Support::LoaderBase *loader) {
    connect(loader, &Support::LoaderBase::ready, this, [loader](){
        loader->deleteLater();
    });
    connect(loader, &Support::LoaderBase::error, this, [loader](QString message){
        loader->deleteLater();
    });
    loader->load();
}

void RemoteJellyfinPlayback::playItemInList(const QStringList &items, int index, qint64 resumeTicks) {
    using Params = Loader::PlayParams;
    using CommandLoader = Loader::HTTP::PlayLoader;

    Params params;
    params.setSessionId(m_sessionId);
    if (resumeTicks >= 0) {
        params.setStartPositionTicks(resumeTicks);
    }
    params.setPlayCommand(DTO::PlayCommand::PlayNow);
    params.setItemIds(items);
    //params.setStartIndex(index);

    CommandLoader *loader = new CommandLoader(&m_apiClient);
    loader->setParameters(params);
    sendCommand(loader);
}

} // NS Model
} // NS Jellyfin

