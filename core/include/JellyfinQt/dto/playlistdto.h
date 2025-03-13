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

#ifndef JELLYFIN_DTO_PLAYLISTDTO_H
#define JELLYFIN_DTO_PLAYLISTDTO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/playlistuserpermissions.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class PlaylistDto {
public:
	PlaylistDto(	
		bool openAccess,			
		QList<PlaylistUserPermissions> shares,			
		QStringList itemIds		
	);

	PlaylistDto(const PlaylistDto &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(PlaylistDto &other);
	
	static PlaylistDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets a value indicating whether the playlist is publicly readable.
	 */
	bool openAccess() const;
	/**
	* @brief Gets or sets a value indicating whether the playlist is publicly readable.
	*/
	void setOpenAccess(bool newOpenAccess);

	/**
	 * @brief Gets or sets the share permissions.
	 */
	QList<PlaylistUserPermissions> shares() const;
	/**
	* @brief Gets or sets the share permissions.
	*/
	void setShares(QList<PlaylistUserPermissions> newShares);

	/**
	 * @brief Gets or sets the item ids.
	 */
	QStringList itemIds() const;
	/**
	* @brief Gets or sets the item ids.
	*/
	void setItemIds(QStringList newItemIds);


protected:
	bool m_openAccess;
	QList<PlaylistUserPermissions> m_shares;
	QStringList m_itemIds;

private:
	// Private constructor which generates an invalid object, for use withing PlaylistDto::fromJson();
	PlaylistDto();
};


} // NS DTO

namespace Support {

using PlaylistDto = Jellyfin::DTO::PlaylistDto;

template <>
PlaylistDto fromJsonValue(const QJsonValue &source, convertType<PlaylistDto>);

template<>
QJsonValue toJsonValue(const PlaylistDto &source, convertType<PlaylistDto>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_PLAYLISTDTO_H
