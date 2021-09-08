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

#include <JellyfinQt/dto/publicsysteminfo.h>

namespace Jellyfin {
namespace DTO {

PublicSystemInfo::PublicSystemInfo() {}

PublicSystemInfo::PublicSystemInfo(const PublicSystemInfo &other) :

	m_localAddress(other.m_localAddress),
	m_serverName(other.m_serverName),
	m_version(other.m_version),
	m_productName(other.m_productName),
	m_operatingSystem(other.m_operatingSystem),
	m_jellyfinId(other.m_jellyfinId),
	m_startupWizardCompleted(other.m_startupWizardCompleted){}


void PublicSystemInfo::replaceData(PublicSystemInfo &other) {
	m_localAddress = other.m_localAddress;
	m_serverName = other.m_serverName;
	m_version = other.m_version;
	m_productName = other.m_productName;
	m_operatingSystem = other.m_operatingSystem;
	m_jellyfinId = other.m_jellyfinId;
	m_startupWizardCompleted = other.m_startupWizardCompleted;
}

PublicSystemInfo PublicSystemInfo::fromJson(QJsonObject source) {
	PublicSystemInfo instance;
	instance.setFromJson(source);
	return instance;
}


void PublicSystemInfo::setFromJson(QJsonObject source) {
	m_localAddress = Jellyfin::Support::fromJsonValue<QString>(source["LocalAddress"]);
	m_serverName = Jellyfin::Support::fromJsonValue<QString>(source["ServerName"]);
	m_version = Jellyfin::Support::fromJsonValue<QString>(source["Version"]);
	m_productName = Jellyfin::Support::fromJsonValue<QString>(source["ProductName"]);
	m_operatingSystem = Jellyfin::Support::fromJsonValue<QString>(source["OperatingSystem"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_startupWizardCompleted = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["StartupWizardCompleted"]);

}
	
QJsonObject PublicSystemInfo::toJson() const {
	QJsonObject result;
	
	
	if (!(m_localAddress.isNull())) {
		result["LocalAddress"] = Jellyfin::Support::toJsonValue<QString>(m_localAddress);
	}
			
	
	if (!(m_serverName.isNull())) {
		result["ServerName"] = Jellyfin::Support::toJsonValue<QString>(m_serverName);
	}
			
	
	if (!(m_version.isNull())) {
		result["Version"] = Jellyfin::Support::toJsonValue<QString>(m_version);
	}
			
	
	if (!(m_productName.isNull())) {
		result["ProductName"] = Jellyfin::Support::toJsonValue<QString>(m_productName);
	}
			
	
	if (!(m_operatingSystem.isNull())) {
		result["OperatingSystem"] = Jellyfin::Support::toJsonValue<QString>(m_operatingSystem);
	}
			
	
	if (!(m_jellyfinId.isNull())) {
		result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	}
			
	
	if (!(!m_startupWizardCompleted.has_value())) {
		result["StartupWizardCompleted"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_startupWizardCompleted);
	}
		
	return result;
}

QString PublicSystemInfo::localAddress() const { return m_localAddress; }

void PublicSystemInfo::setLocalAddress(QString newLocalAddress) {
	m_localAddress = newLocalAddress;
}
bool PublicSystemInfo::localAddressNull() const {
	return m_localAddress.isNull();
}

void PublicSystemInfo::setLocalAddressNull() {
	m_localAddress.clear();

}
QString PublicSystemInfo::serverName() const { return m_serverName; }

void PublicSystemInfo::setServerName(QString newServerName) {
	m_serverName = newServerName;
}
bool PublicSystemInfo::serverNameNull() const {
	return m_serverName.isNull();
}

void PublicSystemInfo::setServerNameNull() {
	m_serverName.clear();

}
QString PublicSystemInfo::version() const { return m_version; }

void PublicSystemInfo::setVersion(QString newVersion) {
	m_version = newVersion;
}
bool PublicSystemInfo::versionNull() const {
	return m_version.isNull();
}

void PublicSystemInfo::setVersionNull() {
	m_version.clear();

}
QString PublicSystemInfo::productName() const { return m_productName; }

void PublicSystemInfo::setProductName(QString newProductName) {
	m_productName = newProductName;
}
bool PublicSystemInfo::productNameNull() const {
	return m_productName.isNull();
}

void PublicSystemInfo::setProductNameNull() {
	m_productName.clear();

}
QString PublicSystemInfo::operatingSystem() const { return m_operatingSystem; }

void PublicSystemInfo::setOperatingSystem(QString newOperatingSystem) {
	m_operatingSystem = newOperatingSystem;
}
bool PublicSystemInfo::operatingSystemNull() const {
	return m_operatingSystem.isNull();
}

void PublicSystemInfo::setOperatingSystemNull() {
	m_operatingSystem.clear();

}
QString PublicSystemInfo::jellyfinId() const { return m_jellyfinId; }

void PublicSystemInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool PublicSystemInfo::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void PublicSystemInfo::setJellyfinIdNull() {
	m_jellyfinId.clear();

}
std::optional<bool> PublicSystemInfo::startupWizardCompleted() const { return m_startupWizardCompleted; }

void PublicSystemInfo::setStartupWizardCompleted(std::optional<bool> newStartupWizardCompleted) {
	m_startupWizardCompleted = newStartupWizardCompleted;
}
bool PublicSystemInfo::startupWizardCompletedNull() const {
	return !m_startupWizardCompleted.has_value();
}

void PublicSystemInfo::setStartupWizardCompletedNull() {
	m_startupWizardCompleted = std::nullopt;

}

} // NS DTO

namespace Support {

using PublicSystemInfo = Jellyfin::DTO::PublicSystemInfo;

template <>
PublicSystemInfo fromJsonValue(const QJsonValue &source, convertType<PublicSystemInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return PublicSystemInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const PublicSystemInfo &source, convertType<PublicSystemInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
