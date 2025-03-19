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

#include <JellyfinQt/dto/systeminfo.h>

namespace Jellyfin {
namespace DTO {

SystemInfo::SystemInfo() {}
SystemInfo::SystemInfo (
		bool hasPendingRestart, 
		bool isShuttingDown, 
		bool supportsLibraryMonitor, 
		qint32 webSocketPortNumber, 
		std::optional<bool> canSelfRestart, 
		std::optional<bool> canLaunchWebBrowser, 
		std::optional<bool> hasUpdateAvailable 
		) :
	m_hasPendingRestart(hasPendingRestart),
	m_isShuttingDown(isShuttingDown),
	m_supportsLibraryMonitor(supportsLibraryMonitor),
	m_webSocketPortNumber(webSocketPortNumber),
	m_canSelfRestart(canSelfRestart),
	m_canLaunchWebBrowser(canLaunchWebBrowser),
	m_hasUpdateAvailable(hasUpdateAvailable) { }



SystemInfo::SystemInfo(const SystemInfo &other) :

	m_localAddress(other.m_localAddress),
	m_serverName(other.m_serverName),
	m_version(other.m_version),
	m_productName(other.m_productName),
	m_operatingSystem(other.m_operatingSystem),
	m_jellyfinId(other.m_jellyfinId),
	m_startupWizardCompleted(other.m_startupWizardCompleted),
	m_operatingSystemDisplayName(other.m_operatingSystemDisplayName),
	m_packageName(other.m_packageName),
	m_hasPendingRestart(other.m_hasPendingRestart),
	m_isShuttingDown(other.m_isShuttingDown),
	m_supportsLibraryMonitor(other.m_supportsLibraryMonitor),
	m_webSocketPortNumber(other.m_webSocketPortNumber),
	m_completedInstallations(other.m_completedInstallations),
	m_canSelfRestart(other.m_canSelfRestart),
	m_canLaunchWebBrowser(other.m_canLaunchWebBrowser),
	m_programDataPath(other.m_programDataPath),
	m_webPath(other.m_webPath),
	m_itemsByNamePath(other.m_itemsByNamePath),
	m_cachePath(other.m_cachePath),
	m_logPath(other.m_logPath),
	m_internalMetadataPath(other.m_internalMetadataPath),
	m_transcodingTempPath(other.m_transcodingTempPath),
	m_castReceiverApplications(other.m_castReceiverApplications),
	m_hasUpdateAvailable(other.m_hasUpdateAvailable),
	m_encoderLocation(other.m_encoderLocation),
	m_systemArchitecture(other.m_systemArchitecture){}


void SystemInfo::replaceData(SystemInfo &other) {
	m_localAddress = other.m_localAddress;
	m_serverName = other.m_serverName;
	m_version = other.m_version;
	m_productName = other.m_productName;
	m_operatingSystem = other.m_operatingSystem;
	m_jellyfinId = other.m_jellyfinId;
	m_startupWizardCompleted = other.m_startupWizardCompleted;
	m_operatingSystemDisplayName = other.m_operatingSystemDisplayName;
	m_packageName = other.m_packageName;
	m_hasPendingRestart = other.m_hasPendingRestart;
	m_isShuttingDown = other.m_isShuttingDown;
	m_supportsLibraryMonitor = other.m_supportsLibraryMonitor;
	m_webSocketPortNumber = other.m_webSocketPortNumber;
	m_completedInstallations = other.m_completedInstallations;
	m_canSelfRestart = other.m_canSelfRestart;
	m_canLaunchWebBrowser = other.m_canLaunchWebBrowser;
	m_programDataPath = other.m_programDataPath;
	m_webPath = other.m_webPath;
	m_itemsByNamePath = other.m_itemsByNamePath;
	m_cachePath = other.m_cachePath;
	m_logPath = other.m_logPath;
	m_internalMetadataPath = other.m_internalMetadataPath;
	m_transcodingTempPath = other.m_transcodingTempPath;
	m_castReceiverApplications = other.m_castReceiverApplications;
	m_hasUpdateAvailable = other.m_hasUpdateAvailable;
	m_encoderLocation = other.m_encoderLocation;
	m_systemArchitecture = other.m_systemArchitecture;
}

SystemInfo SystemInfo::fromJson(QJsonObject source) {
	SystemInfo instance;
	instance.setFromJson(source);
	return instance;
}


void SystemInfo::setFromJson(QJsonObject source) {
	m_localAddress = Jellyfin::Support::fromJsonValue<QString>(source["LocalAddress"]);
	m_serverName = Jellyfin::Support::fromJsonValue<QString>(source["ServerName"]);
	m_version = Jellyfin::Support::fromJsonValue<QString>(source["Version"]);
	m_productName = Jellyfin::Support::fromJsonValue<QString>(source["ProductName"]);
	m_operatingSystem = Jellyfin::Support::fromJsonValue<QString>(source["OperatingSystem"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_startupWizardCompleted = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["StartupWizardCompleted"]);
	m_operatingSystemDisplayName = Jellyfin::Support::fromJsonValue<QString>(source["OperatingSystemDisplayName"]);
	m_packageName = Jellyfin::Support::fromJsonValue<QString>(source["PackageName"]);
	m_hasPendingRestart = Jellyfin::Support::fromJsonValue<bool>(source["HasPendingRestart"]);
	m_isShuttingDown = Jellyfin::Support::fromJsonValue<bool>(source["IsShuttingDown"]);
	m_supportsLibraryMonitor = Jellyfin::Support::fromJsonValue<bool>(source["SupportsLibraryMonitor"]);
	m_webSocketPortNumber = Jellyfin::Support::fromJsonValue<qint32>(source["WebSocketPortNumber"]);
	m_completedInstallations = Jellyfin::Support::fromJsonValue<QList<InstallationInfo>>(source["CompletedInstallations"]);
	m_canSelfRestart = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["CanSelfRestart"]);
	m_canLaunchWebBrowser = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["CanLaunchWebBrowser"]);
	m_programDataPath = Jellyfin::Support::fromJsonValue<QString>(source["ProgramDataPath"]);
	m_webPath = Jellyfin::Support::fromJsonValue<QString>(source["WebPath"]);
	m_itemsByNamePath = Jellyfin::Support::fromJsonValue<QString>(source["ItemsByNamePath"]);
	m_cachePath = Jellyfin::Support::fromJsonValue<QString>(source["CachePath"]);
	m_logPath = Jellyfin::Support::fromJsonValue<QString>(source["LogPath"]);
	m_internalMetadataPath = Jellyfin::Support::fromJsonValue<QString>(source["InternalMetadataPath"]);
	m_transcodingTempPath = Jellyfin::Support::fromJsonValue<QString>(source["TranscodingTempPath"]);
	m_castReceiverApplications = Jellyfin::Support::fromJsonValue<QList<CastReceiverApplication>>(source["CastReceiverApplications"]);
	m_hasUpdateAvailable = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["HasUpdateAvailable"]);
	m_encoderLocation = Jellyfin::Support::fromJsonValue<QString>(source["EncoderLocation"]);
	m_systemArchitecture = Jellyfin::Support::fromJsonValue<QString>(source["SystemArchitecture"]);

}
	
