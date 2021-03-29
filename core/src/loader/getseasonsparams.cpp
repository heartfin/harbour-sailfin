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

#include "JellyfinQt/loader/getseasonsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetSeasonsParams

const QString &GetSeasonsParams::seriesId() const {
	return m_seriesId;
}

void GetSeasonsParams::setSeriesId(QString newSeriesId) {
	m_seriesId = newSeriesId;
}


const QString &GetSeasonsParams::adjacentTo() const {
	return m_adjacentTo;
}

void GetSeasonsParams::setAdjacentTo(QString newAdjacentTo)  {
	m_adjacentTo = newAdjacentTo;
}

bool GetSeasonsParams::adjacentToNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_adjacentTo.isNull();
}

void GetSeasonsParams::setAdjacentToNull() {
	m_adjacentTo.clear();
}


const QList<ImageType> &GetSeasonsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetSeasonsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetSeasonsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetSeasonsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetSeasonsParams::enableImages() const {
	return m_enableImages.value();
}

void GetSeasonsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetSeasonsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetSeasonsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetSeasonsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetSeasonsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetSeasonsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetSeasonsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetSeasonsParams::fields() const {
	return m_fields;
}

void GetSeasonsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetSeasonsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetSeasonsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetSeasonsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetSeasonsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetSeasonsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetSeasonsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const bool &GetSeasonsParams::isMissing() const {
	return m_isMissing.value();
}

void GetSeasonsParams::setIsMissing(bool newIsMissing)  {
	m_isMissing = newIsMissing;
}

bool GetSeasonsParams::isMissingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMissing.has_value();
}

void GetSeasonsParams::setIsMissingNull() {
	m_isMissing = std::nullopt;
}


const bool &GetSeasonsParams::isSpecialSeason() const {
	return m_isSpecialSeason.value();
}

void GetSeasonsParams::setIsSpecialSeason(bool newIsSpecialSeason)  {
	m_isSpecialSeason = newIsSpecialSeason;
}

bool GetSeasonsParams::isSpecialSeasonNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSpecialSeason.has_value();
}

void GetSeasonsParams::setIsSpecialSeasonNull() {
	m_isSpecialSeason = std::nullopt;
}


const QString &GetSeasonsParams::userId() const {
	return m_userId;
}

void GetSeasonsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetSeasonsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetSeasonsParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
