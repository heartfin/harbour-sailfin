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

#include <JellyfinQt/dto/mediasegmentdto.h>

namespace Jellyfin {
namespace DTO {

MediaSegmentDto::MediaSegmentDto() {}
MediaSegmentDto::MediaSegmentDto (
		QString jellyfinId, 
		QString itemId, 
		MediaSegmentType type, 
		qint64 startTicks, 
		qint64 endTicks 
		) :
	m_jellyfinId(jellyfinId),
	m_itemId(itemId),
	m_type(type),
	m_startTicks(startTicks),
	m_endTicks(endTicks) { }



MediaSegmentDto::MediaSegmentDto(const MediaSegmentDto &other) :

	m_jellyfinId(other.m_jellyfinId),
	m_itemId(other.m_itemId),
	m_type(other.m_type),
	m_startTicks(other.m_startTicks),
	m_endTicks(other.m_endTicks){}


void MediaSegmentDto::replaceData(MediaSegmentDto &other) {
	m_jellyfinId = other.m_jellyfinId;
	m_itemId = other.m_itemId;
	m_type = other.m_type;
	m_startTicks = other.m_startTicks;
	m_endTicks = other.m_endTicks;
}

MediaSegmentDto MediaSegmentDto::fromJson(QJsonObject source) {
	MediaSegmentDto instance;
	instance.setFromJson(source);
	return instance;
}


void MediaSegmentDto::setFromJson(QJsonObject source) {
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_itemId = Jellyfin::Support::fromJsonValue<QString>(source["ItemId"]);
	m_type = Jellyfin::Support::fromJsonValue<MediaSegmentType>(source["Type"]);
	m_startTicks = Jellyfin::Support::fromJsonValue<qint64>(source["StartTicks"]);
	m_endTicks = Jellyfin::Support::fromJsonValue<qint64>(source["EndTicks"]);

}
	
QJsonObject MediaSegmentDto::toJson() const {
	QJsonObject result;
	
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);		
	result["ItemId"] = Jellyfin::Support::toJsonValue<QString>(m_itemId);		
	result["Type"] = Jellyfin::Support::toJsonValue<MediaSegmentType>(m_type);		
	result["StartTicks"] = Jellyfin::Support::toJsonValue<qint64>(m_startTicks);		
	result["EndTicks"] = Jellyfin::Support::toJsonValue<qint64>(m_endTicks);	
	return result;
}

QString MediaSegmentDto::jellyfinId() const { return m_jellyfinId; }

void MediaSegmentDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}

QString MediaSegmentDto::itemId() const { return m_itemId; }

void MediaSegmentDto::setItemId(QString newItemId) {
	m_itemId = newItemId;
}

MediaSegmentType MediaSegmentDto::type() const { return m_type; }

void MediaSegmentDto::setType(MediaSegmentType newType) {
	m_type = newType;
}

qint64 MediaSegmentDto::startTicks() const { return m_startTicks; }

void MediaSegmentDto::setStartTicks(qint64 newStartTicks) {
	m_startTicks = newStartTicks;
}

qint64 MediaSegmentDto::endTicks() const { return m_endTicks; }

void MediaSegmentDto::setEndTicks(qint64 newEndTicks) {
	m_endTicks = newEndTicks;
}


} // NS DTO

namespace Support {

using MediaSegmentDto = Jellyfin::DTO::MediaSegmentDto;

template <>
MediaSegmentDto fromJsonValue(const QJsonValue &source, convertType<MediaSegmentDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return MediaSegmentDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const MediaSegmentDto &source, convertType<MediaSegmentDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
