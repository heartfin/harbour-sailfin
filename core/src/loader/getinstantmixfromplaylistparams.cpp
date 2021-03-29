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

#include "JellyfinQt/loader/getinstantmixfromplaylistparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetInstantMixFromPlaylistParams

const QString &GetInstantMixFromPlaylistParams::jellyfinId() const {
	return m_jellyfinId;
}

void GetInstantMixFromPlaylistParams::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}


const QList<ImageType> &GetInstantMixFromPlaylistParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetInstantMixFromPlaylistParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetInstantMixFromPlaylistParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetInstantMixFromPlaylistParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetInstantMixFromPlaylistParams::enableImages() const {
	return m_enableImages.value();
}

void GetInstantMixFromPlaylistParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetInstantMixFromPlaylistParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetInstantMixFromPlaylistParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetInstantMixFromPlaylistParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetInstantMixFromPlaylistParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetInstantMixFromPlaylistParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetInstantMixFromPlaylistParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetInstantMixFromPlaylistParams::fields() const {
	return m_fields;
}

void GetInstantMixFromPlaylistParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetInstantMixFromPlaylistParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetInstantMixFromPlaylistParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetInstantMixFromPlaylistParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetInstantMixFromPlaylistParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetInstantMixFromPlaylistParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetInstantMixFromPlaylistParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const qint32 &GetInstantMixFromPlaylistParams::limit() const {
	return m_limit.value();
}

void GetInstantMixFromPlaylistParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetInstantMixFromPlaylistParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetInstantMixFromPlaylistParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetInstantMixFromPlaylistParams::userId() const {
	return m_userId;
}

void GetInstantMixFromPlaylistParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetInstantMixFromPlaylistParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetInstantMixFromPlaylistParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
