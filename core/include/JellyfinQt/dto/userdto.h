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

#ifndef JELLYFIN_DTO_USERDTO_H
#define JELLYFIN_DTO_USERDTO_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QSharedPointer>
#include <QString>
#include <optional>

#include "JellyfinQt/dto/userconfiguration.h"
#include "JellyfinQt/dto/userpolicy.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class UserDto {
public:
	UserDto();
	UserDto(const UserDto &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(UserDto &other);
	
	static UserDto fromJson(QJsonObject source);
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
	 * @brief Gets or sets the server identifier.
	 */
	QString serverId() const;
	/**
	* @brief Gets or sets the server identifier.
	*/
	void setServerId(QString newServerId);
	bool serverIdNull() const;
	void setServerIdNull();

	/**
	 * @brief Gets or sets the name of the server.
This is not used by the server and is for client-side usage only.
	 */
	QString serverName() const;
	/**
	* @brief Gets or sets the name of the server.
This is not used by the server and is for client-side usage only.
	*/
	void setServerName(QString newServerName);
	bool serverNameNull() const;
	void setServerNameNull();

	/**
	 * @brief Gets or sets the id.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets or sets the id.
	*/
	void setJellyfinId(QString newJellyfinId);

	/**
	 * @brief Gets or sets the primary image tag.
	 */
	QString primaryImageTag() const;
	/**
	* @brief Gets or sets the primary image tag.
	*/
	void setPrimaryImageTag(QString newPrimaryImageTag);
	bool primaryImageTagNull() const;
	void setPrimaryImageTagNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance has password.
	 */
	bool hasPassword() const;
	/**
	* @brief Gets or sets a value indicating whether this instance has password.
	*/
	void setHasPassword(bool newHasPassword);

	/**
	 * @brief Gets or sets a value indicating whether this instance has configured password.
	 */
	bool hasConfiguredPassword() const;
	/**
	* @brief Gets or sets a value indicating whether this instance has configured password.
	*/
	void setHasConfiguredPassword(bool newHasConfiguredPassword);

	/**
	 * @brief Gets or sets a value indicating whether this instance has configured easy password.
	 */
	bool hasConfiguredEasyPassword() const;
	/**
	* @brief Gets or sets a value indicating whether this instance has configured easy password.
	*/
	void setHasConfiguredEasyPassword(bool newHasConfiguredEasyPassword);

	/**
	 * @brief Gets or sets whether async login is enabled or not.
	 */
	std::optional<bool> enableAutoLogin() const;
	/**
	* @brief Gets or sets whether async login is enabled or not.
	*/
	void setEnableAutoLogin(std::optional<bool> newEnableAutoLogin);
	bool enableAutoLoginNull() const;
	void setEnableAutoLoginNull();

	/**
	 * @brief Gets or sets the last login date.
	 */
	QDateTime lastLoginDate() const;
	/**
	* @brief Gets or sets the last login date.
	*/
	void setLastLoginDate(QDateTime newLastLoginDate);
	bool lastLoginDateNull() const;
	void setLastLoginDateNull();

	/**
	 * @brief Gets or sets the last activity date.
	 */
	QDateTime lastActivityDate() const;
	/**
	* @brief Gets or sets the last activity date.
	*/
	void setLastActivityDate(QDateTime newLastActivityDate);
	bool lastActivityDateNull() const;
	void setLastActivityDateNull();


	QSharedPointer<UserConfiguration> configuration() const;

	void setConfiguration(QSharedPointer<UserConfiguration> newConfiguration);


	QSharedPointer<UserPolicy> policy() const;

	void setPolicy(QSharedPointer<UserPolicy> newPolicy);

	/**
	 * @brief Gets or sets the primary image aspect ratio.
	 */
	std::optional<double> primaryImageAspectRatio() const;
	/**
	* @brief Gets or sets the primary image aspect ratio.
	*/
	void setPrimaryImageAspectRatio(std::optional<double> newPrimaryImageAspectRatio);
	bool primaryImageAspectRatioNull() const;
	void setPrimaryImageAspectRatioNull();


protected:
	QString m_name;
	QString m_serverId;
	QString m_serverName;
	QString m_jellyfinId;
	QString m_primaryImageTag;
	bool m_hasPassword;
	bool m_hasConfiguredPassword;
	bool m_hasConfiguredEasyPassword;
	std::optional<bool> m_enableAutoLogin = std::nullopt;
	QDateTime m_lastLoginDate;
	QDateTime m_lastActivityDate;
	QSharedPointer<UserConfiguration> m_configuration = nullptr;
	QSharedPointer<UserPolicy> m_policy = nullptr;
	std::optional<double> m_primaryImageAspectRatio = std::nullopt;
};

} // NS DTO

namespace Support {

using UserDto = Jellyfin::DTO::UserDto;

template <>
UserDto fromJsonValue(const QJsonValue &source, convertType<UserDto>);

template<>
QJsonValue toJsonValue(const UserDto &source, convertType<UserDto>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_USERDTO_H
