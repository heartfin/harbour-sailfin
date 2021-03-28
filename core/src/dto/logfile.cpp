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

#include <JellyfinQt/dto/logfile.h>

namespace Jellyfin {
namespace DTO {

LogFile::LogFile() {}

LogFile::LogFile(const LogFile &other) :

	m_dateCreated(other.m_dateCreated),
	m_dateModified(other.m_dateModified),
	m_size(other.m_size),
	m_name(other.m_name){}


void LogFile::replaceData(LogFile &other) {
	m_dateCreated = other.m_dateCreated;
	m_dateModified = other.m_dateModified;
	m_size = other.m_size;
	m_name = other.m_name;
}

LogFile LogFile::fromJson(QJsonObject source) {
	LogFile instance;
	instance.setFromJson(source);
	return instance;
}


void LogFile::setFromJson(QJsonObject source) {
	m_dateCreated = Jellyfin::Support::fromJsonValue<QDateTime>(source["DateCreated"]);
	m_dateModified = Jellyfin::Support::fromJsonValue<QDateTime>(source["DateModified"]);
	m_size = Jellyfin::Support::fromJsonValue<qint64>(source["Size"]);
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);

}
	
QJsonObject LogFile::toJson() const {
	QJsonObject result;
	result["DateCreated"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateCreated);
	result["DateModified"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateModified);
	result["Size"] = Jellyfin::Support::toJsonValue<qint64>(m_size);
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);

	return result;
}

QDateTime LogFile::dateCreated() const { return m_dateCreated; }

void LogFile::setDateCreated(QDateTime newDateCreated) {
	m_dateCreated = newDateCreated;
}

QDateTime LogFile::dateModified() const { return m_dateModified; }

void LogFile::setDateModified(QDateTime newDateModified) {
	m_dateModified = newDateModified;
}

qint64 LogFile::size() const { return m_size; }

void LogFile::setSize(qint64 newSize) {
	m_size = newSize;
}

QString LogFile::name() const { return m_name; }

void LogFile::setName(QString newName) {
	m_name = newName;
}
bool LogFile::nameNull() const {
	return m_name.isNull();
}

void LogFile::setNameNull() {
	m_name.clear();

}

} // NS DTO

namespace Support {

using LogFile = Jellyfin::DTO::LogFile;

template <>
LogFile fromJsonValue(const QJsonValue &source, convertType<LogFile>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return LogFile::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const LogFile &source, convertType<LogFile>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
