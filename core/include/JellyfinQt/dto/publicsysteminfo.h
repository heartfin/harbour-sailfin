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

#ifndef JELLYFIN_DTO_PUBLICSYSTEMINFO_H
#define JELLYFIN_DTO_PUBLICSYSTEMINFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class PublicSystemInfo {
public:
	PublicSystemInfo();
	PublicSystemInfo(const PublicSystemInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(PublicSystemInfo &other);
	
	static PublicSystemInfo fromJson(QJsonObject source);
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


protected:
	QString m_localAddress;
	QString m_serverName;
	QString m_version;
	QString m_productName;
	QString m_operatingSystem;
	QString m_jellyfinId;
	std::optional<bool> m_startupWizardCompleted = std::nullopt;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_PUBLICSYSTEMINFO_H
