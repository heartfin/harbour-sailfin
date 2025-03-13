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

#ifndef JELLYFIN_DTO_DEVICEINFODTO_H
#define JELLYFIN_DTO_DEVICEINFODTO_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QSharedPointer>
#include <QString>
#include <optional>

#include "JellyfinQt/dto/clientcapabilitiesdto.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class DeviceInfoDto {
public:
	DeviceInfoDto(																			
		QSharedPointer<ClientCapabilitiesDto> capabilities				
	);

	DeviceInfoDto(const DeviceInfoDto &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(DeviceInfoDto &other);
	
	static DeviceInfoDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();

	/**
	 * @brief Gets or sets the custom name.
	 */
	QString customName() const;
	/**
	* @brief Gets or sets the custom name.
	*/
	void setCustomName(QString newCustomName);
	bool customNameNull() const;
	void setCustomNameNull();

	/**
	 * @brief Gets or sets the access token.
	 */
	QString accessToken() const;
	/**
	* @brief Gets or sets the access token.
	*/
	void setAccessToken(QString newAccessToken);
	bool accessTokenNull() const;
	void setAccessTokenNull();

	/**
	 * @brief Gets or sets the identifier.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets or sets the identifier.
	*/
	void setJellyfinId(QString newJellyfinId);
	bool jellyfinIdNull() const;
	void setJellyfinIdNull();

	/**
	 * @brief Gets or sets the last name of the user.
	 */
	QString lastUserName() const;
	/**
	* @brief Gets or sets the last name of the user.
	*/
	void setLastUserName(QString newLastUserName);
	bool lastUserNameNull() const;
	void setLastUserNameNull();

	/**
	 * @brief Gets or sets the name of the application.
	 */
	QString appName() const;
	/**
	* @brief Gets or sets the name of the application.
	*/
	void setAppName(QString newAppName);
	bool appNameNull() const;
	void setAppNameNull();

	/**
	 * @brief Gets or sets the application version.
	 */
	QString appVersion() const;
	/**
	* @brief Gets or sets the application version.
	*/
	void setAppVersion(QString newAppVersion);
	bool appVersionNull() const;
	void setAppVersionNull();

	/**
	 * @brief Gets or sets the last user identifier.
	 */
	QString lastUserId() const;
	/**
	* @brief Gets or sets the last user identifier.
	*/
	void setLastUserId(QString newLastUserId);
	bool lastUserIdNull() const;
	void setLastUserIdNull();

	/**
	 * @brief Gets or sets the date last modified.
	 */
	QDateTime dateLastActivity() const;
	/**
	* @brief Gets or sets the date last modified.
	*/
	void setDateLastActivity(QDateTime newDateLastActivity);
	bool dateLastActivityNull() const;
	void setDateLastActivityNull();


	QSharedPointer<ClientCapabilitiesDto> capabilities() const;

	void setCapabilities(QSharedPointer<ClientCapabilitiesDto> newCapabilities);

	/**
	 * @brief Gets or sets the icon URL.
	 */
	QString iconUrl() const;
	/**
	* @brief Gets or sets the icon URL.
	*/
	void setIconUrl(QString newIconUrl);
	bool iconUrlNull() const;
	void setIconUrlNull();


protected:
	QString m_name;
	QString m_customName;
	QString m_accessToken;
	QString m_jellyfinId;
	QString m_lastUserName;
	QString m_appName;
	QString m_appVersion;
	QString m_lastUserId;
	QDateTime m_dateLastActivity;
	QSharedPointer<ClientCapabilitiesDto> m_capabilities = QSharedPointer<ClientCapabilitiesDto>();
	QString m_iconUrl;

private:
	// Private constructor which generates an invalid object, for use withing DeviceInfoDto::fromJson();
	DeviceInfoDto();
};


} // NS DTO

namespace Support {

using DeviceInfoDto = Jellyfin::DTO::DeviceInfoDto;

template <>
DeviceInfoDto fromJsonValue(const QJsonValue &source, convertType<DeviceInfoDto>);

template<>
QJsonValue toJsonValue(const DeviceInfoDto &source, convertType<DeviceInfoDto>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_DEVICEINFODTO_H
