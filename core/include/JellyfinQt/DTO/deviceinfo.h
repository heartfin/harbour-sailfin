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
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class ClientCapabilities;

class DeviceInfo : public QObject {
	Q_OBJECT
public:
	explicit DeviceInfo(QObject *parent = nullptr);
	static DeviceInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the identifier.
	 */
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	/**
	 * @brief Gets or sets the last name of the user.
	 */
	Q_PROPERTY(QString lastUserName READ lastUserName WRITE setLastUserName NOTIFY lastUserNameChanged)
	/**
	 * @brief Gets or sets the name of the application.
	 */
	Q_PROPERTY(QString appName READ appName WRITE setAppName NOTIFY appNameChanged)
	/**
	 * @brief Gets or sets the application version.
	 */
	Q_PROPERTY(QString appVersion READ appVersion WRITE setAppVersion NOTIFY appVersionChanged)
	/**
	 * @brief Gets or sets the last user identifier.
	 */
	Q_PROPERTY(QString lastUserId READ lastUserId WRITE setLastUserId NOTIFY lastUserIdChanged)
	/**
	 * @brief Gets or sets the date last modified.
	 */
	Q_PROPERTY(QDateTime dateLastActivity READ dateLastActivity WRITE setDateLastActivity NOTIFY dateLastActivityChanged)
	Q_PROPERTY(ClientCapabilities * capabilities READ capabilities WRITE setCapabilities NOTIFY capabilitiesChanged)
	Q_PROPERTY(QString iconUrl READ iconUrl WRITE setIconUrl NOTIFY iconUrlChanged)

	QString name() const;
	void setName(QString newName);
	
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	QString lastUserName() const;
	void setLastUserName(QString newLastUserName);
	
	QString appName() const;
	void setAppName(QString newAppName);
	
	QString appVersion() const;
	void setAppVersion(QString newAppVersion);
	
	QString lastUserId() const;
	void setLastUserId(QString newLastUserId);
	
	QDateTime dateLastActivity() const;
	void setDateLastActivity(QDateTime newDateLastActivity);
	
	ClientCapabilities * capabilities() const;
	void setCapabilities(ClientCapabilities * newCapabilities);
	
	QString iconUrl() const;
	void setIconUrl(QString newIconUrl);
	
signals:
	void nameChanged(QString newName);
	void jellyfinIdChanged(QString newJellyfinId);
	void lastUserNameChanged(QString newLastUserName);
	void appNameChanged(QString newAppName);
	void appVersionChanged(QString newAppVersion);
	void lastUserIdChanged(QString newLastUserId);
	void dateLastActivityChanged(QDateTime newDateLastActivity);
	void capabilitiesChanged(ClientCapabilities * newCapabilities);
	void iconUrlChanged(QString newIconUrl);
protected:
	QString m_name;
	QString m_jellyfinId;
	QString m_lastUserName;
	QString m_appName;
	QString m_appVersion;
	QString m_lastUserId;
	QDateTime m_dateLastActivity;
	ClientCapabilities * m_capabilities = nullptr;
	QString m_iconUrl;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_DEVICEINFO_H
