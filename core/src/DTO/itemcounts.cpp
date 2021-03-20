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

#include <JellyfinQt/DTO/itemcounts.h>

namespace Jellyfin {
namespace DTO {

ItemCounts::ItemCounts(QObject *parent) {}

ItemCounts ItemCounts::fromJson(QJsonObject source) {ItemCounts instance;
	instance->setFromJson(source, false);
	return instance;
}


void ItemCounts::setFromJson(QJsonObject source) {
	m_movieCount = fromJsonValue<qint32>(source["MovieCount"]);
	m_seriesCount = fromJsonValue<qint32>(source["SeriesCount"]);
	m_episodeCount = fromJsonValue<qint32>(source["EpisodeCount"]);
	m_artistCount = fromJsonValue<qint32>(source["ArtistCount"]);
	m_programCount = fromJsonValue<qint32>(source["ProgramCount"]);
	m_trailerCount = fromJsonValue<qint32>(source["TrailerCount"]);
	m_songCount = fromJsonValue<qint32>(source["SongCount"]);
	m_albumCount = fromJsonValue<qint32>(source["AlbumCount"]);
	m_musicVideoCount = fromJsonValue<qint32>(source["MusicVideoCount"]);
	m_boxSetCount = fromJsonValue<qint32>(source["BoxSetCount"]);
	m_bookCount = fromJsonValue<qint32>(source["BookCount"]);
	m_itemCount = fromJsonValue<qint32>(source["ItemCount"]);

}
	
QJsonObject ItemCounts::toJson() {
	QJsonObject result;
	result["MovieCount"] = toJsonValue<qint32>(m_movieCount);
	result["SeriesCount"] = toJsonValue<qint32>(m_seriesCount);
	result["EpisodeCount"] = toJsonValue<qint32>(m_episodeCount);
	result["ArtistCount"] = toJsonValue<qint32>(m_artistCount);
	result["ProgramCount"] = toJsonValue<qint32>(m_programCount);
	result["TrailerCount"] = toJsonValue<qint32>(m_trailerCount);
	result["SongCount"] = toJsonValue<qint32>(m_songCount);
	result["AlbumCount"] = toJsonValue<qint32>(m_albumCount);
	result["MusicVideoCount"] = toJsonValue<qint32>(m_musicVideoCount);
	result["BoxSetCount"] = toJsonValue<qint32>(m_boxSetCount);
	result["BookCount"] = toJsonValue<qint32>(m_bookCount);
	result["ItemCount"] = toJsonValue<qint32>(m_itemCount);

	return result;
}

qint32 ItemCounts::movieCount() const { return m_movieCount; }

void ItemCounts::setMovieCount(qint32 newMovieCount) {
	m_movieCount = newMovieCount;
}
qint32 ItemCounts::seriesCount() const { return m_seriesCount; }

void ItemCounts::setSeriesCount(qint32 newSeriesCount) {
	m_seriesCount = newSeriesCount;
}
qint32 ItemCounts::episodeCount() const { return m_episodeCount; }

void ItemCounts::setEpisodeCount(qint32 newEpisodeCount) {
	m_episodeCount = newEpisodeCount;
}
qint32 ItemCounts::artistCount() const { return m_artistCount; }

void ItemCounts::setArtistCount(qint32 newArtistCount) {
	m_artistCount = newArtistCount;
}
qint32 ItemCounts::programCount() const { return m_programCount; }

void ItemCounts::setProgramCount(qint32 newProgramCount) {
	m_programCount = newProgramCount;
}
qint32 ItemCounts::trailerCount() const { return m_trailerCount; }

void ItemCounts::setTrailerCount(qint32 newTrailerCount) {
	m_trailerCount = newTrailerCount;
}
qint32 ItemCounts::songCount() const { return m_songCount; }

void ItemCounts::setSongCount(qint32 newSongCount) {
	m_songCount = newSongCount;
}
qint32 ItemCounts::albumCount() const { return m_albumCount; }

void ItemCounts::setAlbumCount(qint32 newAlbumCount) {
	m_albumCount = newAlbumCount;
}
qint32 ItemCounts::musicVideoCount() const { return m_musicVideoCount; }

void ItemCounts::setMusicVideoCount(qint32 newMusicVideoCount) {
	m_musicVideoCount = newMusicVideoCount;
}
qint32 ItemCounts::boxSetCount() const { return m_boxSetCount; }

void ItemCounts::setBoxSetCount(qint32 newBoxSetCount) {
	m_boxSetCount = newBoxSetCount;
}
qint32 ItemCounts::bookCount() const { return m_bookCount; }

void ItemCounts::setBookCount(qint32 newBookCount) {
	m_bookCount = newBookCount;
}
qint32 ItemCounts::itemCount() const { return m_itemCount; }

void ItemCounts::setItemCount(qint32 newItemCount) {
	m_itemCount = newItemCount;
}


} // NS Jellyfin
} // NS DTO
