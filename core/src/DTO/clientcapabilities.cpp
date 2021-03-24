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

#include <JellyfinQt/DTO/clientcapabilities.h>

namespace Jellyfin {
namespace DTO {

ClientCapabilities::ClientCapabilities() {}
ClientCapabilities::ClientCapabilities(const ClientCapabilities &other) :
	m_playableMediaTypes(other.m_playableMediaTypes),
	m_supportedCommands(other.m_supportedCommands),
	m_supportsMediaControl(other.m_supportsMediaControl),
	m_supportsContentUploading(other.m_supportsContentUploading),
	m_messageCallbackUrl(other.m_messageCallbackUrl),
	m_supportsPersistentIdentifier(other.m_supportsPersistentIdentifier),
	m_supportsSync(other.m_supportsSync),
	m_deviceProfile(other.m_deviceProfile),
	m_appStoreUrl(other.m_appStoreUrl),
	m_iconUrl(other.m_iconUrl){}

ClientCapabilities ClientCapabilities::fromJson(QJsonObject source) {
	ClientCapabilities instance;
	instance.setFromJson(source);
	return instance;
}


void ClientCapabilities::setFromJson(QJsonObject source) {
	m_playableMediaTypes = Jellyfin::Support::fromJsonValue<QStringList>(source["PlayableMediaTypes"]);
	m_supportedCommands = Jellyfin::Support::fromJsonValue<QList<GeneralCommandType>>(source["SupportedCommands"]);
	m_supportsMediaControl = Jellyfin::Support::fromJsonValue<bool>(source["SupportsMediaControl"]);
	m_supportsContentUploading = Jellyfin::Support::fromJsonValue<bool>(source["SupportsContentUploading"]);
	m_messageCallbackUrl = Jellyfin::Support::fromJsonValue<QString>(source["MessageCallbackUrl"]);
	m_supportsPersistentIdentifier = Jellyfin::Support::fromJsonValue<bool>(source["SupportsPersistentIdentifier"]);
	m_supportsSync = Jellyfin::Support::fromJsonValue<bool>(source["SupportsSync"]);
	m_deviceProfile = Jellyfin::Support::fromJsonValue<QSharedPointer<DeviceProfile>>(source["DeviceProfile"]);
	m_appStoreUrl = Jellyfin::Support::fromJsonValue<QString>(source["AppStoreUrl"]);
	m_iconUrl = Jellyfin::Support::fromJsonValue<QString>(source["IconUrl"]);

}
	
QJsonObject ClientCapabilities::toJson() {
	QJsonObject result;
	result["PlayableMediaTypes"] = Jellyfin::Support::toJsonValue<QStringList>(m_playableMediaTypes);
	result["SupportedCommands"] = Jellyfin::Support::toJsonValue<QList<GeneralCommandType>>(m_supportedCommands);
	result["SupportsMediaControl"] = Jellyfin::Support::toJsonValue<bool>(m_supportsMediaControl);
	result["SupportsContentUploading"] = Jellyfin::Support::toJsonValue<bool>(m_supportsContentUploading);
	result["MessageCallbackUrl"] = Jellyfin::Support::toJsonValue<QString>(m_messageCallbackUrl);
	result["SupportsPersistentIdentifier"] = Jellyfin::Support::toJsonValue<bool>(m_supportsPersistentIdentifier);
	result["SupportsSync"] = Jellyfin::Support::toJsonValue<bool>(m_supportsSync);
	result["DeviceProfile"] = Jellyfin::Support::toJsonValue<QSharedPointer<DeviceProfile>>(m_deviceProfile);
	result["AppStoreUrl"] = Jellyfin::Support::toJsonValue<QString>(m_appStoreUrl);
	result["IconUrl"] = Jellyfin::Support::toJsonValue<QString>(m_iconUrl);

	return result;
}

QStringList ClientCapabilities::playableMediaTypes() const { return m_playableMediaTypes; }

void ClientCapabilities::setPlayableMediaTypes(QStringList newPlayableMediaTypes) {
	m_playableMediaTypes = newPlayableMediaTypes;
}
QList<GeneralCommandType> ClientCapabilities::supportedCommands() const { return m_supportedCommands; }

void ClientCapabilities::setSupportedCommands(QList<GeneralCommandType> newSupportedCommands) {
	m_supportedCommands = newSupportedCommands;
}
bool ClientCapabilities::supportsMediaControl() const { return m_supportsMediaControl; }

void ClientCapabilities::setSupportsMediaControl(bool newSupportsMediaControl) {
	m_supportsMediaControl = newSupportsMediaControl;
}
bool ClientCapabilities::supportsContentUploading() const { return m_supportsContentUploading; }

void ClientCapabilities::setSupportsContentUploading(bool newSupportsContentUploading) {
	m_supportsContentUploading = newSupportsContentUploading;
}
QString ClientCapabilities::messageCallbackUrl() const { return m_messageCallbackUrl; }

void ClientCapabilities::setMessageCallbackUrl(QString newMessageCallbackUrl) {
	m_messageCallbackUrl = newMessageCallbackUrl;
}
bool ClientCapabilities::supportsPersistentIdentifier() const { return m_supportsPersistentIdentifier; }

void ClientCapabilities::setSupportsPersistentIdentifier(bool newSupportsPersistentIdentifier) {
	m_supportsPersistentIdentifier = newSupportsPersistentIdentifier;
}
bool ClientCapabilities::supportsSync() const { return m_supportsSync; }

void ClientCapabilities::setSupportsSync(bool newSupportsSync) {
	m_supportsSync = newSupportsSync;
}
QSharedPointer<DeviceProfile> ClientCapabilities::deviceProfile() const { return m_deviceProfile; }

void ClientCapabilities::setDeviceProfile(QSharedPointer<DeviceProfile> newDeviceProfile) {
	m_deviceProfile = newDeviceProfile;
}
QString ClientCapabilities::appStoreUrl() const { return m_appStoreUrl; }

void ClientCapabilities::setAppStoreUrl(QString newAppStoreUrl) {
	m_appStoreUrl = newAppStoreUrl;
}
QString ClientCapabilities::iconUrl() const { return m_iconUrl; }

void ClientCapabilities::setIconUrl(QString newIconUrl) {
	m_iconUrl = newIconUrl;
}

} // NS DTO

namespace Support {

using ClientCapabilities = Jellyfin::DTO::ClientCapabilities;

template <>
ClientCapabilities fromJsonValue<ClientCapabilities>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return ClientCapabilities::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO
