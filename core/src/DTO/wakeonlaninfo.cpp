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

#include <JellyfinQt/DTO/wakeonlaninfo.h>

namespace Jellyfin {
namespace DTO {

WakeOnLanInfo::WakeOnLanInfo() {}
WakeOnLanInfo::WakeOnLanInfo(const WakeOnLanInfo &other) :
	m_macAddress(other.m_macAddress),
	m_port(other.m_port){}

WakeOnLanInfo WakeOnLanInfo::fromJson(QJsonObject source) {
	WakeOnLanInfo instance;
	instance.setFromJson(source);
	return instance;
}


void WakeOnLanInfo::setFromJson(QJsonObject source) {
	m_macAddress = Jellyfin::Support::fromJsonValue<QString>(source["MacAddress"]);
	m_port = Jellyfin::Support::fromJsonValue<qint32>(source["Port"]);

}
	
QJsonObject WakeOnLanInfo::toJson() {
	QJsonObject result;
	result["MacAddress"] = Jellyfin::Support::toJsonValue<QString>(m_macAddress);
	result["Port"] = Jellyfin::Support::toJsonValue<qint32>(m_port);

	return result;
}

QString WakeOnLanInfo::macAddress() const { return m_macAddress; }

void WakeOnLanInfo::setMacAddress(QString newMacAddress) {
	m_macAddress = newMacAddress;
}
qint32 WakeOnLanInfo::port() const { return m_port; }

void WakeOnLanInfo::setPort(qint32 newPort) {
	m_port = newPort;
}

} // NS DTO

namespace Support {

using WakeOnLanInfo = Jellyfin::DTO::WakeOnLanInfo;

template <>
WakeOnLanInfo fromJsonValue<WakeOnLanInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return WakeOnLanInfo::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO
