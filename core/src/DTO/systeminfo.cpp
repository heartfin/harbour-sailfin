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

#include <JellyfinQt/DTO/architecture.h>
#include <JellyfinQt/DTO/ffmpeglocation.h>

namespace Jellyfin {
namespace DTO {

SystemInfo::SystemInfo(QObject *parent) : QObject(parent) {}

SystemInfo *SystemInfo::fromJSON(QJsonObject source, QObject *parent) {
	SystemInfo *instance = new SystemInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void SystemInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject SystemInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString SystemInfo::localAddress() const { return m_localAddress; }
void SystemInfo::setLocalAddress(QString newLocalAddress) {
	m_localAddress = newLocalAddress;
	emit localAddressChanged(newLocalAddress);
}

QString SystemInfo::serverName() const { return m_serverName; }
void SystemInfo::setServerName(QString newServerName) {
	m_serverName = newServerName;
	emit serverNameChanged(newServerName);
}

QString SystemInfo::version() const { return m_version; }
void SystemInfo::setVersion(QString newVersion) {
	m_version = newVersion;
	emit versionChanged(newVersion);
}

QString SystemInfo::productName() const { return m_productName; }
void SystemInfo::setProductName(QString newProductName) {
	m_productName = newProductName;
	emit productNameChanged(newProductName);
}

QString SystemInfo::operatingSystem() const { return m_operatingSystem; }
void SystemInfo::setOperatingSystem(QString newOperatingSystem) {
	m_operatingSystem = newOperatingSystem;
	emit operatingSystemChanged(newOperatingSystem);
}

QString SystemInfo::jellyfinId() const { return m_jellyfinId; }
void SystemInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

bool SystemInfo::startupWizardCompleted() const { return m_startupWizardCompleted; }
void SystemInfo::setStartupWizardCompleted(bool newStartupWizardCompleted) {
	m_startupWizardCompleted = newStartupWizardCompleted;
	emit startupWizardCompletedChanged(newStartupWizardCompleted);
}

QString SystemInfo::operatingSystemDisplayName() const { return m_operatingSystemDisplayName; }
void SystemInfo::setOperatingSystemDisplayName(QString newOperatingSystemDisplayName) {
	m_operatingSystemDisplayName = newOperatingSystemDisplayName;
	emit operatingSystemDisplayNameChanged(newOperatingSystemDisplayName);
}

QString SystemInfo::packageName() const { return m_packageName; }
void SystemInfo::setPackageName(QString newPackageName) {
	m_packageName = newPackageName;
	emit packageNameChanged(newPackageName);
}

bool SystemInfo::hasPendingRestart() const { return m_hasPendingRestart; }
void SystemInfo::setHasPendingRestart(bool newHasPendingRestart) {
	m_hasPendingRestart = newHasPendingRestart;
	emit hasPendingRestartChanged(newHasPendingRestart);
}

bool SystemInfo::isShuttingDown() const { return m_isShuttingDown; }
void SystemInfo::setIsShuttingDown(bool newIsShuttingDown) {
	m_isShuttingDown = newIsShuttingDown;
	emit isShuttingDownChanged(newIsShuttingDown);
}

bool SystemInfo::supportsLibraryMonitor() const { return m_supportsLibraryMonitor; }
void SystemInfo::setSupportsLibraryMonitor(bool newSupportsLibraryMonitor) {
	m_supportsLibraryMonitor = newSupportsLibraryMonitor;
	emit supportsLibraryMonitorChanged(newSupportsLibraryMonitor);
}

qint32 SystemInfo::webSocketPortNumber() const { return m_webSocketPortNumber; }
void SystemInfo::setWebSocketPortNumber(qint32 newWebSocketPortNumber) {
	m_webSocketPortNumber = newWebSocketPortNumber;
	emit webSocketPortNumberChanged(newWebSocketPortNumber);
}

QList<InstallationInfo *> SystemInfo::completedInstallations() const { return m_completedInstallations; }
void SystemInfo::setCompletedInstallations(QList<InstallationInfo *> newCompletedInstallations) {
	m_completedInstallations = newCompletedInstallations;
	emit completedInstallationsChanged(newCompletedInstallations);
}

bool SystemInfo::canSelfRestart() const { return m_canSelfRestart; }
void SystemInfo::setCanSelfRestart(bool newCanSelfRestart) {
	m_canSelfRestart = newCanSelfRestart;
	emit canSelfRestartChanged(newCanSelfRestart);
}

bool SystemInfo::canLaunchWebBrowser() const { return m_canLaunchWebBrowser; }
void SystemInfo::setCanLaunchWebBrowser(bool newCanLaunchWebBrowser) {
	m_canLaunchWebBrowser = newCanLaunchWebBrowser;
	emit canLaunchWebBrowserChanged(newCanLaunchWebBrowser);
}

QString SystemInfo::programDataPath() const { return m_programDataPath; }
void SystemInfo::setProgramDataPath(QString newProgramDataPath) {
	m_programDataPath = newProgramDataPath;
	emit programDataPathChanged(newProgramDataPath);
}

QString SystemInfo::webPath() const { return m_webPath; }
void SystemInfo::setWebPath(QString newWebPath) {
	m_webPath = newWebPath;
	emit webPathChanged(newWebPath);
}

QString SystemInfo::itemsByNamePath() const { return m_itemsByNamePath; }
void SystemInfo::setItemsByNamePath(QString newItemsByNamePath) {
	m_itemsByNamePath = newItemsByNamePath;
	emit itemsByNamePathChanged(newItemsByNamePath);
}

QString SystemInfo::cachePath() const { return m_cachePath; }
void SystemInfo::setCachePath(QString newCachePath) {
	m_cachePath = newCachePath;
	emit cachePathChanged(newCachePath);
}

QString SystemInfo::logPath() const { return m_logPath; }
void SystemInfo::setLogPath(QString newLogPath) {
	m_logPath = newLogPath;
	emit logPathChanged(newLogPath);
}

QString SystemInfo::internalMetadataPath() const { return m_internalMetadataPath; }
void SystemInfo::setInternalMetadataPath(QString newInternalMetadataPath) {
	m_internalMetadataPath = newInternalMetadataPath;
	emit internalMetadataPathChanged(newInternalMetadataPath);
}

QString SystemInfo::transcodingTempPath() const { return m_transcodingTempPath; }
void SystemInfo::setTranscodingTempPath(QString newTranscodingTempPath) {
	m_transcodingTempPath = newTranscodingTempPath;
	emit transcodingTempPathChanged(newTranscodingTempPath);
}

bool SystemInfo::hasUpdateAvailable() const { return m_hasUpdateAvailable; }
void SystemInfo::setHasUpdateAvailable(bool newHasUpdateAvailable) {
	m_hasUpdateAvailable = newHasUpdateAvailable;
	emit hasUpdateAvailableChanged(newHasUpdateAvailable);
}

FFmpegLocation SystemInfo::encoderLocation() const { return m_encoderLocation; }
void SystemInfo::setEncoderLocation(FFmpegLocation newEncoderLocation) {
	m_encoderLocation = newEncoderLocation;
	emit encoderLocationChanged(newEncoderLocation);
}

Architecture SystemInfo::systemArchitecture() const { return m_systemArchitecture; }
void SystemInfo::setSystemArchitecture(Architecture newSystemArchitecture) {
	m_systemArchitecture = newSystemArchitecture;
	emit systemArchitectureChanged(newSystemArchitecture);
}


} // NS Jellyfin
} // NS DTO
