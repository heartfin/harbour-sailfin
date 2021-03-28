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

#include <JellyfinQt/dto/createplaylistdto.h>

namespace Jellyfin {
namespace DTO {

CreatePlaylistDto::CreatePlaylistDto() {}

CreatePlaylistDto::CreatePlaylistDto(const CreatePlaylistDto &other) :

	m_name(other.m_name),
	m_ids(other.m_ids),
	m_userId(other.m_userId),
	m_mediaType(other.m_mediaType){}


void CreatePlaylistDto::replaceData(CreatePlaylistDto &other) {
	m_name = other.m_name;
	m_ids = other.m_ids;
	m_userId = other.m_userId;
	m_mediaType = other.m_mediaType;
}

CreatePlaylistDto CreatePlaylistDto::fromJson(QJsonObject source) {
	CreatePlaylistDto instance;
	instance.setFromJson(source);
	return instance;
}


void CreatePlaylistDto::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_ids = Jellyfin::Support::fromJsonValue<QStringList>(source["Ids"]);
	m_userId = Jellyfin::Support::fromJsonValue<QString>(source["UserId"]);
	m_mediaType = Jellyfin::Support::fromJsonValue<QString>(source["MediaType"]);

}
	
QJsonObject CreatePlaylistDto::toJson() const {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["Ids"] = Jellyfin::Support::toJsonValue<QStringList>(m_ids);
	result["UserId"] = Jellyfin::Support::toJsonValue<QString>(m_userId);
	result["MediaType"] = Jellyfin::Support::toJsonValue<QString>(m_mediaType);

	return result;
}

QString CreatePlaylistDto::name() const { return m_name; }

void CreatePlaylistDto::setName(QString newName) {
	m_name = newName;
}
bool CreatePlaylistDto::nameNull() const {
	return m_name.isNull();
}

void CreatePlaylistDto::setNameNull() {
	m_name.clear();

}
QStringList CreatePlaylistDto::ids() const { return m_ids; }

void CreatePlaylistDto::setIds(QStringList newIds) {
	m_ids = newIds;
}
bool CreatePlaylistDto::idsNull() const {
	return m_ids.size() == 0;
}

void CreatePlaylistDto::setIdsNull() {
	m_ids.clear();

}
QString CreatePlaylistDto::userId() const { return m_userId; }

void CreatePlaylistDto::setUserId(QString newUserId) {
	m_userId = newUserId;
}
bool CreatePlaylistDto::userIdNull() const {
	return m_userId.isNull();
}

void CreatePlaylistDto::setUserIdNull() {
	m_userId.clear();

}
QString CreatePlaylistDto::mediaType() const { return m_mediaType; }

void CreatePlaylistDto::setMediaType(QString newMediaType) {
	m_mediaType = newMediaType;
}
bool CreatePlaylistDto::mediaTypeNull() const {
	return m_mediaType.isNull();
}

void CreatePlaylistDto::setMediaTypeNull() {
	m_mediaType.clear();

}

} // NS DTO

namespace Support {

using CreatePlaylistDto = Jellyfin::DTO::CreatePlaylistDto;

template <>
CreatePlaylistDto fromJsonValue(const QJsonValue &source, convertType<CreatePlaylistDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return CreatePlaylistDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const CreatePlaylistDto &source, convertType<CreatePlaylistDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
