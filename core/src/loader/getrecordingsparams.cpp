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

#include "JellyfinQt/loader/getrecordingsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetRecordingsParams

const QString &GetRecordingsParams::channelId() const {
	return m_channelId;
}

void GetRecordingsParams::setChannelId(QString newChannelId)  {
	m_channelId = newChannelId;
}

bool GetRecordingsParams::channelIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_channelId.isNull();
}

void GetRecordingsParams::setChannelIdNull() {
	m_channelId.clear();
}


const QList<ImageType> &GetRecordingsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetRecordingsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetRecordingsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetRecordingsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetRecordingsParams::enableImages() const {
	return m_enableImages.value();
}

void GetRecordingsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetRecordingsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetRecordingsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetRecordingsParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetRecordingsParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetRecordingsParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetRecordingsParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetRecordingsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetRecordingsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetRecordingsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetRecordingsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetRecordingsParams::fields() const {
	return m_fields;
}

void GetRecordingsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetRecordingsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetRecordingsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetRecordingsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetRecordingsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetRecordingsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetRecordingsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const bool &GetRecordingsParams::isInProgress() const {
	return m_isInProgress.value();
}

void GetRecordingsParams::setIsInProgress(bool newIsInProgress)  {
	m_isInProgress = newIsInProgress;
}

bool GetRecordingsParams::isInProgressNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isInProgress.has_value();
}

void GetRecordingsParams::setIsInProgressNull() {
	m_isInProgress = std::nullopt;
}


const bool &GetRecordingsParams::isKids() const {
	return m_isKids.value();
}

void GetRecordingsParams::setIsKids(bool newIsKids)  {
	m_isKids = newIsKids;
}

bool GetRecordingsParams::isKidsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isKids.has_value();
}

void GetRecordingsParams::setIsKidsNull() {
	m_isKids = std::nullopt;
}


const bool &GetRecordingsParams::isLibraryItem() const {
	return m_isLibraryItem.value();
}

void GetRecordingsParams::setIsLibraryItem(bool newIsLibraryItem)  {
	m_isLibraryItem = newIsLibraryItem;
}

bool GetRecordingsParams::isLibraryItemNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isLibraryItem.has_value();
}

void GetRecordingsParams::setIsLibraryItemNull() {
	m_isLibraryItem = std::nullopt;
}


const bool &GetRecordingsParams::isMovie() const {
	return m_isMovie.value();
}

void GetRecordingsParams::setIsMovie(bool newIsMovie)  {
	m_isMovie = newIsMovie;
}

bool GetRecordingsParams::isMovieNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMovie.has_value();
}

void GetRecordingsParams::setIsMovieNull() {
	m_isMovie = std::nullopt;
}


const bool &GetRecordingsParams::isNews() const {
	return m_isNews.value();
}

void GetRecordingsParams::setIsNews(bool newIsNews)  {
	m_isNews = newIsNews;
}

bool GetRecordingsParams::isNewsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isNews.has_value();
}

void GetRecordingsParams::setIsNewsNull() {
	m_isNews = std::nullopt;
}


const bool &GetRecordingsParams::isSeries() const {
	return m_isSeries.value();
}

void GetRecordingsParams::setIsSeries(bool newIsSeries)  {
	m_isSeries = newIsSeries;
}

bool GetRecordingsParams::isSeriesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSeries.has_value();
}

void GetRecordingsParams::setIsSeriesNull() {
	m_isSeries = std::nullopt;
}


const bool &GetRecordingsParams::isSports() const {
	return m_isSports.value();
}

void GetRecordingsParams::setIsSports(bool newIsSports)  {
	m_isSports = newIsSports;
}

bool GetRecordingsParams::isSportsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSports.has_value();
}

void GetRecordingsParams::setIsSportsNull() {
	m_isSports = std::nullopt;
}


const qint32 &GetRecordingsParams::limit() const {
	return m_limit.value();
}

void GetRecordingsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetRecordingsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetRecordingsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetRecordingsParams::seriesTimerId() const {
	return m_seriesTimerId;
}

void GetRecordingsParams::setSeriesTimerId(QString newSeriesTimerId)  {
	m_seriesTimerId = newSeriesTimerId;
}

bool GetRecordingsParams::seriesTimerIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_seriesTimerId.isNull();
}

void GetRecordingsParams::setSeriesTimerIdNull() {
	m_seriesTimerId.clear();
}


const qint32 &GetRecordingsParams::startIndex() const {
	return m_startIndex.value();
}

void GetRecordingsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetRecordingsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetRecordingsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const RecordingStatus &GetRecordingsParams::status() const {
	return m_status;
}

void GetRecordingsParams::setStatus(RecordingStatus newStatus)  {
	m_status = newStatus;
}

bool GetRecordingsParams::statusNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_status== RecordingStatus::EnumNotSet;
}

void GetRecordingsParams::setStatusNull() {
	m_status= RecordingStatus::EnumNotSet;
}


const QString &GetRecordingsParams::userId() const {
	return m_userId;
}

void GetRecordingsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetRecordingsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetRecordingsParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
