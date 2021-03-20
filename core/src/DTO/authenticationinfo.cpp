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

AuthenticationInfo::AuthenticationInfo(QObject *parent) {}

AuthenticationInfo AuthenticationInfo::fromJson(QJsonObject source) {AuthenticationInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void AuthenticationInfo::setFromJson(QJsonObject source) {
	m_jellyfinId = fromJsonValue<qint64>(source["Id"]);
	m_accessToken = fromJsonValue<QString>(source["AccessToken"]);
	m_deviceId = fromJsonValue<QString>(source["DeviceId"]);
	m_appName = fromJsonValue<QString>(source["AppName"]);
	m_appVersion = fromJsonValue<QString>(source["AppVersion"]);
	m_deviceName = fromJsonValue<QString>(source["DeviceName"]);
	m_userId = fromJsonValue<QUuid>(source["UserId"]);
	m_isActive = fromJsonValue<bool>(source["IsActive"]);
	m_dateCreated = fromJsonValue<QDateTime>(source["DateCreated"]);
	m_dateRevoked = fromJsonValue<QDateTime>(source["DateRevoked"]);
	m_dateLastActivity = fromJsonValue<QDateTime>(source["DateLastActivity"]);
	m_userName = fromJsonValue<QString>(source["UserName"]);

}
	
QJsonObject AuthenticationInfo::toJson() {
	QJsonObject result;
	result["Id"] = toJsonValue<qint64>(m_jellyfinId);
	result["AccessToken"] = toJsonValue<QString>(m_accessToken);
	result["DeviceId"] = toJsonValue<QString>(m_deviceId);
	result["AppName"] = toJsonValue<QString>(m_appName);
	result["AppVersion"] = toJsonValue<QString>(m_appVersion);
	result["DeviceName"] = toJsonValue<QString>(m_deviceName);
	result["UserId"] = toJsonValue<QUuid>(m_userId);
	result["IsActive"] = toJsonValue<bool>(m_isActive);
	result["DateCreated"] = toJsonValue<QDateTime>(m_dateCreated);
	result["DateRevoked"] = toJsonValue<QDateTime>(m_dateRevoked);
	result["DateLastActivity"] = toJsonValue<QDateTime>(m_dateLastActivity);
	result["UserName"] = toJsonValue<QString>(m_userName);

	return result;
}

qint64 AuthenticationInfo::jellyfinId() const { return m_jellyfinId; }

void AuthenticationInfo::setJellyfinId(qint64 newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
QString AuthenticationInfo::accessToken() const { return m_accessToken; }

void AuthenticationInfo::setAccessToken(QString newAccessToken) {
	m_accessToken = newAccessToken;
}
QString AuthenticationInfo::deviceId() const { return m_deviceId; }

void AuthenticationInfo::setDeviceId(QString newDeviceId) {
	m_deviceId = newDeviceId;
}
QString AuthenticationInfo::appName() const { return m_appName; }

void AuthenticationInfo::setAppName(QString newAppName) {
	m_appName = newAppName;
}
QString AuthenticationInfo::appVersion() const { return m_appVersion; }

void AuthenticationInfo::setAppVersion(QString newAppVersion) {
	m_appVersion = newAppVersion;
}
QString AuthenticationInfo::deviceName() const { return m_deviceName; }

void AuthenticationInfo::setDeviceName(QString newDeviceName) {
	m_deviceName = newDeviceName;
}
QUuid AuthenticationInfo::userId() const { return m_userId; }

void AuthenticationInfo::setUserId(QUuid newUserId) {
	m_userId = newUserId;
}
bool AuthenticationInfo::isActive() const { return m_isActive; }

void AuthenticationInfo::setIsActive(bool newIsActive) {
	m_isActive = newIsActive;
}
QDateTime AuthenticationInfo::dateCreated() const { return m_dateCreated; }

void AuthenticationInfo::setDateCreated(QDateTime newDateCreated) {
	m_dateCreated = newDateCreated;
}
QDateTime AuthenticationInfo::dateRevoked() const { return m_dateRevoked; }

void AuthenticationInfo::setDateRevoked(QDateTime newDateRevoked) {
	m_dateRevoked = newDateRevoked;
}
QDateTime AuthenticationInfo::dateLastActivity() const { return m_dateLastActivity; }

void AuthenticationInfo::setDateLastActivity(QDateTime newDateLastActivity) {
	m_dateLastActivity = newDateLastActivity;
}
QString AuthenticationInfo::userName() const { return m_userName; }

void AuthenticationInfo::setUserName(QString newUserName) {
	m_userName = newUserName;
}


} // NS Jellyfin
} // NS DTO
