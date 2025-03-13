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

#include <JellyfinQt/dto/deviceinfodto.h>

namespace Jellyfin {
namespace DTO {

DeviceInfoDto::DeviceInfoDto() {}
DeviceInfoDto::DeviceInfoDto (
		QSharedPointer<ClientCapabilitiesDto> capabilities 
		) :
	m_capabilities(capabilities) { }



DeviceInfoDto::DeviceInfoDto(const DeviceInfoDto &other) :

	m_name(other.m_name),
	m_customName(other.m_customName),
	m_accessToken(other.m_accessToken),
	m_jellyfinId(other.m_jellyfinId),
	m_lastUserName(other.m_lastUserName),
	m_appName(other.m_appName),
	m_appVersion(other.m_appVersion),
	m_lastUserId(other.m_lastUserId),
	m_dateLastActivity(other.m_dateLastActivity),
	m_capabilities(other.m_capabilities),
	m_iconUrl(other.m_iconUrl){}


void DeviceInfoDto::replaceData(DeviceInfoDto &other) {
	m_name = other.m_name;
	m_customName = other.m_customName;
	m_accessToken = other.m_accessToken;
	m_jellyfinId = other.m_jellyfinId;
	m_lastUserName = other.m_lastUserName;
	m_appName = other.m_appName;
	m_appVersion = other.m_appVersion;
	m_lastUserId = other.m_lastUserId;
	m_dateLastActivity = other.m_dateLastActivity;
	m_capabilities = other.m_capabilities;
	m_iconUrl = other.m_iconUrl;
}

DeviceInfoDto DeviceInfoDto::fromJson(QJsonObject source) {
	DeviceInfoDto instance;
	instance.setFromJson(source);
	return instance;
}


void DeviceInfoDto::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_customName = Jellyfin::Support::fromJsonValue<QString>(source["CustomName"]);
	m_accessToken = Jellyfin::Support::fromJsonValue<QString>(source["AccessToken"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_lastUserName = Jellyfin::Support::fromJsonValue<QString>(source["LastUserName"]);
	m_appName = Jellyfin::Support::fromJsonValue<QString>(source["AppName"]);
	m_appVersion = Jellyfin::Support::fromJsonValue<QString>(source["AppVersion"]);
	m_lastUserId = Jellyfin::Support::fromJsonValue<QString>(source["LastUserId"]);
	m_dateLastActivity = Jellyfin::Support::fromJsonValue<QDateTime>(source["DateLastActivity"]);
	m_capabilities = Jellyfin::Support::fromJsonValue<QSharedPointer<ClientCapabilitiesDto>>(source["Capabilities"]);
	m_iconUrl = Jellyfin::Support::fromJsonValue<QString>(source["IconUrl"]);

}
	
QJsonObject DeviceInfoDto::toJson() const {
	QJsonObject result;
	
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	
	if (!(m_customName.isNull())) {
		result["CustomName"] = Jellyfin::Support::toJsonValue<QString>(m_customName);
	}
			
	
	if (!(m_accessToken.isNull())) {
		result["AccessToken"] = Jellyfin::Support::toJsonValue<QString>(m_accessToken);
	}
			
	
	if (!(m_jellyfinId.isNull())) {
		result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	}
			
	
	if (!(m_lastUserName.isNull())) {
		result["LastUserName"] = Jellyfin::Support::toJsonValue<QString>(m_lastUserName);
	}
			
	
	if (!(m_appName.isNull())) {
		result["AppName"] = Jellyfin::Support::toJsonValue<QString>(m_appName);
	}
			
	
	if (!(m_appVersion.isNull())) {
		result["AppVersion"] = Jellyfin::Support::toJsonValue<QString>(m_appVersion);
	}
			
	
	if (!(m_lastUserId.isNull())) {
		result["LastUserId"] = Jellyfin::Support::toJsonValue<QString>(m_lastUserId);
	}
			
	
	if (!(m_dateLastActivity.isNull())) {
		result["DateLastActivity"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateLastActivity);
	}
			
	result["Capabilities"] = Jellyfin::Support::toJsonValue<QSharedPointer<ClientCapabilitiesDto>>(m_capabilities);		
	
	if (!(m_iconUrl.isNull())) {
		result["IconUrl"] = Jellyfin::Support::toJsonValue<QString>(m_iconUrl);
	}
		
	return result;
}

QString DeviceInfoDto::name() const { return m_name; }

void DeviceInfoDto::setName(QString newName) {
	m_name = newName;
}
bool DeviceInfoDto::nameNull() const {
	return m_name.isNull();
}

void DeviceInfoDto::setNameNull() {
	m_name.clear();

}
QString DeviceInfoDto::customName() const { return m_customName; }

void DeviceInfoDto::setCustomName(QString newCustomName) {
	m_customName = newCustomName;
}
bool DeviceInfoDto::customNameNull() const {
	return m_customName.isNull();
}

void DeviceInfoDto::setCustomNameNull() {
	m_customName.clear();

}
QString DeviceInfoDto::accessToken() const { return m_accessToken; }

void DeviceInfoDto::setAccessToken(QString newAccessToken) {
	m_accessToken = newAccessToken;
}
bool DeviceInfoDto::accessTokenNull() const {
	return m_accessToken.isNull();
}

void DeviceInfoDto::setAccessTokenNull() {
	m_accessToken.clear();

}
QString DeviceInfoDto::jellyfinId() const { return m_jellyfinId; }

void DeviceInfoDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool DeviceInfoDto::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void DeviceInfoDto::setJellyfinIdNull() {
	m_jellyfinId.clear();

}
QString DeviceInfoDto::lastUserName() const { return m_lastUserName; }

void DeviceInfoDto::setLastUserName(QString newLastUserName) {
	m_lastUserName = newLastUserName;
}
bool DeviceInfoDto::lastUserNameNull() const {
	return m_lastUserName.isNull();
}

void DeviceInfoDto::setLastUserNameNull() {
	m_lastUserName.clear();

}
QString DeviceInfoDto::appName() const { return m_appName; }

void DeviceInfoDto::setAppName(QString newAppName) {
	m_appName = newAppName;
}
bool DeviceInfoDto::appNameNull() const {
	return m_appName.isNull();
}

void DeviceInfoDto::setAppNameNull() {
	m_appName.clear();

}
QString DeviceInfoDto::appVersion() const { return m_appVersion; }

void DeviceInfoDto::setAppVersion(QString newAppVersion) {
	m_appVersion = newAppVersion;
}
bool DeviceInfoDto::appVersionNull() const {
	return m_appVersion.isNull();
}

void DeviceInfoDto::setAppVersionNull() {
	m_appVersion.clear();

}
QString DeviceInfoDto::lastUserId() const { return m_lastUserId; }

void DeviceInfoDto::setLastUserId(QString newLastUserId) {
	m_lastUserId = newLastUserId;
}
bool DeviceInfoDto::lastUserIdNull() const {
	return m_lastUserId.isNull();
}

void DeviceInfoDto::setLastUserIdNull() {
	m_lastUserId.clear();

}
QDateTime DeviceInfoDto::dateLastActivity() const { return m_dateLastActivity; }

void DeviceInfoDto::setDateLastActivity(QDateTime newDateLastActivity) {
	m_dateLastActivity = newDateLastActivity;
}
bool DeviceInfoDto::dateLastActivityNull() const {
	return m_dateLastActivity.isNull();
}

void DeviceInfoDto::setDateLastActivityNull() {
	m_dateLastActivity= QDateTime();

}
QSharedPointer<ClientCapabilitiesDto> DeviceInfoDto::capabilities() const { return m_capabilities; }

void DeviceInfoDto::setCapabilities(QSharedPointer<ClientCapabilitiesDto> newCapabilities) {
	m_capabilities = newCapabilities;
}

QString DeviceInfoDto::iconUrl() const { return m_iconUrl; }

void DeviceInfoDto::setIconUrl(QString newIconUrl) {
	m_iconUrl = newIconUrl;
}
bool DeviceInfoDto::iconUrlNull() const {
	return m_iconUrl.isNull();
}

void DeviceInfoDto::setIconUrlNull() {
	m_iconUrl.clear();

}

} // NS DTO

namespace Support {

using DeviceInfoDto = Jellyfin::DTO::DeviceInfoDto;

template <>
DeviceInfoDto fromJsonValue(const QJsonValue &source, convertType<DeviceInfoDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return DeviceInfoDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const DeviceInfoDto &source, convertType<DeviceInfoDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
