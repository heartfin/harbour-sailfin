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

#ifndef JELLYFIN_DTO_LIVETVINFO_H
#define JELLYFIN_DTO_LIVETVINFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/livetvserviceinfo.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class LiveTvInfo {
public:
	LiveTvInfo(	
		QList<LiveTvServiceInfo> services,			
		bool isEnabled,			
		QStringList enabledUsers		
	);

	LiveTvInfo(const LiveTvInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(LiveTvInfo &other);
	
	static LiveTvInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the services.
	 */
	QList<LiveTvServiceInfo> services() const;
	/**
	* @brief Gets or sets the services.
	*/
	void setServices(QList<LiveTvServiceInfo> newServices);

	/**
	 * @brief Gets or sets a value indicating whether this instance is enabled.
	 */
	bool isEnabled() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is enabled.
	*/
	void setIsEnabled(bool newIsEnabled);

	/**
	 * @brief Gets or sets the enabled users.
	 */
	QStringList enabledUsers() const;
	/**
	* @brief Gets or sets the enabled users.
	*/
	void setEnabledUsers(QStringList newEnabledUsers);


protected:
	QList<LiveTvServiceInfo> m_services;
	bool m_isEnabled;
	QStringList m_enabledUsers;

private:
	// Private constructor which generates an invalid object, for use withing LiveTvInfo::fromJson();
	LiveTvInfo();
};


} // NS DTO

namespace Support {

using LiveTvInfo = Jellyfin::DTO::LiveTvInfo;

template <>
LiveTvInfo fromJsonValue(const QJsonValue &source, convertType<LiveTvInfo>);

template<>
QJsonValue toJsonValue(const LiveTvInfo &source, convertType<LiveTvInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_LIVETVINFO_H
