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

#include "JellyfinQt/loader/getnextupparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetNextUpParams

const bool &GetNextUpParams::disableFirstEpisode() const {
	return m_disableFirstEpisode.value();
}

void GetNextUpParams::setDisableFirstEpisode(bool newDisableFirstEpisode)  {
	m_disableFirstEpisode = newDisableFirstEpisode;
}

bool GetNextUpParams::disableFirstEpisodeNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_disableFirstEpisode.has_value();
}

void GetNextUpParams::setDisableFirstEpisodeNull() {
	m_disableFirstEpisode = std::nullopt;
}


const QList<ImageType> &GetNextUpParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetNextUpParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetNextUpParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetNextUpParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetNextUpParams::enableImges() const {
	return m_enableImges.value();
}

void GetNextUpParams::setEnableImges(bool newEnableImges)  {
	m_enableImges = newEnableImges;
}

bool GetNextUpParams::enableImgesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImges.has_value();
}

void GetNextUpParams::setEnableImgesNull() {
	m_enableImges = std::nullopt;
}


const bool &GetNextUpParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetNextUpParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetNextUpParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetNextUpParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetNextUpParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetNextUpParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetNextUpParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetNextUpParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetNextUpParams::fields() const {
	return m_fields;
}

void GetNextUpParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetNextUpParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetNextUpParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetNextUpParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetNextUpParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetNextUpParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetNextUpParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const qint32 &GetNextUpParams::limit() const {
	return m_limit.value();
}

void GetNextUpParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetNextUpParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetNextUpParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetNextUpParams::parentId() const {
	return m_parentId;
}

void GetNextUpParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetNextUpParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetNextUpParams::setParentIdNull() {
	m_parentId.clear();
}


const QString &GetNextUpParams::seriesId() const {
	return m_seriesId;
}

void GetNextUpParams::setSeriesId(QString newSeriesId)  {
	m_seriesId = newSeriesId;
}

bool GetNextUpParams::seriesIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_seriesId.isNull();
}

void GetNextUpParams::setSeriesIdNull() {
	m_seriesId.clear();
}


const qint32 &GetNextUpParams::startIndex() const {
	return m_startIndex.value();
}

void GetNextUpParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetNextUpParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetNextUpParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetNextUpParams::userId() const {
	return m_userId;
}

void GetNextUpParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetNextUpParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetNextUpParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
