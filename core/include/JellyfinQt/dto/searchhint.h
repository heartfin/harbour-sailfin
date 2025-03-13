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

#ifndef JELLYFIN_DTO_SEARCHHINT_H
#define JELLYFIN_DTO_SEARCHHINT_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/baseitemkind.h"
#include "JellyfinQt/dto/mediatype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class SearchHint {
public:
	SearchHint(	
		QString itemId,			
		QString jellyfinId,			
		QString name,																					
		BaseItemKind type,							
		MediaType mediaType,																	
		QStringList artists												
	);

	SearchHint(const SearchHint &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(SearchHint &other);
	
	static SearchHint fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the item id.
	 */
	QString itemId() const;
	/**
	* @brief Gets or sets the item id.
	*/
	void setItemId(QString newItemId);

	/**
	 * @brief Gets or sets the item id.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets or sets the item id.
	*/
	void setJellyfinId(QString newJellyfinId);

	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);

	/**
	 * @brief Gets or sets the matched term.
	 */
	QString matchedTerm() const;
	/**
	* @brief Gets or sets the matched term.
	*/
	void setMatchedTerm(QString newMatchedTerm);
	bool matchedTermNull() const;
	void setMatchedTermNull();

	/**
	 * @brief Gets or sets the index number.
	 */
	std::optional<qint32> indexNumber() const;
	/**
	* @brief Gets or sets the index number.
	*/
	void setIndexNumber(std::optional<qint32> newIndexNumber);
	bool indexNumberNull() const;
	void setIndexNumberNull();

	/**
	 * @brief Gets or sets the production year.
	 */
	std::optional<qint32> productionYear() const;
	/**
	* @brief Gets or sets the production year.
	*/
	void setProductionYear(std::optional<qint32> newProductionYear);
	bool productionYearNull() const;
	void setProductionYearNull();

	/**
	 * @brief Gets or sets the parent index number.
	 */
	std::optional<qint32> parentIndexNumber() const;
	/**
	* @brief Gets or sets the parent index number.
	*/
	void setParentIndexNumber(std::optional<qint32> newParentIndexNumber);
	bool parentIndexNumberNull() const;
	void setParentIndexNumberNull();

	/**
	 * @brief Gets or sets the image tag.
	 */
	QString primaryImageTag() const;
	/**
	* @brief Gets or sets the image tag.
	*/
	void setPrimaryImageTag(QString newPrimaryImageTag);
	bool primaryImageTagNull() const;
	void setPrimaryImageTagNull();

	/**
	 * @brief Gets or sets the thumb image tag.
	 */
	QString thumbImageTag() const;
	/**
	* @brief Gets or sets the thumb image tag.
	*/
	void setThumbImageTag(QString newThumbImageTag);
	bool thumbImageTagNull() const;
	void setThumbImageTagNull();

	/**
	 * @brief Gets or sets the thumb image item identifier.
	 */
	QString thumbImageItemId() const;
	/**
	* @brief Gets or sets the thumb image item identifier.
	*/
	void setThumbImageItemId(QString newThumbImageItemId);
	bool thumbImageItemIdNull() const;
	void setThumbImageItemIdNull();

	/**
	 * @brief Gets or sets the backdrop image tag.
	 */
	QString backdropImageTag() const;
	/**
	* @brief Gets or sets the backdrop image tag.
	*/
	void setBackdropImageTag(QString newBackdropImageTag);
	bool backdropImageTagNull() const;
	void setBackdropImageTagNull();

	/**
	 * @brief Gets or sets the backdrop image item identifier.
	 */
	QString backdropImageItemId() const;
	/**
	* @brief Gets or sets the backdrop image item identifier.
	*/
	void setBackdropImageItemId(QString newBackdropImageItemId);
	bool backdropImageItemIdNull() const;
	void setBackdropImageItemIdNull();


	BaseItemKind type() const;

	void setType(BaseItemKind newType);

	/**
	 * @brief Gets or sets a value indicating whether this instance is folder.
	 */
	std::optional<bool> isFolder() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is folder.
	*/
	void setIsFolder(std::optional<bool> newIsFolder);
	bool isFolderNull() const;
	void setIsFolderNull();

	/**
	 * @brief Gets or sets the run time ticks.
	 */
	std::optional<qint64> runTimeTicks() const;
	/**
	* @brief Gets or sets the run time ticks.
	*/
	void setRunTimeTicks(std::optional<qint64> newRunTimeTicks);
	bool runTimeTicksNull() const;
	void setRunTimeTicksNull();


	MediaType mediaType() const;

	void setMediaType(MediaType newMediaType);

	/**
	 * @brief Gets or sets the start date.
	 */
	QDateTime startDate() const;
	/**
	* @brief Gets or sets the start date.
	*/
	void setStartDate(QDateTime newStartDate);
	bool startDateNull() const;
	void setStartDateNull();

	/**
	 * @brief Gets or sets the end date.
	 */
	QDateTime endDate() const;
	/**
	* @brief Gets or sets the end date.
	*/
	void setEndDate(QDateTime newEndDate);
	bool endDateNull() const;
	void setEndDateNull();

	/**
	 * @brief Gets or sets the series.
	 */
	QString series() const;
	/**
	* @brief Gets or sets the series.
	*/
	void setSeries(QString newSeries);
	bool seriesNull() const;
	void setSeriesNull();

	/**
	 * @brief Gets or sets the status.
	 */
	QString status() const;
	/**
	* @brief Gets or sets the status.
	*/
	void setStatus(QString newStatus);
	bool statusNull() const;
	void setStatusNull();

	/**
	 * @brief Gets or sets the album.
	 */
	QString album() const;
	/**
	* @brief Gets or sets the album.
	*/
	void setAlbum(QString newAlbum);
	bool albumNull() const;
	void setAlbumNull();

	/**
	 * @brief Gets or sets the album id.
	 */
	QString albumId() const;
	/**
	* @brief Gets or sets the album id.
	*/
	void setAlbumId(QString newAlbumId);
	bool albumIdNull() const;
	void setAlbumIdNull();

	/**
	 * @brief Gets or sets the album artist.
	 */
	QString albumArtist() const;
	/**
	* @brief Gets or sets the album artist.
	*/
	void setAlbumArtist(QString newAlbumArtist);
	bool albumArtistNull() const;
	void setAlbumArtistNull();

	/**
	 * @brief Gets or sets the artists.
	 */
	QStringList artists() const;
	/**
	* @brief Gets or sets the artists.
	*/
	void setArtists(QStringList newArtists);

	/**
	 * @brief Gets or sets the song count.
	 */
	std::optional<qint32> songCount() const;
	/**
	* @brief Gets or sets the song count.
	*/
	void setSongCount(std::optional<qint32> newSongCount);
	bool songCountNull() const;
	void setSongCountNull();

	/**
	 * @brief Gets or sets the episode count.
	 */
	std::optional<qint32> episodeCount() const;
	/**
	* @brief Gets or sets the episode count.
	*/
	void setEpisodeCount(std::optional<qint32> newEpisodeCount);
	bool episodeCountNull() const;
	void setEpisodeCountNull();

	/**
	 * @brief Gets or sets the channel identifier.
	 */
	QString channelId() const;
	/**
	* @brief Gets or sets the channel identifier.
	*/
	void setChannelId(QString newChannelId);
	bool channelIdNull() const;
	void setChannelIdNull();

	/**
	 * @brief Gets or sets the name of the channel.
	 */
	QString channelName() const;
	/**
	* @brief Gets or sets the name of the channel.
	*/
	void setChannelName(QString newChannelName);
	bool channelNameNull() const;
	void setChannelNameNull();

	/**
	 * @brief Gets or sets the primary image aspect ratio.
	 */
	std::optional<double> primaryImageAspectRatio() const;
	/**
	* @brief Gets or sets the primary image aspect ratio.
	*/
	void setPrimaryImageAspectRatio(std::optional<double> newPrimaryImageAspectRatio);
	bool primaryImageAspectRatioNull() const;
	void setPrimaryImageAspectRatioNull();


