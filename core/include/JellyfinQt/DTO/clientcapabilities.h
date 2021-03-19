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

#ifndef JELLYFIN_DTO_CLIENTCAPABILITIES_H
#define JELLYFIN_DTO_CLIENTCAPABILITIES_H

#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/generalcommandtype.h"

namespace Jellyfin {
namespace DTO {

class DeviceProfile;

class ClientCapabilities : public QObject {
	Q_OBJECT
public:
	explicit ClientCapabilities(QObject *parent = nullptr);
	static ClientCapabilities *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(QStringList playableMediaTypes READ playableMediaTypes WRITE setPlayableMediaTypes NOTIFY playableMediaTypesChanged)
	Q_PROPERTY(QList<GeneralCommandType> supportedCommands READ supportedCommands WRITE setSupportedCommands NOTIFY supportedCommandsChanged)
	Q_PROPERTY(bool supportsMediaControl READ supportsMediaControl WRITE setSupportsMediaControl NOTIFY supportsMediaControlChanged)
	Q_PROPERTY(bool supportsContentUploading READ supportsContentUploading WRITE setSupportsContentUploading NOTIFY supportsContentUploadingChanged)
	Q_PROPERTY(QString messageCallbackUrl READ messageCallbackUrl WRITE setMessageCallbackUrl NOTIFY messageCallbackUrlChanged)
	Q_PROPERTY(bool supportsPersistentIdentifier READ supportsPersistentIdentifier WRITE setSupportsPersistentIdentifier NOTIFY supportsPersistentIdentifierChanged)
	Q_PROPERTY(bool supportsSync READ supportsSync WRITE setSupportsSync NOTIFY supportsSyncChanged)
	Q_PROPERTY(DeviceProfile * deviceProfile READ deviceProfile WRITE setDeviceProfile NOTIFY deviceProfileChanged)
	Q_PROPERTY(QString appStoreUrl READ appStoreUrl WRITE setAppStoreUrl NOTIFY appStoreUrlChanged)
	Q_PROPERTY(QString iconUrl READ iconUrl WRITE setIconUrl NOTIFY iconUrlChanged)

	QStringList playableMediaTypes() const;
	void setPlayableMediaTypes(QStringList newPlayableMediaTypes);
	
	QList<GeneralCommandType> supportedCommands() const;
	void setSupportedCommands(QList<GeneralCommandType> newSupportedCommands);
	
	bool supportsMediaControl() const;
	void setSupportsMediaControl(bool newSupportsMediaControl);
	
	bool supportsContentUploading() const;
	void setSupportsContentUploading(bool newSupportsContentUploading);
	
	QString messageCallbackUrl() const;
	void setMessageCallbackUrl(QString newMessageCallbackUrl);
	
	bool supportsPersistentIdentifier() const;
	void setSupportsPersistentIdentifier(bool newSupportsPersistentIdentifier);
	
	bool supportsSync() const;
	void setSupportsSync(bool newSupportsSync);
	
	DeviceProfile * deviceProfile() const;
	void setDeviceProfile(DeviceProfile * newDeviceProfile);
	
	QString appStoreUrl() const;
	void setAppStoreUrl(QString newAppStoreUrl);
	
	QString iconUrl() const;
	void setIconUrl(QString newIconUrl);
	
signals:
	void playableMediaTypesChanged(QStringList newPlayableMediaTypes);
	void supportedCommandsChanged(QList<GeneralCommandType> newSupportedCommands);
	void supportsMediaControlChanged(bool newSupportsMediaControl);
	void supportsContentUploadingChanged(bool newSupportsContentUploading);
	void messageCallbackUrlChanged(QString newMessageCallbackUrl);
	void supportsPersistentIdentifierChanged(bool newSupportsPersistentIdentifier);
	void supportsSyncChanged(bool newSupportsSync);
	void deviceProfileChanged(DeviceProfile * newDeviceProfile);
	void appStoreUrlChanged(QString newAppStoreUrl);
	void iconUrlChanged(QString newIconUrl);
protected:
	QStringList m_playableMediaTypes;
	QList<GeneralCommandType> m_supportedCommands;
	bool m_supportsMediaControl;
	bool m_supportsContentUploading;
	QString m_messageCallbackUrl;
	bool m_supportsPersistentIdentifier;
	bool m_supportsSync;
	DeviceProfile * m_deviceProfile = nullptr;
	QString m_appStoreUrl;
	QString m_iconUrl;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_CLIENTCAPABILITIES_H
