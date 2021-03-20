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

#include <JellyfinQt/DTO/baseitemperson.h>

namespace Jellyfin {
namespace DTO {

BaseItemPerson::BaseItemPerson(QObject *parent) {}

BaseItemPerson BaseItemPerson::fromJson(QJsonObject source) {BaseItemPerson instance;
	instance->setFromJson(source, false);
	return instance;
}


void BaseItemPerson::setFromJson(QJsonObject source) {
	m_name = fromJsonValue<QString>(source["Name"]);
	m_jellyfinId = fromJsonValue<QString>(source["Id"]);
	m_role = fromJsonValue<QString>(source["Role"]);
	m_type = fromJsonValue<QString>(source["Type"]);
	m_primaryImageTag = fromJsonValue<QString>(source["PrimaryImageTag"]);
	m_imageBlurHashes = fromJsonValue<QJsonObject>(source["ImageBlurHashes"]);

}
	
QJsonObject BaseItemPerson::toJson() {
	QJsonObject result;
	result["Name"] = toJsonValue<QString>(m_name);
	result["Id"] = toJsonValue<QString>(m_jellyfinId);
	result["Role"] = toJsonValue<QString>(m_role);
	result["Type"] = toJsonValue<QString>(m_type);
	result["PrimaryImageTag"] = toJsonValue<QString>(m_primaryImageTag);
	result["ImageBlurHashes"] = toJsonValue<QJsonObject>(m_imageBlurHashes);

	return result;
}

QString BaseItemPerson::name() const { return m_name; }

void BaseItemPerson::setName(QString newName) {
	m_name = newName;
}
QString BaseItemPerson::jellyfinId() const { return m_jellyfinId; }

void BaseItemPerson::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
QString BaseItemPerson::role() const { return m_role; }

void BaseItemPerson::setRole(QString newRole) {
	m_role = newRole;
}
QString BaseItemPerson::type() const { return m_type; }

void BaseItemPerson::setType(QString newType) {
	m_type = newType;
}
QString BaseItemPerson::primaryImageTag() const { return m_primaryImageTag; }

void BaseItemPerson::setPrimaryImageTag(QString newPrimaryImageTag) {
	m_primaryImageTag = newPrimaryImageTag;
}
QJsonObject BaseItemPerson::imageBlurHashes() const { return m_imageBlurHashes; }

void BaseItemPerson::setImageBlurHashes(QJsonObject newImageBlurHashes) {
	m_imageBlurHashes = newImageBlurHashes;
}


} // NS Jellyfin
} // NS DTO
