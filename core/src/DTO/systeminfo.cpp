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

#include <JellyfinQt/DTO/systeminfo.h>

namespace Jellyfin {
namespace DTO {

SystemInfo::SystemInfo() {}

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
	m_startupWizardCompleted = Jellyfin::Support::fromJsonValue<bool>(source["StartupWizardCompleted"]);
	m_operatingSystemDisplayName = Jellyfin::Support::fromJsonValue<QString>(source["OperatingSystemDisplayName"]);
	m_packageName = Jellyfin::Support::fromJsonValue<QString>(source["PackageName"]);
	m_hasPendingRestart = Jellyfin::Support::fromJsonValue<bool>(source["HasPendingRestart"]);
	m_isShuttingDown = Jellyfin::Support::fromJsonValue<bool>(source["IsShuttingDown"]);
	m_supportsLibraryMonitor = Jellyfin::Support::fromJsonValue<bool>(source["SupportsLibraryMonitor"]);
	m_webSocketPortNumber = Jellyfin::Support::fromJsonValue<qint32>(source["WebSocketPortNumber"]);
	m_completedInstallations = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<InstallationInfo>>>(source["CompletedInstallations"]);
	m_canSelfRestart = Jellyfin::Support::fromJsonValue<bool>(source["CanSelfRestart"]);
	m_canLaunchWebBrowser = Jellyfin::Support::fromJsonValue<bool>(source["CanLaunchWebBrowser"]);
	m_programDataPath = Jellyfin::Support::fromJsonValue<QString>(source["ProgramDataPath"]);
	m_webPath = Jellyfin::Support::fromJsonValue<QString>(source["WebPath"]);
	m_itemsByNamePath = Jellyfin::Support::fromJsonValue<QString>(source["ItemsByNamePath"]);
	m_cachePath = Jellyfin::Support::fromJsonValue<QString>(source["CachePath"]);
	m_logPath = Jellyfin::Support::fromJsonValue<QString>(source["LogPath"]);
	m_internalMetadataPath = Jellyfin::Support::fromJsonValue<QString>(source["InternalMetadataPath"]);
	m_transcodingTempPath = Jellyfin::Support::fromJsonValue<QString>(source["TranscodingTempPath"]);
	m_hasUpdateAvailable = Jellyfin::Support::fromJsonValue<bool>(source["HasUpdateAvailable"]);
	m_encoderLocation = Jellyfin::Support::fromJsonValue<FFmpegLocation>(source["EncoderLocation"]);
	m_systemArchitecture = Jellyfin::Support::fromJsonValue<Architecture>(source["SystemArchitecture"]);

}
	
QJsonObject SystemInfo::toJson() {
	QJsonObject result;
	result["LocalAddress"] = Jellyfin::Support::toJsonValue<QString>(m_localAddress);
	result["ServerName"] = Jellyfin::Support::toJsonValue<QString>(m_serverName);
	result["Version"] = Jellyfin::Support::toJsonValue<QString>(m_version);
	result["ProductName"] = Jellyfin::Support::toJsonValue<QString>(m_productName);
	result["OperatingSystem"] = Jellyfin::Support::toJsonValue<QString>(m_operatingSystem);
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	result["StartupWizardCompleted"] = Jellyfin::Support::toJsonValue<bool>(m_startupWizardCompleted);
	result["OperatingSystemDisplayName"] = Jellyfin::Support::toJsonValue<QString>(m_operatingSystemDisplayName);
	result["PackageName"] = Jellyfin::Support::toJsonValue<QString>(m_packageName);
	result["HasPendingRestart"] = Jellyfin::Support::toJsonValue<bool>(m_hasPendingRestart);
	result["IsShuttingDown"] = Jellyfin::Support::toJsonValue<bool>(m_isShuttingDown);
	result["SupportsLibraryMonitor"] = Jellyfin::Support::toJsonValue<bool>(m_supportsLibraryMonitor);
	result["WebSocketPortNumber"] = Jellyfin::Support::toJsonValue<qint32>(m_webSocketPortNumber);
	result["CompletedInstallations"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<InstallationInfo>>>(m_completedInstallations);
	result["CanSelfRestart"] = Jellyfin::Support::toJsonValue<bool>(m_canSelfRestart);
	result["CanLaunchWebBrowser"] = Jellyfin::Support::toJsonValue<bool>(m_canLaunchWebBrowser);
	result["ProgramDataPath"] = Jellyfin::Support::toJsonValue<QString>(m_programDataPath);
	result["WebPath"] = Jellyfin::Support::toJsonValue<QString>(m_webPath);
	result["ItemsByNamePath"] = Jellyfin::Support::toJsonValue<QString>(m_itemsByNamePath);
	result["CachePath"] = Jellyfin::Support::toJsonValue<QString>(m_cachePath);
	result["LogPath"] = Jellyfin::Support::toJsonValue<QString>(m_logPath);
	result["InternalMetadataPath"] = Jellyfin::Support::toJsonValue<QString>(m_internalMetadataPath);
	result["TranscodingTempPath"] = Jellyfin::Support::toJsonValue<QString>(m_transcodingTempPath);
	result["HasUpdateAvailable"] = Jellyfin::Support::toJsonValue<bool>(m_hasUpdateAvailable);
	result["EncoderLocation"] = Jellyfin::Support::toJsonValue<FFmpegLocation>(m_encoderLocation);
	result["SystemArchitecture"] = Jellyfin::Support::toJsonValue<Architecture>(m_systemArchitecture);

	return result;
}

QString SystemInfo::localAddress() const { return m_localAddress; }

void SystemInfo::setLocalAddress(QString newLocalAddress) {
	m_localAddress = newLocalAddress;
}
QString SystemInfo::serverName() const { return m_serverName; }

void SystemInfo::setServerName(QString newServerName) {
	m_serverName = newServerName;
}
QString SystemInfo::version() const { return m_version; }

void SystemInfo::setVersion(QString newVersion) {
	m_version = newVersion;
}
QString SystemInfo::productName() const { return m_productName; }

void SystemInfo::setProductName(QString newProductName) {
	m_productName = newProductName;
}
QString SystemInfo::operatingSystem() const { return m_operatingSystem; }

void SystemInfo::setOperatingSystem(QString newOperatingSystem) {
	m_operatingSystem = newOperatingSystem;
}
QString SystemInfo::jellyfinId() const { return m_jellyfinId; }

void SystemInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool SystemInfo::startupWizardCompleted() const { return m_startupWizardCompleted; }

void SystemInfo::setStartupWizardCompleted(bool newStartupWizardCompleted) {
	m_startupWizardCompleted = newStartupWizardCompleted;
}
QString SystemInfo::operatingSystemDisplayName() const { return m_operatingSystemDisplayName; }

void SystemInfo::setOperatingSystemDisplayName(QString newOperatingSystemDisplayName) {
	m_operatingSystemDisplayName = newOperatingSystemDisplayName;
}
QString SystemInfo::packageName() const { return m_packageName; }

void SystemInfo::setPackageName(QString newPackageName) {
	m_packageName = newPackageName;
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
QList<QSharedPointer<InstallationInfo>> SystemInfo::completedInstallations() const { return m_completedInstallations; }

void SystemInfo::setCompletedInstallations(QList<QSharedPointer<InstallationInfo>> newCompletedInstallations) {
	m_completedInstallations = newCompletedInstallations;
}
bool SystemInfo::canSelfRestart() const { return m_canSelfRestart; }

void SystemInfo::setCanSelfRestart(bool newCanSelfRestart) {
	m_canSelfRestart = newCanSelfRestart;
}
bool SystemInfo::canLaunchWebBrowser() const { return m_canLaunchWebBrowser; }

void SystemInfo::setCanLaunchWebBrowser(bool newCanLaunchWebBrowser) {
	m_canLaunchWebBrowser = newCanLaunchWebBrowser;
}
QString SystemInfo::programDataPath() const { return m_programDataPath; }

void SystemInfo::setProgramDataPath(QString newProgramDataPath) {
	m_programDataPath = newProgramDataPath;
}
QString SystemInfo::webPath() const { return m_webPath; }

void SystemInfo::setWebPath(QString newWebPath) {
	m_webPath = newWebPath;
}
QString SystemInfo::itemsByNamePath() const { return m_itemsByNamePath; }

void SystemInfo::setItemsByNamePath(QString newItemsByNamePath) {
	m_itemsByNamePath = newItemsByNamePath;
}
QString SystemInfo::cachePath() const { return m_cachePath; }

void SystemInfo::setCachePath(QString newCachePath) {
	m_cachePath = newCachePath;
}
QString SystemInfo::logPath() const { return m_logPath; }

void SystemInfo::setLogPath(QString newLogPath) {
	m_logPath = newLogPath;
}
QString SystemInfo::internalMetadataPath() const { return m_internalMetadataPath; }

void SystemInfo::setInternalMetadataPath(QString newInternalMetadataPath) {
	m_internalMetadataPath = newInternalMetadataPath;
}
QString SystemInfo::transcodingTempPath() const { return m_transcodingTempPath; }

void SystemInfo::setTranscodingTempPath(QString newTranscodingTempPath) {
	m_transcodingTempPath = newTranscodingTempPath;
}
bool SystemInfo::hasUpdateAvailable() const { return m_hasUpdateAvailable; }

void SystemInfo::setHasUpdateAvailable(bool newHasUpdateAvailable) {
	m_hasUpdateAvailable = newHasUpdateAvailable;
}
FFmpegLocation SystemInfo::encoderLocation() const { return m_encoderLocation; }

void SystemInfo::setEncoderLocation(FFmpegLocation newEncoderLocation) {
	m_encoderLocation = newEncoderLocation;
}
Architecture SystemInfo::systemArchitecture() const { return m_systemArchitecture; }

void SystemInfo::setSystemArchitecture(Architecture newSystemArchitecture) {
	m_systemArchitecture = newSystemArchitecture;
}

} // NS DTO

namespace Support {

using SystemInfo = Jellyfin::DTO::SystemInfo;

template <>
SystemInfo fromJsonValue<SystemInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return SystemInfo::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO
