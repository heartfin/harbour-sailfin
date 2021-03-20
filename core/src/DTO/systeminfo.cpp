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

SystemInfo::SystemInfo(QObject *parent) {}

SystemInfo SystemInfo::fromJson(QJsonObject source) {SystemInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void SystemInfo::setFromJson(QJsonObject source) {
	m_localAddress = fromJsonValue<QString>(source["LocalAddress"]);
	m_serverName = fromJsonValue<QString>(source["ServerName"]);
	m_version = fromJsonValue<QString>(source["Version"]);
	m_productName = fromJsonValue<QString>(source["ProductName"]);
	m_operatingSystem = fromJsonValue<QString>(source["OperatingSystem"]);
	m_jellyfinId = fromJsonValue<QString>(source["Id"]);
	m_startupWizardCompleted = fromJsonValue<bool>(source["StartupWizardCompleted"]);
	m_operatingSystemDisplayName = fromJsonValue<QString>(source["OperatingSystemDisplayName"]);
	m_packageName = fromJsonValue<QString>(source["PackageName"]);
	m_hasPendingRestart = fromJsonValue<bool>(source["HasPendingRestart"]);
	m_isShuttingDown = fromJsonValue<bool>(source["IsShuttingDown"]);
	m_supportsLibraryMonitor = fromJsonValue<bool>(source["SupportsLibraryMonitor"]);
	m_webSocketPortNumber = fromJsonValue<qint32>(source["WebSocketPortNumber"]);
	m_completedInstallations = fromJsonValue<QList<QSharedPointer<InstallationInfo>>>(source["CompletedInstallations"]);
	m_canSelfRestart = fromJsonValue<bool>(source["CanSelfRestart"]);
	m_canLaunchWebBrowser = fromJsonValue<bool>(source["CanLaunchWebBrowser"]);
	m_programDataPath = fromJsonValue<QString>(source["ProgramDataPath"]);
	m_webPath = fromJsonValue<QString>(source["WebPath"]);
	m_itemsByNamePath = fromJsonValue<QString>(source["ItemsByNamePath"]);
	m_cachePath = fromJsonValue<QString>(source["CachePath"]);
	m_logPath = fromJsonValue<QString>(source["LogPath"]);
	m_internalMetadataPath = fromJsonValue<QString>(source["InternalMetadataPath"]);
	m_transcodingTempPath = fromJsonValue<QString>(source["TranscodingTempPath"]);
	m_hasUpdateAvailable = fromJsonValue<bool>(source["HasUpdateAvailable"]);
	m_encoderLocation = fromJsonValue<FFmpegLocation>(source["EncoderLocation"]);
	m_systemArchitecture = fromJsonValue<Architecture>(source["SystemArchitecture"]);

}
	
QJsonObject SystemInfo::toJson() {
	QJsonObject result;
	result["LocalAddress"] = toJsonValue<QString>(m_localAddress);
	result["ServerName"] = toJsonValue<QString>(m_serverName);
	result["Version"] = toJsonValue<QString>(m_version);
	result["ProductName"] = toJsonValue<QString>(m_productName);
	result["OperatingSystem"] = toJsonValue<QString>(m_operatingSystem);
	result["Id"] = toJsonValue<QString>(m_jellyfinId);
	result["StartupWizardCompleted"] = toJsonValue<bool>(m_startupWizardCompleted);
	result["OperatingSystemDisplayName"] = toJsonValue<QString>(m_operatingSystemDisplayName);
	result["PackageName"] = toJsonValue<QString>(m_packageName);
	result["HasPendingRestart"] = toJsonValue<bool>(m_hasPendingRestart);
	result["IsShuttingDown"] = toJsonValue<bool>(m_isShuttingDown);
	result["SupportsLibraryMonitor"] = toJsonValue<bool>(m_supportsLibraryMonitor);
	result["WebSocketPortNumber"] = toJsonValue<qint32>(m_webSocketPortNumber);
	result["CompletedInstallations"] = toJsonValue<QList<QSharedPointer<InstallationInfo>>>(m_completedInstallations);
	result["CanSelfRestart"] = toJsonValue<bool>(m_canSelfRestart);
	result["CanLaunchWebBrowser"] = toJsonValue<bool>(m_canLaunchWebBrowser);
	result["ProgramDataPath"] = toJsonValue<QString>(m_programDataPath);
	result["WebPath"] = toJsonValue<QString>(m_webPath);
	result["ItemsByNamePath"] = toJsonValue<QString>(m_itemsByNamePath);
	result["CachePath"] = toJsonValue<QString>(m_cachePath);
	result["LogPath"] = toJsonValue<QString>(m_logPath);
	result["InternalMetadataPath"] = toJsonValue<QString>(m_internalMetadataPath);
	result["TranscodingTempPath"] = toJsonValue<QString>(m_transcodingTempPath);
	result["HasUpdateAvailable"] = toJsonValue<bool>(m_hasUpdateAvailable);
	result["EncoderLocation"] = toJsonValue<FFmpegLocation>(m_encoderLocation);
	result["SystemArchitecture"] = toJsonValue<Architecture>(m_systemArchitecture);

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


} // NS Jellyfin
} // NS DTO
