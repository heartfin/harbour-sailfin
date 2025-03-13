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

#include <JellyfinQt/dto/serverdiscoveryinfo.h>

namespace Jellyfin {
namespace DTO {

ServerDiscoveryInfo::ServerDiscoveryInfo() {}
ServerDiscoveryInfo::ServerDiscoveryInfo (
		QString address, 
		QString jellyfinId, 
		QString name 
		) :
	m_address(address),
	m_jellyfinId(jellyfinId),
	m_name(name) { }



ServerDiscoveryInfo::ServerDiscoveryInfo(const ServerDiscoveryInfo &other) :

	m_address(other.m_address),
	m_jellyfinId(other.m_jellyfinId),
	m_name(other.m_name),
	m_endpointAddress(other.m_endpointAddress){}


void ServerDiscoveryInfo::replaceData(ServerDiscoveryInfo &other) {
	m_address = other.m_address;
	m_jellyfinId = other.m_jellyfinId;
	m_name = other.m_name;
	m_endpointAddress = other.m_endpointAddress;
}

ServerDiscoveryInfo ServerDiscoveryInfo::fromJson(QJsonObject source) {
	ServerDiscoveryInfo instance;
	instance.setFromJson(source);
	return instance;
}


void ServerDiscoveryInfo::setFromJson(QJsonObject source) {
	m_address = Jellyfin::Support::fromJsonValue<QString>(source["Address"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_endpointAddress = Jellyfin::Support::fromJsonValue<QString>(source["EndpointAddress"]);

}
	
QJsonObject ServerDiscoveryInfo::toJson() const {
	QJsonObject result;
	
	result["Address"] = Jellyfin::Support::toJsonValue<QString>(m_address);		
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);		
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);		
	
	if (!(m_endpointAddress.isNull())) {
		result["EndpointAddress"] = Jellyfin::Support::toJsonValue<QString>(m_endpointAddress);
	}
		
	return result;
}

QString ServerDiscoveryInfo::address() const { return m_address; }

void ServerDiscoveryInfo::setAddress(QString newAddress) {
	m_address = newAddress;
}

QString ServerDiscoveryInfo::jellyfinId() const { return m_jellyfinId; }

void ServerDiscoveryInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}

QString ServerDiscoveryInfo::name() const { return m_name; }

void ServerDiscoveryInfo::setName(QString newName) {
	m_name = newName;
}

QString ServerDiscoveryInfo::endpointAddress() const { return m_endpointAddress; }

void ServerDiscoveryInfo::setEndpointAddress(QString newEndpointAddress) {
	m_endpointAddress = newEndpointAddress;
}
bool ServerDiscoveryInfo::endpointAddressNull() const {
	return m_endpointAddress.isNull();
}

void ServerDiscoveryInfo::setEndpointAddressNull() {
	m_endpointAddress.clear();

}

} // NS DTO

namespace Support {

using ServerDiscoveryInfo = Jellyfin::DTO::ServerDiscoveryInfo;

template <>
ServerDiscoveryInfo fromJsonValue(const QJsonValue &source, convertType<ServerDiscoveryInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ServerDiscoveryInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ServerDiscoveryInfo &source, convertType<ServerDiscoveryInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
