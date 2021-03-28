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

#ifndef JELLYFIN_DTO_DEVICEINFO_H
#define JELLYFIN_DTO_DEVICEINFO_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QSharedPointer>
#include <QString>
#include <optional>

#include "JellyfinQt/dto/clientcapabilities.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class DeviceInfo {
public:
	DeviceInfo();
	DeviceInfo(const DeviceInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(DeviceInfo &other);
	
	static DeviceInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	QString name() const;

	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();

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

	/**
	 * @brief Gets or sets the date last modified.
	 */
	QDateTime dateLastActivity() const;
	/**
	* @brief Gets or sets the date last modified.
	*/
	void setDateLastActivity(QDateTime newDateLastActivity);


	QSharedPointer<ClientCapabilities> capabilities() const;

	void setCapabilities(QSharedPointer<ClientCapabilities> newCapabilities);


	QString iconUrl() const;

	void setIconUrl(QString newIconUrl);
	bool iconUrlNull() const;
	void setIconUrlNull();


protected:
	QString m_name;
	QString m_jellyfinId;
	QString m_lastUserName;
	QString m_appName;
	QString m_appVersion;
	QString m_lastUserId;
	QDateTime m_dateLastActivity;
	QSharedPointer<ClientCapabilities> m_capabilities = nullptr;
	QString m_iconUrl;
};

} // NS DTO

namespace Support {

using DeviceInfo = Jellyfin::DTO::DeviceInfo;

template <>
DeviceInfo fromJsonValue(const QJsonValue &source, convertType<DeviceInfo>);

template<>
QJsonValue toJsonValue(const DeviceInfo &source, convertType<DeviceInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_DEVICEINFO_H
