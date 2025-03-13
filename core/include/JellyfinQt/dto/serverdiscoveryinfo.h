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

#ifndef JELLYFIN_DTO_SERVERDISCOVERYINFO_H
#define JELLYFIN_DTO_SERVERDISCOVERYINFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class ServerDiscoveryInfo {
public:
	ServerDiscoveryInfo(	
		QString address,			
		QString jellyfinId,			
		QString name				
	);

	ServerDiscoveryInfo(const ServerDiscoveryInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(ServerDiscoveryInfo &other);
	
	static ServerDiscoveryInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets the address.
	 */
	QString address() const;
	/**
	* @brief Gets the address.
	*/
	void setAddress(QString newAddress);

	/**
	 * @brief Gets the server identifier.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets the server identifier.
	*/
	void setJellyfinId(QString newJellyfinId);

	/**
	 * @brief Gets the name.
	 */
	QString name() const;
	/**
	* @brief Gets the name.
	*/
	void setName(QString newName);

	/**
	 * @brief Gets the endpoint address.
	 */
	QString endpointAddress() const;
	/**
	* @brief Gets the endpoint address.
	*/
	void setEndpointAddress(QString newEndpointAddress);
	bool endpointAddressNull() const;
	void setEndpointAddressNull();


protected:
	QString m_address;
	QString m_jellyfinId;
	QString m_name;
	QString m_endpointAddress;

private:
	// Private constructor which generates an invalid object, for use withing ServerDiscoveryInfo::fromJson();
	ServerDiscoveryInfo();
};


} // NS DTO

namespace Support {

using ServerDiscoveryInfo = Jellyfin::DTO::ServerDiscoveryInfo;

template <>
ServerDiscoveryInfo fromJsonValue(const QJsonValue &source, convertType<ServerDiscoveryInfo>);

template<>
QJsonValue toJsonValue(const ServerDiscoveryInfo &source, convertType<ServerDiscoveryInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_SERVERDISCOVERYINFO_H
