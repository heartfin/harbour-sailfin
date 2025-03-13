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
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/castreceiverapplication.h"
#include "JellyfinQt/dto/installationinfo.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class SystemInfo {
public:
	SystemInfo(																			
		bool hasPendingRestart,			
		bool isShuttingDown,			
		bool supportsLibraryMonitor,			
		qint32 webSocketPortNumber,					
		std::optional<bool> canSelfRestart,			
		std::optional<bool> canLaunchWebBrowser,																			
		std::optional<bool> hasUpdateAvailable						
	);

	SystemInfo(const SystemInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(SystemInfo &other);
	
	static SystemInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the local address.
	 */
	QString localAddress() const;
	/**
	* @brief Gets or sets the local address.
	*/
	void setLocalAddress(QString newLocalAddress);
	bool localAddressNull() const;
	void setLocalAddressNull();

	/**
	 * @brief Gets or sets the name of the server.
	 */
	QString serverName() const;
	/**
	* @brief Gets or sets the name of the server.
	*/
	void setServerName(QString newServerName);
	bool serverNameNull() const;
	void setServerNameNull();

	/**
	 * @brief Gets or sets the server version.
	 */
	QString version() const;
	/**
	* @brief Gets or sets the server version.
	*/
	void setVersion(QString newVersion);
	bool versionNull() const;
	void setVersionNull();

	/**
	 * @brief Gets or sets the product name. This is the AssemblyProduct name.
	 */
	QString productName() const;
	/**
	* @brief Gets or sets the product name. This is the AssemblyProduct name.
	*/
	void setProductName(QString newProductName);
	bool productNameNull() const;
	void setProductNameNull();

	/**
	 * @brief Gets or sets the operating system.
	 */
	QString operatingSystem() const;
	/**
	* @brief Gets or sets the operating system.
	*/
	void setOperatingSystem(QString newOperatingSystem);
	bool operatingSystemNull() const;
	void setOperatingSystemNull();

	/**
	 * @brief Gets or sets the id.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets or sets the id.
	*/
	void setJellyfinId(QString newJellyfinId);
	bool jellyfinIdNull() const;
	void setJellyfinIdNull();

	/**
	 * @brief Gets or sets a value indicating whether the startup wizard is completed.
	 */
	std::optional<bool> startupWizardCompleted() const;
	/**
	* @brief Gets or sets a value indicating whether the startup wizard is completed.
	*/
	void setStartupWizardCompleted(std::optional<bool> newStartupWizardCompleted);
	bool startupWizardCompletedNull() const;
	void setStartupWizardCompletedNull();

	/**
	 * @brief Gets or sets the display name of the operating system.
	 */
	QString operatingSystemDisplayName() const;
	/**
	* @brief Gets or sets the display name of the operating system.
	*/
	void setOperatingSystemDisplayName(QString newOperatingSystemDisplayName);
	bool operatingSystemDisplayNameNull() const;
	void setOperatingSystemDisplayNameNull();

	/**
	 * @brief Gets or sets the package name.
	 */
	QString packageName() const;
	/**
	* @brief Gets or sets the package name.
	*/
	void setPackageName(QString newPackageName);
	bool packageNameNull() const;
	void setPackageNameNull();

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
	QList<InstallationInfo> completedInstallations() const;
	/**
	* @brief Gets or sets the completed installations.
	*/
	void setCompletedInstallations(QList<InstallationInfo> newCompletedInstallations);
	bool completedInstallationsNull() const;
	void setCompletedInstallationsNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance can self restart.
	 */
	std::optional<bool> canSelfRestart() const;
	/**
	* @brief Gets or sets a value indicating whether this instance can self restart.
	*/
	void setCanSelfRestart(std::optional<bool> newCanSelfRestart);


	std::optional<bool> canLaunchWebBrowser() const;

	void setCanLaunchWebBrowser(std::optional<bool> newCanLaunchWebBrowser);

	/**
	 * @brief Gets or sets the program data path.
	 */
	QString programDataPath() const;
	/**
	* @brief Gets or sets the program data path.
	*/
	void setProgramDataPath(QString newProgramDataPath);
	bool programDataPathNull() const;
	void setProgramDataPathNull();

	/**
	 * @brief Gets or sets the web UI resources path.
	 */
	QString webPath() const;
	/**
	* @brief Gets or sets the web UI resources path.
	*/
	void setWebPath(QString newWebPath);
	bool webPathNull() const;
	void setWebPathNull();

	/**
	 * @brief Gets or sets the items by name path.
	 */
	QString itemsByNamePath() const;
	/**
	* @brief Gets or sets the items by name path.
	*/
	void setItemsByNamePath(QString newItemsByNamePath);
	bool itemsByNamePathNull() const;
	void setItemsByNamePathNull();

	/**
	 * @brief Gets or sets the cache path.
	 */
	QString cachePath() const;
	/**
	* @brief Gets or sets the cache path.
	*/
	void setCachePath(QString newCachePath);
	bool cachePathNull() const;
	void setCachePathNull();

	/**
	 * @brief Gets or sets the log path.
	 */
	QString logPath() const;
	/**
	* @brief Gets or sets the log path.
	*/
	void setLogPath(QString newLogPath);
	bool logPathNull() const;
	void setLogPathNull();

	/**
	 * @brief Gets or sets the internal metadata path.
	 */
	QString internalMetadataPath() const;
	/**
	* @brief Gets or sets the internal metadata path.
	*/
	void setInternalMetadataPath(QString newInternalMetadataPath);
	bool internalMetadataPathNull() const;
	void setInternalMetadataPathNull();

	/**
	 * @brief Gets or sets the transcode path.
	 */
	QString transcodingTempPath() const;
	/**
	* @brief Gets or sets the transcode path.
	*/
	void setTranscodingTempPath(QString newTranscodingTempPath);
	bool transcodingTempPathNull() const;
	void setTranscodingTempPathNull();

	/**
	 * @brief Gets or sets the list of cast receiver applications.
	 */
	QList<CastReceiverApplication> castReceiverApplications() const;
	/**
	* @brief Gets or sets the list of cast receiver applications.
	*/
	void setCastReceiverApplications(QList<CastReceiverApplication> newCastReceiverApplications);
	bool castReceiverApplicationsNull() const;
	void setCastReceiverApplicationsNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance has update available.
	 */
	std::optional<bool> hasUpdateAvailable() const;
	/**
	* @brief Gets or sets a value indicating whether this instance has update available.
	*/
	void setHasUpdateAvailable(std::optional<bool> newHasUpdateAvailable);


	QString encoderLocation() const;

	void setEncoderLocation(QString newEncoderLocation);
	bool encoderLocationNull() const;
	void setEncoderLocationNull();


	QString systemArchitecture() const;

	void setSystemArchitecture(QString newSystemArchitecture);
	bool systemArchitectureNull() const;
	void setSystemArchitectureNull();


protected:
	QString m_localAddress;
	QString m_serverName;
	QString m_version;
	QString m_productName;
	QString m_operatingSystem;
	QString m_jellyfinId;
	std::optional<bool> m_startupWizardCompleted = std::nullopt;
	QString m_operatingSystemDisplayName;
	QString m_packageName;
	bool m_hasPendingRestart;
	bool m_isShuttingDown;
	bool m_supportsLibraryMonitor;
	qint32 m_webSocketPortNumber;
	QList<InstallationInfo> m_completedInstallations;
	std::optional<bool> m_canSelfRestart = std::nullopt;
	std::optional<bool> m_canLaunchWebBrowser = std::nullopt;
	QString m_programDataPath;
	QString m_webPath;
	QString m_itemsByNamePath;
	QString m_cachePath;
	QString m_logPath;
	QString m_internalMetadataPath;
	QString m_transcodingTempPath;
	QList<CastReceiverApplication> m_castReceiverApplications;
	std::optional<bool> m_hasUpdateAvailable = std::nullopt;
	QString m_encoderLocation;
	QString m_systemArchitecture;

private:
	// Private constructor which generates an invalid object, for use withing SystemInfo::fromJson();
	SystemInfo();
};


} // NS DTO

namespace Support {

using SystemInfo = Jellyfin::DTO::SystemInfo;

template <>
SystemInfo fromJsonValue(const QJsonValue &source, convertType<SystemInfo>);

template<>
QJsonValue toJsonValue(const SystemInfo &source, convertType<SystemInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_SYSTEMINFO_H
