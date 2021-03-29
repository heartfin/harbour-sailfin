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

#include "JellyfinQt/loader/getinstantmixfromitemparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetInstantMixFromItemParams

const QString &GetInstantMixFromItemParams::jellyfinId() const {
	return m_jellyfinId;
}

void GetInstantMixFromItemParams::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}


const QList<ImageType> &GetInstantMixFromItemParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetInstantMixFromItemParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetInstantMixFromItemParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetInstantMixFromItemParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetInstantMixFromItemParams::enableImages() const {
	return m_enableImages.value();
}

void GetInstantMixFromItemParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetInstantMixFromItemParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetInstantMixFromItemParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetInstantMixFromItemParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetInstantMixFromItemParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetInstantMixFromItemParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetInstantMixFromItemParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetInstantMixFromItemParams::fields() const {
	return m_fields;
}

void GetInstantMixFromItemParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetInstantMixFromItemParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetInstantMixFromItemParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetInstantMixFromItemParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetInstantMixFromItemParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetInstantMixFromItemParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetInstantMixFromItemParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const qint32 &GetInstantMixFromItemParams::limit() const {
	return m_limit.value();
}

void GetInstantMixFromItemParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetInstantMixFromItemParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetInstantMixFromItemParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetInstantMixFromItemParams::userId() const {
	return m_userId;
}

void GetInstantMixFromItemParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetInstantMixFromItemParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetInstantMixFromItemParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
