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

#include "JellyfinQt/loader/getinstantmixfromartistsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetInstantMixFromArtistsParams

const QString &GetInstantMixFromArtistsParams::jellyfinId() const {
	return m_jellyfinId;
}

void GetInstantMixFromArtistsParams::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}


const QList<ImageType> &GetInstantMixFromArtistsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetInstantMixFromArtistsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetInstantMixFromArtistsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetInstantMixFromArtistsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetInstantMixFromArtistsParams::enableImages() const {
	return m_enableImages.value();
}

void GetInstantMixFromArtistsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetInstantMixFromArtistsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetInstantMixFromArtistsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetInstantMixFromArtistsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetInstantMixFromArtistsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetInstantMixFromArtistsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetInstantMixFromArtistsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetInstantMixFromArtistsParams::fields() const {
	return m_fields;
}

void GetInstantMixFromArtistsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetInstantMixFromArtistsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetInstantMixFromArtistsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetInstantMixFromArtistsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetInstantMixFromArtistsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetInstantMixFromArtistsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetInstantMixFromArtistsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const qint32 &GetInstantMixFromArtistsParams::limit() const {
	return m_limit.value();
}

void GetInstantMixFromArtistsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetInstantMixFromArtistsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetInstantMixFromArtistsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetInstantMixFromArtistsParams::userId() const {
	return m_userId;
}

void GetInstantMixFromArtistsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetInstantMixFromArtistsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetInstantMixFromArtistsParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
