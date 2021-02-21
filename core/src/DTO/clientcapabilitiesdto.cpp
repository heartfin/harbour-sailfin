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

#include <JellyfinQt/DTO/clientcapabilitiesdto.h>

#include <JellyfinQt/DTO/generalcommandtype.h>

namespace Jellyfin {
namespace DTO {

ClientCapabilitiesDto::ClientCapabilitiesDto(QObject *parent) : QObject(parent) {}

ClientCapabilitiesDto *ClientCapabilitiesDto::fromJSON(QJsonObject source, QObject *parent) {
	ClientCapabilitiesDto *instance = new ClientCapabilitiesDto(parent);
	instance->updateFromJSON(source);
	return instance;
}

void ClientCapabilitiesDto::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject ClientCapabilitiesDto::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QStringList ClientCapabilitiesDto::playableMediaTypes() const { return m_playableMediaTypes; }
void ClientCapabilitiesDto::setPlayableMediaTypes(QStringList newPlayableMediaTypes) {
	m_playableMediaTypes = newPlayableMediaTypes;
	emit playableMediaTypesChanged(newPlayableMediaTypes);
}

QList<GeneralCommandType> ClientCapabilitiesDto::supportedCommands() const { return m_supportedCommands; }
void ClientCapabilitiesDto::setSupportedCommands(QList<GeneralCommandType> newSupportedCommands) {
	m_supportedCommands = newSupportedCommands;
	emit supportedCommandsChanged(newSupportedCommands);
}

bool ClientCapabilitiesDto::supportsMediaControl() const { return m_supportsMediaControl; }
void ClientCapabilitiesDto::setSupportsMediaControl(bool newSupportsMediaControl) {
	m_supportsMediaControl = newSupportsMediaControl;
	emit supportsMediaControlChanged(newSupportsMediaControl);
}

bool ClientCapabilitiesDto::supportsContentUploading() const { return m_supportsContentUploading; }
void ClientCapabilitiesDto::setSupportsContentUploading(bool newSupportsContentUploading) {
	m_supportsContentUploading = newSupportsContentUploading;
	emit supportsContentUploadingChanged(newSupportsContentUploading);
}

QString ClientCapabilitiesDto::messageCallbackUrl() const { return m_messageCallbackUrl; }
void ClientCapabilitiesDto::setMessageCallbackUrl(QString newMessageCallbackUrl) {
	m_messageCallbackUrl = newMessageCallbackUrl;
	emit messageCallbackUrlChanged(newMessageCallbackUrl);
}

bool ClientCapabilitiesDto::supportsPersistentIdentifier() const { return m_supportsPersistentIdentifier; }
void ClientCapabilitiesDto::setSupportsPersistentIdentifier(bool newSupportsPersistentIdentifier) {
	m_supportsPersistentIdentifier = newSupportsPersistentIdentifier;
	emit supportsPersistentIdentifierChanged(newSupportsPersistentIdentifier);
}

bool ClientCapabilitiesDto::supportsSync() const { return m_supportsSync; }
void ClientCapabilitiesDto::setSupportsSync(bool newSupportsSync) {
	m_supportsSync = newSupportsSync;
	emit supportsSyncChanged(newSupportsSync);
}

DeviceProfile * ClientCapabilitiesDto::deviceProfile() const { return m_deviceProfile; }
void ClientCapabilitiesDto::setDeviceProfile(DeviceProfile * newDeviceProfile) {
	m_deviceProfile = newDeviceProfile;
	emit deviceProfileChanged(newDeviceProfile);
}

QString ClientCapabilitiesDto::appStoreUrl() const { return m_appStoreUrl; }
void ClientCapabilitiesDto::setAppStoreUrl(QString newAppStoreUrl) {
	m_appStoreUrl = newAppStoreUrl;
	emit appStoreUrlChanged(newAppStoreUrl);
}

QString ClientCapabilitiesDto::iconUrl() const { return m_iconUrl; }
void ClientCapabilitiesDto::setIconUrl(QString newIconUrl) {
	m_iconUrl = newIconUrl;
	emit iconUrlChanged(newIconUrl);
}


} // NS Jellyfin
} // NS DTO
