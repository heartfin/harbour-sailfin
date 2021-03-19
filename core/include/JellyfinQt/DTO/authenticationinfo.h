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
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class AuthenticationInfo : public QObject {
	Q_OBJECT
public:
	explicit AuthenticationInfo(QObject *parent = nullptr);
	static AuthenticationInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the identifier.
	 */
	Q_PROPERTY(qint64 jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	/**
	 * @brief Gets or sets the access token.
	 */
	Q_PROPERTY(QString accessToken READ accessToken WRITE setAccessToken NOTIFY accessTokenChanged)
	/**
	 * @brief Gets or sets the device identifier.
	 */
	Q_PROPERTY(QString deviceId READ deviceId WRITE setDeviceId NOTIFY deviceIdChanged)
	/**
	 * @brief Gets or sets the name of the application.
	 */
	Q_PROPERTY(QString appName READ appName WRITE setAppName NOTIFY appNameChanged)
	/**
	 * @brief Gets or sets the application version.
	 */
	Q_PROPERTY(QString appVersion READ appVersion WRITE setAppVersion NOTIFY appVersionChanged)
	/**
	 * @brief Gets or sets the name of the device.
	 */
	Q_PROPERTY(QString deviceName READ deviceName WRITE setDeviceName NOTIFY deviceNameChanged)
	/**
	 * @brief Gets or sets the user identifier.
	 */
	Q_PROPERTY(QString userId READ userId WRITE setUserId NOTIFY userIdChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is active.
	 */
	Q_PROPERTY(bool isActive READ isActive WRITE setIsActive NOTIFY isActiveChanged)
	/**
	 * @brief Gets or sets the date created.
	 */
	Q_PROPERTY(QDateTime dateCreated READ dateCreated WRITE setDateCreated NOTIFY dateCreatedChanged)
	/**
	 * @brief Gets or sets the date revoked.
	 */
	Q_PROPERTY(QDateTime dateRevoked READ dateRevoked WRITE setDateRevoked NOTIFY dateRevokedChanged)
	Q_PROPERTY(QDateTime dateLastActivity READ dateLastActivity WRITE setDateLastActivity NOTIFY dateLastActivityChanged)
	Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged)

	qint64 jellyfinId() const;
	void setJellyfinId(qint64 newJellyfinId);
	
	QString accessToken() const;
	void setAccessToken(QString newAccessToken);
	
	QString deviceId() const;
	void setDeviceId(QString newDeviceId);
	
	QString appName() const;
	void setAppName(QString newAppName);
	
	QString appVersion() const;
	void setAppVersion(QString newAppVersion);
	
	QString deviceName() const;
	void setDeviceName(QString newDeviceName);
	
	QString userId() const;
	void setUserId(QString newUserId);
	
	bool isActive() const;
	void setIsActive(bool newIsActive);
	
	QDateTime dateCreated() const;
	void setDateCreated(QDateTime newDateCreated);
	
	QDateTime dateRevoked() const;
	void setDateRevoked(QDateTime newDateRevoked);
	
	QDateTime dateLastActivity() const;
	void setDateLastActivity(QDateTime newDateLastActivity);
	
	QString userName() const;
	void setUserName(QString newUserName);
	
signals:
	void jellyfinIdChanged(qint64 newJellyfinId);
	void accessTokenChanged(QString newAccessToken);
	void deviceIdChanged(QString newDeviceId);
	void appNameChanged(QString newAppName);
	void appVersionChanged(QString newAppVersion);
	void deviceNameChanged(QString newDeviceName);
	void userIdChanged(QString newUserId);
	void isActiveChanged(bool newIsActive);
	void dateCreatedChanged(QDateTime newDateCreated);
	void dateRevokedChanged(QDateTime newDateRevoked);
	void dateLastActivityChanged(QDateTime newDateLastActivity);
	void userNameChanged(QString newUserName);
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
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_AUTHENTICATIONINFO_H
