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

#include <JellyfinQt/dto/playlistdto.h>

namespace Jellyfin {
namespace DTO {

PlaylistDto::PlaylistDto() {}
PlaylistDto::PlaylistDto (
		bool openAccess, 
		QList<PlaylistUserPermissions> shares, 
		QStringList itemIds 
		) :
	m_openAccess(openAccess),
	m_shares(shares),
	m_itemIds(itemIds) { }



PlaylistDto::PlaylistDto(const PlaylistDto &other) :

	m_openAccess(other.m_openAccess),
	m_shares(other.m_shares),
	m_itemIds(other.m_itemIds){}


void PlaylistDto::replaceData(PlaylistDto &other) {
	m_openAccess = other.m_openAccess;
	m_shares = other.m_shares;
	m_itemIds = other.m_itemIds;
}

PlaylistDto PlaylistDto::fromJson(QJsonObject source) {
	PlaylistDto instance;
	instance.setFromJson(source);
	return instance;
}


void PlaylistDto::setFromJson(QJsonObject source) {
	m_openAccess = Jellyfin::Support::fromJsonValue<bool>(source["OpenAccess"]);
	m_shares = Jellyfin::Support::fromJsonValue<QList<PlaylistUserPermissions>>(source["Shares"]);
	m_itemIds = Jellyfin::Support::fromJsonValue<QStringList>(source["ItemIds"]);

}
	
QJsonObject PlaylistDto::toJson() const {
	QJsonObject result;
	
	result["OpenAccess"] = Jellyfin::Support::toJsonValue<bool>(m_openAccess);		
	result["Shares"] = Jellyfin::Support::toJsonValue<QList<PlaylistUserPermissions>>(m_shares);		
	result["ItemIds"] = Jellyfin::Support::toJsonValue<QStringList>(m_itemIds);	
	return result;
}

bool PlaylistDto::openAccess() const { return m_openAccess; }

void PlaylistDto::setOpenAccess(bool newOpenAccess) {
	m_openAccess = newOpenAccess;
}

QList<PlaylistUserPermissions> PlaylistDto::shares() const { return m_shares; }

void PlaylistDto::setShares(QList<PlaylistUserPermissions> newShares) {
	m_shares = newShares;
}

QStringList PlaylistDto::itemIds() const { return m_itemIds; }

void PlaylistDto::setItemIds(QStringList newItemIds) {
	m_itemIds = newItemIds;
}


} // NS DTO

namespace Support {

using PlaylistDto = Jellyfin::DTO::PlaylistDto;

template <>
PlaylistDto fromJsonValue(const QJsonValue &source, convertType<PlaylistDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return PlaylistDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const PlaylistDto &source, convertType<PlaylistDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
