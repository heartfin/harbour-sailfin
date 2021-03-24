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

#include <JellyfinQt/dto/filesystementryinfo.h>

namespace Jellyfin {
namespace DTO {

FileSystemEntryInfo::FileSystemEntryInfo() {}

FileSystemEntryInfo::FileSystemEntryInfo(const FileSystemEntryInfo &other) :

	m_name(other.m_name),
	m_path(other.m_path),
	m_type(other.m_type){}


void FileSystemEntryInfo::replaceData(FileSystemEntryInfo &other) {
	m_name = other.m_name;
	m_path = other.m_path;
	m_type = other.m_type;
}

FileSystemEntryInfo FileSystemEntryInfo::fromJson(QJsonObject source) {
	FileSystemEntryInfo instance;
	instance.setFromJson(source);
	return instance;
}


void FileSystemEntryInfo::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_path = Jellyfin::Support::fromJsonValue<QString>(source["Path"]);
	m_type = Jellyfin::Support::fromJsonValue<FileSystemEntryType>(source["Type"]);

}
	
QJsonObject FileSystemEntryInfo::toJson() {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["Path"] = Jellyfin::Support::toJsonValue<QString>(m_path);
	result["Type"] = Jellyfin::Support::toJsonValue<FileSystemEntryType>(m_type);

	return result;
}

QString FileSystemEntryInfo::name() const { return m_name; }

void FileSystemEntryInfo::setName(QString newName) {
	m_name = newName;
}
bool FileSystemEntryInfo::nameNull() const {
	return m_name.isNull();
}

void FileSystemEntryInfo::setNameNull() {
	m_name.clear();

}
QString FileSystemEntryInfo::path() const { return m_path; }

void FileSystemEntryInfo::setPath(QString newPath) {
	m_path = newPath;
}
bool FileSystemEntryInfo::pathNull() const {
	return m_path.isNull();
}

void FileSystemEntryInfo::setPathNull() {
	m_path.clear();

}
FileSystemEntryType FileSystemEntryInfo::type() const { return m_type; }

void FileSystemEntryInfo::setType(FileSystemEntryType newType) {
	m_type = newType;
}


} // NS DTO

namespace Support {

using FileSystemEntryInfo = Jellyfin::DTO::FileSystemEntryInfo;

template <>
FileSystemEntryInfo fromJsonValue<FileSystemEntryInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return FileSystemEntryInfo::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
