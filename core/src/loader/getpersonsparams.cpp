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

#include "JellyfinQt/loader/getpersonsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetPersonsParams

const QString &GetPersonsParams::appearsInItemId() const {
	return m_appearsInItemId;
}

void GetPersonsParams::setAppearsInItemId(QString newAppearsInItemId)  {
	m_appearsInItemId = newAppearsInItemId;
}

bool GetPersonsParams::appearsInItemIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_appearsInItemId.isNull();
}

void GetPersonsParams::setAppearsInItemIdNull() {
	m_appearsInItemId.clear();
}


const QList<ImageType> &GetPersonsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetPersonsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetPersonsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetPersonsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetPersonsParams::enableImages() const {
	return m_enableImages.value();
}

void GetPersonsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetPersonsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetPersonsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetPersonsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetPersonsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetPersonsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetPersonsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QStringList &GetPersonsParams::excludePersonTypes() const {
	return m_excludePersonTypes;
}

void GetPersonsParams::setExcludePersonTypes(QStringList newExcludePersonTypes)  {
	m_excludePersonTypes = newExcludePersonTypes;
}

bool GetPersonsParams::excludePersonTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludePersonTypes.size() == 0;
}

void GetPersonsParams::setExcludePersonTypesNull() {
	m_excludePersonTypes.clear();
}


const QList<ItemFields> &GetPersonsParams::fields() const {
	return m_fields;
}

void GetPersonsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetPersonsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetPersonsParams::setFieldsNull() {
	m_fields.clear();
}


const QList<ItemFilter> &GetPersonsParams::filters() const {
	return m_filters;
}

void GetPersonsParams::setFilters(QList<ItemFilter> newFilters)  {
	m_filters = newFilters;
}

bool GetPersonsParams::filtersNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_filters.size() == 0;
}

void GetPersonsParams::setFiltersNull() {
	m_filters.clear();
}


const qint32 &GetPersonsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetPersonsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetPersonsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetPersonsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const bool &GetPersonsParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetPersonsParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetPersonsParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetPersonsParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const qint32 &GetPersonsParams::limit() const {
	return m_limit.value();
}

void GetPersonsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetPersonsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetPersonsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QStringList &GetPersonsParams::personTypes() const {
	return m_personTypes;
}

void GetPersonsParams::setPersonTypes(QStringList newPersonTypes)  {
	m_personTypes = newPersonTypes;
}

bool GetPersonsParams::personTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personTypes.size() == 0;
}

void GetPersonsParams::setPersonTypesNull() {
	m_personTypes.clear();
}


const QString &GetPersonsParams::searchTerm() const {
	return m_searchTerm;
}

void GetPersonsParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetPersonsParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetPersonsParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const QString &GetPersonsParams::userId() const {
	return m_userId;
}

void GetPersonsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetPersonsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetPersonsParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
