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

#include <JellyfinQt/dto/quickconnectresult.h>

namespace Jellyfin {
namespace DTO {

QuickConnectResult::QuickConnectResult() {}
QuickConnectResult::QuickConnectResult (
		bool authenticated, 
		QString secret, 
		QString code, 
		QString deviceId, 
		QString deviceName, 
		QString appName, 
		QString appVersion, 
		QDateTime dateAdded 
		) :
	m_authenticated(authenticated),
	m_secret(secret),
	m_code(code),
	m_deviceId(deviceId),
	m_deviceName(deviceName),
	m_appName(appName),
	m_appVersion(appVersion),
	m_dateAdded(dateAdded) { }



QuickConnectResult::QuickConnectResult(const QuickConnectResult &other) :

	m_authenticated(other.m_authenticated),
	m_secret(other.m_secret),
	m_code(other.m_code),
	m_deviceId(other.m_deviceId),
	m_deviceName(other.m_deviceName),
	m_appName(other.m_appName),
	m_appVersion(other.m_appVersion),
	m_dateAdded(other.m_dateAdded){}


void QuickConnectResult::replaceData(QuickConnectResult &other) {
	m_authenticated = other.m_authenticated;
	m_secret = other.m_secret;
	m_code = other.m_code;
	m_deviceId = other.m_deviceId;
	m_deviceName = other.m_deviceName;
	m_appName = other.m_appName;
	m_appVersion = other.m_appVersion;
	m_dateAdded = other.m_dateAdded;
}

QuickConnectResult QuickConnectResult::fromJson(QJsonObject source) {
	QuickConnectResult instance;
	instance.setFromJson(source);
	return instance;
}


void QuickConnectResult::setFromJson(QJsonObject source) {
	m_authenticated = Jellyfin::Support::fromJsonValue<bool>(source["Authenticated"]);
	m_secret = Jellyfin::Support::fromJsonValue<QString>(source["Secret"]);
	m_code = Jellyfin::Support::fromJsonValue<QString>(source["Code"]);
	m_deviceId = Jellyfin::Support::fromJsonValue<QString>(source["DeviceId"]);
	m_deviceName = Jellyfin::Support::fromJsonValue<QString>(source["DeviceName"]);
	m_appName = Jellyfin::Support::fromJsonValue<QString>(source["AppName"]);
	m_appVersion = Jellyfin::Support::fromJsonValue<QString>(source["AppVersion"]);
	m_dateAdded = Jellyfin::Support::fromJsonValue<QDateTime>(source["DateAdded"]);

}
	
QJsonObject QuickConnectResult::toJson() const {
	QJsonObject result;
	
	result["Authenticated"] = Jellyfin::Support::toJsonValue<bool>(m_authenticated);		
	result["Secret"] = Jellyfin::Support::toJsonValue<QString>(m_secret);		
	result["Code"] = Jellyfin::Support::toJsonValue<QString>(m_code);		
	result["DeviceId"] = Jellyfin::Support::toJsonValue<QString>(m_deviceId);		
	result["DeviceName"] = Jellyfin::Support::toJsonValue<QString>(m_deviceName);		
	result["AppName"] = Jellyfin::Support::toJsonValue<QString>(m_appName);		
	result["AppVersion"] = Jellyfin::Support::toJsonValue<QString>(m_appVersion);		
	result["DateAdded"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateAdded);	
	return result;
}

bool QuickConnectResult::authenticated() const { return m_authenticated; }

void QuickConnectResult::setAuthenticated(bool newAuthenticated) {
	m_authenticated = newAuthenticated;
}

QString QuickConnectResult::secret() const { return m_secret; }

void QuickConnectResult::setSecret(QString newSecret) {
	m_secret = newSecret;
}

QString QuickConnectResult::code() const { return m_code; }

void QuickConnectResult::setCode(QString newCode) {
	m_code = newCode;
}

QString QuickConnectResult::deviceId() const { return m_deviceId; }

void QuickConnectResult::setDeviceId(QString newDeviceId) {
	m_deviceId = newDeviceId;
}

QString QuickConnectResult::deviceName() const { return m_deviceName; }

void QuickConnectResult::setDeviceName(QString newDeviceName) {
	m_deviceName = newDeviceName;
}

QString QuickConnectResult::appName() const { return m_appName; }

void QuickConnectResult::setAppName(QString newAppName) {
	m_appName = newAppName;
}

QString QuickConnectResult::appVersion() const { return m_appVersion; }

void QuickConnectResult::setAppVersion(QString newAppVersion) {
	m_appVersion = newAppVersion;
}

QDateTime QuickConnectResult::dateAdded() const { return m_dateAdded; }

void QuickConnectResult::setDateAdded(QDateTime newDateAdded) {
	m_dateAdded = newDateAdded;
}


} // NS DTO

namespace Support {

using QuickConnectResult = Jellyfin::DTO::QuickConnectResult;

template <>
QuickConnectResult fromJsonValue(const QJsonValue &source, convertType<QuickConnectResult>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return QuickConnectResult::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const QuickConnectResult &source, convertType<QuickConnectResult>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