QJsonObject SystemInfo::toJson() const {
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
			
	
	if (!(m_operatingSystemDisplayName.isNull())) {
		result["OperatingSystemDisplayName"] = Jellyfin::Support::toJsonValue<QString>(m_operatingSystemDisplayName);
	}
			
	
	if (!(m_packageName.isNull())) {
		result["PackageName"] = Jellyfin::Support::toJsonValue<QString>(m_packageName);
	}
			
	result["HasPendingRestart"] = Jellyfin::Support::toJsonValue<bool>(m_hasPendingRestart);		
	result["IsShuttingDown"] = Jellyfin::Support::toJsonValue<bool>(m_isShuttingDown);		
	result["SupportsLibraryMonitor"] = Jellyfin::Support::toJsonValue<bool>(m_supportsLibraryMonitor);		
	result["WebSocketPortNumber"] = Jellyfin::Support::toJsonValue<qint32>(m_webSocketPortNumber);		
	
	if (!(m_completedInstallations.size() == 0)) {
		result["CompletedInstallations"] = Jellyfin::Support::toJsonValue<QList<InstallationInfo>>(m_completedInstallations);
	}
			
	result["CanSelfRestart"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_canSelfRestart);		
	result["CanLaunchWebBrowser"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_canLaunchWebBrowser);		
	
	if (!(m_programDataPath.isNull())) {
		result["ProgramDataPath"] = Jellyfin::Support::toJsonValue<QString>(m_programDataPath);
	}
			
	
	if (!(m_webPath.isNull())) {
		result["WebPath"] = Jellyfin::Support::toJsonValue<QString>(m_webPath);
	}
			
	
	if (!(m_itemsByNamePath.isNull())) {
		result["ItemsByNamePath"] = Jellyfin::Support::toJsonValue<QString>(m_itemsByNamePath);
	}
			
	
	if (!(m_cachePath.isNull())) {
		result["CachePath"] = Jellyfin::Support::toJsonValue<QString>(m_cachePath);
	}
			
	
	if (!(m_logPath.isNull())) {
		result["LogPath"] = Jellyfin::Support::toJsonValue<QString>(m_logPath);
	}
			
	
	if (!(m_internalMetadataPath.isNull())) {
		result["InternalMetadataPath"] = Jellyfin::Support::toJsonValue<QString>(m_internalMetadataPath);
	}
			
	
	if (!(m_transcodingTempPath.isNull())) {
		result["TranscodingTempPath"] = Jellyfin::Support::toJsonValue<QString>(m_transcodingTempPath);
	}
			
	
	if (!(m_castReceiverApplications.size() == 0)) {
		result["CastReceiverApplications"] = Jellyfin::Support::toJsonValue<QList<CastReceiverApplication>>(m_castReceiverApplications);
	}
			
	result["HasUpdateAvailable"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_hasUpdateAvailable);		
	
	if (!(m_encoderLocation.isNull())) {
		result["EncoderLocation"] = Jellyfin::Support::toJsonValue<QString>(m_encoderLocation);
	}
			
	
	if (!(m_systemArchitecture.isNull())) {
		result["SystemArchitecture"] = Jellyfin::Support::toJsonValue<QString>(m_systemArchitecture);
	}
		
	return result;
}

