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

#include <JellyfinQt/DTO/validatepathdto.h>

namespace Jellyfin {
namespace DTO {

ValidatePathDto::ValidatePathDto(QObject *parent) : QObject(parent) {}

ValidatePathDto *ValidatePathDto::fromJSON(QJsonObject source, QObject *parent) {
	ValidatePathDto *instance = new ValidatePathDto(parent);
	instance->updateFromJSON(source);
	return instance;
}

void ValidatePathDto::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject ValidatePathDto::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
bool ValidatePathDto::validateWritable() const { return m_validateWritable; }
void ValidatePathDto::setValidateWritable(bool newValidateWritable) {
	m_validateWritable = newValidateWritable;
	emit validateWritableChanged(newValidateWritable);
}

QString ValidatePathDto::path() const { return m_path; }
void ValidatePathDto::setPath(QString newPath) {
	m_path = newPath;
	emit pathChanged(newPath);
}

bool ValidatePathDto::isFile() const { return m_isFile; }
void ValidatePathDto::setIsFile(bool newIsFile) {
	m_isFile = newIsFile;
	emit isFileChanged(newIsFile);
}


} // NS Jellyfin
} // NS DTO
