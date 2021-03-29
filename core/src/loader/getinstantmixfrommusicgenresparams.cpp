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

#include "JellyfinQt/loader/getinstantmixfrommusicgenresparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetInstantMixFromMusicGenresParams

const QString &GetInstantMixFromMusicGenresParams::jellyfinId() const {
	return m_jellyfinId;
}

void GetInstantMixFromMusicGenresParams::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}


const QList<ImageType> &GetInstantMixFromMusicGenresParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetInstantMixFromMusicGenresParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetInstantMixFromMusicGenresParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetInstantMixFromMusicGenresParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetInstantMixFromMusicGenresParams::enableImages() const {
	return m_enableImages.value();
}

void GetInstantMixFromMusicGenresParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetInstantMixFromMusicGenresParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetInstantMixFromMusicGenresParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetInstantMixFromMusicGenresParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetInstantMixFromMusicGenresParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetInstantMixFromMusicGenresParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetInstantMixFromMusicGenresParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetInstantMixFromMusicGenresParams::fields() const {
	return m_fields;
}

void GetInstantMixFromMusicGenresParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetInstantMixFromMusicGenresParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetInstantMixFromMusicGenresParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetInstantMixFromMusicGenresParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetInstantMixFromMusicGenresParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetInstantMixFromMusicGenresParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetInstantMixFromMusicGenresParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const qint32 &GetInstantMixFromMusicGenresParams::limit() const {
	return m_limit.value();
}

void GetInstantMixFromMusicGenresParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetInstantMixFromMusicGenresParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetInstantMixFromMusicGenresParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetInstantMixFromMusicGenresParams::userId() const {
	return m_userId;
}

void GetInstantMixFromMusicGenresParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetInstantMixFromMusicGenresParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetInstantMixFromMusicGenresParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
