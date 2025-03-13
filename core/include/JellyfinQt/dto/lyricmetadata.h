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

#ifndef JELLYFIN_DTO_LYRICMETADATA_H
#define JELLYFIN_DTO_LYRICMETADATA_H

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


class LyricMetadata {
public:	LyricMetadata();
	LyricMetadata(const LyricMetadata &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(LyricMetadata &other);
	
	static LyricMetadata fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the song artist.
	 */
	QString artist() const;
	/**
	* @brief Gets or sets the song artist.
	*/
	void setArtist(QString newArtist);
	bool artistNull() const;
	void setArtistNull();

	/**
	 * @brief Gets or sets the album this song is on.
	 */
	QString album() const;
	/**
	* @brief Gets or sets the album this song is on.
	*/
	void setAlbum(QString newAlbum);
	bool albumNull() const;
	void setAlbumNull();

	/**
	 * @brief Gets or sets the title of the song.
	 */
	QString title() const;
	/**
	* @brief Gets or sets the title of the song.
	*/
	void setTitle(QString newTitle);
	bool titleNull() const;
	void setTitleNull();

	/**
	 * @brief Gets or sets the author of the lyric data.
	 */
	QString author() const;
	/**
	* @brief Gets or sets the author of the lyric data.
	*/
	void setAuthor(QString newAuthor);
	bool authorNull() const;
	void setAuthorNull();

	/**
	 * @brief Gets or sets the length of the song in ticks.
	 */
	std::optional<qint64> length() const;
	/**
	* @brief Gets or sets the length of the song in ticks.
	*/
	void setLength(std::optional<qint64> newLength);
	bool lengthNull() const;
	void setLengthNull();

	/**
	 * @brief Gets or sets who the LRC file was created by.
	 */
	QString by() const;
	/**
	* @brief Gets or sets who the LRC file was created by.
	*/
	void setBy(QString newBy);
	bool byNull() const;
	void setByNull();

	/**
	 * @brief Gets or sets the lyric offset compared to audio in ticks.
	 */
	std::optional<qint64> offset() const;
	/**
	* @brief Gets or sets the lyric offset compared to audio in ticks.
	*/
	void setOffset(std::optional<qint64> newOffset);
	bool offsetNull() const;
	void setOffsetNull();

	/**
	 * @brief Gets or sets the software used to create the LRC file.
	 */
	QString creator() const;
	/**
	* @brief Gets or sets the software used to create the LRC file.
	*/
	void setCreator(QString newCreator);
	bool creatorNull() const;
	void setCreatorNull();

	/**
	 * @brief Gets or sets the version of the creator used.
	 */
	QString version() const;
	/**
	* @brief Gets or sets the version of the creator used.
	*/
	void setVersion(QString newVersion);
	bool versionNull() const;
	void setVersionNull();

	/**
	 * @brief Gets or sets a value indicating whether this lyric is synced.
	 */
	std::optional<bool> isSynced() const;
	/**
	* @brief Gets or sets a value indicating whether this lyric is synced.
	*/
	void setIsSynced(std::optional<bool> newIsSynced);
	bool isSyncedNull() const;
	void setIsSyncedNull();


protected:
	QString m_artist;
	QString m_album;
	QString m_title;
	QString m_author;
	std::optional<qint64> m_length = std::nullopt;
	QString m_by;
	std::optional<qint64> m_offset = std::nullopt;
	QString m_creator;
	QString m_version;
	std::optional<bool> m_isSynced = std::nullopt;


};


} // NS DTO

namespace Support {

using LyricMetadata = Jellyfin::DTO::LyricMetadata;

template <>
LyricMetadata fromJsonValue(const QJsonValue &source, convertType<LyricMetadata>);

template<>
QJsonValue toJsonValue(const LyricMetadata &source, convertType<LyricMetadata>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_LYRICMETADATA_H
