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

#include <JellyfinQt/dto/previousitemrequestdto.h>

namespace Jellyfin {
namespace DTO {

PreviousItemRequestDto::PreviousItemRequestDto() {}
PreviousItemRequestDto::PreviousItemRequestDto (
		QString playlistItemId 
		) :
	m_playlistItemId(playlistItemId) { }



PreviousItemRequestDto::PreviousItemRequestDto(const PreviousItemRequestDto &other) :

	m_playlistItemId(other.m_playlistItemId){}


void PreviousItemRequestDto::replaceData(PreviousItemRequestDto &other) {
	m_playlistItemId = other.m_playlistItemId;
}

PreviousItemRequestDto PreviousItemRequestDto::fromJson(QJsonObject source) {
	PreviousItemRequestDto instance;
	instance.setFromJson(source);
	return instance;
}


void PreviousItemRequestDto::setFromJson(QJsonObject source) {
	m_playlistItemId = Jellyfin::Support::fromJsonValue<QString>(source["PlaylistItemId"]);

}
	
QJsonObject PreviousItemRequestDto::toJson() const {
	QJsonObject result;
	
	result["PlaylistItemId"] = Jellyfin::Support::toJsonValue<QString>(m_playlistItemId);	
	return result;
}

QString PreviousItemRequestDto::playlistItemId() const { return m_playlistItemId; }

void PreviousItemRequestDto::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
}


} // NS DTO

namespace Support {

using PreviousItemRequestDto = Jellyfin::DTO::PreviousItemRequestDto;

template <>
PreviousItemRequestDto fromJsonValue(const QJsonValue &source, convertType<PreviousItemRequestDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return PreviousItemRequestDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const PreviousItemRequestDto &source, convertType<PreviousItemRequestDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
