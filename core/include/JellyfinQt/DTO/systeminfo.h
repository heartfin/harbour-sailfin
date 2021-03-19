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

#ifndef JELLYFIN_DTO_SYSTEMINFO_H
#define JELLYFIN_DTO_SYSTEMINFO_H

#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/architecture.h"
#include "JellyfinQt/DTO/ffmpeglocation.h"

namespace Jellyfin {
namespace DTO {

class InstallationInfo;

class SystemInfo : public QObject {
	Q_OBJECT
public:
	explicit SystemInfo(QObject *parent = nullptr);
	static SystemInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the local address.
	 */
	Q_PROPERTY(QString localAddress READ localAddress WRITE setLocalAddress NOTIFY localAddressChanged)
	/**
	 * @brief Gets or sets the name of the server.
	 */
	Q_PROPERTY(QString serverName READ serverName WRITE setServerName NOTIFY serverNameChanged)
	/**
	 * @brief Gets or sets the server version.
	 */
	Q_PROPERTY(QString version READ version WRITE setVersion NOTIFY versionChanged)
	/**
	 * @brief Gets or sets the product name. This is the AssemblyProduct name.
	 */
	Q_PROPERTY(QString productName READ productName WRITE setProductName NOTIFY productNameChanged)
	/**
	 * @brief Gets or sets the operating system.
	 */
	Q_PROPERTY(QString operatingSystem READ operatingSystem WRITE setOperatingSystem NOTIFY operatingSystemChanged)
	/**
	 * @brief Gets or sets the id.
	 */
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	/**
	 * @brief Gets or sets a value indicating whether the startup wizard is completed.
	 */
	Q_PROPERTY(bool startupWizardCompleted READ startupWizardCompleted WRITE setStartupWizardCompleted NOTIFY startupWizardCompletedChanged)
	/**
	 * @brief Gets or sets the display name of the operating system.
	 */
	Q_PROPERTY(QString operatingSystemDisplayName READ operatingSystemDisplayName WRITE setOperatingSystemDisplayName NOTIFY operatingSystemDisplayNameChanged)
	/**
	 * @brief Get or sets the package name.
	 */
	Q_PROPERTY(QString packageName READ packageName WRITE setPackageName NOTIFY packageNameChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance has pending restart.
	 */
	Q_PROPERTY(bool hasPendingRestart READ hasPendingRestart WRITE setHasPendingRestart NOTIFY hasPendingRestartChanged)
	Q_PROPERTY(bool isShuttingDown READ isShuttingDown WRITE setIsShuttingDown NOTIFY isShuttingDownChanged)
	/**
	 * @brief Gets or sets a value indicating whether [supports library monitor].
	 */
	Q_PROPERTY(bool supportsLibraryMonitor READ supportsLibraryMonitor WRITE setSupportsLibraryMonitor NOTIFY supportsLibraryMonitorChanged)
	/**
	 * @brief Gets or sets the web socket port number.
	 */
	Q_PROPERTY(qint32 webSocketPortNumber READ webSocketPortNumber WRITE setWebSocketPortNumber NOTIFY webSocketPortNumberChanged)
	/**
	 * @brief Gets or sets the completed installations.
	 */
	Q_PROPERTY(QList<InstallationInfo *> completedInstallations READ completedInstallations WRITE setCompletedInstallations NOTIFY completedInstallationsChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance can self restart.
	 */
	Q_PROPERTY(bool canSelfRestart READ canSelfRestart WRITE setCanSelfRestart NOTIFY canSelfRestartChanged)
	Q_PROPERTY(bool canLaunchWebBrowser READ canLaunchWebBrowser WRITE setCanLaunchWebBrowser NOTIFY canLaunchWebBrowserChanged)
	/**
	 * @brief Gets or sets the program data path.
	 */
	Q_PROPERTY(QString programDataPath READ programDataPath WRITE setProgramDataPath NOTIFY programDataPathChanged)
	/**
	 * @brief Gets or sets the web UI resources path.
	 */
	Q_PROPERTY(QString webPath READ webPath WRITE setWebPath NOTIFY webPathChanged)
	/**
	 * @brief Gets or sets the items by name path.
	 */
	Q_PROPERTY(QString itemsByNamePath READ itemsByNamePath WRITE setItemsByNamePath NOTIFY itemsByNamePathChanged)
	/**
	 * @brief Gets or sets the cache path.
	 */
	Q_PROPERTY(QString cachePath READ cachePath WRITE setCachePath NOTIFY cachePathChanged)
	/**
	 * @brief Gets or sets the log path.
	 */
	Q_PROPERTY(QString logPath READ logPath WRITE setLogPath NOTIFY logPathChanged)
	/**
	 * @brief Gets or sets the internal metadata path.
	 */
	Q_PROPERTY(QString internalMetadataPath READ internalMetadataPath WRITE setInternalMetadataPath NOTIFY internalMetadataPathChanged)
	/**
	 * @brief Gets or sets the transcode path.
	 */
	Q_PROPERTY(QString transcodingTempPath READ transcodingTempPath WRITE setTranscodingTempPath NOTIFY transcodingTempPathChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance has update available.
	 */
	Q_PROPERTY(bool hasUpdateAvailable READ hasUpdateAvailable WRITE setHasUpdateAvailable NOTIFY hasUpdateAvailableChanged)
	Q_PROPERTY(FFmpegLocation encoderLocation READ encoderLocation WRITE setEncoderLocation NOTIFY encoderLocationChanged)
	Q_PROPERTY(Architecture systemArchitecture READ systemArchitecture WRITE setSystemArchitecture NOTIFY systemArchitectureChanged)

	QString localAddress() const;
	void setLocalAddress(QString newLocalAddress);
	
	QString serverName() const;
	void setServerName(QString newServerName);
	
	QString version() const;
	void setVersion(QString newVersion);
	
	QString productName() const;
	void setProductName(QString newProductName);
	
	QString operatingSystem() const;
	void setOperatingSystem(QString newOperatingSystem);
	
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	bool startupWizardCompleted() const;
	void setStartupWizardCompleted(bool newStartupWizardCompleted);
	
	QString operatingSystemDisplayName() const;
	void setOperatingSystemDisplayName(QString newOperatingSystemDisplayName);
	
	QString packageName() const;
	void setPackageName(QString newPackageName);
	
	bool hasPendingRestart() const;
	void setHasPendingRestart(bool newHasPendingRestart);
	
	bool isShuttingDown() const;
	void setIsShuttingDown(bool newIsShuttingDown);
	
	bool supportsLibraryMonitor() const;
	void setSupportsLibraryMonitor(bool newSupportsLibraryMonitor);
	
	qint32 webSocketPortNumber() const;
	void setWebSocketPortNumber(qint32 newWebSocketPortNumber);
	
	QList<InstallationInfo *> completedInstallations() const;
	void setCompletedInstallations(QList<InstallationInfo *> newCompletedInstallations);
	
	bool canSelfRestart() const;
	void setCanSelfRestart(bool newCanSelfRestart);
	
	bool canLaunchWebBrowser() const;
	void setCanLaunchWebBrowser(bool newCanLaunchWebBrowser);
	
	QString programDataPath() const;
	void setProgramDataPath(QString newProgramDataPath);
	
	QString webPath() const;
	void setWebPath(QString newWebPath);
	
	QString itemsByNamePath() const;
	void setItemsByNamePath(QString newItemsByNamePath);
	
	QString cachePath() const;
	void setCachePath(QString newCachePath);
	
	QString logPath() const;
	void setLogPath(QString newLogPath);
	
	QString internalMetadataPath() const;
	void setInternalMetadataPath(QString newInternalMetadataPath);
	
	QString transcodingTempPath() const;
	void setTranscodingTempPath(QString newTranscodingTempPath);
	
	bool hasUpdateAvailable() const;
	void setHasUpdateAvailable(bool newHasUpdateAvailable);
	
	FFmpegLocation encoderLocation() const;
	void setEncoderLocation(FFmpegLocation newEncoderLocation);
	
	Architecture systemArchitecture() const;
	void setSystemArchitecture(Architecture newSystemArchitecture);
	
signals:
	void localAddressChanged(QString newLocalAddress);
	void serverNameChanged(QString newServerName);
	void versionChanged(QString newVersion);
	void productNameChanged(QString newProductName);
	void operatingSystemChanged(QString newOperatingSystem);
	void jellyfinIdChanged(QString newJellyfinId);
	void startupWizardCompletedChanged(bool newStartupWizardCompleted);
	void operatingSystemDisplayNameChanged(QString newOperatingSystemDisplayName);
	void packageNameChanged(QString newPackageName);
	void hasPendingRestartChanged(bool newHasPendingRestart);
	void isShuttingDownChanged(bool newIsShuttingDown);
	void supportsLibraryMonitorChanged(bool newSupportsLibraryMonitor);
	void webSocketPortNumberChanged(qint32 newWebSocketPortNumber);
	void completedInstallationsChanged(QList<InstallationInfo *> newCompletedInstallations);
	void canSelfRestartChanged(bool newCanSelfRestart);
	void canLaunchWebBrowserChanged(bool newCanLaunchWebBrowser);
	void programDataPathChanged(QString newProgramDataPath);
	void webPathChanged(QString newWebPath);
	void itemsByNamePathChanged(QString newItemsByNamePath);
	void cachePathChanged(QString newCachePath);
	void logPathChanged(QString newLogPath);
	void internalMetadataPathChanged(QString newInternalMetadataPath);
	void transcodingTempPathChanged(QString newTranscodingTempPath);
	void hasUpdateAvailableChanged(bool newHasUpdateAvailable);
	void encoderLocationChanged(FFmpegLocation newEncoderLocation);
	void systemArchitectureChanged(Architecture newSystemArchitecture);
protected:
	QString m_localAddress;
	QString m_serverName;
	QString m_version;
	QString m_productName;
	QString m_operatingSystem;
	QString m_jellyfinId;
	bool m_startupWizardCompleted;
	QString m_operatingSystemDisplayName;
	QString m_packageName;
	bool m_hasPendingRestart;
	bool m_isShuttingDown;
	bool m_supportsLibraryMonitor;
	qint32 m_webSocketPortNumber;
	QList<InstallationInfo *> m_completedInstallations;
	bool m_canSelfRestart;
	bool m_canLaunchWebBrowser;
	QString m_programDataPath;
	QString m_webPath;
	QString m_itemsByNamePath;
	QString m_cachePath;
	QString m_logPath;
	QString m_internalMetadataPath;
	QString m_transcodingTempPath;
	bool m_hasUpdateAvailable;
	FFmpegLocation m_encoderLocation;
	Architecture m_systemArchitecture;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_SYSTEMINFO_H