QString SystemInfo::localAddress() const { return m_localAddress; }

void SystemInfo::setLocalAddress(QString newLocalAddress) {
	m_localAddress = newLocalAddress;
}
bool SystemInfo::localAddressNull() const {
	return m_localAddress.isNull();
}

void SystemInfo::setLocalAddressNull() {
	m_localAddress.clear();

}
QString SystemInfo::serverName() const { return m_serverName; }

void SystemInfo::setServerName(QString newServerName) {
	m_serverName = newServerName;
}
bool SystemInfo::serverNameNull() const {
	return m_serverName.isNull();
}

void SystemInfo::setServerNameNull() {
	m_serverName.clear();

}
QString SystemInfo::version() const { return m_version; }

void SystemInfo::setVersion(QString newVersion) {
	m_version = newVersion;
}
bool SystemInfo::versionNull() const {
	return m_version.isNull();
}

void SystemInfo::setVersionNull() {
	m_version.clear();

}
QString SystemInfo::productName() const { return m_productName; }

void SystemInfo::setProductName(QString newProductName) {
	m_productName = newProductName;
}
bool SystemInfo::productNameNull() const {
	return m_productName.isNull();
}

void SystemInfo::setProductNameNull() {
	m_productName.clear();

}
QString SystemInfo::operatingSystem() const { return m_operatingSystem; }

void SystemInfo::setOperatingSystem(QString newOperatingSystem) {
	m_operatingSystem = newOperatingSystem;
}
bool SystemInfo::operatingSystemNull() const {
	return m_operatingSystem.isNull();
}

void SystemInfo::setOperatingSystemNull() {
	m_operatingSystem.clear();

}
QString SystemInfo::jellyfinId() const { return m_jellyfinId; }

void SystemInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool SystemInfo::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void SystemInfo::setJellyfinIdNull() {
	m_jellyfinId.clear();

}
std::optional<bool> SystemInfo::startupWizardCompleted() const { return m_startupWizardCompleted; }

void SystemInfo::setStartupWizardCompleted(std::optional<bool> newStartupWizardCompleted) {
	m_startupWizardCompleted = newStartupWizardCompleted;
}
bool SystemInfo::startupWizardCompletedNull() const {
	return !m_startupWizardCompleted.has_value();
}

void SystemInfo::setStartupWizardCompletedNull() {
	m_startupWizardCompleted = std::nullopt;

}
QString SystemInfo::operatingSystemDisplayName() const { return m_operatingSystemDisplayName; }

void SystemInfo::setOperatingSystemDisplayName(QString newOperatingSystemDisplayName) {
	m_operatingSystemDisplayName = newOperatingSystemDisplayName;
}
bool SystemInfo::operatingSystemDisplayNameNull() const {
	return m_operatingSystemDisplayName.isNull();
}

void SystemInfo::setOperatingSystemDisplayNameNull() {
	m_operatingSystemDisplayName.clear();

}
QString SystemInfo::packageName() const { return m_packageName; }

void SystemInfo::setPackageName(QString newPackageName) {
	m_packageName = newPackageName;
}
bool SystemInfo::packageNameNull() const {
	return m_packageName.isNull();
}

void SystemInfo::setPackageNameNull() {
	m_packageName.clear();

}
bool SystemInfo::hasPendingRestart() const { return m_hasPendingRestart; }

void SystemInfo::setHasPendingRestart(bool newHasPendingRestart) {
	m_hasPendingRestart = newHasPendingRestart;
}

bool SystemInfo::isShuttingDown() const { return m_isShuttingDown; }

void SystemInfo::setIsShuttingDown(bool newIsShuttingDown) {
	m_isShuttingDown = newIsShuttingDown;
}

bool SystemInfo::supportsLibraryMonitor() const { return m_supportsLibraryMonitor; }

void SystemInfo::setSupportsLibraryMonitor(bool newSupportsLibraryMonitor) {
	m_supportsLibraryMonitor = newSupportsLibraryMonitor;
}

qint32 SystemInfo::webSocketPortNumber() const { return m_webSocketPortNumber; }

void SystemInfo::setWebSocketPortNumber(qint32 newWebSocketPortNumber) {
	m_webSocketPortNumber = newWebSocketPortNumber;
}

QList<InstallationInfo> SystemInfo::completedInstallations() const { return m_completedInstallations; }

void SystemInfo::setCompletedInstallations(QList<InstallationInfo> newCompletedInstallations) {
	m_completedInstallations = newCompletedInstallations;
}
bool SystemInfo::completedInstallationsNull() const {
	return m_completedInstallations.size() == 0;
}

void SystemInfo::setCompletedInstallationsNull() {
	m_completedInstallations.clear();

}
std::optional<bool> SystemInfo::canSelfRestart() const { return m_canSelfRestart; }

void SystemInfo::setCanSelfRestart(std::optional<bool> newCanSelfRestart) {
	m_canSelfRestart = newCanSelfRestart;
}

std::optional<bool> SystemInfo::canLaunchWebBrowser() const { return m_canLaunchWebBrowser; }

void SystemInfo::setCanLaunchWebBrowser(std::optional<bool> newCanLaunchWebBrowser) {
	m_canLaunchWebBrowser = newCanLaunchWebBrowser;
}

QString SystemInfo::programDataPath() const { return m_programDataPath; }

void SystemInfo::setProgramDataPath(QString newProgramDataPath) {
	m_programDataPath = newProgramDataPath;
}
bool SystemInfo::programDataPathNull() const {
	return m_programDataPath.isNull();
}

void SystemInfo::setProgramDataPathNull() {
	m_programDataPath.clear();

}
QString SystemInfo::webPath() const { return m_webPath; }

