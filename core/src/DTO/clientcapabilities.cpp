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

ClientCapabilities::ClientCapabilities(QObject *parent) {}

ClientCapabilities ClientCapabilities::fromJson(QJsonObject source) {ClientCapabilities instance;
	instance->setFromJson(source, false);
	return instance;
}


void ClientCapabilities::setFromJson(QJsonObject source) {
	m_playableMediaTypes = fromJsonValue<QStringList>(source["PlayableMediaTypes"]);
	m_supportedCommands = fromJsonValue<QList<GeneralCommandType>>(source["SupportedCommands"]);
	m_supportsMediaControl = fromJsonValue<bool>(source["SupportsMediaControl"]);
	m_supportsContentUploading = fromJsonValue<bool>(source["SupportsContentUploading"]);
	m_messageCallbackUrl = fromJsonValue<QString>(source["MessageCallbackUrl"]);
	m_supportsPersistentIdentifier = fromJsonValue<bool>(source["SupportsPersistentIdentifier"]);
	m_supportsSync = fromJsonValue<bool>(source["SupportsSync"]);
	m_deviceProfile = fromJsonValue<QSharedPointer<DeviceProfile>>(source["DeviceProfile"]);
	m_appStoreUrl = fromJsonValue<QString>(source["AppStoreUrl"]);
	m_iconUrl = fromJsonValue<QString>(source["IconUrl"]);

}
	
QJsonObject ClientCapabilities::toJson() {
	QJsonObject result;
	result["PlayableMediaTypes"] = toJsonValue<QStringList>(m_playableMediaTypes);
	result["SupportedCommands"] = toJsonValue<QList<GeneralCommandType>>(m_supportedCommands);
	result["SupportsMediaControl"] = toJsonValue<bool>(m_supportsMediaControl);
	result["SupportsContentUploading"] = toJsonValue<bool>(m_supportsContentUploading);
	result["MessageCallbackUrl"] = toJsonValue<QString>(m_messageCallbackUrl);
	result["SupportsPersistentIdentifier"] = toJsonValue<bool>(m_supportsPersistentIdentifier);
	result["SupportsSync"] = toJsonValue<bool>(m_supportsSync);
	result["DeviceProfile"] = toJsonValue<QSharedPointer<DeviceProfile>>(m_deviceProfile);
	result["AppStoreUrl"] = toJsonValue<QString>(m_appStoreUrl);
	result["IconUrl"] = toJsonValue<QString>(m_iconUrl);

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


} // NS Jellyfin
} // NS DTO
