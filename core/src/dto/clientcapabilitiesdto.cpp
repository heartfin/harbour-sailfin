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

#include <JellyfinQt/dto/clientcapabilitiesdto.h>

namespace Jellyfin {
namespace DTO {

ClientCapabilitiesDto::ClientCapabilitiesDto() {}
ClientCapabilitiesDto::ClientCapabilitiesDto (
		QList<MediaType> playableMediaTypes, 
		QList<GeneralCommandType> supportedCommands, 
		bool supportsMediaControl, 
		bool supportsPersistentIdentifier, 
		QSharedPointer<DeviceProfile> deviceProfile 
		) :
	m_playableMediaTypes(playableMediaTypes),
	m_supportedCommands(supportedCommands),
	m_supportsMediaControl(supportsMediaControl),
	m_supportsPersistentIdentifier(supportsPersistentIdentifier),
	m_deviceProfile(deviceProfile) { }



ClientCapabilitiesDto::ClientCapabilitiesDto(const ClientCapabilitiesDto &other) :

	m_playableMediaTypes(other.m_playableMediaTypes),
	m_supportedCommands(other.m_supportedCommands),
	m_supportsMediaControl(other.m_supportsMediaControl),
	m_supportsPersistentIdentifier(other.m_supportsPersistentIdentifier),
	m_deviceProfile(other.m_deviceProfile),
	m_appStoreUrl(other.m_appStoreUrl),
	m_iconUrl(other.m_iconUrl){}


void ClientCapabilitiesDto::replaceData(ClientCapabilitiesDto &other) {
	m_playableMediaTypes = other.m_playableMediaTypes;
	m_supportedCommands = other.m_supportedCommands;
	m_supportsMediaControl = other.m_supportsMediaControl;
	m_supportsPersistentIdentifier = other.m_supportsPersistentIdentifier;
	m_deviceProfile = other.m_deviceProfile;
	m_appStoreUrl = other.m_appStoreUrl;
	m_iconUrl = other.m_iconUrl;
}

ClientCapabilitiesDto ClientCapabilitiesDto::fromJson(QJsonObject source) {
	ClientCapabilitiesDto instance;
	instance.setFromJson(source);
	return instance;
}


void ClientCapabilitiesDto::setFromJson(QJsonObject source) {
	m_playableMediaTypes = Jellyfin::Support::fromJsonValue<QList<MediaType>>(source["PlayableMediaTypes"]);
	m_supportedCommands = Jellyfin::Support::fromJsonValue<QList<GeneralCommandType>>(source["SupportedCommands"]);
	m_supportsMediaControl = Jellyfin::Support::fromJsonValue<bool>(source["SupportsMediaControl"]);
	m_supportsPersistentIdentifier = Jellyfin::Support::fromJsonValue<bool>(source["SupportsPersistentIdentifier"]);
	m_deviceProfile = Jellyfin::Support::fromJsonValue<QSharedPointer<DeviceProfile>>(source["DeviceProfile"]);
	m_appStoreUrl = Jellyfin::Support::fromJsonValue<QString>(source["AppStoreUrl"]);
	m_iconUrl = Jellyfin::Support::fromJsonValue<QString>(source["IconUrl"]);

}
	
QJsonObject ClientCapabilitiesDto::toJson() const {
	QJsonObject result;
	
	result["PlayableMediaTypes"] = Jellyfin::Support::toJsonValue<QList<MediaType>>(m_playableMediaTypes);		
	result["SupportedCommands"] = Jellyfin::Support::toJsonValue<QList<GeneralCommandType>>(m_supportedCommands);		
	result["SupportsMediaControl"] = Jellyfin::Support::toJsonValue<bool>(m_supportsMediaControl);		
	result["SupportsPersistentIdentifier"] = Jellyfin::Support::toJsonValue<bool>(m_supportsPersistentIdentifier);		
	result["DeviceProfile"] = Jellyfin::Support::toJsonValue<QSharedPointer<DeviceProfile>>(m_deviceProfile);		
	
	if (!(m_appStoreUrl.isNull())) {
		result["AppStoreUrl"] = Jellyfin::Support::toJsonValue<QString>(m_appStoreUrl);
	}
			
	
	if (!(m_iconUrl.isNull())) {
		result["IconUrl"] = Jellyfin::Support::toJsonValue<QString>(m_iconUrl);
	}
		
	return result;
}

QList<MediaType> ClientCapabilitiesDto::playableMediaTypes() const { return m_playableMediaTypes; }

void ClientCapabilitiesDto::setPlayableMediaTypes(QList<MediaType> newPlayableMediaTypes) {
	m_playableMediaTypes = newPlayableMediaTypes;
}

QList<GeneralCommandType> ClientCapabilitiesDto::supportedCommands() const { return m_supportedCommands; }

void ClientCapabilitiesDto::setSupportedCommands(QList<GeneralCommandType> newSupportedCommands) {
	m_supportedCommands = newSupportedCommands;
}

bool ClientCapabilitiesDto::supportsMediaControl() const { return m_supportsMediaControl; }

void ClientCapabilitiesDto::setSupportsMediaControl(bool newSupportsMediaControl) {
	m_supportsMediaControl = newSupportsMediaControl;
}

bool ClientCapabilitiesDto::supportsPersistentIdentifier() const { return m_supportsPersistentIdentifier; }

void ClientCapabilitiesDto::setSupportsPersistentIdentifier(bool newSupportsPersistentIdentifier) {
	m_supportsPersistentIdentifier = newSupportsPersistentIdentifier;
}

QSharedPointer<DeviceProfile> ClientCapabilitiesDto::deviceProfile() const { return m_deviceProfile; }

void ClientCapabilitiesDto::setDeviceProfile(QSharedPointer<DeviceProfile> newDeviceProfile) {
	m_deviceProfile = newDeviceProfile;
}

QString ClientCapabilitiesDto::appStoreUrl() const { return m_appStoreUrl; }

void ClientCapabilitiesDto::setAppStoreUrl(QString newAppStoreUrl) {
	m_appStoreUrl = newAppStoreUrl;
}
bool ClientCapabilitiesDto::appStoreUrlNull() const {
	return m_appStoreUrl.isNull();
}

void ClientCapabilitiesDto::setAppStoreUrlNull() {
	m_appStoreUrl.clear();

}
QString ClientCapabilitiesDto::iconUrl() const { return m_iconUrl; }

void ClientCapabilitiesDto::setIconUrl(QString newIconUrl) {
	m_iconUrl = newIconUrl;
}
bool ClientCapabilitiesDto::iconUrlNull() const {
	return m_iconUrl.isNull();
}

void ClientCapabilitiesDto::setIconUrlNull() {
	m_iconUrl.clear();

}

} // NS DTO

namespace Support {

using ClientCapabilitiesDto = Jellyfin::DTO::ClientCapabilitiesDto;

template <>
ClientCapabilitiesDto fromJsonValue(const QJsonValue &source, convertType<ClientCapabilitiesDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ClientCapabilitiesDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ClientCapabilitiesDto &source, convertType<ClientCapabilitiesDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
