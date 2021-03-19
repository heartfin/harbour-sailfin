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

#include <JellyfinQt/DTO/generalcommandtype.h>

namespace Jellyfin {
namespace DTO {

ClientCapabilities::ClientCapabilities(QObject *parent) : QObject(parent) {}

ClientCapabilities *ClientCapabilities::fromJSON(QJsonObject source, QObject *parent) {
	ClientCapabilities *instance = new ClientCapabilities(parent);
	instance->updateFromJSON(source);
	return instance;
}

void ClientCapabilities::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject ClientCapabilities::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QStringList ClientCapabilities::playableMediaTypes() const { return m_playableMediaTypes; }
void ClientCapabilities::setPlayableMediaTypes(QStringList newPlayableMediaTypes) {
	m_playableMediaTypes = newPlayableMediaTypes;
	emit playableMediaTypesChanged(newPlayableMediaTypes);
}

QList<GeneralCommandType> ClientCapabilities::supportedCommands() const { return m_supportedCommands; }
void ClientCapabilities::setSupportedCommands(QList<GeneralCommandType> newSupportedCommands) {
	m_supportedCommands = newSupportedCommands;
	emit supportedCommandsChanged(newSupportedCommands);
}

bool ClientCapabilities::supportsMediaControl() const { return m_supportsMediaControl; }
void ClientCapabilities::setSupportsMediaControl(bool newSupportsMediaControl) {
	m_supportsMediaControl = newSupportsMediaControl;
	emit supportsMediaControlChanged(newSupportsMediaControl);
}

bool ClientCapabilities::supportsContentUploading() const { return m_supportsContentUploading; }
void ClientCapabilities::setSupportsContentUploading(bool newSupportsContentUploading) {
	m_supportsContentUploading = newSupportsContentUploading;
	emit supportsContentUploadingChanged(newSupportsContentUploading);
}

QString ClientCapabilities::messageCallbackUrl() const { return m_messageCallbackUrl; }
void ClientCapabilities::setMessageCallbackUrl(QString newMessageCallbackUrl) {
	m_messageCallbackUrl = newMessageCallbackUrl;
	emit messageCallbackUrlChanged(newMessageCallbackUrl);
}

bool ClientCapabilities::supportsPersistentIdentifier() const { return m_supportsPersistentIdentifier; }
void ClientCapabilities::setSupportsPersistentIdentifier(bool newSupportsPersistentIdentifier) {
	m_supportsPersistentIdentifier = newSupportsPersistentIdentifier;
	emit supportsPersistentIdentifierChanged(newSupportsPersistentIdentifier);
}

bool ClientCapabilities::supportsSync() const { return m_supportsSync; }
void ClientCapabilities::setSupportsSync(bool newSupportsSync) {
	m_supportsSync = newSupportsSync;
	emit supportsSyncChanged(newSupportsSync);
}

DeviceProfile * ClientCapabilities::deviceProfile() const { return m_deviceProfile; }
void ClientCapabilities::setDeviceProfile(DeviceProfile * newDeviceProfile) {
	m_deviceProfile = newDeviceProfile;
	emit deviceProfileChanged(newDeviceProfile);
}

QString ClientCapabilities::appStoreUrl() const { return m_appStoreUrl; }
void ClientCapabilities::setAppStoreUrl(QString newAppStoreUrl) {
	m_appStoreUrl = newAppStoreUrl;
	emit appStoreUrlChanged(newAppStoreUrl);
}

QString ClientCapabilities::iconUrl() const { return m_iconUrl; }
void ClientCapabilities::setIconUrl(QString newIconUrl) {
	m_iconUrl = newIconUrl;
	emit iconUrlChanged(newIconUrl);
}


} // NS Jellyfin
} // NS DTO