void SystemInfo::setWebPath(QString newWebPath) {
	m_webPath = newWebPath;
}
bool SystemInfo::webPathNull() const {
	return m_webPath.isNull();
}

void SystemInfo::setWebPathNull() {
	m_webPath.clear();

}
QString SystemInfo::itemsByNamePath() const { return m_itemsByNamePath; }

void SystemInfo::setItemsByNamePath(QString newItemsByNamePath) {
	m_itemsByNamePath = newItemsByNamePath;
}
bool SystemInfo::itemsByNamePathNull() const {
	return m_itemsByNamePath.isNull();
}

void SystemInfo::setItemsByNamePathNull() {
	m_itemsByNamePath.clear();

}
QString SystemInfo::cachePath() const { return m_cachePath; }

void SystemInfo::setCachePath(QString newCachePath) {
	m_cachePath = newCachePath;
}
bool SystemInfo::cachePathNull() const {
	return m_cachePath.isNull();
}

void SystemInfo::setCachePathNull() {
	m_cachePath.clear();

}
QString SystemInfo::logPath() const { return m_logPath; }

void SystemInfo::setLogPath(QString newLogPath) {
	m_logPath = newLogPath;
}
bool SystemInfo::logPathNull() const {
	return m_logPath.isNull();
}

void SystemInfo::setLogPathNull() {
	m_logPath.clear();

}
QString SystemInfo::internalMetadataPath() const { return m_internalMetadataPath; }

void SystemInfo::setInternalMetadataPath(QString newInternalMetadataPath) {
	m_internalMetadataPath = newInternalMetadataPath;
}
bool SystemInfo::internalMetadataPathNull() const {
	return m_internalMetadataPath.isNull();
}

void SystemInfo::setInternalMetadataPathNull() {
	m_internalMetadataPath.clear();

}
QString SystemInfo::transcodingTempPath() const { return m_transcodingTempPath; }

void SystemInfo::setTranscodingTempPath(QString newTranscodingTempPath) {
	m_transcodingTempPath = newTranscodingTempPath;
}
bool SystemInfo::transcodingTempPathNull() const {
	return m_transcodingTempPath.isNull();
}

void SystemInfo::setTranscodingTempPathNull() {
	m_transcodingTempPath.clear();

}
QList<CastReceiverApplication> SystemInfo::castReceiverApplications() const { return m_castReceiverApplications; }

void SystemInfo::setCastReceiverApplications(QList<CastReceiverApplication> newCastReceiverApplications) {
	m_castReceiverApplications = newCastReceiverApplications;
}
bool SystemInfo::castReceiverApplicationsNull() const {
	return m_castReceiverApplications.size() == 0;
}

void SystemInfo::setCastReceiverApplicationsNull() {
	m_castReceiverApplications.clear();

}
std::optional<bool> SystemInfo::hasUpdateAvailable() const { return m_hasUpdateAvailable; }

void SystemInfo::setHasUpdateAvailable(std::optional<bool> newHasUpdateAvailable) {
	m_hasUpdateAvailable = newHasUpdateAvailable;
}

QString SystemInfo::encoderLocation() const { return m_encoderLocation; }

void SystemInfo::setEncoderLocation(QString newEncoderLocation) {
	m_encoderLocation = newEncoderLocation;
}
bool SystemInfo::encoderLocationNull() const {
	return m_encoderLocation.isNull();
}

void SystemInfo::setEncoderLocationNull() {
	m_encoderLocation.clear();

}
QString SystemInfo::systemArchitecture() const { return m_systemArchitecture; }

void SystemInfo::setSystemArchitecture(QString newSystemArchitecture) {
	m_systemArchitecture = newSystemArchitecture;
}
bool SystemInfo::systemArchitectureNull() const {
	return m_systemArchitecture.isNull();
}

void SystemInfo::setSystemArchitectureNull() {
	m_systemArchitecture.clear();

}

} // NS DTO

namespace Support {

using SystemInfo = Jellyfin::DTO::SystemInfo;

template <>
SystemInfo fromJsonValue(const QJsonValue &source, convertType<SystemInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return SystemInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const SystemInfo &source, convertType<SystemInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
