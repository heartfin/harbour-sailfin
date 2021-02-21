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
#include <QObject>

namespace Jellyfin {
namespace DTO {

class ItemCounts : public QObject {
	Q_OBJECT
public:
	explicit ItemCounts(QObject *parent = nullptr);
	static ItemCounts *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the movie count.
	 */
	Q_PROPERTY(qint32 movieCount READ movieCount WRITE setMovieCount NOTIFY movieCountChanged)
	/**
	 * @brief Gets or sets the series count.
	 */
	Q_PROPERTY(qint32 seriesCount READ seriesCount WRITE setSeriesCount NOTIFY seriesCountChanged)
	/**
	 * @brief Gets or sets the episode count.
	 */
	Q_PROPERTY(qint32 episodeCount READ episodeCount WRITE setEpisodeCount NOTIFY episodeCountChanged)
	/**
	 * @brief Gets or sets the artist count.
	 */
	Q_PROPERTY(qint32 artistCount READ artistCount WRITE setArtistCount NOTIFY artistCountChanged)
	/**
	 * @brief Gets or sets the program count.
	 */
	Q_PROPERTY(qint32 programCount READ programCount WRITE setProgramCount NOTIFY programCountChanged)
	/**
	 * @brief Gets or sets the trailer count.
	 */
	Q_PROPERTY(qint32 trailerCount READ trailerCount WRITE setTrailerCount NOTIFY trailerCountChanged)
	/**
	 * @brief Gets or sets the song count.
	 */
	Q_PROPERTY(qint32 songCount READ songCount WRITE setSongCount NOTIFY songCountChanged)
	/**
	 * @brief Gets or sets the album count.
	 */
	Q_PROPERTY(qint32 albumCount READ albumCount WRITE setAlbumCount NOTIFY albumCountChanged)
	/**
	 * @brief Gets or sets the music video count.
	 */
	Q_PROPERTY(qint32 musicVideoCount READ musicVideoCount WRITE setMusicVideoCount NOTIFY musicVideoCountChanged)
	/**
	 * @brief Gets or sets the box set count.
	 */
	Q_PROPERTY(qint32 boxSetCount READ boxSetCount WRITE setBoxSetCount NOTIFY boxSetCountChanged)
	/**
	 * @brief Gets or sets the book count.
	 */
	Q_PROPERTY(qint32 bookCount READ bookCount WRITE setBookCount NOTIFY bookCountChanged)
	/**
	 * @brief Gets or sets the item count.
	 */
	Q_PROPERTY(qint32 itemCount READ itemCount WRITE setItemCount NOTIFY itemCountChanged)

	qint32 movieCount() const;
	void setMovieCount(qint32 newMovieCount);
	
	qint32 seriesCount() const;
	void setSeriesCount(qint32 newSeriesCount);
	
	qint32 episodeCount() const;
	void setEpisodeCount(qint32 newEpisodeCount);
	
	qint32 artistCount() const;
	void setArtistCount(qint32 newArtistCount);
	
	qint32 programCount() const;
	void setProgramCount(qint32 newProgramCount);
	
	qint32 trailerCount() const;
	void setTrailerCount(qint32 newTrailerCount);
	
	qint32 songCount() const;
	void setSongCount(qint32 newSongCount);
	
	qint32 albumCount() const;
	void setAlbumCount(qint32 newAlbumCount);
	
	qint32 musicVideoCount() const;
	void setMusicVideoCount(qint32 newMusicVideoCount);
	
	qint32 boxSetCount() const;
	void setBoxSetCount(qint32 newBoxSetCount);
	
	qint32 bookCount() const;
	void setBookCount(qint32 newBookCount);
	
	qint32 itemCount() const;
	void setItemCount(qint32 newItemCount);
	
signals:
	void movieCountChanged(qint32 newMovieCount);
	void seriesCountChanged(qint32 newSeriesCount);
	void episodeCountChanged(qint32 newEpisodeCount);
	void artistCountChanged(qint32 newArtistCount);
	void programCountChanged(qint32 newProgramCount);
	void trailerCountChanged(qint32 newTrailerCount);
	void songCountChanged(qint32 newSongCount);
	void albumCountChanged(qint32 newAlbumCount);
	void musicVideoCountChanged(qint32 newMusicVideoCount);
	void boxSetCountChanged(qint32 newBoxSetCount);
	void bookCountChanged(qint32 newBookCount);
	void itemCountChanged(qint32 newItemCount);
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

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_ITEMCOUNTS_H
