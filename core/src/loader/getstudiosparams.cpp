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

#include "JellyfinQt/loader/getstudiosparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetStudiosParams

const QList<ImageType> &GetStudiosParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetStudiosParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetStudiosParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetStudiosParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetStudiosParams::enableImages() const {
	return m_enableImages.value();
}

void GetStudiosParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetStudiosParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetStudiosParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetStudiosParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetStudiosParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetStudiosParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetStudiosParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetStudiosParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetStudiosParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetStudiosParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetStudiosParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QStringList &GetStudiosParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetStudiosParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetStudiosParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetStudiosParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<ItemFields> &GetStudiosParams::fields() const {
	return m_fields;
}

void GetStudiosParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetStudiosParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetStudiosParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetStudiosParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetStudiosParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetStudiosParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetStudiosParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QStringList &GetStudiosParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetStudiosParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetStudiosParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetStudiosParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetStudiosParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetStudiosParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetStudiosParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetStudiosParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const qint32 &GetStudiosParams::limit() const {
	return m_limit.value();
}

void GetStudiosParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetStudiosParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetStudiosParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetStudiosParams::nameLessThan() const {
	return m_nameLessThan;
}

void GetStudiosParams::setNameLessThan(QString newNameLessThan)  {
	m_nameLessThan = newNameLessThan;
}

bool GetStudiosParams::nameLessThanNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameLessThan.isNull();
}

void GetStudiosParams::setNameLessThanNull() {
	m_nameLessThan.clear();
}


const QString &GetStudiosParams::nameStartsWith() const {
	return m_nameStartsWith;
}

void GetStudiosParams::setNameStartsWith(QString newNameStartsWith)  {
	m_nameStartsWith = newNameStartsWith;
}

bool GetStudiosParams::nameStartsWithNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWith.isNull();
}

void GetStudiosParams::setNameStartsWithNull() {
	m_nameStartsWith.clear();
}


const QString &GetStudiosParams::nameStartsWithOrGreater() const {
	return m_nameStartsWithOrGreater;
}

void GetStudiosParams::setNameStartsWithOrGreater(QString newNameStartsWithOrGreater)  {
	m_nameStartsWithOrGreater = newNameStartsWithOrGreater;
}

bool GetStudiosParams::nameStartsWithOrGreaterNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWithOrGreater.isNull();
}

void GetStudiosParams::setNameStartsWithOrGreaterNull() {
	m_nameStartsWithOrGreater.clear();
}


const QString &GetStudiosParams::parentId() const {
	return m_parentId;
}

void GetStudiosParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetStudiosParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetStudiosParams::setParentIdNull() {
	m_parentId.clear();
}


const QString &GetStudiosParams::searchTerm() const {
	return m_searchTerm;
}

void GetStudiosParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetStudiosParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetStudiosParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const qint32 &GetStudiosParams::startIndex() const {
	return m_startIndex.value();
}

void GetStudiosParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetStudiosParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetStudiosParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetStudiosParams::userId() const {
	return m_userId;
}

void GetStudiosParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetStudiosParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetStudiosParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
