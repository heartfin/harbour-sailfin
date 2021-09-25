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

#include <JellyfinQt/dto/getprogramsdto.h>

namespace Jellyfin {
namespace DTO {

GetProgramsDto::GetProgramsDto() {}
GetProgramsDto::GetProgramsDto (
		QString userId, 
		bool enableTotalRecordCount, 
		QString librarySeriesId 
		) :
	m_userId(userId),
	m_enableTotalRecordCount(enableTotalRecordCount),
	m_librarySeriesId(librarySeriesId) { }



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


void GetProgramsDto::replaceData(GetProgramsDto &other) {
	m_channelIds = other.m_channelIds;
	m_userId = other.m_userId;
	m_minStartDate = other.m_minStartDate;
	m_hasAired = other.m_hasAired;
	m_isAiring = other.m_isAiring;
	m_maxStartDate = other.m_maxStartDate;
	m_minEndDate = other.m_minEndDate;
	m_maxEndDate = other.m_maxEndDate;
	m_isMovie = other.m_isMovie;
	m_isSeries = other.m_isSeries;
	m_isNews = other.m_isNews;
	m_isKids = other.m_isKids;
	m_isSports = other.m_isSports;
	m_startIndex = other.m_startIndex;
	m_limit = other.m_limit;
	m_sortBy = other.m_sortBy;
	m_sortOrder = other.m_sortOrder;
	m_genres = other.m_genres;
	m_genreIds = other.m_genreIds;
	m_enableImages = other.m_enableImages;
	m_enableTotalRecordCount = other.m_enableTotalRecordCount;
	m_imageTypeLimit = other.m_imageTypeLimit;
	m_enableImageTypes = other.m_enableImageTypes;
	m_enableUserData = other.m_enableUserData;
	m_seriesTimerId = other.m_seriesTimerId;
	m_librarySeriesId = other.m_librarySeriesId;
	m_fields = other.m_fields;
}

GetProgramsDto GetProgramsDto::fromJson(QJsonObject source) {
	GetProgramsDto instance;
	instance.setFromJson(source);
	return instance;
}


void GetProgramsDto::setFromJson(QJsonObject source) {
	m_channelIds = Jellyfin::Support::fromJsonValue<QStringList>(source["ChannelIds"]);
	m_userId = Jellyfin::Support::fromJsonValue<QString>(source["UserId"]);
	m_minStartDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["MinStartDate"]);
	m_hasAired = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["HasAired"]);
	m_isAiring = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsAiring"]);
	m_maxStartDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["MaxStartDate"]);
	m_minEndDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["MinEndDate"]);
	m_maxEndDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["MaxEndDate"]);
	m_isMovie = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsMovie"]);
	m_isSeries = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsSeries"]);
	m_isNews = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsNews"]);
	m_isKids = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsKids"]);
	m_isSports = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsSports"]);
	m_startIndex = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["StartIndex"]);
	m_limit = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Limit"]);
	m_sortBy = Jellyfin::Support::fromJsonValue<QString>(source["SortBy"]);
	m_sortOrder = Jellyfin::Support::fromJsonValue<QString>(source["SortOrder"]);
	m_genres = Jellyfin::Support::fromJsonValue<QStringList>(source["Genres"]);
	m_genreIds = Jellyfin::Support::fromJsonValue<QStringList>(source["GenreIds"]);
	m_enableImages = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["EnableImages"]);
	m_enableTotalRecordCount = Jellyfin::Support::fromJsonValue<bool>(source["EnableTotalRecordCount"]);
	m_imageTypeLimit = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["ImageTypeLimit"]);
	m_enableImageTypes = Jellyfin::Support::fromJsonValue<QList<ImageType>>(source["EnableImageTypes"]);
	m_enableUserData = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["EnableUserData"]);
	m_seriesTimerId = Jellyfin::Support::fromJsonValue<QString>(source["SeriesTimerId"]);
	m_librarySeriesId = Jellyfin::Support::fromJsonValue<QString>(source["LibrarySeriesId"]);
	m_fields = Jellyfin::Support::fromJsonValue<QList<ItemFields>>(source["Fields"]);

}
	
