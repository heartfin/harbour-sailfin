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

#include <JellyfinQt/DTO/logfile.h>

namespace Jellyfin {
namespace DTO {

LogFile::LogFile(QObject *parent) : QObject(parent) {}

LogFile *LogFile::fromJSON(QJsonObject source, QObject *parent) {
	LogFile *instance = new LogFile(parent);
	instance->updateFromJSON(source);
	return instance;
}

void LogFile::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject LogFile::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QDateTime LogFile::dateCreated() const { return m_dateCreated; }
void LogFile::setDateCreated(QDateTime newDateCreated) {
	m_dateCreated = newDateCreated;
	emit dateCreatedChanged(newDateCreated);
}

QDateTime LogFile::dateModified() const { return m_dateModified; }
void LogFile::setDateModified(QDateTime newDateModified) {
	m_dateModified = newDateModified;
	emit dateModifiedChanged(newDateModified);
}

qint64 LogFile::size() const { return m_size; }
void LogFile::setSize(qint64 newSize) {
	m_size = newSize;
	emit sizeChanged(newSize);
}

QString LogFile::name() const { return m_name; }
void LogFile::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}


} // NS Jellyfin
} // NS DTO
