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

#include "JellyfinQt/loader/getplaylistitemsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetPlaylistItemsParams

const QString &GetPlaylistItemsParams::playlistId() const {
	return m_playlistId;
}

void GetPlaylistItemsParams::setPlaylistId(QString newPlaylistId) {
	m_playlistId = newPlaylistId;
}


const QString &GetPlaylistItemsParams::userId() const {
	return m_userId;
}

void GetPlaylistItemsParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const QList<ImageType> &GetPlaylistItemsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetPlaylistItemsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetPlaylistItemsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetPlaylistItemsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetPlaylistItemsParams::enableImages() const {
	return m_enableImages.value();
}

void GetPlaylistItemsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetPlaylistItemsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetPlaylistItemsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetPlaylistItemsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetPlaylistItemsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetPlaylistItemsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetPlaylistItemsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetPlaylistItemsParams::fields() const {
	return m_fields;
}

void GetPlaylistItemsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetPlaylistItemsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetPlaylistItemsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetPlaylistItemsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetPlaylistItemsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetPlaylistItemsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetPlaylistItemsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const qint32 &GetPlaylistItemsParams::limit() const {
	return m_limit.value();
}

void GetPlaylistItemsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetPlaylistItemsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetPlaylistItemsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const qint32 &GetPlaylistItemsParams::startIndex() const {
	return m_startIndex.value();
}

void GetPlaylistItemsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetPlaylistItemsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetPlaylistItemsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
