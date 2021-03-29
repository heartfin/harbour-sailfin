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

#include "JellyfinQt/loader/getlatestmediaparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetLatestMediaParams

const QString &GetLatestMediaParams::userId() const {
	return m_userId;
}

void GetLatestMediaParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const QList<ImageType> &GetLatestMediaParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetLatestMediaParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetLatestMediaParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetLatestMediaParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetLatestMediaParams::enableImages() const {
	return m_enableImages.value();
}

void GetLatestMediaParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetLatestMediaParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetLatestMediaParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetLatestMediaParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetLatestMediaParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetLatestMediaParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetLatestMediaParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetLatestMediaParams::fields() const {
	return m_fields;
}

void GetLatestMediaParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetLatestMediaParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetLatestMediaParams::setFieldsNull() {
	m_fields.clear();
}


const bool &GetLatestMediaParams::groupItems() const {
	return m_groupItems.value();
}

void GetLatestMediaParams::setGroupItems(bool newGroupItems)  {
	m_groupItems = newGroupItems;
}

bool GetLatestMediaParams::groupItemsNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_groupItems.has_value();
}

void GetLatestMediaParams::setGroupItemsNull() {
	m_groupItems = std::nullopt;
}


const qint32 &GetLatestMediaParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetLatestMediaParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetLatestMediaParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetLatestMediaParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QStringList &GetLatestMediaParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetLatestMediaParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetLatestMediaParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetLatestMediaParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetLatestMediaParams::isPlayed() const {
	return m_isPlayed.value();
}

void GetLatestMediaParams::setIsPlayed(bool newIsPlayed)  {
	m_isPlayed = newIsPlayed;
}

bool GetLatestMediaParams::isPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isPlayed.has_value();
}

void GetLatestMediaParams::setIsPlayedNull() {
	m_isPlayed = std::nullopt;
}


const qint32 &GetLatestMediaParams::limit() const {
	return m_limit.value();
}

void GetLatestMediaParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetLatestMediaParams::limitNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetLatestMediaParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetLatestMediaParams::parentId() const {
	return m_parentId;
}

void GetLatestMediaParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetLatestMediaParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetLatestMediaParams::setParentIdNull() {
	m_parentId.clear();
}



} // NS Loader
} // NS Jellyfin
