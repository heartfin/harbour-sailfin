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

#ifndef JELLYFIN_DTO_AUTHENTICATIONINFO_H
#define JELLYFIN_DTO_AUTHENTICATIONINFO_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class AuthenticationInfo {
public:
	AuthenticationInfo(	
		qint64 jellyfinId,													
		QString userId,			
		bool isActive,			
		QDateTime dateCreated,					
		QDateTime dateLastActivity				
	);

	AuthenticationInfo(const AuthenticationInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(AuthenticationInfo &other);
	
	static AuthenticationInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the identifier.
	 */
	qint64 jellyfinId() const;
	/**
	* @brief Gets or sets the identifier.
	*/
	void setJellyfinId(qint64 newJellyfinId);

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
	 * @brief Gets or sets the device identifier.
	 */
	QString deviceId() const;
	/**
	* @brief Gets or sets the device identifier.
	*/
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();

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
	 * @brief Gets or sets the name of the device.
	 */
	QString deviceName() const;
	/**
	* @brief Gets or sets the name of the device.
	*/
	void setDeviceName(QString newDeviceName);
	bool deviceNameNull() const;
	void setDeviceNameNull();

	/**
	 * @brief Gets or sets the user identifier.
	 */
	QString userId() const;
	/**
	* @brief Gets or sets the user identifier.
	*/
	void setUserId(QString newUserId);

	/**
	 * @brief Gets or sets a value indicating whether this instance is active.
	 */
	bool isActive() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is active.
	*/
	void setIsActive(bool newIsActive);

	/**
	 * @brief Gets or sets the date created.
	 */
	QDateTime dateCreated() const;
	/**
	* @brief Gets or sets the date created.
	*/
	void setDateCreated(QDateTime newDateCreated);

	/**
	 * @brief Gets or sets the date revoked.
	 */
	QDateTime dateRevoked() const;
	/**
	* @brief Gets or sets the date revoked.
	*/
	void setDateRevoked(QDateTime newDateRevoked);
	bool dateRevokedNull() const;
	void setDateRevokedNull();


	QDateTime dateLastActivity() const;

	void setDateLastActivity(QDateTime newDateLastActivity);


	QString userName() const;

	void setUserName(QString newUserName);
	bool userNameNull() const;
	void setUserNameNull();


protected:
	qint64 m_jellyfinId;
	QString m_accessToken;
	QString m_deviceId;
	QString m_appName;
	QString m_appVersion;
	QString m_deviceName;
	QString m_userId;
	bool m_isActive;
	QDateTime m_dateCreated;
	QDateTime m_dateRevoked;
	QDateTime m_dateLastActivity;
	QString m_userName;

private:
	// Private constructor which generates an invalid object, for use withing AuthenticationInfo::fromJson();
	AuthenticationInfo();
};


} // NS DTO

namespace Support {

using AuthenticationInfo = Jellyfin::DTO::AuthenticationInfo;

template <>
AuthenticationInfo fromJsonValue(const QJsonValue &source, convertType<AuthenticationInfo>);

template<>
QJsonValue toJsonValue(const AuthenticationInfo &source, convertType<AuthenticationInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_AUTHENTICATIONINFO_H
