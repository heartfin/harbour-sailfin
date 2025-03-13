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

#include <JellyfinQt/dto/playlistuserpermissions.h>

namespace Jellyfin {
namespace DTO {

PlaylistUserPermissions::PlaylistUserPermissions() {}
PlaylistUserPermissions::PlaylistUserPermissions (
		QString userId, 
		bool canEdit 
		) :
	m_userId(userId),
	m_canEdit(canEdit) { }



PlaylistUserPermissions::PlaylistUserPermissions(const PlaylistUserPermissions &other) :

	m_userId(other.m_userId),
	m_canEdit(other.m_canEdit){}


void PlaylistUserPermissions::replaceData(PlaylistUserPermissions &other) {
	m_userId = other.m_userId;
	m_canEdit = other.m_canEdit;
}

PlaylistUserPermissions PlaylistUserPermissions::fromJson(QJsonObject source) {
	PlaylistUserPermissions instance;
	instance.setFromJson(source);
	return instance;
}


void PlaylistUserPermissions::setFromJson(QJsonObject source) {
	m_userId = Jellyfin::Support::fromJsonValue<QString>(source["UserId"]);
	m_canEdit = Jellyfin::Support::fromJsonValue<bool>(source["CanEdit"]);

}
	
QJsonObject PlaylistUserPermissions::toJson() const {
	QJsonObject result;
	
	result["UserId"] = Jellyfin::Support::toJsonValue<QString>(m_userId);		
	result["CanEdit"] = Jellyfin::Support::toJsonValue<bool>(m_canEdit);	
	return result;
}

QString PlaylistUserPermissions::userId() const { return m_userId; }

void PlaylistUserPermissions::setUserId(QString newUserId) {
	m_userId = newUserId;
}

bool PlaylistUserPermissions::canEdit() const { return m_canEdit; }

void PlaylistUserPermissions::setCanEdit(bool newCanEdit) {
	m_canEdit = newCanEdit;
}


} // NS DTO

namespace Support {

using PlaylistUserPermissions = Jellyfin::DTO::PlaylistUserPermissions;

template <>
PlaylistUserPermissions fromJsonValue(const QJsonValue &source, convertType<PlaylistUserPermissions>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return PlaylistUserPermissions::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const PlaylistUserPermissions &source, convertType<PlaylistUserPermissions>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
