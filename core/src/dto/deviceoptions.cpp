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

#include <JellyfinQt/dto/deviceoptions.h>

namespace Jellyfin {
namespace DTO {

DeviceOptions::DeviceOptions() {}

DeviceOptions::DeviceOptions(const DeviceOptions &other) :

	m_customName(other.m_customName){}


void DeviceOptions::replaceData(DeviceOptions &other) {
	m_customName = other.m_customName;
}

DeviceOptions DeviceOptions::fromJson(QJsonObject source) {
	DeviceOptions instance;
	instance.setFromJson(source);
	return instance;
}


void DeviceOptions::setFromJson(QJsonObject source) {
	m_customName = Jellyfin::Support::fromJsonValue<QString>(source["CustomName"]);

}
	
QJsonObject DeviceOptions::toJson() const {
	QJsonObject result;
	result["CustomName"] = Jellyfin::Support::toJsonValue<QString>(m_customName);

	return result;
}

QString DeviceOptions::customName() const { return m_customName; }

void DeviceOptions::setCustomName(QString newCustomName) {
	m_customName = newCustomName;
}
bool DeviceOptions::customNameNull() const {
	return m_customName.isNull();
}

void DeviceOptions::setCustomNameNull() {
	m_customName.clear();

}

} // NS DTO

namespace Support {

using DeviceOptions = Jellyfin::DTO::DeviceOptions;

template <>
DeviceOptions fromJsonValue(const QJsonValue &source, convertType<DeviceOptions>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return DeviceOptions::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const DeviceOptions &source, convertType<DeviceOptions>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
