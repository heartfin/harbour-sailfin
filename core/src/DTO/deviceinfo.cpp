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

DeviceInfo::DeviceInfo(QObject *parent) : QObject(parent) {}

DeviceInfo *DeviceInfo::fromJSON(QJsonObject source, QObject *parent) {
	DeviceInfo *instance = new DeviceInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void DeviceInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject DeviceInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString DeviceInfo::name() const { return m_name; }
void DeviceInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString DeviceInfo::jellyfinId() const { return m_jellyfinId; }
void DeviceInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

QString DeviceInfo::lastUserName() const { return m_lastUserName; }
void DeviceInfo::setLastUserName(QString newLastUserName) {
	m_lastUserName = newLastUserName;
	emit lastUserNameChanged(newLastUserName);
}

QString DeviceInfo::appName() const { return m_appName; }
void DeviceInfo::setAppName(QString newAppName) {
	m_appName = newAppName;
	emit appNameChanged(newAppName);
}

QString DeviceInfo::appVersion() const { return m_appVersion; }
void DeviceInfo::setAppVersion(QString newAppVersion) {
	m_appVersion = newAppVersion;
	emit appVersionChanged(newAppVersion);
}

QString DeviceInfo::lastUserId() const { return m_lastUserId; }
void DeviceInfo::setLastUserId(QString newLastUserId) {
	m_lastUserId = newLastUserId;
	emit lastUserIdChanged(newLastUserId);
}

QDateTime DeviceInfo::dateLastActivity() const { return m_dateLastActivity; }
void DeviceInfo::setDateLastActivity(QDateTime newDateLastActivity) {
	m_dateLastActivity = newDateLastActivity;
	emit dateLastActivityChanged(newDateLastActivity);
}

ClientCapabilities * DeviceInfo::capabilities() const { return m_capabilities; }
void DeviceInfo::setCapabilities(ClientCapabilities * newCapabilities) {
	m_capabilities = newCapabilities;
	emit capabilitiesChanged(newCapabilities);
}

QString DeviceInfo::iconUrl() const { return m_iconUrl; }
void DeviceInfo::setIconUrl(QString newIconUrl) {
	m_iconUrl = newIconUrl;
	emit iconUrlChanged(newIconUrl);
}


} // NS Jellyfin
} // NS DTO
