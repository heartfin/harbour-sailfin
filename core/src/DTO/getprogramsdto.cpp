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

#include <JellyfinQt/DTO/imagetype.h>
#include <JellyfinQt/DTO/itemfields.h>

namespace Jellyfin {
namespace DTO {

GetProgramsDto::GetProgramsDto(QObject *parent) : QObject(parent) {}

GetProgramsDto *GetProgramsDto::fromJSON(QJsonObject source, QObject *parent) {
	GetProgramsDto *instance = new GetProgramsDto(parent);
	instance->updateFromJSON(source);
	return instance;
}

void GetProgramsDto::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject GetProgramsDto::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QStringList GetProgramsDto::channelIds() const { return m_channelIds; }
void GetProgramsDto::setChannelIds(QStringList newChannelIds) {
	m_channelIds = newChannelIds;
	emit channelIdsChanged(newChannelIds);
}

QString GetProgramsDto::userId() const { return m_userId; }
void GetProgramsDto::setUserId(QString newUserId) {
	m_userId = newUserId;
	emit userIdChanged(newUserId);
}

QDateTime GetProgramsDto::minStartDate() const { return m_minStartDate; }
void GetProgramsDto::setMinStartDate(QDateTime newMinStartDate) {
	m_minStartDate = newMinStartDate;
	emit minStartDateChanged(newMinStartDate);
}

bool GetProgramsDto::hasAired() const { return m_hasAired; }
void GetProgramsDto::setHasAired(bool newHasAired) {
	m_hasAired = newHasAired;
	emit hasAiredChanged(newHasAired);
}

bool GetProgramsDto::isAiring() const { return m_isAiring; }
void GetProgramsDto::setIsAiring(bool newIsAiring) {
	m_isAiring = newIsAiring;
	emit isAiringChanged(newIsAiring);
}

QDateTime GetProgramsDto::maxStartDate() const { return m_maxStartDate; }
void GetProgramsDto::setMaxStartDate(QDateTime newMaxStartDate) {
	m_maxStartDate = newMaxStartDate;
	emit maxStartDateChanged(newMaxStartDate);
}

QDateTime GetProgramsDto::minEndDate() const { return m_minEndDate; }
void GetProgramsDto::setMinEndDate(QDateTime newMinEndDate) {
	m_minEndDate = newMinEndDate;
	emit minEndDateChanged(newMinEndDate);
}

QDateTime GetProgramsDto::maxEndDate() const { return m_maxEndDate; }
void GetProgramsDto::setMaxEndDate(QDateTime newMaxEndDate) {
	m_maxEndDate = newMaxEndDate;
	emit maxEndDateChanged(newMaxEndDate);
}

bool GetProgramsDto::isMovie() const { return m_isMovie; }
void GetProgramsDto::setIsMovie(bool newIsMovie) {
	m_isMovie = newIsMovie;
	emit isMovieChanged(newIsMovie);
}

bool GetProgramsDto::isSeries() const { return m_isSeries; }
void GetProgramsDto::setIsSeries(bool newIsSeries) {
	m_isSeries = newIsSeries;
	emit isSeriesChanged(newIsSeries);
}

bool GetProgramsDto::isNews() const { return m_isNews; }
void GetProgramsDto::setIsNews(bool newIsNews) {
	m_isNews = newIsNews;
	emit isNewsChanged(newIsNews);
}

bool GetProgramsDto::isKids() const { return m_isKids; }
void GetProgramsDto::setIsKids(bool newIsKids) {
	m_isKids = newIsKids;
	emit isKidsChanged(newIsKids);
}

bool GetProgramsDto::isSports() const { return m_isSports; }
void GetProgramsDto::setIsSports(bool newIsSports) {
	m_isSports = newIsSports;
	emit isSportsChanged(newIsSports);
}

qint32 GetProgramsDto::startIndex() const { return m_startIndex; }
void GetProgramsDto::setStartIndex(qint32 newStartIndex) {
	m_startIndex = newStartIndex;
	emit startIndexChanged(newStartIndex);
}

qint32 GetProgramsDto::limit() const { return m_limit; }
void GetProgramsDto::setLimit(qint32 newLimit) {
	m_limit = newLimit;
	emit limitChanged(newLimit);
}

QString GetProgramsDto::sortBy() const { return m_sortBy; }
void GetProgramsDto::setSortBy(QString newSortBy) {
	m_sortBy = newSortBy;
	emit sortByChanged(newSortBy);
}

QString GetProgramsDto::sortOrder() const { return m_sortOrder; }
void GetProgramsDto::setSortOrder(QString newSortOrder) {
	m_sortOrder = newSortOrder;
	emit sortOrderChanged(newSortOrder);
}

QStringList GetProgramsDto::genres() const { return m_genres; }
void GetProgramsDto::setGenres(QStringList newGenres) {
	m_genres = newGenres;
	emit genresChanged(newGenres);
}

QStringList GetProgramsDto::genreIds() const { return m_genreIds; }
void GetProgramsDto::setGenreIds(QStringList newGenreIds) {
	m_genreIds = newGenreIds;
	emit genreIdsChanged(newGenreIds);
}

bool GetProgramsDto::enableImages() const { return m_enableImages; }
void GetProgramsDto::setEnableImages(bool newEnableImages) {
	m_enableImages = newEnableImages;
	emit enableImagesChanged(newEnableImages);
}

bool GetProgramsDto::enableTotalRecordCount() const { return m_enableTotalRecordCount; }
void GetProgramsDto::setEnableTotalRecordCount(bool newEnableTotalRecordCount) {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
	emit enableTotalRecordCountChanged(newEnableTotalRecordCount);
}

qint32 GetProgramsDto::imageTypeLimit() const { return m_imageTypeLimit; }
void GetProgramsDto::setImageTypeLimit(qint32 newImageTypeLimit) {
	m_imageTypeLimit = newImageTypeLimit;
	emit imageTypeLimitChanged(newImageTypeLimit);
}

QList<ImageType> GetProgramsDto::enableImageTypes() const { return m_enableImageTypes; }
void GetProgramsDto::setEnableImageTypes(QList<ImageType> newEnableImageTypes) {
	m_enableImageTypes = newEnableImageTypes;
	emit enableImageTypesChanged(newEnableImageTypes);
}

bool GetProgramsDto::enableUserData() const { return m_enableUserData; }
void GetProgramsDto::setEnableUserData(bool newEnableUserData) {
	m_enableUserData = newEnableUserData;
	emit enableUserDataChanged(newEnableUserData);
}

QString GetProgramsDto::seriesTimerId() const { return m_seriesTimerId; }
void GetProgramsDto::setSeriesTimerId(QString newSeriesTimerId) {
	m_seriesTimerId = newSeriesTimerId;
	emit seriesTimerIdChanged(newSeriesTimerId);
}

QString GetProgramsDto::librarySeriesId() const { return m_librarySeriesId; }
void GetProgramsDto::setLibrarySeriesId(QString newLibrarySeriesId) {
	m_librarySeriesId = newLibrarySeriesId;
	emit librarySeriesIdChanged(newLibrarySeriesId);
}

QList<ItemFields> GetProgramsDto::fields() const { return m_fields; }
void GetProgramsDto::setFields(QList<ItemFields> newFields) {
	m_fields = newFields;
	emit fieldsChanged(newFields);
}


} // NS Jellyfin
} // NS DTO
