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
#include <optional>

#include "JellyfinQt/dto/imagetype.h"
#include "JellyfinQt/dto/itemfields.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class GetProgramsDto {
public:
	GetProgramsDto();
	GetProgramsDto(const GetProgramsDto &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(GetProgramsDto &other);
	
	static GetProgramsDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the channels to return guide information for.
	 */
	QStringList channelIds() const;
	/**
	* @brief Gets or sets the channels to return guide information for.
	*/
	void setChannelIds(QStringList newChannelIds);
	bool channelIdsNull() const;
	void setChannelIdsNull();

	/**
	 * @brief Gets or sets optional. Filter by user id.
	 */
	QString userId() const;
	/**
	* @brief Gets or sets optional. Filter by user id.
	*/
	void setUserId(QString newUserId);

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
	bool minStartDateNull() const;
	void setMinStartDateNull();

	/**
	 * @brief Gets or sets filter by programs that have completed airing, or not.
Optional.
	 */
	std::optional<bool> hasAired() const;
	/**
	* @brief Gets or sets filter by programs that have completed airing, or not.
Optional.
	*/
	void setHasAired(std::optional<bool> newHasAired);
	bool hasAiredNull() const;
	void setHasAiredNull();

	/**
	 * @brief Gets or sets filter by programs that are currently airing, or not.
Optional.
	 */
	std::optional<bool> isAiring() const;
	/**
	* @brief Gets or sets filter by programs that are currently airing, or not.
Optional.
	*/
	void setIsAiring(std::optional<bool> newIsAiring);
	bool isAiringNull() const;
	void setIsAiringNull();

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
	bool maxStartDateNull() const;
	void setMaxStartDateNull();

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
	bool minEndDateNull() const;
	void setMinEndDateNull();

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
	bool maxEndDateNull() const;
	void setMaxEndDateNull();

	/**
	 * @brief Gets or sets filter for movies.
Optional.
	 */
	std::optional<bool> isMovie() const;
	/**
	* @brief Gets or sets filter for movies.
Optional.
	*/
	void setIsMovie(std::optional<bool> newIsMovie);
	bool isMovieNull() const;
	void setIsMovieNull();

	/**
	 * @brief Gets or sets filter for series.
Optional.
	 */
	std::optional<bool> isSeries() const;
	/**
	* @brief Gets or sets filter for series.
Optional.
	*/
	void setIsSeries(std::optional<bool> newIsSeries);
	bool isSeriesNull() const;
	void setIsSeriesNull();

	/**
	 * @brief Gets or sets filter for news.
Optional.
	 */
	std::optional<bool> isNews() const;
	/**
	* @brief Gets or sets filter for news.
Optional.
	*/
	void setIsNews(std::optional<bool> newIsNews);
	bool isNewsNull() const;
	void setIsNewsNull();

	/**
	 * @brief Gets or sets filter for kids.
Optional.
	 */
	std::optional<bool> isKids() const;
	/**
	* @brief Gets or sets filter for kids.
Optional.
	*/
	void setIsKids(std::optional<bool> newIsKids);
	bool isKidsNull() const;
	void setIsKidsNull();

	/**
	 * @brief Gets or sets filter for sports.
Optional.
	 */
	std::optional<bool> isSports() const;
	/**
	* @brief Gets or sets filter for sports.
Optional.
	*/
	void setIsSports(std::optional<bool> newIsSports);
	bool isSportsNull() const;
	void setIsSportsNull();

	/**
	 * @brief Gets or sets the record index to start at. All items with a lower index will be dropped from the results.
Optional.
	 */
	std::optional<qint32> startIndex() const;
	/**
	* @brief Gets or sets the record index to start at. All items with a lower index will be dropped from the results.
Optional.
	*/
	void setStartIndex(std::optional<qint32> newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();

	/**
	 * @brief Gets or sets the maximum number of records to return.
Optional.
	 */
	std::optional<qint32> limit() const;
	/**
	* @brief Gets or sets the maximum number of records to return.
Optional.
	*/
	void setLimit(std::optional<qint32> newLimit);
	bool limitNull() const;
	void setLimitNull();

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
	bool sortByNull() const;
	void setSortByNull();

	/**
	 * @brief Gets or sets sort Order - Ascending,Descending.
	 */
	QString sortOrder() const;
	/**
	* @brief Gets or sets sort Order - Ascending,Descending.
	*/
	void setSortOrder(QString newSortOrder);
	bool sortOrderNull() const;
	void setSortOrderNull();

	/**
	 * @brief Gets or sets the genres to return guide information for.
	 */
	QStringList genres() const;
	/**
	* @brief Gets or sets the genres to return guide information for.
	*/
	void setGenres(QStringList newGenres);
	bool genresNull() const;
	void setGenresNull();

	/**
	 * @brief Gets or sets the genre ids to return guide information for.
	 */
	QStringList genreIds() const;
	/**
	* @brief Gets or sets the genre ids to return guide information for.
	*/
	void setGenreIds(QStringList newGenreIds);
	bool genreIdsNull() const;
	void setGenreIdsNull();

	/**
	 * @brief Gets or sets include image information in output.
Optional.
	 */
	std::optional<bool> enableImages() const;
	/**
	* @brief Gets or sets include image information in output.
Optional.
	*/
	void setEnableImages(std::optional<bool> newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();

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
	std::optional<qint32> imageTypeLimit() const;
	/**
	* @brief Gets or sets the max number of images to return, per image type.
Optional.
	*/
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();

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
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();

	/**
	 * @brief Gets or sets include user data.
Optional.
	 */
	std::optional<bool> enableUserData() const;
	/**
	* @brief Gets or sets include user data.
Optional.
	*/
	void setEnableUserData(std::optional<bool> newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();

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
	bool seriesTimerIdNull() const;
	void setSeriesTimerIdNull();

	/**
	 * @brief Gets or sets filter by library series id.
Optional.
	 */
	QString librarySeriesId() const;
	/**
	* @brief Gets or sets filter by library series id.
Optional.
	*/
	void setLibrarySeriesId(QString newLibrarySeriesId);

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
	bool fieldsNull() const;
	void setFieldsNull();


protected:
	QStringList m_channelIds;
	QString m_userId;
	QDateTime m_minStartDate;
	std::optional<bool> m_hasAired = std::nullopt;
	std::optional<bool> m_isAiring = std::nullopt;
	QDateTime m_maxStartDate;
	QDateTime m_minEndDate;
	QDateTime m_maxEndDate;
	std::optional<bool> m_isMovie = std::nullopt;
	std::optional<bool> m_isSeries = std::nullopt;
	std::optional<bool> m_isNews = std::nullopt;
	std::optional<bool> m_isKids = std::nullopt;
	std::optional<bool> m_isSports = std::nullopt;
	std::optional<qint32> m_startIndex = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_sortBy;
	QString m_sortOrder;
	QStringList m_genres;
	QStringList m_genreIds;
	std::optional<bool> m_enableImages = std::nullopt;
	bool m_enableTotalRecordCount;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableUserData = std::nullopt;
	QString m_seriesTimerId;
	QString m_librarySeriesId;
	QList<ItemFields> m_fields;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_GETPROGRAMSDTO_H
