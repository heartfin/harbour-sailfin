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

#ifndef JELLYFIN_DTO_CLIENTCAPABILITIESDTO_H
#define JELLYFIN_DTO_CLIENTCAPABILITIESDTO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/deviceprofile.h"
#include "JellyfinQt/dto/generalcommandtype.h"
#include "JellyfinQt/dto/mediatype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class ClientCapabilitiesDto {
public:
	ClientCapabilitiesDto(	
		QList<MediaType> playableMediaTypes,			
		QList<GeneralCommandType> supportedCommands,			
		bool supportsMediaControl,			
		bool supportsPersistentIdentifier,			
		QSharedPointer<DeviceProfile> deviceProfile						
	);

	ClientCapabilitiesDto(const ClientCapabilitiesDto &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(ClientCapabilitiesDto &other);
	
	static ClientCapabilitiesDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the list of playable media types.
	 */
	QList<MediaType> playableMediaTypes() const;
	/**
	* @brief Gets or sets the list of playable media types.
	*/
	void setPlayableMediaTypes(QList<MediaType> newPlayableMediaTypes);

	/**
	 * @brief Gets or sets the list of supported commands.
	 */
	QList<GeneralCommandType> supportedCommands() const;
	/**
	* @brief Gets or sets the list of supported commands.
	*/
	void setSupportedCommands(QList<GeneralCommandType> newSupportedCommands);

	/**
	 * @brief Gets or sets a value indicating whether session supports media control.
	 */
	bool supportsMediaControl() const;
	/**
	* @brief Gets or sets a value indicating whether session supports media control.
	*/
	void setSupportsMediaControl(bool newSupportsMediaControl);

	/**
	 * @brief Gets or sets a value indicating whether session supports a persistent identifier.
	 */
	bool supportsPersistentIdentifier() const;
	/**
	* @brief Gets or sets a value indicating whether session supports a persistent identifier.
	*/
	void setSupportsPersistentIdentifier(bool newSupportsPersistentIdentifier);


	QSharedPointer<DeviceProfile> deviceProfile() const;

	void setDeviceProfile(QSharedPointer<DeviceProfile> newDeviceProfile);

	/**
	 * @brief Gets or sets the app store url.
	 */
	QString appStoreUrl() const;
	/**
	* @brief Gets or sets the app store url.
	*/
	void setAppStoreUrl(QString newAppStoreUrl);
	bool appStoreUrlNull() const;
	void setAppStoreUrlNull();

	/**
	 * @brief Gets or sets the icon url.
	 */
	QString iconUrl() const;
	/**
	* @brief Gets or sets the icon url.
	*/
	void setIconUrl(QString newIconUrl);
	bool iconUrlNull() const;
	void setIconUrlNull();


protected:
	QList<MediaType> m_playableMediaTypes;
	QList<GeneralCommandType> m_supportedCommands;
	bool m_supportsMediaControl;
	bool m_supportsPersistentIdentifier;
	QSharedPointer<DeviceProfile> m_deviceProfile = QSharedPointer<DeviceProfile>();
	QString m_appStoreUrl;
	QString m_iconUrl;

private:
	// Private constructor which generates an invalid object, for use withing ClientCapabilitiesDto::fromJson();
	ClientCapabilitiesDto();
};


} // NS DTO

namespace Support {

using ClientCapabilitiesDto = Jellyfin::DTO::ClientCapabilitiesDto;

template <>
ClientCapabilitiesDto fromJsonValue(const QJsonValue &source, convertType<ClientCapabilitiesDto>);

template<>
QJsonValue toJsonValue(const ClientCapabilitiesDto &source, convertType<ClientCapabilitiesDto>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_CLIENTCAPABILITIESDTO_H
