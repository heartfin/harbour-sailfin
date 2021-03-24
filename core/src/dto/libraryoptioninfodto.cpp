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

#include <JellyfinQt/dto/libraryoptioninfodto.h>

namespace Jellyfin {
namespace DTO {

LibraryOptionInfoDto::LibraryOptionInfoDto() {}

LibraryOptionInfoDto::LibraryOptionInfoDto(const LibraryOptionInfoDto &other) :

	m_name(other.m_name),
	m_defaultEnabled(other.m_defaultEnabled){}


void LibraryOptionInfoDto::replaceData(LibraryOptionInfoDto &other) {
	m_name = other.m_name;
	m_defaultEnabled = other.m_defaultEnabled;
}

LibraryOptionInfoDto LibraryOptionInfoDto::fromJson(QJsonObject source) {
	LibraryOptionInfoDto instance;
	instance.setFromJson(source);
	return instance;
}


void LibraryOptionInfoDto::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_defaultEnabled = Jellyfin::Support::fromJsonValue<bool>(source["DefaultEnabled"]);

}
	
QJsonObject LibraryOptionInfoDto::toJson() {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["DefaultEnabled"] = Jellyfin::Support::toJsonValue<bool>(m_defaultEnabled);

	return result;
}

QString LibraryOptionInfoDto::name() const { return m_name; }

void LibraryOptionInfoDto::setName(QString newName) {
	m_name = newName;
}
bool LibraryOptionInfoDto::nameNull() const {
	return m_name.isNull();
}

void LibraryOptionInfoDto::setNameNull() {
	m_name.clear();

}
bool LibraryOptionInfoDto::defaultEnabled() const { return m_defaultEnabled; }

void LibraryOptionInfoDto::setDefaultEnabled(bool newDefaultEnabled) {
	m_defaultEnabled = newDefaultEnabled;
}


} // NS DTO

namespace Support {

using LibraryOptionInfoDto = Jellyfin::DTO::LibraryOptionInfoDto;

template <>
LibraryOptionInfoDto fromJsonValue<LibraryOptionInfoDto>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return LibraryOptionInfoDto::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
