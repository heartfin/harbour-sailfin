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

#include <JellyfinQt/DTO/getprogramsdto.h>

namespace Jellyfin {
namespace DTO {

GetProgramsDto::GetProgramsDto(QObject *parent) {}

GetProgramsDto GetProgramsDto::fromJson(QJsonObject source) {GetProgramsDto instance;
	instance->setFromJson(source, false);
	return instance;
}


void GetProgramsDto::setFromJson(QJsonObject source) {
	m_channelIds = fromJsonValue<QList<QUuid>>(source["ChannelIds"]);
	m_userId = fromJsonValue<QUuid>(source["UserId"]);
	m_minStartDate = fromJsonValue<QDateTime>(source["MinStartDate"]);
	m_hasAired = fromJsonValue<bool>(source["HasAired"]);
	m_isAiring = fromJsonValue<bool>(source["IsAiring"]);
	m_maxStartDate = fromJsonValue<QDateTime>(source["MaxStartDate"]);
	m_minEndDate = fromJsonValue<QDateTime>(source["MinEndDate"]);
	m_maxEndDate = fromJsonValue<QDateTime>(source["MaxEndDate"]);
	m_isMovie = fromJsonValue<bool>(source["IsMovie"]);
	m_isSeries = fromJsonValue<bool>(source["IsSeries"]);
	m_isNews = fromJsonValue<bool>(source["IsNews"]);
	m_isKids = fromJsonValue<bool>(source["IsKids"]);
	m_isSports = fromJsonValue<bool>(source["IsSports"]);
	m_startIndex = fromJsonValue<qint32>(source["StartIndex"]);
	m_limit = fromJsonValue<qint32>(source["Limit"]);
	m_sortBy = fromJsonValue<QString>(source["SortBy"]);
	m_sortOrder = fromJsonValue<QString>(source["SortOrder"]);
	m_genres = fromJsonValue<QStringList>(source["Genres"]);
	m_genreIds = fromJsonValue<QList<QUuid>>(source["GenreIds"]);
	m_enableImages = fromJsonValue<bool>(source["EnableImages"]);
	m_enableTotalRecordCount = fromJsonValue<bool>(source["EnableTotalRecordCount"]);
	m_imageTypeLimit = fromJsonValue<qint32>(source["ImageTypeLimit"]);
	m_enableImageTypes = fromJsonValue<QList<ImageType>>(source["EnableImageTypes"]);
	m_enableUserData = fromJsonValue<bool>(source["EnableUserData"]);
	m_seriesTimerId = fromJsonValue<QString>(source["SeriesTimerId"]);
	m_librarySeriesId = fromJsonValue<QUuid>(source["LibrarySeriesId"]);
	m_fields = fromJsonValue<QList<ItemFields>>(source["Fields"]);

}
	
QJsonObject GetProgramsDto::toJson() {
	QJsonObject result;
	result["ChannelIds"] = toJsonValue<QList<QUuid>>(m_channelIds);
	result["UserId"] = toJsonValue<QUuid>(m_userId);
	result["MinStartDate"] = toJsonValue<QDateTime>(m_minStartDate);
	result["HasAired"] = toJsonValue<bool>(m_hasAired);
	result["IsAiring"] = toJsonValue<bool>(m_isAiring);
	result["MaxStartDate"] = toJsonValue<QDateTime>(m_maxStartDate);
	result["MinEndDate"] = toJsonValue<QDateTime>(m_minEndDate);
	result["MaxEndDate"] = toJsonValue<QDateTime>(m_maxEndDate);
	result["IsMovie"] = toJsonValue<bool>(m_isMovie);
	result["IsSeries"] = toJsonValue<bool>(m_isSeries);
	result["IsNews"] = toJsonValue<bool>(m_isNews);
	result["IsKids"] = toJsonValue<bool>(m_isKids);
	result["IsSports"] = toJsonValue<bool>(m_isSports);
	result["StartIndex"] = toJsonValue<qint32>(m_startIndex);
	result["Limit"] = toJsonValue<qint32>(m_limit);
	result["SortBy"] = toJsonValue<QString>(m_sortBy);
	result["SortOrder"] = toJsonValue<QString>(m_sortOrder);
	result["Genres"] = toJsonValue<QStringList>(m_genres);
	result["GenreIds"] = toJsonValue<QList<QUuid>>(m_genreIds);
	result["EnableImages"] = toJsonValue<bool>(m_enableImages);
	result["EnableTotalRecordCount"] = toJsonValue<bool>(m_enableTotalRecordCount);
	result["ImageTypeLimit"] = toJsonValue<qint32>(m_imageTypeLimit);
	result["EnableImageTypes"] = toJsonValue<QList<ImageType>>(m_enableImageTypes);
	result["EnableUserData"] = toJsonValue<bool>(m_enableUserData);
	result["SeriesTimerId"] = toJsonValue<QString>(m_seriesTimerId);
	result["LibrarySeriesId"] = toJsonValue<QUuid>(m_librarySeriesId);
	result["Fields"] = toJsonValue<QList<ItemFields>>(m_fields);

	return result;
}

QList<QUuid> GetProgramsDto::channelIds() const { return m_channelIds; }

void GetProgramsDto::setChannelIds(QList<QUuid> newChannelIds) {
	m_channelIds = newChannelIds;
}
QUuid GetProgramsDto::userId() const { return m_userId; }

void GetProgramsDto::setUserId(QUuid newUserId) {
	m_userId = newUserId;
}
QDateTime GetProgramsDto::minStartDate() const { return m_minStartDate; }

void GetProgramsDto::setMinStartDate(QDateTime newMinStartDate) {
	m_minStartDate = newMinStartDate;
}
bool GetProgramsDto::hasAired() const { return m_hasAired; }

void GetProgramsDto::setHasAired(bool newHasAired) {
	m_hasAired = newHasAired;
}
bool GetProgramsDto::isAiring() const { return m_isAiring; }

void GetProgramsDto::setIsAiring(bool newIsAiring) {
	m_isAiring = newIsAiring;
}
QDateTime GetProgramsDto::maxStartDate() const { return m_maxStartDate; }

void GetProgramsDto::setMaxStartDate(QDateTime newMaxStartDate) {
	m_maxStartDate = newMaxStartDate;
}
QDateTime GetProgramsDto::minEndDate() const { return m_minEndDate; }

void GetProgramsDto::setMinEndDate(QDateTime newMinEndDate) {
	m_minEndDate = newMinEndDate;
}
QDateTime GetProgramsDto::maxEndDate() const { return m_maxEndDate; }

void GetProgramsDto::setMaxEndDate(QDateTime newMaxEndDate) {
	m_maxEndDate = newMaxEndDate;
}
bool GetProgramsDto::isMovie() const { return m_isMovie; }

void GetProgramsDto::setIsMovie(bool newIsMovie) {
	m_isMovie = newIsMovie;
}
bool GetProgramsDto::isSeries() const { return m_isSeries; }

void GetProgramsDto::setIsSeries(bool newIsSeries) {
	m_isSeries = newIsSeries;
}
bool GetProgramsDto::isNews() const { return m_isNews; }

void GetProgramsDto::setIsNews(bool newIsNews) {
	m_isNews = newIsNews;
}
bool GetProgramsDto::isKids() const { return m_isKids; }

void GetProgramsDto::setIsKids(bool newIsKids) {
	m_isKids = newIsKids;
}
bool GetProgramsDto::isSports() const { return m_isSports; }

void GetProgramsDto::setIsSports(bool newIsSports) {
	m_isSports = newIsSports;
}
qint32 GetProgramsDto::startIndex() const { return m_startIndex; }

void GetProgramsDto::setStartIndex(qint32 newStartIndex) {
	m_startIndex = newStartIndex;
}
qint32 GetProgramsDto::limit() const { return m_limit; }

void GetProgramsDto::setLimit(qint32 newLimit) {
	m_limit = newLimit;
}
QString GetProgramsDto::sortBy() const { return m_sortBy; }

void GetProgramsDto::setSortBy(QString newSortBy) {
	m_sortBy = newSortBy;
}
QString GetProgramsDto::sortOrder() const { return m_sortOrder; }

void GetProgramsDto::setSortOrder(QString newSortOrder) {
	m_sortOrder = newSortOrder;
}
QStringList GetProgramsDto::genres() const { return m_genres; }

void GetProgramsDto::setGenres(QStringList newGenres) {
	m_genres = newGenres;
}
QList<QUuid> GetProgramsDto::genreIds() const { return m_genreIds; }

void GetProgramsDto::setGenreIds(QList<QUuid> newGenreIds) {
	m_genreIds = newGenreIds;
}
bool GetProgramsDto::enableImages() const { return m_enableImages; }

void GetProgramsDto::setEnableImages(bool newEnableImages) {
	m_enableImages = newEnableImages;
}
bool GetProgramsDto::enableTotalRecordCount() const { return m_enableTotalRecordCount; }

void GetProgramsDto::setEnableTotalRecordCount(bool newEnableTotalRecordCount) {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}
qint32 GetProgramsDto::imageTypeLimit() const { return m_imageTypeLimit; }

void GetProgramsDto::setImageTypeLimit(qint32 newImageTypeLimit) {
	m_imageTypeLimit = newImageTypeLimit;
}
QList<ImageType> GetProgramsDto::enableImageTypes() const { return m_enableImageTypes; }

void GetProgramsDto::setEnableImageTypes(QList<ImageType> newEnableImageTypes) {
	m_enableImageTypes = newEnableImageTypes;
}
bool GetProgramsDto::enableUserData() const { return m_enableUserData; }

void GetProgramsDto::setEnableUserData(bool newEnableUserData) {
	m_enableUserData = newEnableUserData;
}
QString GetProgramsDto::seriesTimerId() const { return m_seriesTimerId; }

void GetProgramsDto::setSeriesTimerId(QString newSeriesTimerId) {
	m_seriesTimerId = newSeriesTimerId;
}
QUuid GetProgramsDto::librarySeriesId() const { return m_librarySeriesId; }

void GetProgramsDto::setLibrarySeriesId(QUuid newLibrarySeriesId) {
	m_librarySeriesId = newLibrarySeriesId;
}
QList<ItemFields> GetProgramsDto::fields() const { return m_fields; }

void GetProgramsDto::setFields(QList<ItemFields> newFields) {
	m_fields = newFields;
}


} // NS Jellyfin
} // NS DTO
