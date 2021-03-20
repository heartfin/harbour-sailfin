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
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/DTO/architecture.h"
#include "JellyfinQt/DTO/ffmpeglocation.h"
#include "JellyfinQt/DTO/installationinfo.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class SystemInfo {
public:
	explicit SystemInfo();
	static SystemInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the local address.
	 */
	QString localAddress() const;
	/**
	* @brief Gets or sets the local address.
	*/
	void setLocalAddress(QString newLocalAddress);
	/**
	 * @brief Gets or sets the name of the server.
	 */
	QString serverName() const;
	/**
	* @brief Gets or sets the name of the server.
	*/
	void setServerName(QString newServerName);
	/**
	 * @brief Gets or sets the server version.
	 */
	QString version() const;
	/**
	* @brief Gets or sets the server version.
	*/
	void setVersion(QString newVersion);
	/**
	 * @brief Gets or sets the product name. This is the AssemblyProduct name.
	 */
	QString productName() const;
	/**
	* @brief Gets or sets the product name. This is the AssemblyProduct name.
	*/
	void setProductName(QString newProductName);
	/**
	 * @brief Gets or sets the operating system.
	 */
	QString operatingSystem() const;
	/**
	* @brief Gets or sets the operating system.
	*/
	void setOperatingSystem(QString newOperatingSystem);
	/**
	 * @brief Gets or sets the id.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets or sets the id.
	*/
	void setJellyfinId(QString newJellyfinId);
	/**
	 * @brief Gets or sets a value indicating whether the startup wizard is completed.
	 */
	bool startupWizardCompleted() const;
	/**
	* @brief Gets or sets a value indicating whether the startup wizard is completed.
	*/
	void setStartupWizardCompleted(bool newStartupWizardCompleted);
	/**
	 * @brief Gets or sets the display name of the operating system.
	 */
	QString operatingSystemDisplayName() const;
	/**
	* @brief Gets or sets the display name of the operating system.
	*/
	void setOperatingSystemDisplayName(QString newOperatingSystemDisplayName);
	/**
	 * @brief Get or sets the package name.
	 */
	QString packageName() const;
	/**
	* @brief Get or sets the package name.
	*/
	void setPackageName(QString newPackageName);
	/**
	 * @brief Gets or sets a value indicating whether this instance has pending restart.
	 */
	bool hasPendingRestart() const;
	/**
	* @brief Gets or sets a value indicating whether this instance has pending restart.
	*/
	void setHasPendingRestart(bool newHasPendingRestart);

	bool isShuttingDown() const;

	void setIsShuttingDown(bool newIsShuttingDown);
	/**
	 * @brief Gets or sets a value indicating whether [supports library monitor].
	 */
	bool supportsLibraryMonitor() const;
	/**
	* @brief Gets or sets a value indicating whether [supports library monitor].
	*/
	void setSupportsLibraryMonitor(bool newSupportsLibraryMonitor);
	/**
	 * @brief Gets or sets the web socket port number.
	 */
	qint32 webSocketPortNumber() const;
	/**
	* @brief Gets or sets the web socket port number.
	*/
	void setWebSocketPortNumber(qint32 newWebSocketPortNumber);
	/**
	 * @brief Gets or sets the completed installations.
	 */
	QList<QSharedPointer<InstallationInfo>> completedInstallations() const;
	/**
	* @brief Gets or sets the completed installations.
	*/
	void setCompletedInstallations(QList<QSharedPointer<InstallationInfo>> newCompletedInstallations);
	/**
	 * @brief Gets or sets a value indicating whether this instance can self restart.
	 */
	bool canSelfRestart() const;
	/**
	* @brief Gets or sets a value indicating whether this instance can self restart.
	*/
	void setCanSelfRestart(bool newCanSelfRestart);

	bool canLaunchWebBrowser() const;

	void setCanLaunchWebBrowser(bool newCanLaunchWebBrowser);
	/**
	 * @brief Gets or sets the program data path.
	 */
	QString programDataPath() const;
	/**
	* @brief Gets or sets the program data path.
	*/
	void setProgramDataPath(QString newProgramDataPath);
	/**
	 * @brief Gets or sets the web UI resources path.
	 */
	QString webPath() const;
	/**
	* @brief Gets or sets the web UI resources path.
	*/
	void setWebPath(QString newWebPath);
	/**
	 * @brief Gets or sets the items by name path.
	 */
	QString itemsByNamePath() const;
	/**
	* @brief Gets or sets the items by name path.
	*/
	void setItemsByNamePath(QString newItemsByNamePath);
	/**
	 * @brief Gets or sets the cache path.
	 */
	QString cachePath() const;
	/**
	* @brief Gets or sets the cache path.
	*/
	void setCachePath(QString newCachePath);
	/**
	 * @brief Gets or sets the log path.
	 */
	QString logPath() const;
	/**
	* @brief Gets or sets the log path.
	*/
	void setLogPath(QString newLogPath);
	/**
	 * @brief Gets or sets the internal metadata path.
	 */
	QString internalMetadataPath() const;
	/**
	* @brief Gets or sets the internal metadata path.
	*/
	void setInternalMetadataPath(QString newInternalMetadataPath);
	/**
	 * @brief Gets or sets the transcode path.
	 */
	QString transcodingTempPath() const;
	/**
	* @brief Gets or sets the transcode path.
	*/
	void setTranscodingTempPath(QString newTranscodingTempPath);
	/**
	 * @brief Gets or sets a value indicating whether this instance has update available.
	 */
	bool hasUpdateAvailable() const;
	/**
	* @brief Gets or sets a value indicating whether this instance has update available.
	*/
	void setHasUpdateAvailable(bool newHasUpdateAvailable);

	FFmpegLocation encoderLocation() const;

	void setEncoderLocation(FFmpegLocation newEncoderLocation);

	Architecture systemArchitecture() const;

	void setSystemArchitecture(Architecture newSystemArchitecture);

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
	QList<QSharedPointer<InstallationInfo>> m_completedInstallations;
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

#endif // JELLYFIN_DTO_SYSTEMINFO_H
