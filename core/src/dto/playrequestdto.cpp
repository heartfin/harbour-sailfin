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

#include <JellyfinQt/dto/playrequestdto.h>

namespace Jellyfin {
namespace DTO {

PlayRequestDto::PlayRequestDto() {}
PlayRequestDto::PlayRequestDto (
		QStringList playingQueue, 
		qint32 playingItemPosition, 
		qint64 startPositionTicks 
		) :
	m_playingQueue(playingQueue),
	m_playingItemPosition(playingItemPosition),
	m_startPositionTicks(startPositionTicks) { }



PlayRequestDto::PlayRequestDto(const PlayRequestDto &other) :

	m_playingQueue(other.m_playingQueue),
	m_playingItemPosition(other.m_playingItemPosition),
	m_startPositionTicks(other.m_startPositionTicks){}


void PlayRequestDto::replaceData(PlayRequestDto &other) {
	m_playingQueue = other.m_playingQueue;
	m_playingItemPosition = other.m_playingItemPosition;
	m_startPositionTicks = other.m_startPositionTicks;
}

PlayRequestDto PlayRequestDto::fromJson(QJsonObject source) {
	PlayRequestDto instance;
	instance.setFromJson(source);
	return instance;
}


void PlayRequestDto::setFromJson(QJsonObject source) {
	m_playingQueue = Jellyfin::Support::fromJsonValue<QStringList>(source["PlayingQueue"]);
	m_playingItemPosition = Jellyfin::Support::fromJsonValue<qint32>(source["PlayingItemPosition"]);
	m_startPositionTicks = Jellyfin::Support::fromJsonValue<qint64>(source["StartPositionTicks"]);

}
	
QJsonObject PlayRequestDto::toJson() const {
	QJsonObject result;
	
	result["PlayingQueue"] = Jellyfin::Support::toJsonValue<QStringList>(m_playingQueue);		
	result["PlayingItemPosition"] = Jellyfin::Support::toJsonValue<qint32>(m_playingItemPosition);		
	result["StartPositionTicks"] = Jellyfin::Support::toJsonValue<qint64>(m_startPositionTicks);	
	return result;
}

QStringList PlayRequestDto::playingQueue() const { return m_playingQueue; }

void PlayRequestDto::setPlayingQueue(QStringList newPlayingQueue) {
	m_playingQueue = newPlayingQueue;
}

qint32 PlayRequestDto::playingItemPosition() const { return m_playingItemPosition; }

void PlayRequestDto::setPlayingItemPosition(qint32 newPlayingItemPosition) {
	m_playingItemPosition = newPlayingItemPosition;
}

qint64 PlayRequestDto::startPositionTicks() const { return m_startPositionTicks; }

void PlayRequestDto::setStartPositionTicks(qint64 newStartPositionTicks) {
	m_startPositionTicks = newStartPositionTicks;
}


} // NS DTO

namespace Support {

using PlayRequestDto = Jellyfin::DTO::PlayRequestDto;

template <>
PlayRequestDto fromJsonValue(const QJsonValue &source, convertType<PlayRequestDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return PlayRequestDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const PlayRequestDto &source, convertType<PlayRequestDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
