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

#ifndef JELLYFIN_DTO_GETPROGRAMSDTO_H
#define JELLYFIN_DTO_GETPROGRAMSDTO_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <QUuid>
#include <optional>

#include "JellyfinQt/DTO/imagetype.h"
#include "JellyfinQt/DTO/itemfields.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class GetProgramsDto {
public:
	explicit GetProgramsDto();
	static GetProgramsDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the channels to return guide information for.
	 */
	QList<QUuid> channelIds() const;
	/**
	* @brief Gets or sets the channels to return guide information for.
	*/
	void setChannelIds(QList<QUuid> newChannelIds);
	/**
	 * @brief Gets or sets optional. Filter by user id.
	 */
	QUuid userId() const;
	/**
	* @brief Gets or sets optional. Filter by user id.
	*/
	void setUserId(QUuid newUserId);
	/**
	 * @brief Gets or sets the minimum premiere start date.
Optional.
	 */
	QDateTime minStartDate() const;
	/**
	* @brief Gets or sets the minimum premiere start date.
Optional.
	*/
	void setMinStartDate(QDateTime newMinStartDate);
	/**
	 * @brief Gets or sets filter by programs that have completed airing, or not.
Optional.
	 */
	bool hasAired() const;
	/**
	* @brief Gets or sets filter by programs that have completed airing, or not.
Optional.
	*/
	void setHasAired(bool newHasAired);
	/**
	 * @brief Gets or sets filter by programs that are currently airing, or not.
Optional.
	 */
	bool isAiring() const;
	/**
	* @brief Gets or sets filter by programs that are currently airing, or not.
Optional.
	*/
	void setIsAiring(bool newIsAiring);
	/**
	 * @brief Gets or sets the maximum premiere start date.
Optional.
	 */
	QDateTime maxStartDate() const;
	/**
	* @brief Gets or sets the maximum premiere start date.
Optional.
	*/
	void setMaxStartDate(QDateTime newMaxStartDate);
	/**
	 * @brief Gets or sets the minimum premiere end date.
Optional.
	 */
	QDateTime minEndDate() const;
	/**
	* @brief Gets or sets the minimum premiere end date.
Optional.
	*/
	void setMinEndDate(QDateTime newMinEndDate);
	/**
	 * @brief Gets or sets the maximum premiere end date.
Optional.
	 */
	QDateTime maxEndDate() const;
	/**
	* @brief Gets or sets the maximum premiere end date.
Optional.
	*/
	void setMaxEndDate(QDateTime newMaxEndDate);
	/**
	 * @brief Gets or sets filter for movies.
Optional.
	 */
	bool isMovie() const;
	/**
	* @brief Gets or sets filter for movies.
Optional.
	*/
	void setIsMovie(bool newIsMovie);
	/**
	 * @brief Gets or sets filter for series.
Optional.
	 */
	bool isSeries() const;
	/**
	* @brief Gets or sets filter for series.
Optional.
	*/
	void setIsSeries(bool newIsSeries);
	/**
	 * @brief Gets or sets filter for news.
Optional.
	 */
	bool isNews() const;
	/**
	* @brief Gets or sets filter for news.
Optional.
	*/
	void setIsNews(bool newIsNews);
	/**
	 * @brief Gets or sets filter for kids.
Optional.
	 */
	bool isKids() const;
	/**
	* @brief Gets or sets filter for kids.
Optional.
	*/
	void setIsKids(bool newIsKids);
	/**
	 * @brief Gets or sets filter for sports.
Optional.
	 */
	bool isSports() const;
	/**
	* @brief Gets or sets filter for sports.
Optional.
	*/
	void setIsSports(bool newIsSports);
	/**
	 * @brief Gets or sets the record index to start at. All items with a lower index will be dropped from the results.
Optional.
	 */
	qint32 startIndex() const;
	/**
	* @brief Gets or sets the record index to start at. All items with a lower index will be dropped from the results.
Optional.
	*/
	void setStartIndex(qint32 newStartIndex);
	/**
	 * @brief Gets or sets the maximum number of records to return.
Optional.
	 */
	qint32 limit() const;
	/**
	* @brief Gets or sets the maximum number of records to return.
Optional.
	*/
	void setLimit(qint32 newLimit);
	/**
	 * @brief Gets or sets specify one or more sort orders, comma delimited. Options: Name, StartDate.
Optional.
	 */
	QString sortBy() const;
	/**
	* @brief Gets or sets specify one or more sort orders, comma delimited. Options: Name, StartDate.
Optional.
	*/
	void setSortBy(QString newSortBy);
	/**
	 * @brief Gets or sets sort Order - Ascending,Descending.
	 */
	QString sortOrder() const;
	/**
	* @brief Gets or sets sort Order - Ascending,Descending.
	*/
	void setSortOrder(QString newSortOrder);
	/**
	 * @brief Gets or sets the genres to return guide information for.
	 */
	QStringList genres() const;
	/**
	* @brief Gets or sets the genres to return guide information for.
	*/
	void setGenres(QStringList newGenres);
	/**
	 * @brief Gets or sets the genre ids to return guide information for.
	 */
	QList<QUuid> genreIds() const;
	/**
	* @brief Gets or sets the genre ids to return guide information for.
	*/
	void setGenreIds(QList<QUuid> newGenreIds);
	/**
	 * @brief Gets or sets include image information in output.
Optional.
	 */
	bool enableImages() const;
	/**
	* @brief Gets or sets include image information in output.
Optional.
	*/
	void setEnableImages(bool newEnableImages);
	/**
	 * @brief Gets or sets a value indicating whether retrieve total record count.
	 */
	bool enableTotalRecordCount() const;
	/**
	* @brief Gets or sets a value indicating whether retrieve total record count.
	*/
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount);
	/**
	 * @brief Gets or sets the max number of images to return, per image type.
Optional.
	 */
	qint32 imageTypeLimit() const;
	/**
	* @brief Gets or sets the max number of images to return, per image type.
Optional.
	*/
	void setImageTypeLimit(qint32 newImageTypeLimit);
	/**
	 * @brief Gets or sets the image types to include in the output.
Optional.
	 */
	QList<ImageType> enableImageTypes() const;
	/**
	* @brief Gets or sets the image types to include in the output.
Optional.
	*/
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	/**
	 * @brief Gets or sets include user data.
Optional.
	 */
	bool enableUserData() const;
	/**
	* @brief Gets or sets include user data.
Optional.
	*/
	void setEnableUserData(bool newEnableUserData);
	/**
	 * @brief Gets or sets filter by series timer id.
Optional.
	 */
	QString seriesTimerId() const;
	/**
	* @brief Gets or sets filter by series timer id.
Optional.
	*/
	void setSeriesTimerId(QString newSeriesTimerId);
	/**
	 * @brief Gets or sets filter by library series id.
Optional.
	 */
	QUuid librarySeriesId() const;
	/**
	* @brief Gets or sets filter by library series id.
Optional.
	*/
	void setLibrarySeriesId(QUuid newLibrarySeriesId);
	/**
	 * @brief Gets or sets specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines.
Optional.
	 */
	QList<ItemFields> fields() const;
	/**
	* @brief Gets or sets specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines.
Optional.
	*/
	void setFields(QList<ItemFields> newFields);

protected:
	QList<QUuid> m_channelIds;
	QUuid m_userId;
	QDateTime m_minStartDate;
	bool m_hasAired;
	bool m_isAiring;
	QDateTime m_maxStartDate;
	QDateTime m_minEndDate;
	QDateTime m_maxEndDate;
	bool m_isMovie;
	bool m_isSeries;
	bool m_isNews;
	bool m_isKids;
	bool m_isSports;
	qint32 m_startIndex;
	qint32 m_limit;
	QString m_sortBy;
	QString m_sortOrder;
	QStringList m_genres;
	QList<QUuid> m_genreIds;
	bool m_enableImages;
	bool m_enableTotalRecordCount;
	qint32 m_imageTypeLimit;
	QList<ImageType> m_enableImageTypes;
	bool m_enableUserData;
	QString m_seriesTimerId;
	QUuid m_librarySeriesId;
	QList<ItemFields> m_fields;
};

} // NS DTO

namespace Support {

using GetProgramsDto = Jellyfin::DTO::GetProgramsDto;

template <>
GetProgramsDto fromJsonValue<GetProgramsDto>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return GetProgramsDto::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_GETPROGRAMSDTO_H
