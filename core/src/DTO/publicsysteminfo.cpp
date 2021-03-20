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

#include <JellyfinQt/DTO/publicsysteminfo.h>

namespace Jellyfin {
namespace DTO {

PublicSystemInfo::PublicSystemInfo(QObject *parent) {}

PublicSystemInfo PublicSystemInfo::fromJson(QJsonObject source) {PublicSystemInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void PublicSystemInfo::setFromJson(QJsonObject source) {
	m_localAddress = fromJsonValue<QString>(source["LocalAddress"]);
	m_serverName = fromJsonValue<QString>(source["ServerName"]);
	m_version = fromJsonValue<QString>(source["Version"]);
	m_productName = fromJsonValue<QString>(source["ProductName"]);
	m_operatingSystem = fromJsonValue<QString>(source["OperatingSystem"]);
	m_jellyfinId = fromJsonValue<QString>(source["Id"]);
	m_startupWizardCompleted = fromJsonValue<bool>(source["StartupWizardCompleted"]);

}
	
QJsonObject PublicSystemInfo::toJson() {
	QJsonObject result;
	result["LocalAddress"] = toJsonValue<QString>(m_localAddress);
	result["ServerName"] = toJsonValue<QString>(m_serverName);
	result["Version"] = toJsonValue<QString>(m_version);
	result["ProductName"] = toJsonValue<QString>(m_productName);
	result["OperatingSystem"] = toJsonValue<QString>(m_operatingSystem);
	result["Id"] = toJsonValue<QString>(m_jellyfinId);
	result["StartupWizardCompleted"] = toJsonValue<bool>(m_startupWizardCompleted);

	return result;
}

QString PublicSystemInfo::localAddress() const { return m_localAddress; }

void PublicSystemInfo::setLocalAddress(QString newLocalAddress) {
	m_localAddress = newLocalAddress;
}
QString PublicSystemInfo::serverName() const { return m_serverName; }

void PublicSystemInfo::setServerName(QString newServerName) {
	m_serverName = newServerName;
}
QString PublicSystemInfo::version() const { return m_version; }

void PublicSystemInfo::setVersion(QString newVersion) {
	m_version = newVersion;
}
QString PublicSystemInfo::productName() const { return m_productName; }

void PublicSystemInfo::setProductName(QString newProductName) {
	m_productName = newProductName;
}
QString PublicSystemInfo::operatingSystem() const { return m_operatingSystem; }

void PublicSystemInfo::setOperatingSystem(QString newOperatingSystem) {
	m_operatingSystem = newOperatingSystem;
}
QString PublicSystemInfo::jellyfinId() const { return m_jellyfinId; }

void PublicSystemInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool PublicSystemInfo::startupWizardCompleted() const { return m_startupWizardCompleted; }

void PublicSystemInfo::setStartupWizardCompleted(bool newStartupWizardCompleted) {
	m_startupWizardCompleted = newStartupWizardCompleted;
}


} // NS Jellyfin
} // NS DTO
