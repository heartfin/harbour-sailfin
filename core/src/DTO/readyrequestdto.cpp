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
/*
 * WARNING: THIS IS AN AUTOMATICALLY GENERATED FILE! PLEASE DO NOT EDIT THIS, AS YOUR EDITS WILL GET
 * OVERWRITTEN AT SOME POINT! 
 *
 * If there is a bug in this file, please fix the code generator used to generate this file found in
 * core/openapigenerator.d. 
 *
 * This file is generated based on Jellyfin's OpenAPI description, "openapi.json". Please update that
 * file with a newer file if needed instead of manually updating the files.
 */

#include <JellyfinQt/DTO/readyrequestdto.h>

namespace Jellyfin {
namespace DTO {

ReadyRequestDto::ReadyRequestDto(QObject *parent) : QObject(parent) {}

ReadyRequestDto *ReadyRequestDto::fromJSON(QJsonObject source, QObject *parent) {
	ReadyRequestDto *instance = new ReadyRequestDto(parent);
	instance->updateFromJSON(source);
	return instance;
}

void ReadyRequestDto::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject ReadyRequestDto::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QDateTime ReadyRequestDto::when() const { return m_when; }
void ReadyRequestDto::setWhen(QDateTime newWhen) {
	m_when = newWhen;
	emit whenChanged(newWhen);
}

qint64 ReadyRequestDto::positionTicks() const { return m_positionTicks; }
void ReadyRequestDto::setPositionTicks(qint64 newPositionTicks) {
	m_positionTicks = newPositionTicks;
	emit positionTicksChanged(newPositionTicks);
}

bool ReadyRequestDto::isPlaying() const { return m_isPlaying; }
void ReadyRequestDto::setIsPlaying(bool newIsPlaying) {
	m_isPlaying = newIsPlaying;
	emit isPlayingChanged(newIsPlaying);
}

QString ReadyRequestDto::playlistItemId() const { return m_playlistItemId; }
void ReadyRequestDto::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
	emit playlistItemIdChanged(newPlaylistItemId);
}


} // NS Jellyfin
} // NS DTO
