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

#include <JellyfinQt/dto/fontfile.h>

namespace Jellyfin {
namespace DTO {

FontFile::FontFile() {}

FontFile::FontFile(const FontFile &other) :

	m_name(other.m_name),
	m_size(other.m_size),
	m_dateCreated(other.m_dateCreated),
	m_dateModified(other.m_dateModified){}


void FontFile::replaceData(FontFile &other) {
	m_name = other.m_name;
	m_size = other.m_size;
	m_dateCreated = other.m_dateCreated;
	m_dateModified = other.m_dateModified;
}

FontFile FontFile::fromJson(QJsonObject source) {
	FontFile instance;
	instance.setFromJson(source);
	return instance;
}


void FontFile::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_size = Jellyfin::Support::fromJsonValue<qint64>(source["Size"]);
	m_dateCreated = Jellyfin::Support::fromJsonValue<QDateTime>(source["DateCreated"]);
	m_dateModified = Jellyfin::Support::fromJsonValue<QDateTime>(source["DateModified"]);

}
	
QJsonObject FontFile::toJson() {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["Size"] = Jellyfin::Support::toJsonValue<qint64>(m_size);
	result["DateCreated"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateCreated);
	result["DateModified"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateModified);

	return result;
}

QString FontFile::name() const { return m_name; }

void FontFile::setName(QString newName) {
	m_name = newName;
}
bool FontFile::nameNull() const {
	return m_name.isNull();
}

void FontFile::setNameNull() {
	m_name.clear();

}
qint64 FontFile::size() const { return m_size; }

void FontFile::setSize(qint64 newSize) {
	m_size = newSize;
}

QDateTime FontFile::dateCreated() const { return m_dateCreated; }

void FontFile::setDateCreated(QDateTime newDateCreated) {
	m_dateCreated = newDateCreated;
}

QDateTime FontFile::dateModified() const { return m_dateModified; }

void FontFile::setDateModified(QDateTime newDateModified) {
	m_dateModified = newDateModified;
}


} // NS DTO

namespace Support {

using FontFile = Jellyfin::DTO::FontFile;

template <>
FontFile fromJsonValue<FontFile>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return FontFile::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
