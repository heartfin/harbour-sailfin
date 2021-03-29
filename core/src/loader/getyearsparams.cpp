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

#include "JellyfinQt/loader/getyearsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetYearsParams

const QList<ImageType> &GetYearsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetYearsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetYearsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetYearsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetYearsParams::enableImages() const {
	return m_enableImages.value();
}

void GetYearsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetYearsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetYearsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetYearsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetYearsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetYearsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetYearsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QStringList &GetYearsParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetYearsParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetYearsParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetYearsParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<ItemFields> &GetYearsParams::fields() const {
	return m_fields;
}

void GetYearsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetYearsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetYearsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetYearsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetYearsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetYearsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetYearsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QStringList &GetYearsParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetYearsParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetYearsParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetYearsParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const qint32 &GetYearsParams::limit() const {
	return m_limit.value();
}

void GetYearsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetYearsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetYearsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QStringList &GetYearsParams::mediaTypes() const {
	return m_mediaTypes;
}

void GetYearsParams::setMediaTypes(QStringList newMediaTypes)  {
	m_mediaTypes = newMediaTypes;
}

bool GetYearsParams::mediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaTypes.size() == 0;
}

void GetYearsParams::setMediaTypesNull() {
	m_mediaTypes.clear();
}


const QString &GetYearsParams::parentId() const {
	return m_parentId;
}

void GetYearsParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetYearsParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetYearsParams::setParentIdNull() {
	m_parentId.clear();
}


const bool &GetYearsParams::recursive() const {
	return m_recursive.value();
}

void GetYearsParams::setRecursive(bool newRecursive)  {
	m_recursive = newRecursive;
}

bool GetYearsParams::recursiveNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_recursive.has_value();
}

void GetYearsParams::setRecursiveNull() {
	m_recursive = std::nullopt;
}


const QString &GetYearsParams::sortBy() const {
	return m_sortBy;
}

void GetYearsParams::setSortBy(QString newSortBy)  {
	m_sortBy = newSortBy;
}

bool GetYearsParams::sortByNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortBy.isNull();
}

void GetYearsParams::setSortByNull() {
	m_sortBy.clear();
}


const QString &GetYearsParams::sortOrder() const {
	return m_sortOrder;
}

void GetYearsParams::setSortOrder(QString newSortOrder)  {
	m_sortOrder = newSortOrder;
}

bool GetYearsParams::sortOrderNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortOrder.isNull();
}

void GetYearsParams::setSortOrderNull() {
	m_sortOrder.clear();
}


const qint32 &GetYearsParams::startIndex() const {
	return m_startIndex.value();
}

void GetYearsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetYearsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetYearsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetYearsParams::userId() const {
	return m_userId;
}

void GetYearsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetYearsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetYearsParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
