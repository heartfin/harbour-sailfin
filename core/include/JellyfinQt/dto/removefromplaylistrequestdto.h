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

#ifndef JELLYFIN_DTO_REMOVEFROMPLAYLISTREQUESTDTO_H
#define JELLYFIN_DTO_REMOVEFROMPLAYLISTREQUESTDTO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class RemoveFromPlaylistRequestDto {
public:
	RemoveFromPlaylistRequestDto(	
		QStringList playlistItemIds,			
		bool clearPlaylist,			
		bool clearPlayingItem		
	);

	RemoveFromPlaylistRequestDto(const RemoveFromPlaylistRequestDto &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(RemoveFromPlaylistRequestDto &other);
	
	static RemoveFromPlaylistRequestDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the playlist identifiers of the items. Ignored when clearing the playlist.
	 */
	QStringList playlistItemIds() const;
	/**
	* @brief Gets or sets the playlist identifiers of the items. Ignored when clearing the playlist.
	*/
	void setPlaylistItemIds(QStringList newPlaylistItemIds);

	/**
	 * @brief Gets or sets a value indicating whether the entire playlist should be cleared.
	 */
	bool clearPlaylist() const;
	/**
	* @brief Gets or sets a value indicating whether the entire playlist should be cleared.
	*/
	void setClearPlaylist(bool newClearPlaylist);

	/**
	 * @brief Gets or sets a value indicating whether the playing item should be removed as well. Used only when clearing the playlist.
	 */
	bool clearPlayingItem() const;
	/**
	* @brief Gets or sets a value indicating whether the playing item should be removed as well. Used only when clearing the playlist.
	*/
	void setClearPlayingItem(bool newClearPlayingItem);


protected:
	QStringList m_playlistItemIds;
	bool m_clearPlaylist;
	bool m_clearPlayingItem;

private:
	// Private constructor which generates an invalid object, for use withing RemoveFromPlaylistRequestDto::fromJson();
	RemoveFromPlaylistRequestDto();
};


} // NS DTO

namespace Support {

using RemoveFromPlaylistRequestDto = Jellyfin::DTO::RemoveFromPlaylistRequestDto;

template <>
RemoveFromPlaylistRequestDto fromJsonValue(const QJsonValue &source, convertType<RemoveFromPlaylistRequestDto>);

template<>
QJsonValue toJsonValue(const RemoveFromPlaylistRequestDto &source, convertType<RemoveFromPlaylistRequestDto>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_REMOVEFROMPLAYLISTREQUESTDTO_H
