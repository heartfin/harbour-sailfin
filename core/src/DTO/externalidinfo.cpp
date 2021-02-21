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

#include <JellyfinQt/DTO/externalidinfo.h>

#include <JellyfinQt/DTO/externalidmediatype.h>

namespace Jellyfin {
namespace DTO {

ExternalIdInfo::ExternalIdInfo(QObject *parent) : QObject(parent) {}

ExternalIdInfo *ExternalIdInfo::fromJSON(QJsonObject source, QObject *parent) {
	ExternalIdInfo *instance = new ExternalIdInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void ExternalIdInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject ExternalIdInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString ExternalIdInfo::name() const { return m_name; }
void ExternalIdInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString ExternalIdInfo::key() const { return m_key; }
void ExternalIdInfo::setKey(QString newKey) {
	m_key = newKey;
	emit keyChanged(newKey);
}

ExternalIdMediaType ExternalIdInfo::type() const { return m_type; }
void ExternalIdInfo::setType(ExternalIdMediaType newType) {
	m_type = newType;
	emit typeChanged(newType);
}

QString ExternalIdInfo::urlFormatString() const { return m_urlFormatString; }
void ExternalIdInfo::setUrlFormatString(QString newUrlFormatString) {
	m_urlFormatString = newUrlFormatString;
	emit urlFormatStringChanged(newUrlFormatString);
}


} // NS Jellyfin
} // NS DTO
