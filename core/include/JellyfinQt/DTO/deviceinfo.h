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
#include <QUuid>
#include <optional>

#include "JellyfinQt/DTO/clientcapabilities.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class DeviceInfo {
public:
	explicit DeviceInfo();
	static DeviceInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties

	QString name() const;

	void setName(QString newName);
	/**
	 * @brief Gets or sets the identifier.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets or sets the identifier.
	*/
	void setJellyfinId(QString newJellyfinId);
	/**
	 * @brief Gets or sets the last name of the user.
	 */
	QString lastUserName() const;
	/**
	* @brief Gets or sets the last name of the user.
	*/
	void setLastUserName(QString newLastUserName);
	/**
	 * @brief Gets or sets the name of the application.
	 */
	QString appName() const;
	/**
	* @brief Gets or sets the name of the application.
	*/
	void setAppName(QString newAppName);
	/**
	 * @brief Gets or sets the application version.
	 */
	QString appVersion() const;
	/**
	* @brief Gets or sets the application version.
	*/
	void setAppVersion(QString newAppVersion);
	/**
	 * @brief Gets or sets the last user identifier.
	 */
	QUuid lastUserId() const;
	/**
	* @brief Gets or sets the last user identifier.
	*/
	void setLastUserId(QUuid newLastUserId);
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

protected:
	QString m_name;
	QString m_jellyfinId;
	QString m_lastUserName;
	QString m_appName;
	QString m_appVersion;
	QUuid m_lastUserId;
	QDateTime m_dateLastActivity;
	QSharedPointer<ClientCapabilities> m_capabilities = nullptr;
	QString m_iconUrl;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_DEVICEINFO_H
