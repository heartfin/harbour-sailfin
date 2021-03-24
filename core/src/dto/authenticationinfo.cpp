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

#include <JellyfinQt/dto/authenticationinfo.h>

namespace Jellyfin {
namespace DTO {

AuthenticationInfo::AuthenticationInfo() {}

AuthenticationInfo::AuthenticationInfo(const AuthenticationInfo &other) :

	m_jellyfinId(other.m_jellyfinId),
	m_accessToken(other.m_accessToken),
	m_deviceId(other.m_deviceId),
	m_appName(other.m_appName),
	m_appVersion(other.m_appVersion),
	m_deviceName(other.m_deviceName),
	m_userId(other.m_userId),
	m_isActive(other.m_isActive),
	m_dateCreated(other.m_dateCreated),
	m_dateRevoked(other.m_dateRevoked),
	m_dateLastActivity(other.m_dateLastActivity),
	m_userName(other.m_userName){}


void AuthenticationInfo::replaceData(AuthenticationInfo &other) {
	m_jellyfinId = other.m_jellyfinId;
	m_accessToken = other.m_accessToken;
	m_deviceId = other.m_deviceId;
	m_appName = other.m_appName;
	m_appVersion = other.m_appVersion;
	m_deviceName = other.m_deviceName;
	m_userId = other.m_userId;
	m_isActive = other.m_isActive;
	m_dateCreated = other.m_dateCreated;
	m_dateRevoked = other.m_dateRevoked;
	m_dateLastActivity = other.m_dateLastActivity;
	m_userName = other.m_userName;
}

AuthenticationInfo AuthenticationInfo::fromJson(QJsonObject source) {
	AuthenticationInfo instance;
	instance.setFromJson(source);
	return instance;
}


void AuthenticationInfo::setFromJson(QJsonObject source) {
	m_jellyfinId = Jellyfin::Support::fromJsonValue<qint64>(source["Id"]);
	m_accessToken = Jellyfin::Support::fromJsonValue<QString>(source["AccessToken"]);
	m_deviceId = Jellyfin::Support::fromJsonValue<QString>(source["DeviceId"]);
	m_appName = Jellyfin::Support::fromJsonValue<QString>(source["AppName"]);
	m_appVersion = Jellyfin::Support::fromJsonValue<QString>(source["AppVersion"]);
	m_deviceName = Jellyfin::Support::fromJsonValue<QString>(source["DeviceName"]);
	m_userId = Jellyfin::Support::fromJsonValue<QString>(source["UserId"]);
	m_isActive = Jellyfin::Support::fromJsonValue<bool>(source["IsActive"]);
	m_dateCreated = Jellyfin::Support::fromJsonValue<QDateTime>(source["DateCreated"]);
	m_dateRevoked = Jellyfin::Support::fromJsonValue<QDateTime>(source["DateRevoked"]);
	m_dateLastActivity = Jellyfin::Support::fromJsonValue<QDateTime>(source["DateLastActivity"]);
	m_userName = Jellyfin::Support::fromJsonValue<QString>(source["UserName"]);

}
	
QJsonObject AuthenticationInfo::toJson() {
	QJsonObject result;
	result["Id"] = Jellyfin::Support::toJsonValue<qint64>(m_jellyfinId);
	result["AccessToken"] = Jellyfin::Support::toJsonValue<QString>(m_accessToken);
	result["DeviceId"] = Jellyfin::Support::toJsonValue<QString>(m_deviceId);
	result["AppName"] = Jellyfin::Support::toJsonValue<QString>(m_appName);
	result["AppVersion"] = Jellyfin::Support::toJsonValue<QString>(m_appVersion);
	result["DeviceName"] = Jellyfin::Support::toJsonValue<QString>(m_deviceName);
	result["UserId"] = Jellyfin::Support::toJsonValue<QString>(m_userId);
	result["IsActive"] = Jellyfin::Support::toJsonValue<bool>(m_isActive);
	result["DateCreated"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateCreated);
	result["DateRevoked"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateRevoked);
	result["DateLastActivity"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateLastActivity);
	result["UserName"] = Jellyfin::Support::toJsonValue<QString>(m_userName);

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
bool AuthenticationInfo::accessTokenNull() const {
	return m_accessToken.isNull();
}

void AuthenticationInfo::setAccessTokenNull() {
	m_accessToken.clear();

}
QString AuthenticationInfo::deviceId() const { return m_deviceId; }

void AuthenticationInfo::setDeviceId(QString newDeviceId) {
	m_deviceId = newDeviceId;
}
bool AuthenticationInfo::deviceIdNull() const {
	return m_deviceId.isNull();
}

void AuthenticationInfo::setDeviceIdNull() {
	m_deviceId.clear();

}
QString AuthenticationInfo::appName() const { return m_appName; }

void AuthenticationInfo::setAppName(QString newAppName) {
	m_appName = newAppName;
}
bool AuthenticationInfo::appNameNull() const {
	return m_appName.isNull();
}

void AuthenticationInfo::setAppNameNull() {
	m_appName.clear();

}
QString AuthenticationInfo::appVersion() const { return m_appVersion; }

void AuthenticationInfo::setAppVersion(QString newAppVersion) {
	m_appVersion = newAppVersion;
}
bool AuthenticationInfo::appVersionNull() const {
	return m_appVersion.isNull();
}

void AuthenticationInfo::setAppVersionNull() {
	m_appVersion.clear();

}
QString AuthenticationInfo::deviceName() const { return m_deviceName; }

void AuthenticationInfo::setDeviceName(QString newDeviceName) {
	m_deviceName = newDeviceName;
}
bool AuthenticationInfo::deviceNameNull() const {
	return m_deviceName.isNull();
}

void AuthenticationInfo::setDeviceNameNull() {
	m_deviceName.clear();

}
QString AuthenticationInfo::userId() const { return m_userId; }

void AuthenticationInfo::setUserId(QString newUserId) {
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
bool AuthenticationInfo::dateRevokedNull() const {
	return m_dateRevoked.isNull();
}

void AuthenticationInfo::setDateRevokedNull() {
	m_dateRevoked= QDateTime();

}
QDateTime AuthenticationInfo::dateLastActivity() const { return m_dateLastActivity; }

void AuthenticationInfo::setDateLastActivity(QDateTime newDateLastActivity) {
	m_dateLastActivity = newDateLastActivity;
}

QString AuthenticationInfo::userName() const { return m_userName; }

void AuthenticationInfo::setUserName(QString newUserName) {
	m_userName = newUserName;
}
bool AuthenticationInfo::userNameNull() const {
	return m_userName.isNull();
}

void AuthenticationInfo::setUserNameNull() {
	m_userName.clear();

}

} // NS DTO

namespace Support {

using AuthenticationInfo = Jellyfin::DTO::AuthenticationInfo;

template <>
AuthenticationInfo fromJsonValue<AuthenticationInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return AuthenticationInfo::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