protected:
	QString m_itemId;
	QString m_jellyfinId;
	QString m_name;
	QString m_matchedTerm;
	std::optional<qint32> m_indexNumber = std::nullopt;
	std::optional<qint32> m_productionYear = std::nullopt;
	std::optional<qint32> m_parentIndexNumber = std::nullopt;
	QString m_primaryImageTag;
	QString m_thumbImageTag;
	QString m_thumbImageItemId;
	QString m_backdropImageTag;
	QString m_backdropImageItemId;
	BaseItemKind m_type;
	std::optional<bool> m_isFolder = std::nullopt;
	std::optional<qint64> m_runTimeTicks = std::nullopt;
	MediaType m_mediaType;
	QDateTime m_startDate;
	QDateTime m_endDate;
	QString m_series;
	QString m_status;
	QString m_album;
	QString m_albumId;
	QString m_albumArtist;
	QStringList m_artists;
	std::optional<qint32> m_songCount = std::nullopt;
	std::optional<qint32> m_episodeCount = std::nullopt;
	QString m_channelId;
	QString m_channelName;
	std::optional<double> m_primaryImageAspectRatio = std::nullopt;

private:
	// Private constructor which generates an invalid object, for use withing SearchHint::fromJson();
	SearchHint();
};


} // NS DTO

namespace Support {

using SearchHint = Jellyfin::DTO::SearchHint;

template <>
SearchHint fromJsonValue(const QJsonValue &source, convertType<SearchHint>);

template<>
QJsonValue toJsonValue(const SearchHint &source, convertType<SearchHint>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_SEARCHHINT_H
