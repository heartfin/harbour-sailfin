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
#include <JellyfinQt/loader/http/session.h>
#include <JellyfinQt/loader/requesttypes.h>

namespace Jellyfin {
namespace Model {

RemoteJellyfinPlayback::RemoteJellyfinPlayback(ApiClient &apiClient, QObject *parent)
    : PlaybackManager(parent), m_apiClient(apiClient) {

}

void RemoteJellyfinPlayback::swap(PlaybackManager &other) {

}

PlayerState RemoteJellyfinPlayback::playbackState() const {

}

MediaStatus RemoteJellyfinPlayback::mediaStatus() const {

}

bool RemoteJellyfinPlayback::hasNext() const {

}

bool RemoteJellyfinPlayback::hasPrevious() const {

}

PlaybackManagerError RemoteJellyfinPlayback::error() const {

}

const QString &RemoteJellyfinPlayback::errorString() const {

}

qint64 RemoteJellyfinPlayback::position() const {

}

qint64 RemoteJellyfinPlayback::duration() const {

}

bool RemoteJellyfinPlayback::seekable() const {

}

bool RemoteJellyfinPlayback::hasAudio() const {

}

bool RemoteJellyfinPlayback::hasVideo() const {

}

void RemoteJellyfinPlayback::playItem(QSharedPointer<Item> item) {

}

void RemoteJellyfinPlayback::playItemInList(const QList<QSharedPointer<Item> > &items, int index) {

}

void RemoteJellyfinPlayback::pause() {
}

void RemoteJellyfinPlayback::play() {

}

void RemoteJellyfinPlayback::playItemId(const QString &id) {

}

void RemoteJellyfinPlayback::previous() {

}

void RemoteJellyfinPlayback::next() {

}

void RemoteJellyfinPlayback::goTo(int index) {

}

void RemoteJellyfinPlayback::stop() {

}

void RemoteJellyfinPlayback::seek(qint64 pos) {

}

void RemoteJellyfinPlayback::sendGeneralCommand(DTO::GeneralCommandType command, QJsonObject arguments) {
    Loader::SendFullGeneralCommandParams params;
    QSharedPointer<DTO::GeneralCommand> fullCommand = QSharedPointer<DTO::GeneralCommand>::create(command, m_apiClient.userId());
    fullCommand->setArguments(arguments);
    // FIXME: send command
}



} // NS Model
} // NS Jellyfin

