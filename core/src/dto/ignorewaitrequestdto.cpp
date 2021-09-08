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

#include <JellyfinQt/dto/ignorewaitrequestdto.h>

namespace Jellyfin {
namespace DTO {

IgnoreWaitRequestDto::IgnoreWaitRequestDto() {}

IgnoreWaitRequestDto::IgnoreWaitRequestDto(const IgnoreWaitRequestDto &other) :

	m_ignoreWait(other.m_ignoreWait){}


void IgnoreWaitRequestDto::replaceData(IgnoreWaitRequestDto &other) {
	m_ignoreWait = other.m_ignoreWait;
}

IgnoreWaitRequestDto IgnoreWaitRequestDto::fromJson(QJsonObject source) {
	IgnoreWaitRequestDto instance;
	instance.setFromJson(source);
	return instance;
}


void IgnoreWaitRequestDto::setFromJson(QJsonObject source) {
	m_ignoreWait = Jellyfin::Support::fromJsonValue<bool>(source["IgnoreWait"]);

}
	
QJsonObject IgnoreWaitRequestDto::toJson() const {
	QJsonObject result;
	
	result["IgnoreWait"] = Jellyfin::Support::toJsonValue<bool>(m_ignoreWait);	
	return result;
}

bool IgnoreWaitRequestDto::ignoreWait() const { return m_ignoreWait; }

void IgnoreWaitRequestDto::setIgnoreWait(bool newIgnoreWait) {
	m_ignoreWait = newIgnoreWait;
}


} // NS DTO

namespace Support {

using IgnoreWaitRequestDto = Jellyfin::DTO::IgnoreWaitRequestDto;

template <>
IgnoreWaitRequestDto fromJsonValue(const QJsonValue &source, convertType<IgnoreWaitRequestDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return IgnoreWaitRequestDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const IgnoreWaitRequestDto &source, convertType<IgnoreWaitRequestDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
