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

#include <JellyfinQt/dto/mediaupdateinfopathdto.h>

namespace Jellyfin {
namespace DTO {

MediaUpdateInfoPathDto::MediaUpdateInfoPathDto() {}

MediaUpdateInfoPathDto::MediaUpdateInfoPathDto(const MediaUpdateInfoPathDto &other) :

	m_path(other.m_path),
	m_updateType(other.m_updateType){}


void MediaUpdateInfoPathDto::replaceData(MediaUpdateInfoPathDto &other) {
	m_path = other.m_path;
	m_updateType = other.m_updateType;
}

MediaUpdateInfoPathDto MediaUpdateInfoPathDto::fromJson(QJsonObject source) {
	MediaUpdateInfoPathDto instance;
	instance.setFromJson(source);
	return instance;
}


void MediaUpdateInfoPathDto::setFromJson(QJsonObject source) {
	m_path = Jellyfin::Support::fromJsonValue<QString>(source["Path"]);
	m_updateType = Jellyfin::Support::fromJsonValue<QString>(source["UpdateType"]);

}
	
QJsonObject MediaUpdateInfoPathDto::toJson() const {
	QJsonObject result;
	
	
	if (!(m_path.isNull())) {
		result["Path"] = Jellyfin::Support::toJsonValue<QString>(m_path);
	}
			
	
	if (!(m_updateType.isNull())) {
		result["UpdateType"] = Jellyfin::Support::toJsonValue<QString>(m_updateType);
	}
		
	return result;
}

QString MediaUpdateInfoPathDto::path() const { return m_path; }

void MediaUpdateInfoPathDto::setPath(QString newPath) {
	m_path = newPath;
}
bool MediaUpdateInfoPathDto::pathNull() const {
	return m_path.isNull();
}

void MediaUpdateInfoPathDto::setPathNull() {
	m_path.clear();

}
QString MediaUpdateInfoPathDto::updateType() const { return m_updateType; }

void MediaUpdateInfoPathDto::setUpdateType(QString newUpdateType) {
	m_updateType = newUpdateType;
}
bool MediaUpdateInfoPathDto::updateTypeNull() const {
	return m_updateType.isNull();
}

void MediaUpdateInfoPathDto::setUpdateTypeNull() {
	m_updateType.clear();

}

} // NS DTO

namespace Support {

using MediaUpdateInfoPathDto = Jellyfin::DTO::MediaUpdateInfoPathDto;

template <>
MediaUpdateInfoPathDto fromJsonValue(const QJsonValue &source, convertType<MediaUpdateInfoPathDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return MediaUpdateInfoPathDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const MediaUpdateInfoPathDto &source, convertType<MediaUpdateInfoPathDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
