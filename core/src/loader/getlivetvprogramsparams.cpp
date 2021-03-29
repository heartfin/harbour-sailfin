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

#include "JellyfinQt/loader/getlivetvprogramsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetLiveTvProgramsParams

const QStringList &GetLiveTvProgramsParams::channelIds() const {
	return m_channelIds;
}

void GetLiveTvProgramsParams::setChannelIds(QStringList newChannelIds)  {
	m_channelIds = newChannelIds;
}

bool GetLiveTvProgramsParams::channelIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_channelIds.size() == 0;
}

void GetLiveTvProgramsParams::setChannelIdsNull() {
	m_channelIds.clear();
}


const QList<ImageType> &GetLiveTvProgramsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetLiveTvProgramsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetLiveTvProgramsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetLiveTvProgramsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetLiveTvProgramsParams::enableImages() const {
	return m_enableImages.value();
}

void GetLiveTvProgramsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetLiveTvProgramsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetLiveTvProgramsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetLiveTvProgramsParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetLiveTvProgramsParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetLiveTvProgramsParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetLiveTvProgramsParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetLiveTvProgramsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetLiveTvProgramsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetLiveTvProgramsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetLiveTvProgramsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetLiveTvProgramsParams::fields() const {
	return m_fields;
}

void GetLiveTvProgramsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetLiveTvProgramsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetLiveTvProgramsParams::setFieldsNull() {
	m_fields.clear();
}


const QStringList &GetLiveTvProgramsParams::genreIds() const {
	return m_genreIds;
}

void GetLiveTvProgramsParams::setGenreIds(QStringList newGenreIds)  {
	m_genreIds = newGenreIds;
}

bool GetLiveTvProgramsParams::genreIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genreIds.size() == 0;
}

void GetLiveTvProgramsParams::setGenreIdsNull() {
	m_genreIds.clear();
}


const QStringList &GetLiveTvProgramsParams::genres() const {
	return m_genres;
}

void GetLiveTvProgramsParams::setGenres(QStringList newGenres)  {
	m_genres = newGenres;
}

bool GetLiveTvProgramsParams::genresNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genres.size() == 0;
}

void GetLiveTvProgramsParams::setGenresNull() {
	m_genres.clear();
}


const bool &GetLiveTvProgramsParams::hasAired() const {
	return m_hasAired.value();
}

void GetLiveTvProgramsParams::setHasAired(bool newHasAired)  {
	m_hasAired = newHasAired;
}

bool GetLiveTvProgramsParams::hasAiredNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasAired.has_value();
}

void GetLiveTvProgramsParams::setHasAiredNull() {
	m_hasAired = std::nullopt;
}


const qint32 &GetLiveTvProgramsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetLiveTvProgramsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetLiveTvProgramsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetLiveTvProgramsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const bool &GetLiveTvProgramsParams::isAiring() const {
	return m_isAiring.value();
}

void GetLiveTvProgramsParams::setIsAiring(bool newIsAiring)  {
	m_isAiring = newIsAiring;
}

bool GetLiveTvProgramsParams::isAiringNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isAiring.has_value();
}

void GetLiveTvProgramsParams::setIsAiringNull() {
	m_isAiring = std::nullopt;
}


const bool &GetLiveTvProgramsParams::isKids() const {
	return m_isKids.value();
}

void GetLiveTvProgramsParams::setIsKids(bool newIsKids)  {
	m_isKids = newIsKids;
}

bool GetLiveTvProgramsParams::isKidsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isKids.has_value();
}

void GetLiveTvProgramsParams::setIsKidsNull() {
	m_isKids = std::nullopt;
}


const bool &GetLiveTvProgramsParams::isMovie() const {
	return m_isMovie.value();
}

void GetLiveTvProgramsParams::setIsMovie(bool newIsMovie)  {
	m_isMovie = newIsMovie;
}

bool GetLiveTvProgramsParams::isMovieNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMovie.has_value();
}

void GetLiveTvProgramsParams::setIsMovieNull() {
	m_isMovie = std::nullopt;
}


const bool &GetLiveTvProgramsParams::isNews() const {
	return m_isNews.value();
}

void GetLiveTvProgramsParams::setIsNews(bool newIsNews)  {
	m_isNews = newIsNews;
}

bool GetLiveTvProgramsParams::isNewsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isNews.has_value();
}

void GetLiveTvProgramsParams::setIsNewsNull() {
	m_isNews = std::nullopt;
}


const bool &GetLiveTvProgramsParams::isSeries() const {
	return m_isSeries.value();
}

void GetLiveTvProgramsParams::setIsSeries(bool newIsSeries)  {
	m_isSeries = newIsSeries;
}

bool GetLiveTvProgramsParams::isSeriesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSeries.has_value();
}

