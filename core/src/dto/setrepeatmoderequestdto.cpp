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

#include <JellyfinQt/dto/setrepeatmoderequestdto.h>

namespace Jellyfin {
namespace DTO {

SetRepeatModeRequestDto::SetRepeatModeRequestDto() {}

SetRepeatModeRequestDto::SetRepeatModeRequestDto(const SetRepeatModeRequestDto &other) :

	m_mode(other.m_mode){}


void SetRepeatModeRequestDto::replaceData(SetRepeatModeRequestDto &other) {
	m_mode = other.m_mode;
}

SetRepeatModeRequestDto SetRepeatModeRequestDto::fromJson(QJsonObject source) {
	SetRepeatModeRequestDto instance;
	instance.setFromJson(source);
	return instance;
}


void SetRepeatModeRequestDto::setFromJson(QJsonObject source) {
	m_mode = Jellyfin::Support::fromJsonValue<GroupRepeatMode>(source["Mode"]);

}
	
QJsonObject SetRepeatModeRequestDto::toJson() const {
	QJsonObject result;
	
	result["Mode"] = Jellyfin::Support::toJsonValue<GroupRepeatMode>(m_mode);	
	return result;
}

GroupRepeatMode SetRepeatModeRequestDto::mode() const { return m_mode; }

void SetRepeatModeRequestDto::setMode(GroupRepeatMode newMode) {
	m_mode = newMode;
}


} // NS DTO

namespace Support {

using SetRepeatModeRequestDto = Jellyfin::DTO::SetRepeatModeRequestDto;

template <>
SetRepeatModeRequestDto fromJsonValue(const QJsonValue &source, convertType<SetRepeatModeRequestDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return SetRepeatModeRequestDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const SetRepeatModeRequestDto &source, convertType<SetRepeatModeRequestDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
