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

#include <JellyfinQt/dto/startupuserdto.h>

namespace Jellyfin {
namespace DTO {

StartupUserDto::StartupUserDto() {}

StartupUserDto::StartupUserDto(const StartupUserDto &other) :

	m_name(other.m_name),
	m_password(other.m_password){}


void StartupUserDto::replaceData(StartupUserDto &other) {
	m_name = other.m_name;
	m_password = other.m_password;
}

StartupUserDto StartupUserDto::fromJson(QJsonObject source) {
	StartupUserDto instance;
	instance.setFromJson(source);
	return instance;
}


void StartupUserDto::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_password = Jellyfin::Support::fromJsonValue<QString>(source["Password"]);

}
	
QJsonObject StartupUserDto::toJson() const {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["Password"] = Jellyfin::Support::toJsonValue<QString>(m_password);

	return result;
}

QString StartupUserDto::name() const { return m_name; }

void StartupUserDto::setName(QString newName) {
	m_name = newName;
}
bool StartupUserDto::nameNull() const {
	return m_name.isNull();
}

void StartupUserDto::setNameNull() {
	m_name.clear();

}
QString StartupUserDto::password() const { return m_password; }

void StartupUserDto::setPassword(QString newPassword) {
	m_password = newPassword;
}
bool StartupUserDto::passwordNull() const {
	return m_password.isNull();
}

void StartupUserDto::setPasswordNull() {
	m_password.clear();

}

} // NS DTO

namespace Support {

using StartupUserDto = Jellyfin::DTO::StartupUserDto;

template <>
StartupUserDto fromJsonValue(const QJsonValue &source, convertType<StartupUserDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return StartupUserDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const StartupUserDto &source, convertType<StartupUserDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
