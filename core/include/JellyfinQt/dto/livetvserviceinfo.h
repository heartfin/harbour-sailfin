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

#ifndef JELLYFIN_DTO_LIVETVSERVICEINFO_H
#define JELLYFIN_DTO_LIVETVSERVICEINFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/livetvservicestatus.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class LiveTvServiceInfo {
public:
	LiveTvServiceInfo();
	LiveTvServiceInfo(const LiveTvServiceInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(LiveTvServiceInfo &other);
	
	static LiveTvServiceInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();

	/**
	 * @brief Gets or sets the home page URL.
	 */
	QString homePageUrl() const;
	/**
	* @brief Gets or sets the home page URL.
	*/
	void setHomePageUrl(QString newHomePageUrl);
	bool homePageUrlNull() const;
	void setHomePageUrlNull();


	LiveTvServiceStatus status() const;

	void setStatus(LiveTvServiceStatus newStatus);

	/**
	 * @brief Gets or sets the status message.
	 */
	QString statusMessage() const;
	/**
	* @brief Gets or sets the status message.
	*/
	void setStatusMessage(QString newStatusMessage);
	bool statusMessageNull() const;
	void setStatusMessageNull();

	/**
	 * @brief Gets or sets the version.
	 */
	QString version() const;
	/**
	* @brief Gets or sets the version.
	*/
	void setVersion(QString newVersion);
	bool versionNull() const;
	void setVersionNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance has update available.
	 */
	bool hasUpdateAvailable() const;
	/**
	* @brief Gets or sets a value indicating whether this instance has update available.
	*/
	void setHasUpdateAvailable(bool newHasUpdateAvailable);

	/**
	 * @brief Gets or sets a value indicating whether this instance is visible.
	 */
	bool isVisible() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is visible.
	*/
	void setIsVisible(bool newIsVisible);


	QStringList tuners() const;

	void setTuners(QStringList newTuners);
	bool tunersNull() const;
	void setTunersNull();


protected:
	QString m_name;
	QString m_homePageUrl;
	LiveTvServiceStatus m_status;
	QString m_statusMessage;
	QString m_version;
	bool m_hasUpdateAvailable;
	bool m_isVisible;
	QStringList m_tuners;
};

} // NS DTO

namespace Support {

using LiveTvServiceInfo = Jellyfin::DTO::LiveTvServiceInfo;

template <>
LiveTvServiceInfo fromJsonValue(const QJsonValue &source, convertType<LiveTvServiceInfo>);

template<>
QJsonValue toJsonValue(const LiveTvServiceInfo &source, convertType<LiveTvServiceInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_LIVETVSERVICEINFO_H
