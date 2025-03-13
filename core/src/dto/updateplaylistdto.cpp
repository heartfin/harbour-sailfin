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

#include <JellyfinQt/dto/updateplaylistdto.h>

namespace Jellyfin {
namespace DTO {

UpdatePlaylistDto::UpdatePlaylistDto() {}

UpdatePlaylistDto::UpdatePlaylistDto(const UpdatePlaylistDto &other) :

	m_name(other.m_name),
	m_ids(other.m_ids),
	m_users(other.m_users),
	m_isPublic(other.m_isPublic){}


void UpdatePlaylistDto::replaceData(UpdatePlaylistDto &other) {
	m_name = other.m_name;
	m_ids = other.m_ids;
	m_users = other.m_users;
	m_isPublic = other.m_isPublic;
}

UpdatePlaylistDto UpdatePlaylistDto::fromJson(QJsonObject source) {
	UpdatePlaylistDto instance;
	instance.setFromJson(source);
	return instance;
}


void UpdatePlaylistDto::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_ids = Jellyfin::Support::fromJsonValue<QStringList>(source["Ids"]);
	m_users = Jellyfin::Support::fromJsonValue<QList<PlaylistUserPermissions>>(source["Users"]);
	m_isPublic = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsPublic"]);

}
	
QJsonObject UpdatePlaylistDto::toJson() const {
	QJsonObject result;
	
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	
	if (!(m_ids.size() == 0)) {
		result["Ids"] = Jellyfin::Support::toJsonValue<QStringList>(m_ids);
	}
			
	
	if (!(m_users.size() == 0)) {
		result["Users"] = Jellyfin::Support::toJsonValue<QList<PlaylistUserPermissions>>(m_users);
	}
			
	
	if (!(!m_isPublic.has_value())) {
		result["IsPublic"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isPublic);
	}
		
	return result;
}

QString UpdatePlaylistDto::name() const { return m_name; }

void UpdatePlaylistDto::setName(QString newName) {
	m_name = newName;
}
bool UpdatePlaylistDto::nameNull() const {
	return m_name.isNull();
}

void UpdatePlaylistDto::setNameNull() {
	m_name.clear();

}
QStringList UpdatePlaylistDto::ids() const { return m_ids; }

void UpdatePlaylistDto::setIds(QStringList newIds) {
	m_ids = newIds;
}
bool UpdatePlaylistDto::idsNull() const {
	return m_ids.size() == 0;
}

void UpdatePlaylistDto::setIdsNull() {
	m_ids.clear();

}
QList<PlaylistUserPermissions> UpdatePlaylistDto::users() const { return m_users; }

void UpdatePlaylistDto::setUsers(QList<PlaylistUserPermissions> newUsers) {
	m_users = newUsers;
}
bool UpdatePlaylistDto::usersNull() const {
	return m_users.size() == 0;
}

void UpdatePlaylistDto::setUsersNull() {
	m_users.clear();

}
std::optional<bool> UpdatePlaylistDto::isPublic() const { return m_isPublic; }

void UpdatePlaylistDto::setIsPublic(std::optional<bool> newIsPublic) {
	m_isPublic = newIsPublic;
}
bool UpdatePlaylistDto::isPublicNull() const {
	return !m_isPublic.has_value();
}

void UpdatePlaylistDto::setIsPublicNull() {
	m_isPublic = std::nullopt;

}

} // NS DTO

namespace Support {

using UpdatePlaylistDto = Jellyfin::DTO::UpdatePlaylistDto;

template <>
UpdatePlaylistDto fromJsonValue(const QJsonValue &source, convertType<UpdatePlaylistDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return UpdatePlaylistDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const UpdatePlaylistDto &source, convertType<UpdatePlaylistDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
