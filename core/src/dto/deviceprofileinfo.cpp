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

#include <JellyfinQt/dto/deviceprofileinfo.h>

namespace Jellyfin {
namespace DTO {

DeviceProfileInfo::DeviceProfileInfo() {}

DeviceProfileInfo::DeviceProfileInfo(const DeviceProfileInfo &other) :

	m_jellyfinId(other.m_jellyfinId),
	m_name(other.m_name),
	m_type(other.m_type){}


void DeviceProfileInfo::replaceData(DeviceProfileInfo &other) {
	m_jellyfinId = other.m_jellyfinId;
	m_name = other.m_name;
	m_type = other.m_type;
}

DeviceProfileInfo DeviceProfileInfo::fromJson(QJsonObject source) {
	DeviceProfileInfo instance;
	instance.setFromJson(source);
	return instance;
}


void DeviceProfileInfo::setFromJson(QJsonObject source) {
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_type = Jellyfin::Support::fromJsonValue<DeviceProfileType>(source["Type"]);

}
	
QJsonObject DeviceProfileInfo::toJson() {
	QJsonObject result;
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["Type"] = Jellyfin::Support::toJsonValue<DeviceProfileType>(m_type);

	return result;
}

QString DeviceProfileInfo::jellyfinId() const { return m_jellyfinId; }

void DeviceProfileInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool DeviceProfileInfo::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void DeviceProfileInfo::setJellyfinIdNull() {
	m_jellyfinId.clear();

}
QString DeviceProfileInfo::name() const { return m_name; }

void DeviceProfileInfo::setName(QString newName) {
	m_name = newName;
}
bool DeviceProfileInfo::nameNull() const {
	return m_name.isNull();
}

void DeviceProfileInfo::setNameNull() {
	m_name.clear();

}
DeviceProfileType DeviceProfileInfo::type() const { return m_type; }

void DeviceProfileInfo::setType(DeviceProfileType newType) {
	m_type = newType;
}


} // NS DTO

namespace Support {

using DeviceProfileInfo = Jellyfin::DTO::DeviceProfileInfo;

template <>
DeviceProfileInfo fromJsonValue<DeviceProfileInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return DeviceProfileInfo::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
