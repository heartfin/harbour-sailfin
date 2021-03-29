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

#include "JellyfinQt/loader/getrecordingsseriesparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetRecordingsSeriesParams

const QString &GetRecordingsSeriesParams::channelId() const {
	return m_channelId;
}

void GetRecordingsSeriesParams::setChannelId(QString newChannelId)  {
	m_channelId = newChannelId;
}

bool GetRecordingsSeriesParams::channelIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_channelId.isNull();
}

void GetRecordingsSeriesParams::setChannelIdNull() {
	m_channelId.clear();
}


const QList<ImageType> &GetRecordingsSeriesParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetRecordingsSeriesParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetRecordingsSeriesParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetRecordingsSeriesParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetRecordingsSeriesParams::enableImages() const {
	return m_enableImages.value();
}

void GetRecordingsSeriesParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetRecordingsSeriesParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetRecordingsSeriesParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetRecordingsSeriesParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetRecordingsSeriesParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetRecordingsSeriesParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetRecordingsSeriesParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetRecordingsSeriesParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetRecordingsSeriesParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetRecordingsSeriesParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetRecordingsSeriesParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetRecordingsSeriesParams::fields() const {
	return m_fields;
}

void GetRecordingsSeriesParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetRecordingsSeriesParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetRecordingsSeriesParams::setFieldsNull() {
	m_fields.clear();
}


const QString &GetRecordingsSeriesParams::groupId() const {
	return m_groupId;
}

void GetRecordingsSeriesParams::setGroupId(QString newGroupId)  {
	m_groupId = newGroupId;
}

bool GetRecordingsSeriesParams::groupIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_groupId.isNull();
}

void GetRecordingsSeriesParams::setGroupIdNull() {
	m_groupId.clear();
}


const qint32 &GetRecordingsSeriesParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetRecordingsSeriesParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetRecordingsSeriesParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetRecordingsSeriesParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const bool &GetRecordingsSeriesParams::isInProgress() const {
	return m_isInProgress.value();
}

void GetRecordingsSeriesParams::setIsInProgress(bool newIsInProgress)  {
	m_isInProgress = newIsInProgress;
}

bool GetRecordingsSeriesParams::isInProgressNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isInProgress.has_value();
}

void GetRecordingsSeriesParams::setIsInProgressNull() {
	m_isInProgress = std::nullopt;
}


const qint32 &GetRecordingsSeriesParams::limit() const {
	return m_limit.value();
}

void GetRecordingsSeriesParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetRecordingsSeriesParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetRecordingsSeriesParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetRecordingsSeriesParams::seriesTimerId() const {
	return m_seriesTimerId;
}

void GetRecordingsSeriesParams::setSeriesTimerId(QString newSeriesTimerId)  {
	m_seriesTimerId = newSeriesTimerId;
}

bool GetRecordingsSeriesParams::seriesTimerIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_seriesTimerId.isNull();
}

void GetRecordingsSeriesParams::setSeriesTimerIdNull() {
	m_seriesTimerId.clear();
}


const qint32 &GetRecordingsSeriesParams::startIndex() const {
	return m_startIndex.value();
}

void GetRecordingsSeriesParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetRecordingsSeriesParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetRecordingsSeriesParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const RecordingStatus &GetRecordingsSeriesParams::status() const {
	return m_status;
}

void GetRecordingsSeriesParams::setStatus(RecordingStatus newStatus)  {
	m_status = newStatus;
}

bool GetRecordingsSeriesParams::statusNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_status== RecordingStatus::EnumNotSet;
}

void GetRecordingsSeriesParams::setStatusNull() {
	m_status= RecordingStatus::EnumNotSet;
}


const QString &GetRecordingsSeriesParams::userId() const {
	return m_userId;
}

void GetRecordingsSeriesParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetRecordingsSeriesParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetRecordingsSeriesParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
