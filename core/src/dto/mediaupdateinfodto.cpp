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

#include <JellyfinQt/dto/mediaupdateinfodto.h>

namespace Jellyfin {
namespace DTO {

MediaUpdateInfoDto::MediaUpdateInfoDto() {}
MediaUpdateInfoDto::MediaUpdateInfoDto (
		QList<MediaUpdateInfoPathDto> updates 
		) :
	m_updates(updates) { }



MediaUpdateInfoDto::MediaUpdateInfoDto(const MediaUpdateInfoDto &other) :

	m_updates(other.m_updates){}


void MediaUpdateInfoDto::replaceData(MediaUpdateInfoDto &other) {
	m_updates = other.m_updates;
}

MediaUpdateInfoDto MediaUpdateInfoDto::fromJson(QJsonObject source) {
	MediaUpdateInfoDto instance;
	instance.setFromJson(source);
	return instance;
}


void MediaUpdateInfoDto::setFromJson(QJsonObject source) {
	m_updates = Jellyfin::Support::fromJsonValue<QList<MediaUpdateInfoPathDto>>(source["Updates"]);

}
	
QJsonObject MediaUpdateInfoDto::toJson() const {
	QJsonObject result;
	
	result["Updates"] = Jellyfin::Support::toJsonValue<QList<MediaUpdateInfoPathDto>>(m_updates);	
	return result;
}

QList<MediaUpdateInfoPathDto> MediaUpdateInfoDto::updates() const { return m_updates; }

void MediaUpdateInfoDto::setUpdates(QList<MediaUpdateInfoPathDto> newUpdates) {
	m_updates = newUpdates;
}


} // NS DTO

namespace Support {

using MediaUpdateInfoDto = Jellyfin::DTO::MediaUpdateInfoDto;

template <>
MediaUpdateInfoDto fromJsonValue(const QJsonValue &source, convertType<MediaUpdateInfoDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return MediaUpdateInfoDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const MediaUpdateInfoDto &source, convertType<MediaUpdateInfoDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