void GetLiveTvProgramsParams::setIsSeriesNull() {
	m_isSeries = std::nullopt;
}


const bool &GetLiveTvProgramsParams::isSports() const {
	return m_isSports.value();
}

void GetLiveTvProgramsParams::setIsSports(bool newIsSports)  {
	m_isSports = newIsSports;
}

bool GetLiveTvProgramsParams::isSportsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSports.has_value();
}

void GetLiveTvProgramsParams::setIsSportsNull() {
	m_isSports = std::nullopt;
}


const QString &GetLiveTvProgramsParams::librarySeriesId() const {
	return m_librarySeriesId;
}

void GetLiveTvProgramsParams::setLibrarySeriesId(QString newLibrarySeriesId)  {
	m_librarySeriesId = newLibrarySeriesId;
}

bool GetLiveTvProgramsParams::librarySeriesIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_librarySeriesId.isNull();
}

void GetLiveTvProgramsParams::setLibrarySeriesIdNull() {
	m_librarySeriesId.clear();
}


const qint32 &GetLiveTvProgramsParams::limit() const {
	return m_limit.value();
}

void GetLiveTvProgramsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetLiveTvProgramsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetLiveTvProgramsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QDateTime &GetLiveTvProgramsParams::maxEndDate() const {
	return m_maxEndDate;
}

void GetLiveTvProgramsParams::setMaxEndDate(QDateTime newMaxEndDate)  {
	m_maxEndDate = newMaxEndDate;
}

bool GetLiveTvProgramsParams::maxEndDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_maxEndDate.isNull();
}

void GetLiveTvProgramsParams::setMaxEndDateNull() {
	m_maxEndDate= QDateTime();
}


const QDateTime &GetLiveTvProgramsParams::maxStartDate() const {
	return m_maxStartDate;
}

void GetLiveTvProgramsParams::setMaxStartDate(QDateTime newMaxStartDate)  {
	m_maxStartDate = newMaxStartDate;
}

bool GetLiveTvProgramsParams::maxStartDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_maxStartDate.isNull();
}

void GetLiveTvProgramsParams::setMaxStartDateNull() {
	m_maxStartDate= QDateTime();
}


const QDateTime &GetLiveTvProgramsParams::minEndDate() const {
	return m_minEndDate;
}

void GetLiveTvProgramsParams::setMinEndDate(QDateTime newMinEndDate)  {
	m_minEndDate = newMinEndDate;
}

bool GetLiveTvProgramsParams::minEndDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minEndDate.isNull();
}

void GetLiveTvProgramsParams::setMinEndDateNull() {
	m_minEndDate= QDateTime();
}


const QDateTime &GetLiveTvProgramsParams::minStartDate() const {
	return m_minStartDate;
}

void GetLiveTvProgramsParams::setMinStartDate(QDateTime newMinStartDate)  {
	m_minStartDate = newMinStartDate;
}

bool GetLiveTvProgramsParams::minStartDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minStartDate.isNull();
}

void GetLiveTvProgramsParams::setMinStartDateNull() {
	m_minStartDate= QDateTime();
}


const QString &GetLiveTvProgramsParams::seriesTimerId() const {
	return m_seriesTimerId;
}

void GetLiveTvProgramsParams::setSeriesTimerId(QString newSeriesTimerId)  {
	m_seriesTimerId = newSeriesTimerId;
}

bool GetLiveTvProgramsParams::seriesTimerIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_seriesTimerId.isNull();
}

void GetLiveTvProgramsParams::setSeriesTimerIdNull() {
	m_seriesTimerId.clear();
}


const QString &GetLiveTvProgramsParams::sortBy() const {
	return m_sortBy;
}

void GetLiveTvProgramsParams::setSortBy(QString newSortBy)  {
	m_sortBy = newSortBy;
}

bool GetLiveTvProgramsParams::sortByNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortBy.isNull();
}

void GetLiveTvProgramsParams::setSortByNull() {
	m_sortBy.clear();
}


const QString &GetLiveTvProgramsParams::sortOrder() const {
	return m_sortOrder;
}

void GetLiveTvProgramsParams::setSortOrder(QString newSortOrder)  {
	m_sortOrder = newSortOrder;
}

bool GetLiveTvProgramsParams::sortOrderNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortOrder.isNull();
}

void GetLiveTvProgramsParams::setSortOrderNull() {
	m_sortOrder.clear();
}


const qint32 &GetLiveTvProgramsParams::startIndex() const {
	return m_startIndex.value();
}

void GetLiveTvProgramsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetLiveTvProgramsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetLiveTvProgramsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetLiveTvProgramsParams::userId() const {
	return m_userId;
}

void GetLiveTvProgramsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetLiveTvProgramsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetLiveTvProgramsParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
