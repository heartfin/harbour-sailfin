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

#include <JellyfinQt/dto/startupremoteaccessdto.h>

namespace Jellyfin {
namespace DTO {

StartupRemoteAccessDto::StartupRemoteAccessDto() {}

StartupRemoteAccessDto::StartupRemoteAccessDto(const StartupRemoteAccessDto &other) :

	m_enableRemoteAccess(other.m_enableRemoteAccess),
	m_enableAutomaticPortMapping(other.m_enableAutomaticPortMapping){}


void StartupRemoteAccessDto::replaceData(StartupRemoteAccessDto &other) {
	m_enableRemoteAccess = other.m_enableRemoteAccess;
	m_enableAutomaticPortMapping = other.m_enableAutomaticPortMapping;
}

StartupRemoteAccessDto StartupRemoteAccessDto::fromJson(QJsonObject source) {
	StartupRemoteAccessDto instance;
	instance.setFromJson(source);
	return instance;
}


void StartupRemoteAccessDto::setFromJson(QJsonObject source) {
	m_enableRemoteAccess = Jellyfin::Support::fromJsonValue<bool>(source["EnableRemoteAccess"]);
	m_enableAutomaticPortMapping = Jellyfin::Support::fromJsonValue<bool>(source["EnableAutomaticPortMapping"]);

}
	
QJsonObject StartupRemoteAccessDto::toJson() const {
	QJsonObject result;
	
	result["EnableRemoteAccess"] = Jellyfin::Support::toJsonValue<bool>(m_enableRemoteAccess);		
	result["EnableAutomaticPortMapping"] = Jellyfin::Support::toJsonValue<bool>(m_enableAutomaticPortMapping);	
	return result;
}

bool StartupRemoteAccessDto::enableRemoteAccess() const { return m_enableRemoteAccess; }

void StartupRemoteAccessDto::setEnableRemoteAccess(bool newEnableRemoteAccess) {
	m_enableRemoteAccess = newEnableRemoteAccess;
}

bool StartupRemoteAccessDto::enableAutomaticPortMapping() const { return m_enableAutomaticPortMapping; }

void StartupRemoteAccessDto::setEnableAutomaticPortMapping(bool newEnableAutomaticPortMapping) {
	m_enableAutomaticPortMapping = newEnableAutomaticPortMapping;
}


} // NS DTO

namespace Support {

using StartupRemoteAccessDto = Jellyfin::DTO::StartupRemoteAccessDto;

template <>
StartupRemoteAccessDto fromJsonValue(const QJsonValue &source, convertType<StartupRemoteAccessDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return StartupRemoteAccessDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const StartupRemoteAccessDto &source, convertType<StartupRemoteAccessDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
