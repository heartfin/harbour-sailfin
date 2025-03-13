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

#include <JellyfinQt/dto/deviceoptionsdto.h>

namespace Jellyfin {
namespace DTO {

DeviceOptionsDto::DeviceOptionsDto() {}
DeviceOptionsDto::DeviceOptionsDto (
		qint32 jellyfinId 
		) :
	m_jellyfinId(jellyfinId) { }



DeviceOptionsDto::DeviceOptionsDto(const DeviceOptionsDto &other) :

	m_jellyfinId(other.m_jellyfinId),
	m_deviceId(other.m_deviceId),
	m_customName(other.m_customName){}


void DeviceOptionsDto::replaceData(DeviceOptionsDto &other) {
	m_jellyfinId = other.m_jellyfinId;
	m_deviceId = other.m_deviceId;
	m_customName = other.m_customName;
}

DeviceOptionsDto DeviceOptionsDto::fromJson(QJsonObject source) {
	DeviceOptionsDto instance;
	instance.setFromJson(source);
	return instance;
}


void DeviceOptionsDto::setFromJson(QJsonObject source) {
	m_jellyfinId = Jellyfin::Support::fromJsonValue<qint32>(source["Id"]);
	m_deviceId = Jellyfin::Support::fromJsonValue<QString>(source["DeviceId"]);
	m_customName = Jellyfin::Support::fromJsonValue<QString>(source["CustomName"]);

}
	
QJsonObject DeviceOptionsDto::toJson() const {
	QJsonObject result;
	
	result["Id"] = Jellyfin::Support::toJsonValue<qint32>(m_jellyfinId);		
	
	if (!(m_deviceId.isNull())) {
		result["DeviceId"] = Jellyfin::Support::toJsonValue<QString>(m_deviceId);
	}
			
	
	if (!(m_customName.isNull())) {
		result["CustomName"] = Jellyfin::Support::toJsonValue<QString>(m_customName);
	}
		
	return result;
}

qint32 DeviceOptionsDto::jellyfinId() const { return m_jellyfinId; }

void DeviceOptionsDto::setJellyfinId(qint32 newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}

QString DeviceOptionsDto::deviceId() const { return m_deviceId; }

void DeviceOptionsDto::setDeviceId(QString newDeviceId) {
	m_deviceId = newDeviceId;
}
bool DeviceOptionsDto::deviceIdNull() const {
	return m_deviceId.isNull();
}

void DeviceOptionsDto::setDeviceIdNull() {
	m_deviceId.clear();

}
QString DeviceOptionsDto::customName() const { return m_customName; }

void DeviceOptionsDto::setCustomName(QString newCustomName) {
	m_customName = newCustomName;
}
bool DeviceOptionsDto::customNameNull() const {
	return m_customName.isNull();
}

void DeviceOptionsDto::setCustomNameNull() {
	m_customName.clear();

}

} // NS DTO

namespace Support {

using DeviceOptionsDto = Jellyfin::DTO::DeviceOptionsDto;

template <>
DeviceOptionsDto fromJsonValue(const QJsonValue &source, convertType<DeviceOptionsDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return DeviceOptionsDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const DeviceOptionsDto &source, convertType<DeviceOptionsDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
