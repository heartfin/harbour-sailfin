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

#include <JellyfinQt/dto/baseitemperson.h>

namespace Jellyfin {
namespace DTO {

BaseItemPerson::BaseItemPerson() {}
BaseItemPerson::BaseItemPerson (
		QString jellyfinId, 
		PersonKind type 
		) :
	m_jellyfinId(jellyfinId),
	m_type(type) { }



BaseItemPerson::BaseItemPerson(const BaseItemPerson &other) :

	m_name(other.m_name),
	m_jellyfinId(other.m_jellyfinId),
	m_role(other.m_role),
	m_type(other.m_type),
	m_primaryImageTag(other.m_primaryImageTag),
	m_imageBlurHashes(other.m_imageBlurHashes){}


void BaseItemPerson::replaceData(BaseItemPerson &other) {
	m_name = other.m_name;
	m_jellyfinId = other.m_jellyfinId;
	m_role = other.m_role;
	m_type = other.m_type;
	m_primaryImageTag = other.m_primaryImageTag;
	m_imageBlurHashes = other.m_imageBlurHashes;
}

BaseItemPerson BaseItemPerson::fromJson(QJsonObject source) {
	BaseItemPerson instance;
	instance.setFromJson(source);
	return instance;
}


void BaseItemPerson::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_role = Jellyfin::Support::fromJsonValue<QString>(source["Role"]);
	m_type = Jellyfin::Support::fromJsonValue<PersonKind>(source["Type"]);
	m_primaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["PrimaryImageTag"]);
	m_imageBlurHashes = Jellyfin::Support::fromJsonValue<QJsonObject>(source["ImageBlurHashes"]);

}
	
QJsonObject BaseItemPerson::toJson() const {
	QJsonObject result;
	
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);		
	
	if (!(m_role.isNull())) {
		result["Role"] = Jellyfin::Support::toJsonValue<QString>(m_role);
	}
			
	result["Type"] = Jellyfin::Support::toJsonValue<PersonKind>(m_type);		
	
	if (!(m_primaryImageTag.isNull())) {
		result["PrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_primaryImageTag);
	}
			
	
	if (!(m_imageBlurHashes.isEmpty())) {
		result["ImageBlurHashes"] = Jellyfin::Support::toJsonValue<QJsonObject>(m_imageBlurHashes);
	}
		
	return result;
}

QString BaseItemPerson::name() const { return m_name; }

void BaseItemPerson::setName(QString newName) {
	m_name = newName;
}
bool BaseItemPerson::nameNull() const {
	return m_name.isNull();
}

void BaseItemPerson::setNameNull() {
	m_name.clear();

}
QString BaseItemPerson::jellyfinId() const { return m_jellyfinId; }

void BaseItemPerson::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}

QString BaseItemPerson::role() const { return m_role; }

void BaseItemPerson::setRole(QString newRole) {
	m_role = newRole;
}
bool BaseItemPerson::roleNull() const {
	return m_role.isNull();
}

void BaseItemPerson::setRoleNull() {
	m_role.clear();

}
PersonKind BaseItemPerson::type() const { return m_type; }

void BaseItemPerson::setType(PersonKind newType) {
	m_type = newType;
}

QString BaseItemPerson::primaryImageTag() const { return m_primaryImageTag; }

void BaseItemPerson::setPrimaryImageTag(QString newPrimaryImageTag) {
	m_primaryImageTag = newPrimaryImageTag;
}
bool BaseItemPerson::primaryImageTagNull() const {
	return m_primaryImageTag.isNull();
}

void BaseItemPerson::setPrimaryImageTagNull() {
	m_primaryImageTag.clear();

}
QJsonObject BaseItemPerson::imageBlurHashes() const { return m_imageBlurHashes; }

void BaseItemPerson::setImageBlurHashes(QJsonObject newImageBlurHashes) {
	m_imageBlurHashes = newImageBlurHashes;
}
bool BaseItemPerson::imageBlurHashesNull() const {
	return m_imageBlurHashes.isEmpty();
}

void BaseItemPerson::setImageBlurHashesNull() {
	m_imageBlurHashes= QJsonObject();

}

} // NS DTO

namespace Support {

using BaseItemPerson = Jellyfin::DTO::BaseItemPerson;

template <>
BaseItemPerson fromJsonValue(const QJsonValue &source, convertType<BaseItemPerson>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return BaseItemPerson::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const BaseItemPerson &source, convertType<BaseItemPerson>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
