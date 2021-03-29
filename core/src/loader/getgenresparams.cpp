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

#include "JellyfinQt/loader/getgenresparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetGenresParams

const QList<ImageType> &GetGenresParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetGenresParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetGenresParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetGenresParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetGenresParams::enableImages() const {
	return m_enableImages.value();
}

void GetGenresParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetGenresParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetGenresParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetGenresParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetGenresParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetGenresParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetGenresParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const QStringList &GetGenresParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetGenresParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetGenresParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetGenresParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<ItemFields> &GetGenresParams::fields() const {
	return m_fields;
}

void GetGenresParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetGenresParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetGenresParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetGenresParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetGenresParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetGenresParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetGenresParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QStringList &GetGenresParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetGenresParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetGenresParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetGenresParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetGenresParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetGenresParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetGenresParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetGenresParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const qint32 &GetGenresParams::limit() const {
	return m_limit.value();
}

void GetGenresParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetGenresParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetGenresParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetGenresParams::nameLessThan() const {
	return m_nameLessThan;
}

void GetGenresParams::setNameLessThan(QString newNameLessThan)  {
	m_nameLessThan = newNameLessThan;
}

bool GetGenresParams::nameLessThanNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameLessThan.isNull();
}

void GetGenresParams::setNameLessThanNull() {
	m_nameLessThan.clear();
}


const QString &GetGenresParams::nameStartsWith() const {
	return m_nameStartsWith;
}

void GetGenresParams::setNameStartsWith(QString newNameStartsWith)  {
	m_nameStartsWith = newNameStartsWith;
}

bool GetGenresParams::nameStartsWithNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWith.isNull();
}

void GetGenresParams::setNameStartsWithNull() {
	m_nameStartsWith.clear();
}


const QString &GetGenresParams::nameStartsWithOrGreater() const {
	return m_nameStartsWithOrGreater;
}

void GetGenresParams::setNameStartsWithOrGreater(QString newNameStartsWithOrGreater)  {
	m_nameStartsWithOrGreater = newNameStartsWithOrGreater;
}

bool GetGenresParams::nameStartsWithOrGreaterNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWithOrGreater.isNull();
}

void GetGenresParams::setNameStartsWithOrGreaterNull() {
	m_nameStartsWithOrGreater.clear();
}


const QString &GetGenresParams::parentId() const {
	return m_parentId;
}

void GetGenresParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetGenresParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetGenresParams::setParentIdNull() {
	m_parentId.clear();
}


const QString &GetGenresParams::searchTerm() const {
	return m_searchTerm;
}

void GetGenresParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetGenresParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetGenresParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const qint32 &GetGenresParams::startIndex() const {
	return m_startIndex.value();
}

void GetGenresParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetGenresParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetGenresParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetGenresParams::userId() const {
	return m_userId;
}

void GetGenresParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetGenresParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetGenresParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
