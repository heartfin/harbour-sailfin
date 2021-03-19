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

#include <JellyfinQt/DTO/authenticationinfo.h>

namespace Jellyfin {
namespace DTO {

AuthenticationInfo::AuthenticationInfo(QObject *parent) : QObject(parent) {}

AuthenticationInfo *AuthenticationInfo::fromJSON(QJsonObject source, QObject *parent) {
	AuthenticationInfo *instance = new AuthenticationInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void AuthenticationInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject AuthenticationInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
qint64 AuthenticationInfo::jellyfinId() const { return m_jellyfinId; }
void AuthenticationInfo::setJellyfinId(qint64 newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

QString AuthenticationInfo::accessToken() const { return m_accessToken; }
void AuthenticationInfo::setAccessToken(QString newAccessToken) {
	m_accessToken = newAccessToken;
	emit accessTokenChanged(newAccessToken);
}

QString AuthenticationInfo::deviceId() const { return m_deviceId; }
void AuthenticationInfo::setDeviceId(QString newDeviceId) {
	m_deviceId = newDeviceId;
	emit deviceIdChanged(newDeviceId);
}

QString AuthenticationInfo::appName() const { return m_appName; }
void AuthenticationInfo::setAppName(QString newAppName) {
	m_appName = newAppName;
	emit appNameChanged(newAppName);
}

QString AuthenticationInfo::appVersion() const { return m_appVersion; }
void AuthenticationInfo::setAppVersion(QString newAppVersion) {
	m_appVersion = newAppVersion;
	emit appVersionChanged(newAppVersion);
}

QString AuthenticationInfo::deviceName() const { return m_deviceName; }
void AuthenticationInfo::setDeviceName(QString newDeviceName) {
	m_deviceName = newDeviceName;
	emit deviceNameChanged(newDeviceName);
}

QString AuthenticationInfo::userId() const { return m_userId; }
void AuthenticationInfo::setUserId(QString newUserId) {
	m_userId = newUserId;
	emit userIdChanged(newUserId);
}

bool AuthenticationInfo::isActive() const { return m_isActive; }
void AuthenticationInfo::setIsActive(bool newIsActive) {
	m_isActive = newIsActive;
	emit isActiveChanged(newIsActive);
}

QDateTime AuthenticationInfo::dateCreated() const { return m_dateCreated; }
void AuthenticationInfo::setDateCreated(QDateTime newDateCreated) {
	m_dateCreated = newDateCreated;
	emit dateCreatedChanged(newDateCreated);
}

QDateTime AuthenticationInfo::dateRevoked() const { return m_dateRevoked; }
void AuthenticationInfo::setDateRevoked(QDateTime newDateRevoked) {
	m_dateRevoked = newDateRevoked;
	emit dateRevokedChanged(newDateRevoked);
}

QDateTime AuthenticationInfo::dateLastActivity() const { return m_dateLastActivity; }
void AuthenticationInfo::setDateLastActivity(QDateTime newDateLastActivity) {
	m_dateLastActivity = newDateLastActivity;
	emit dateLastActivityChanged(newDateLastActivity);
}

QString AuthenticationInfo::userName() const { return m_userName; }
void AuthenticationInfo::setUserName(QString newUserName) {
	m_userName = newUserName;
	emit userNameChanged(newUserName);
}


} // NS Jellyfin
} // NS DTO