QJsonObject GetProgramsDto::toJson() const {
	QJsonObject result;
	
	
	if (!(m_channelIds.size() == 0)) {
		result["ChannelIds"] = Jellyfin::Support::toJsonValue<QStringList>(m_channelIds);
	}
			
	result["UserId"] = Jellyfin::Support::toJsonValue<QString>(m_userId);		
	
	if (!(m_minStartDate.isNull())) {
		result["MinStartDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_minStartDate);
	}
			
	
	if (!(!m_hasAired.has_value())) {
		result["HasAired"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_hasAired);
	}
			
	
	if (!(!m_isAiring.has_value())) {
		result["IsAiring"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isAiring);
	}
			
	
	if (!(m_maxStartDate.isNull())) {
		result["MaxStartDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_maxStartDate);
	}
			
	
	if (!(m_minEndDate.isNull())) {
		result["MinEndDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_minEndDate);
	}
			
	
	if (!(m_maxEndDate.isNull())) {
		result["MaxEndDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_maxEndDate);
	}
			
	
	if (!(!m_isMovie.has_value())) {
		result["IsMovie"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isMovie);
	}
			
	
	if (!(!m_isSeries.has_value())) {
		result["IsSeries"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isSeries);
	}
			
	
	if (!(!m_isNews.has_value())) {
		result["IsNews"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isNews);
	}
			
	
	if (!(!m_isKids.has_value())) {
		result["IsKids"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isKids);
	}
			
	
	if (!(!m_isSports.has_value())) {
		result["IsSports"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isSports);
	}
			
	
	if (!(!m_startIndex.has_value())) {
		result["StartIndex"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_startIndex);
	}
			
	
	if (!(!m_limit.has_value())) {
		result["Limit"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_limit);
	}
			
	
	if (!(m_sortBy.isNull())) {
		result["SortBy"] = Jellyfin::Support::toJsonValue<QString>(m_sortBy);
	}
			
	
	if (!(m_sortOrder.isNull())) {
		result["SortOrder"] = Jellyfin::Support::toJsonValue<QString>(m_sortOrder);
	}
			
	
	if (!(m_genres.size() == 0)) {
		result["Genres"] = Jellyfin::Support::toJsonValue<QStringList>(m_genres);
	}
			
	
	if (!(m_genreIds.size() == 0)) {
		result["GenreIds"] = Jellyfin::Support::toJsonValue<QStringList>(m_genreIds);
	}
			
	
	if (!(!m_enableImages.has_value())) {
		result["EnableImages"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_enableImages);
	}
			
	result["EnableTotalRecordCount"] = Jellyfin::Support::toJsonValue<bool>(m_enableTotalRecordCount);		
	
	if (!(!m_imageTypeLimit.has_value())) {
		result["ImageTypeLimit"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_imageTypeLimit);
	}
			
	
	if (!(m_enableImageTypes.size() == 0)) {
		result["EnableImageTypes"] = Jellyfin::Support::toJsonValue<QList<ImageType>>(m_enableImageTypes);
	}
			
	
	if (!(!m_enableUserData.has_value())) {
		result["EnableUserData"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_enableUserData);
	}
			
	
	if (!(m_seriesTimerId.isNull())) {
		result["SeriesTimerId"] = Jellyfin::Support::toJsonValue<QString>(m_seriesTimerId);
	}
			
	result["LibrarySeriesId"] = Jellyfin::Support::toJsonValue<QString>(m_librarySeriesId);		
	
	if (!(m_fields.size() == 0)) {
		result["Fields"] = Jellyfin::Support::toJsonValue<QList<ItemFields>>(m_fields);
	}
		
	return result;
}

QStringList GetProgramsDto::channelIds() const { return m_channelIds; }

void GetProgramsDto::setChannelIds(QStringList newChannelIds) {
	m_channelIds = newChannelIds;
}
bool GetProgramsDto::channelIdsNull() const {
	return m_channelIds.size() == 0;
}

void GetProgramsDto::setChannelIdsNull() {
	m_channelIds.clear();

}
QString GetProgramsDto::userId() const { return m_userId; }

void GetProgramsDto::setUserId(QString newUserId) {
	m_userId = newUserId;
}

QDateTime GetProgramsDto::minStartDate() const { return m_minStartDate; }

void GetProgramsDto::setMinStartDate(QDateTime newMinStartDate) {
	m_minStartDate = newMinStartDate;
}
bool GetProgramsDto::minStartDateNull() const {
	return m_minStartDate.isNull();
}

void GetProgramsDto::setMinStartDateNull() {
	m_minStartDate= QDateTime();

}
std::optional<bool> GetProgramsDto::hasAired() const { return m_hasAired; }

void GetProgramsDto::setHasAired(std::optional<bool> newHasAired) {
	m_hasAired = newHasAired;
}
bool GetProgramsDto::hasAiredNull() const {
	return !m_hasAired.has_value();
}

void GetProgramsDto::setHasAiredNull() {
	m_hasAired = std::nullopt;

}
std::optional<bool> GetProgramsDto::isAiring() const { return m_isAiring; }

void GetProgramsDto::setIsAiring(std::optional<bool> newIsAiring) {
	m_isAiring = newIsAiring;
}
bool GetProgramsDto::isAiringNull() const {
	return !m_isAiring.has_value();
}

void GetProgramsDto::setIsAiringNull() {
	m_isAiring = std::nullopt;

}
QDateTime GetProgramsDto::maxStartDate() const { return m_maxStartDate; }

void GetProgramsDto::setMaxStartDate(QDateTime newMaxStartDate) {
	m_maxStartDate = newMaxStartDate;
}
bool GetProgramsDto::maxStartDateNull() const {
	return m_maxStartDate.isNull();
}

void GetProgramsDto::setMaxStartDateNull() {
	m_maxStartDate= QDateTime();

}
QDateTime GetProgramsDto::minEndDate() const { return m_minEndDate; }

void GetProgramsDto::setMinEndDate(QDateTime newMinEndDate) {
	m_minEndDate = newMinEndDate;
}
bool GetProgramsDto::minEndDateNull() const {
	return m_minEndDate.isNull();
}

void GetProgramsDto::setMinEndDateNull() {
	m_minEndDate= QDateTime();

}
QDateTime GetProgramsDto::maxEndDate() const { return m_maxEndDate; }

void GetProgramsDto::setMaxEndDate(QDateTime newMaxEndDate) {
	m_maxEndDate = newMaxEndDate;
}
bool GetProgramsDto::maxEndDateNull() const {
	return m_maxEndDate.isNull();
}

void GetProgramsDto::setMaxEndDateNull() {
	m_maxEndDate= QDateTime();

}
std::optional<bool> GetProgramsDto::isMovie() const { return m_isMovie; }

void GetProgramsDto::setIsMovie(std::optional<bool> newIsMovie) {
	m_isMovie = newIsMovie;
}
bool GetProgramsDto::isMovieNull() const {
	return !m_isMovie.has_value();
}

void GetProgramsDto::setIsMovieNull() {
	m_isMovie = std::nullopt;

}
std::optional<bool> GetProgramsDto::isSeries() const { return m_isSeries; }

void GetProgramsDto::setIsSeries(std::optional<bool> newIsSeries) {
	m_isSeries = newIsSeries;
}
bool GetProgramsDto::isSeriesNull() const {
	return !m_isSeries.has_value();
}

void GetProgramsDto::setIsSeriesNull() {
	m_isSeries = std::nullopt;

}
std::optional<bool> GetProgramsDto::isNews() const { return m_isNews; }

void GetProgramsDto::setIsNews(std::optional<bool> newIsNews) {
	m_isNews = newIsNews;
}
bool GetProgramsDto::isNewsNull() const {
	return !m_isNews.has_value();
}

void GetProgramsDto::setIsNewsNull() {
	m_isNews = std::nullopt;

}
std::optional<bool> GetProgramsDto::isKids() const { return m_isKids; }

void GetProgramsDto::setIsKids(std::optional<bool> newIsKids) {
	m_isKids = newIsKids;
}
bool GetProgramsDto::isKidsNull() const {
	return !m_isKids.has_value();
}

void GetProgramsDto::setIsKidsNull() {
	m_isKids = std::nullopt;

}
std::optional<bool> GetProgramsDto::isSports() const { return m_isSports; }

void GetProgramsDto::setIsSports(std::optional<bool> newIsSports) {
	m_isSports = newIsSports;
}
bool GetProgramsDto::isSportsNull() const {
	return !m_isSports.has_value();
}

void GetProgramsDto::setIsSportsNull() {
	m_isSports = std::nullopt;

}
std::optional<qint32> GetProgramsDto::startIndex() const { return m_startIndex; }

void GetProgramsDto::setStartIndex(std::optional<qint32> newStartIndex) {
	m_startIndex = newStartIndex;
}
bool GetProgramsDto::startIndexNull() const {
	return !m_startIndex.has_value();
}

void GetProgramsDto::setStartIndexNull() {
	m_startIndex = std::nullopt;

}
std::optional<qint32> GetProgramsDto::limit() const { return m_limit; }

void GetProgramsDto::setLimit(std::optional<qint32> newLimit) {
	m_limit = newLimit;
}
bool GetProgramsDto::limitNull() const {
	return !m_limit.has_value();
}

void GetProgramsDto::setLimitNull() {
	m_limit = std::nullopt;

}
QString GetProgramsDto::sortBy() const { return m_sortBy; }

void GetProgramsDto::setSortBy(QString newSortBy) {
	m_sortBy = newSortBy;
}
bool GetProgramsDto::sortByNull() const {
	return m_sortBy.isNull();
}

void GetProgramsDto::setSortByNull() {
	m_sortBy.clear();

}
QString GetProgramsDto::sortOrder() const { return m_sortOrder; }

void GetProgramsDto::setSortOrder(QString newSortOrder) {
	m_sortOrder = newSortOrder;
}
bool GetProgramsDto::sortOrderNull() const {
	return m_sortOrder.isNull();
}

void GetProgramsDto::setSortOrderNull() {
	m_sortOrder.clear();

}
QStringList GetProgramsDto::genres() const { return m_genres; }

void GetProgramsDto::setGenres(QStringList newGenres) {
	m_genres = newGenres;
}
bool GetProgramsDto::genresNull() const {
	return m_genres.size() == 0;
}

void GetProgramsDto::setGenresNull() {
	m_genres.clear();

}
QStringList GetProgramsDto::genreIds() const { return m_genreIds; }

void GetProgramsDto::setGenreIds(QStringList newGenreIds) {
	m_genreIds = newGenreIds;
}
bool GetProgramsDto::genreIdsNull() const {
	return m_genreIds.size() == 0;
}

void GetProgramsDto::setGenreIdsNull() {
	m_genreIds.clear();

}
std::optional<bool> GetProgramsDto::enableImages() const { return m_enableImages; }

void GetProgramsDto::setEnableImages(std::optional<bool> newEnableImages) {
	m_enableImages = newEnableImages;
}
bool GetProgramsDto::enableImagesNull() const {
	return !m_enableImages.has_value();
}

void GetProgramsDto::setEnableImagesNull() {
	m_enableImages = std::nullopt;

}
bool GetProgramsDto::enableTotalRecordCount() const { return m_enableTotalRecordCount; }

void GetProgramsDto::setEnableTotalRecordCount(bool newEnableTotalRecordCount) {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

std::optional<qint32> GetProgramsDto::imageTypeLimit() const { return m_imageTypeLimit; }

void GetProgramsDto::setImageTypeLimit(std::optional<qint32> newImageTypeLimit) {
	m_imageTypeLimit = newImageTypeLimit;
}
bool GetProgramsDto::imageTypeLimitNull() const {
	return !m_imageTypeLimit.has_value();
}

void GetProgramsDto::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;

}
QList<ImageType> GetProgramsDto::enableImageTypes() const { return m_enableImageTypes; }

void GetProgramsDto::setEnableImageTypes(QList<ImageType> newEnableImageTypes) {
	m_enableImageTypes = newEnableImageTypes;
}
bool GetProgramsDto::enableImageTypesNull() const {
	return m_enableImageTypes.size() == 0;
}

void GetProgramsDto::setEnableImageTypesNull() {
	m_enableImageTypes.clear();

}
std::optional<bool> GetProgramsDto::enableUserData() const { return m_enableUserData; }

void GetProgramsDto::setEnableUserData(std::optional<bool> newEnableUserData) {
	m_enableUserData = newEnableUserData;
}
bool GetProgramsDto::enableUserDataNull() const {
	return !m_enableUserData.has_value();
}

void GetProgramsDto::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;

}
QString GetProgramsDto::seriesTimerId() const { return m_seriesTimerId; }

void GetProgramsDto::setSeriesTimerId(QString newSeriesTimerId) {
	m_seriesTimerId = newSeriesTimerId;
}
bool GetProgramsDto::seriesTimerIdNull() const {
	return m_seriesTimerId.isNull();
}

void GetProgramsDto::setSeriesTimerIdNull() {
	m_seriesTimerId.clear();

}
QString GetProgramsDto::librarySeriesId() const { return m_librarySeriesId; }

void GetProgramsDto::setLibrarySeriesId(QString newLibrarySeriesId) {
	m_librarySeriesId = newLibrarySeriesId;
}

QList<ItemFields> GetProgramsDto::fields() const { return m_fields; }

void GetProgramsDto::setFields(QList<ItemFields> newFields) {
	m_fields = newFields;
}
bool GetProgramsDto::fieldsNull() const {
	return m_fields.size() == 0;
}

void GetProgramsDto::setFieldsNull() {
	m_fields.clear();

}

} // NS DTO

namespace Support {

using GetProgramsDto = Jellyfin::DTO::GetProgramsDto;

template <>
GetProgramsDto fromJsonValue(const QJsonValue &source, convertType<GetProgramsDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return GetProgramsDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const GetProgramsDto &source, convertType<GetProgramsDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
