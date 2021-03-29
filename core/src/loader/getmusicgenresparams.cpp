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

#include "JellyfinQt/loader/getmusicgenresparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetMusicGenresParams

const QList<ImageType> &GetMusicGenresParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetMusicGenresParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetMusicGenresParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetMusicGenresParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetMusicGenresParams::enableImages() const {
	return m_enableImages.value();
}

void GetMusicGenresParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetMusicGenresParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetMusicGenresParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetMusicGenresParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetMusicGenresParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetMusicGenresParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetMusicGenresParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const QStringList &GetMusicGenresParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetMusicGenresParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetMusicGenresParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetMusicGenresParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<ItemFields> &GetMusicGenresParams::fields() const {
	return m_fields;
}

void GetMusicGenresParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetMusicGenresParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetMusicGenresParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetMusicGenresParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetMusicGenresParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetMusicGenresParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetMusicGenresParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QStringList &GetMusicGenresParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetMusicGenresParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetMusicGenresParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetMusicGenresParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetMusicGenresParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetMusicGenresParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetMusicGenresParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetMusicGenresParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const qint32 &GetMusicGenresParams::limit() const {
	return m_limit.value();
}

void GetMusicGenresParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetMusicGenresParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetMusicGenresParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetMusicGenresParams::nameLessThan() const {
	return m_nameLessThan;
}

void GetMusicGenresParams::setNameLessThan(QString newNameLessThan)  {
	m_nameLessThan = newNameLessThan;
}

bool GetMusicGenresParams::nameLessThanNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameLessThan.isNull();
}

void GetMusicGenresParams::setNameLessThanNull() {
	m_nameLessThan.clear();
}


const QString &GetMusicGenresParams::nameStartsWith() const {
	return m_nameStartsWith;
}

void GetMusicGenresParams::setNameStartsWith(QString newNameStartsWith)  {
	m_nameStartsWith = newNameStartsWith;
}

bool GetMusicGenresParams::nameStartsWithNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWith.isNull();
}

void GetMusicGenresParams::setNameStartsWithNull() {
	m_nameStartsWith.clear();
}


const QString &GetMusicGenresParams::nameStartsWithOrGreater() const {
	return m_nameStartsWithOrGreater;
}

void GetMusicGenresParams::setNameStartsWithOrGreater(QString newNameStartsWithOrGreater)  {
	m_nameStartsWithOrGreater = newNameStartsWithOrGreater;
}

bool GetMusicGenresParams::nameStartsWithOrGreaterNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWithOrGreater.isNull();
}

void GetMusicGenresParams::setNameStartsWithOrGreaterNull() {
	m_nameStartsWithOrGreater.clear();
}


const QString &GetMusicGenresParams::parentId() const {
	return m_parentId;
}

void GetMusicGenresParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetMusicGenresParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetMusicGenresParams::setParentIdNull() {
	m_parentId.clear();
}


const QString &GetMusicGenresParams::searchTerm() const {
	return m_searchTerm;
}

void GetMusicGenresParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetMusicGenresParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetMusicGenresParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const qint32 &GetMusicGenresParams::startIndex() const {
	return m_startIndex.value();
}

void GetMusicGenresParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetMusicGenresParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetMusicGenresParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetMusicGenresParams::userId() const {
	return m_userId;
}

void GetMusicGenresParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetMusicGenresParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetMusicGenresParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
