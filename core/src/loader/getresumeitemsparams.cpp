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

#include "JellyfinQt/loader/getresumeitemsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetResumeItemsParams

const QString &GetResumeItemsParams::userId() const {
	return m_userId;
}

void GetResumeItemsParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const QList<ImageType> &GetResumeItemsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetResumeItemsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetResumeItemsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetResumeItemsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetResumeItemsParams::enableImages() const {
	return m_enableImages.value();
}

void GetResumeItemsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetResumeItemsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetResumeItemsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetResumeItemsParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetResumeItemsParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetResumeItemsParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetResumeItemsParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetResumeItemsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetResumeItemsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetResumeItemsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetResumeItemsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QStringList &GetResumeItemsParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetResumeItemsParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetResumeItemsParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetResumeItemsParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<ItemFields> &GetResumeItemsParams::fields() const {
	return m_fields;
}

void GetResumeItemsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetResumeItemsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetResumeItemsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetResumeItemsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetResumeItemsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetResumeItemsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetResumeItemsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QStringList &GetResumeItemsParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetResumeItemsParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetResumeItemsParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetResumeItemsParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const qint32 &GetResumeItemsParams::limit() const {
	return m_limit.value();
}

void GetResumeItemsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetResumeItemsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetResumeItemsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QStringList &GetResumeItemsParams::mediaTypes() const {
	return m_mediaTypes;
}

void GetResumeItemsParams::setMediaTypes(QStringList newMediaTypes)  {
	m_mediaTypes = newMediaTypes;
}

bool GetResumeItemsParams::mediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaTypes.size() == 0;
}

void GetResumeItemsParams::setMediaTypesNull() {
	m_mediaTypes.clear();
}


const QString &GetResumeItemsParams::parentId() const {
	return m_parentId;
}

void GetResumeItemsParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetResumeItemsParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetResumeItemsParams::setParentIdNull() {
	m_parentId.clear();
}


const QString &GetResumeItemsParams::searchTerm() const {
	return m_searchTerm;
}

void GetResumeItemsParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetResumeItemsParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetResumeItemsParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const qint32 &GetResumeItemsParams::startIndex() const {
	return m_startIndex.value();
}

void GetResumeItemsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetResumeItemsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetResumeItemsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
