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

GetProgramsDto::GetProgramsDto() {}
GetProgramsDto::GetProgramsDto(const GetProgramsDto &other) :
	m_channelIds(other.m_channelIds),
	m_userId(other.m_userId),
	m_minStartDate(other.m_minStartDate),
	m_hasAired(other.m_hasAired),
	m_isAiring(other.m_isAiring),
	m_maxStartDate(other.m_maxStartDate),
	m_minEndDate(other.m_minEndDate),
	m_maxEndDate(other.m_maxEndDate),
	m_isMovie(other.m_isMovie),
	m_isSeries(other.m_isSeries),
	m_isNews(other.m_isNews),
	m_isKids(other.m_isKids),
	m_isSports(other.m_isSports),
	m_startIndex(other.m_startIndex),
	m_limit(other.m_limit),
	m_sortBy(other.m_sortBy),
	m_sortOrder(other.m_sortOrder),
	m_genres(other.m_genres),
	m_genreIds(other.m_genreIds),
	m_enableImages(other.m_enableImages),
	m_enableTotalRecordCount(other.m_enableTotalRecordCount),
	m_imageTypeLimit(other.m_imageTypeLimit),
	m_enableImageTypes(other.m_enableImageTypes),
	m_enableUserData(other.m_enableUserData),
	m_seriesTimerId(other.m_seriesTimerId),
	m_librarySeriesId(other.m_librarySeriesId),
	m_fields(other.m_fields){}

GetProgramsDto GetProgramsDto::fromJson(QJsonObject source) {
	GetProgramsDto instance;
	instance.setFromJson(source);
	return instance;
}


void GetProgramsDto::setFromJson(QJsonObject source) {
	m_channelIds = Jellyfin::Support::fromJsonValue<QList<QUuid>>(source["ChannelIds"]);
	m_userId = Jellyfin::Support::fromJsonValue<QUuid>(source["UserId"]);
	m_minStartDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["MinStartDate"]);
	m_hasAired = Jellyfin::Support::fromJsonValue<bool>(source["HasAired"]);
	m_isAiring = Jellyfin::Support::fromJsonValue<bool>(source["IsAiring"]);
	m_maxStartDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["MaxStartDate"]);
	m_minEndDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["MinEndDate"]);
	m_maxEndDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["MaxEndDate"]);
	m_isMovie = Jellyfin::Support::fromJsonValue<bool>(source["IsMovie"]);
	m_isSeries = Jellyfin::Support::fromJsonValue<bool>(source["IsSeries"]);
	m_isNews = Jellyfin::Support::fromJsonValue<bool>(source["IsNews"]);
	m_isKids = Jellyfin::Support::fromJsonValue<bool>(source["IsKids"]);
	m_isSports = Jellyfin::Support::fromJsonValue<bool>(source["IsSports"]);
	m_startIndex = Jellyfin::Support::fromJsonValue<qint32>(source["StartIndex"]);
	m_limit = Jellyfin::Support::fromJsonValue<qint32>(source["Limit"]);
	m_sortBy = Jellyfin::Support::fromJsonValue<QString>(source["SortBy"]);
	m_sortOrder = Jellyfin::Support::fromJsonValue<QString>(source["SortOrder"]);
	m_genres = Jellyfin::Support::fromJsonValue<QStringList>(source["Genres"]);
	m_genreIds = Jellyfin::Support::fromJsonValue<QList<QUuid>>(source["GenreIds"]);
	m_enableImages = Jellyfin::Support::fromJsonValue<bool>(source["EnableImages"]);
	m_enableTotalRecordCount = Jellyfin::Support::fromJsonValue<bool>(source["EnableTotalRecordCount"]);
	m_imageTypeLimit = Jellyfin::Support::fromJsonValue<qint32>(source["ImageTypeLimit"]);
	m_enableImageTypes = Jellyfin::Support::fromJsonValue<QList<ImageType>>(source["EnableImageTypes"]);
	m_enableUserData = Jellyfin::Support::fromJsonValue<bool>(source["EnableUserData"]);
	m_seriesTimerId = Jellyfin::Support::fromJsonValue<QString>(source["SeriesTimerId"]);
	m_librarySeriesId = Jellyfin::Support::fromJsonValue<QUuid>(source["LibrarySeriesId"]);
	m_fields = Jellyfin::Support::fromJsonValue<QList<ItemFields>>(source["Fields"]);

}
	
QJsonObject GetProgramsDto::toJson() {
	QJsonObject result;
	result["ChannelIds"] = Jellyfin::Support::toJsonValue<QList<QUuid>>(m_channelIds);
	result["UserId"] = Jellyfin::Support::toJsonValue<QUuid>(m_userId);
	result["MinStartDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_minStartDate);
	result["HasAired"] = Jellyfin::Support::toJsonValue<bool>(m_hasAired);
	result["IsAiring"] = Jellyfin::Support::toJsonValue<bool>(m_isAiring);
	result["MaxStartDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_maxStartDate);
	result["MinEndDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_minEndDate);
	result["MaxEndDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_maxEndDate);
	result["IsMovie"] = Jellyfin::Support::toJsonValue<bool>(m_isMovie);
	result["IsSeries"] = Jellyfin::Support::toJsonValue<bool>(m_isSeries);
	result["IsNews"] = Jellyfin::Support::toJsonValue<bool>(m_isNews);
	result["IsKids"] = Jellyfin::Support::toJsonValue<bool>(m_isKids);
	result["IsSports"] = Jellyfin::Support::toJsonValue<bool>(m_isSports);
	result["StartIndex"] = Jellyfin::Support::toJsonValue<qint32>(m_startIndex);
	result["Limit"] = Jellyfin::Support::toJsonValue<qint32>(m_limit);
	result["SortBy"] = Jellyfin::Support::toJsonValue<QString>(m_sortBy);
	result["SortOrder"] = Jellyfin::Support::toJsonValue<QString>(m_sortOrder);
	result["Genres"] = Jellyfin::Support::toJsonValue<QStringList>(m_genres);
	result["GenreIds"] = Jellyfin::Support::toJsonValue<QList<QUuid>>(m_genreIds);
	result["EnableImages"] = Jellyfin::Support::toJsonValue<bool>(m_enableImages);
	result["EnableTotalRecordCount"] = Jellyfin::Support::toJsonValue<bool>(m_enableTotalRecordCount);
	result["ImageTypeLimit"] = Jellyfin::Support::toJsonValue<qint32>(m_imageTypeLimit);
	result["EnableImageTypes"] = Jellyfin::Support::toJsonValue<QList<ImageType>>(m_enableImageTypes);
	result["EnableUserData"] = Jellyfin::Support::toJsonValue<bool>(m_enableUserData);
	result["SeriesTimerId"] = Jellyfin::Support::toJsonValue<QString>(m_seriesTimerId);
	result["LibrarySeriesId"] = Jellyfin::Support::toJsonValue<QUuid>(m_librarySeriesId);
	result["Fields"] = Jellyfin::Support::toJsonValue<QList<ItemFields>>(m_fields);

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
