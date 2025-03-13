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

#ifndef JELLYFIN_DTO_UPDATEPLAYLISTDTO_H
#define JELLYFIN_DTO_UPDATEPLAYLISTDTO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
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


class UpdatePlaylistDto {
public:	UpdatePlaylistDto();
	UpdatePlaylistDto(const UpdatePlaylistDto &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(UpdatePlaylistDto &other);
	
	static UpdatePlaylistDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the name of the new playlist.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name of the new playlist.
	*/
	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();

	/**
	 * @brief Gets or sets item ids of the playlist.
	 */
	QStringList ids() const;
	/**
	* @brief Gets or sets item ids of the playlist.
	*/
	void setIds(QStringList newIds);
	bool idsNull() const;
	void setIdsNull();

	/**
	 * @brief Gets or sets the playlist users.
	 */
	QList<PlaylistUserPermissions> users() const;
	/**
	* @brief Gets or sets the playlist users.
	*/
	void setUsers(QList<PlaylistUserPermissions> newUsers);
	bool usersNull() const;
	void setUsersNull();

	/**
	 * @brief Gets or sets a value indicating whether the playlist is public.
	 */
	std::optional<bool> isPublic() const;
	/**
	* @brief Gets or sets a value indicating whether the playlist is public.
	*/
	void setIsPublic(std::optional<bool> newIsPublic);
	bool isPublicNull() const;
	void setIsPublicNull();


protected:
	QString m_name;
	QStringList m_ids;
	QList<PlaylistUserPermissions> m_users;
	std::optional<bool> m_isPublic = std::nullopt;


};


} // NS DTO

namespace Support {

using UpdatePlaylistDto = Jellyfin::DTO::UpdatePlaylistDto;

template <>
UpdatePlaylistDto fromJsonValue(const QJsonValue &source, convertType<UpdatePlaylistDto>);

template<>
QJsonValue toJsonValue(const UpdatePlaylistDto &source, convertType<UpdatePlaylistDto>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_UPDATEPLAYLISTDTO_H
