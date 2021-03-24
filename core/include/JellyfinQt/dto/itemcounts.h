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

#ifndef JELLYFIN_DTO_ITEMCOUNTS_H
#define JELLYFIN_DTO_ITEMCOUNTS_H

#include <QJsonObject>
#include <QJsonValue>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class ItemCounts {
public:
	ItemCounts();
	ItemCounts(const ItemCounts &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(ItemCounts &other);
	
	static ItemCounts fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the movie count.
	 */
	qint32 movieCount() const;
	/**
	* @brief Gets or sets the movie count.
	*/
	void setMovieCount(qint32 newMovieCount);

	/**
	 * @brief Gets or sets the series count.
	 */
	qint32 seriesCount() const;
	/**
	* @brief Gets or sets the series count.
	*/
	void setSeriesCount(qint32 newSeriesCount);

	/**
	 * @brief Gets or sets the episode count.
	 */
	qint32 episodeCount() const;
	/**
	* @brief Gets or sets the episode count.
	*/
	void setEpisodeCount(qint32 newEpisodeCount);

	/**
	 * @brief Gets or sets the artist count.
	 */
	qint32 artistCount() const;
	/**
	* @brief Gets or sets the artist count.
	*/
	void setArtistCount(qint32 newArtistCount);

	/**
	 * @brief Gets or sets the program count.
	 */
	qint32 programCount() const;
	/**
	* @brief Gets or sets the program count.
	*/
	void setProgramCount(qint32 newProgramCount);

	/**
	 * @brief Gets or sets the trailer count.
	 */
	qint32 trailerCount() const;
	/**
	* @brief Gets or sets the trailer count.
	*/
	void setTrailerCount(qint32 newTrailerCount);

	/**
	 * @brief Gets or sets the song count.
	 */
	qint32 songCount() const;
	/**
	* @brief Gets or sets the song count.
	*/
	void setSongCount(qint32 newSongCount);

	/**
	 * @brief Gets or sets the album count.
	 */
	qint32 albumCount() const;
	/**
	* @brief Gets or sets the album count.
	*/
	void setAlbumCount(qint32 newAlbumCount);

	/**
	 * @brief Gets or sets the music video count.
	 */
	qint32 musicVideoCount() const;
	/**
	* @brief Gets or sets the music video count.
	*/
	void setMusicVideoCount(qint32 newMusicVideoCount);

	/**
	 * @brief Gets or sets the box set count.
	 */
	qint32 boxSetCount() const;
	/**
	* @brief Gets or sets the box set count.
	*/
	void setBoxSetCount(qint32 newBoxSetCount);

	/**
	 * @brief Gets or sets the book count.
	 */
	qint32 bookCount() const;
	/**
	* @brief Gets or sets the book count.
	*/
	void setBookCount(qint32 newBookCount);

	/**
	 * @brief Gets or sets the item count.
	 */
	qint32 itemCount() const;
	/**
	* @brief Gets or sets the item count.
	*/
	void setItemCount(qint32 newItemCount);


protected:
	qint32 m_movieCount;
	qint32 m_seriesCount;
	qint32 m_episodeCount;
	qint32 m_artistCount;
	qint32 m_programCount;
	qint32 m_trailerCount;
	qint32 m_songCount;
	qint32 m_albumCount;
	qint32 m_musicVideoCount;
	qint32 m_boxSetCount;
	qint32 m_bookCount;
	qint32 m_itemCount;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_ITEMCOUNTS_H
