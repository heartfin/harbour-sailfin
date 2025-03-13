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

#ifndef JELLYFIN_DTO_CREATEPLAYLISTDTO_H
#define JELLYFIN_DTO_CREATEPLAYLISTDTO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/mediatype.h"
#include "JellyfinQt/dto/playlistuserpermissions.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class CreatePlaylistDto {
public:
	CreatePlaylistDto(	
		QString name,			
		QStringList ids,					
		MediaType mediaType,			
		QList<PlaylistUserPermissions> users,			
		bool isPublic		
	);

	CreatePlaylistDto(const CreatePlaylistDto &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(CreatePlaylistDto &other);
	
	static CreatePlaylistDto fromJson(QJsonObject source);
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

	/**
	 * @brief Gets or sets item ids to add to the playlist.
	 */
	QStringList ids() const;
	/**
	* @brief Gets or sets item ids to add to the playlist.
	*/
	void setIds(QStringList newIds);

	/**
	 * @brief Gets or sets the user id.
	 */
	QString userId() const;
	/**
	* @brief Gets or sets the user id.
	*/
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();


	MediaType mediaType() const;

	void setMediaType(MediaType newMediaType);

	/**
	 * @brief Gets or sets the playlist users.
	 */
	QList<PlaylistUserPermissions> users() const;
	/**
	* @brief Gets or sets the playlist users.
	*/
	void setUsers(QList<PlaylistUserPermissions> newUsers);

	/**
	 * @brief Gets or sets a value indicating whether the playlist is public.
	 */
	bool isPublic() const;
	/**
	* @brief Gets or sets a value indicating whether the playlist is public.
	*/
	void setIsPublic(bool newIsPublic);


protected:
	QString m_name;
	QStringList m_ids;
	QString m_userId;
	MediaType m_mediaType;
	QList<PlaylistUserPermissions> m_users;
	bool m_isPublic;

private:
	// Private constructor which generates an invalid object, for use withing CreatePlaylistDto::fromJson();
	CreatePlaylistDto();
};


} // NS DTO

namespace Support {

using CreatePlaylistDto = Jellyfin::DTO::CreatePlaylistDto;

template <>
CreatePlaylistDto fromJsonValue(const QJsonValue &source, convertType<CreatePlaylistDto>);

template<>
QJsonValue toJsonValue(const CreatePlaylistDto &source, convertType<CreatePlaylistDto>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_CREATEPLAYLISTDTO_H
