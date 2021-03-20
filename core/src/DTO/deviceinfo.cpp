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

#include <JellyfinQt/DTO/deviceinfo.h>

namespace Jellyfin {
namespace DTO {

DeviceInfo::DeviceInfo() {}

DeviceInfo DeviceInfo::fromJson(QJsonObject source) {
	DeviceInfo instance;
	instance.setFromJson(source);
	return instance;
}


void DeviceInfo::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_lastUserName = Jellyfin::Support::fromJsonValue<QString>(source["LastUserName"]);
	m_appName = Jellyfin::Support::fromJsonValue<QString>(source["AppName"]);
	m_appVersion = Jellyfin::Support::fromJsonValue<QString>(source["AppVersion"]);
	m_lastUserId = Jellyfin::Support::fromJsonValue<QUuid>(source["LastUserId"]);
	m_dateLastActivity = Jellyfin::Support::fromJsonValue<QDateTime>(source["DateLastActivity"]);
	m_capabilities = Jellyfin::Support::fromJsonValue<QSharedPointer<ClientCapabilities>>(source["Capabilities"]);
	m_iconUrl = Jellyfin::Support::fromJsonValue<QString>(source["IconUrl"]);

}
	
QJsonObject DeviceInfo::toJson() {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	result["LastUserName"] = Jellyfin::Support::toJsonValue<QString>(m_lastUserName);
	result["AppName"] = Jellyfin::Support::toJsonValue<QString>(m_appName);
	result["AppVersion"] = Jellyfin::Support::toJsonValue<QString>(m_appVersion);
	result["LastUserId"] = Jellyfin::Support::toJsonValue<QUuid>(m_lastUserId);
	result["DateLastActivity"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateLastActivity);
	result["Capabilities"] = Jellyfin::Support::toJsonValue<QSharedPointer<ClientCapabilities>>(m_capabilities);
	result["IconUrl"] = Jellyfin::Support::toJsonValue<QString>(m_iconUrl);

	return result;
}

QString DeviceInfo::name() const { return m_name; }

void DeviceInfo::setName(QString newName) {
	m_name = newName;
}
QString DeviceInfo::jellyfinId() const { return m_jellyfinId; }

void DeviceInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
QString DeviceInfo::lastUserName() const { return m_lastUserName; }

void DeviceInfo::setLastUserName(QString newLastUserName) {
	m_lastUserName = newLastUserName;
}
QString DeviceInfo::appName() const { return m_appName; }

void DeviceInfo::setAppName(QString newAppName) {
	m_appName = newAppName;
}
QString DeviceInfo::appVersion() const { return m_appVersion; }

void DeviceInfo::setAppVersion(QString newAppVersion) {
	m_appVersion = newAppVersion;
}
QUuid DeviceInfo::lastUserId() const { return m_lastUserId; }

void DeviceInfo::setLastUserId(QUuid newLastUserId) {
	m_lastUserId = newLastUserId;
}
QDateTime DeviceInfo::dateLastActivity() const { return m_dateLastActivity; }

void DeviceInfo::setDateLastActivity(QDateTime newDateLastActivity) {
	m_dateLastActivity = newDateLastActivity;
}
QSharedPointer<ClientCapabilities> DeviceInfo::capabilities() const { return m_capabilities; }

void DeviceInfo::setCapabilities(QSharedPointer<ClientCapabilities> newCapabilities) {
	m_capabilities = newCapabilities;
}
QString DeviceInfo::iconUrl() const { return m_iconUrl; }

void DeviceInfo::setIconUrl(QString newIconUrl) {
	m_iconUrl = newIconUrl;
}

} // NS DTO

namespace Support {

using DeviceInfo = Jellyfin::DTO::DeviceInfo;

template <>
DeviceInfo fromJsonValue<DeviceInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return DeviceInfo::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO
