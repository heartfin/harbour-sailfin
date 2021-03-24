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

#include <JellyfinQt/dto/defaultdirectorybrowserinfodto.h>

namespace Jellyfin {
namespace DTO {

DefaultDirectoryBrowserInfoDto::DefaultDirectoryBrowserInfoDto() {}

DefaultDirectoryBrowserInfoDto::DefaultDirectoryBrowserInfoDto(const DefaultDirectoryBrowserInfoDto &other) :

	m_path(other.m_path){}


void DefaultDirectoryBrowserInfoDto::replaceData(DefaultDirectoryBrowserInfoDto &other) {
	m_path = other.m_path;
}

DefaultDirectoryBrowserInfoDto DefaultDirectoryBrowserInfoDto::fromJson(QJsonObject source) {
	DefaultDirectoryBrowserInfoDto instance;
	instance.setFromJson(source);
	return instance;
}


void DefaultDirectoryBrowserInfoDto::setFromJson(QJsonObject source) {
	m_path = Jellyfin::Support::fromJsonValue<QString>(source["Path"]);

}
	
QJsonObject DefaultDirectoryBrowserInfoDto::toJson() {
	QJsonObject result;
	result["Path"] = Jellyfin::Support::toJsonValue<QString>(m_path);

	return result;
}

QString DefaultDirectoryBrowserInfoDto::path() const { return m_path; }

void DefaultDirectoryBrowserInfoDto::setPath(QString newPath) {
	m_path = newPath;
}
bool DefaultDirectoryBrowserInfoDto::pathNull() const {
	return m_path.isNull();
}

void DefaultDirectoryBrowserInfoDto::setPathNull() {
	m_path.clear();

}

} // NS DTO

namespace Support {

using DefaultDirectoryBrowserInfoDto = Jellyfin::DTO::DefaultDirectoryBrowserInfoDto;

template <>
DefaultDirectoryBrowserInfoDto fromJsonValue<DefaultDirectoryBrowserInfoDto>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return DefaultDirectoryBrowserInfoDto::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
