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
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/deviceprofile.h"
#include "JellyfinQt/dto/generalcommandtype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class ClientCapabilities {
public:
	ClientCapabilities();
	ClientCapabilities(const ClientCapabilities &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(ClientCapabilities &other);
	
	static ClientCapabilities fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties

	QStringList playableMediaTypes() const;

	void setPlayableMediaTypes(QStringList newPlayableMediaTypes);
	bool playableMediaTypesNull() const;
	void setPlayableMediaTypesNull();


	QList<GeneralCommandType> supportedCommands() const;

	void setSupportedCommands(QList<GeneralCommandType> newSupportedCommands);
	bool supportedCommandsNull() const;
	void setSupportedCommandsNull();


	bool supportsMediaControl() const;

	void setSupportsMediaControl(bool newSupportsMediaControl);


	bool supportsContentUploading() const;

	void setSupportsContentUploading(bool newSupportsContentUploading);


	QString messageCallbackUrl() const;

	void setMessageCallbackUrl(QString newMessageCallbackUrl);
	bool messageCallbackUrlNull() const;
	void setMessageCallbackUrlNull();


	bool supportsPersistentIdentifier() const;

	void setSupportsPersistentIdentifier(bool newSupportsPersistentIdentifier);


	bool supportsSync() const;

	void setSupportsSync(bool newSupportsSync);


	QSharedPointer<DeviceProfile> deviceProfile() const;

	void setDeviceProfile(QSharedPointer<DeviceProfile> newDeviceProfile);


	QString appStoreUrl() const;

	void setAppStoreUrl(QString newAppStoreUrl);
	bool appStoreUrlNull() const;
	void setAppStoreUrlNull();


	QString iconUrl() const;

	void setIconUrl(QString newIconUrl);
	bool iconUrlNull() const;
	void setIconUrlNull();


protected:
	QStringList m_playableMediaTypes;
	QList<GeneralCommandType> m_supportedCommands;
	bool m_supportsMediaControl;
	bool m_supportsContentUploading;
	QString m_messageCallbackUrl;
	bool m_supportsPersistentIdentifier;
	bool m_supportsSync;
	QSharedPointer<DeviceProfile> m_deviceProfile = nullptr;
	QString m_appStoreUrl;
	QString m_iconUrl;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_CLIENTCAPABILITIES_H
