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

#include <JellyfinQt/dto/readyrequestdto.h>

namespace Jellyfin {
namespace DTO {

ReadyRequestDto::ReadyRequestDto() {}

ReadyRequestDto::ReadyRequestDto(const ReadyRequestDto &other) :

	m_when(other.m_when),
	m_positionTicks(other.m_positionTicks),
	m_isPlaying(other.m_isPlaying),
	m_playlistItemId(other.m_playlistItemId){}


void ReadyRequestDto::replaceData(ReadyRequestDto &other) {
	m_when = other.m_when;
	m_positionTicks = other.m_positionTicks;
	m_isPlaying = other.m_isPlaying;
	m_playlistItemId = other.m_playlistItemId;
}

ReadyRequestDto ReadyRequestDto::fromJson(QJsonObject source) {
	ReadyRequestDto instance;
	instance.setFromJson(source);
	return instance;
}


void ReadyRequestDto::setFromJson(QJsonObject source) {
	m_when = Jellyfin::Support::fromJsonValue<QDateTime>(source["When"]);
	m_positionTicks = Jellyfin::Support::fromJsonValue<qint64>(source["PositionTicks"]);
	m_isPlaying = Jellyfin::Support::fromJsonValue<bool>(source["IsPlaying"]);
	m_playlistItemId = Jellyfin::Support::fromJsonValue<QString>(source["PlaylistItemId"]);

}
	
QJsonObject ReadyRequestDto::toJson() {
	QJsonObject result;
	result["When"] = Jellyfin::Support::toJsonValue<QDateTime>(m_when);
	result["PositionTicks"] = Jellyfin::Support::toJsonValue<qint64>(m_positionTicks);
	result["IsPlaying"] = Jellyfin::Support::toJsonValue<bool>(m_isPlaying);
	result["PlaylistItemId"] = Jellyfin::Support::toJsonValue<QString>(m_playlistItemId);

	return result;
}

QDateTime ReadyRequestDto::when() const { return m_when; }

void ReadyRequestDto::setWhen(QDateTime newWhen) {
	m_when = newWhen;
}

qint64 ReadyRequestDto::positionTicks() const { return m_positionTicks; }

void ReadyRequestDto::setPositionTicks(qint64 newPositionTicks) {
	m_positionTicks = newPositionTicks;
}

bool ReadyRequestDto::isPlaying() const { return m_isPlaying; }

void ReadyRequestDto::setIsPlaying(bool newIsPlaying) {
	m_isPlaying = newIsPlaying;
}

QString ReadyRequestDto::playlistItemId() const { return m_playlistItemId; }

void ReadyRequestDto::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
}


} // NS DTO

namespace Support {

using ReadyRequestDto = Jellyfin::DTO::ReadyRequestDto;

template <>
ReadyRequestDto fromJsonValue<ReadyRequestDto>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return ReadyRequestDto::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
