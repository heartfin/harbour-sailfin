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

#include "JellyfinQt/loader/getepisodesparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetEpisodesParams

const QString &GetEpisodesParams::seriesId() const {
	return m_seriesId;
}

void GetEpisodesParams::setSeriesId(QString newSeriesId) {
	m_seriesId = newSeriesId;
}


const QString &GetEpisodesParams::adjacentTo() const {
	return m_adjacentTo;
}

void GetEpisodesParams::setAdjacentTo(QString newAdjacentTo)  {
	m_adjacentTo = newAdjacentTo;
}

bool GetEpisodesParams::adjacentToNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_adjacentTo.isNull();
}

void GetEpisodesParams::setAdjacentToNull() {
	m_adjacentTo.clear();
}


const QList<ImageType> &GetEpisodesParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetEpisodesParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetEpisodesParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetEpisodesParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetEpisodesParams::enableImages() const {
	return m_enableImages.value();
}

void GetEpisodesParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetEpisodesParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetEpisodesParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetEpisodesParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetEpisodesParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetEpisodesParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetEpisodesParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetEpisodesParams::fields() const {
	return m_fields;
}

void GetEpisodesParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetEpisodesParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetEpisodesParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetEpisodesParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetEpisodesParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetEpisodesParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetEpisodesParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const bool &GetEpisodesParams::isMissing() const {
	return m_isMissing.value();
}

void GetEpisodesParams::setIsMissing(bool newIsMissing)  {
	m_isMissing = newIsMissing;
}

bool GetEpisodesParams::isMissingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMissing.has_value();
}

void GetEpisodesParams::setIsMissingNull() {
	m_isMissing = std::nullopt;
}


const qint32 &GetEpisodesParams::limit() const {
	return m_limit.value();
}

void GetEpisodesParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetEpisodesParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetEpisodesParams::setLimitNull() {
	m_limit = std::nullopt;
}


const qint32 &GetEpisodesParams::season() const {
	return m_season.value();
}

void GetEpisodesParams::setSeason(qint32 newSeason)  {
	m_season = newSeason;
}

bool GetEpisodesParams::seasonNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_season.has_value();
}

void GetEpisodesParams::setSeasonNull() {
	m_season = std::nullopt;
}


const QString &GetEpisodesParams::seasonId() const {
	return m_seasonId;
}

void GetEpisodesParams::setSeasonId(QString newSeasonId)  {
	m_seasonId = newSeasonId;
}

bool GetEpisodesParams::seasonIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_seasonId.isNull();
}

void GetEpisodesParams::setSeasonIdNull() {
	m_seasonId.clear();
}


const QString &GetEpisodesParams::sortBy() const {
	return m_sortBy;
}

void GetEpisodesParams::setSortBy(QString newSortBy)  {
	m_sortBy = newSortBy;
}

bool GetEpisodesParams::sortByNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortBy.isNull();
}

void GetEpisodesParams::setSortByNull() {
	m_sortBy.clear();
}


const qint32 &GetEpisodesParams::startIndex() const {
	return m_startIndex.value();
}

void GetEpisodesParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetEpisodesParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetEpisodesParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetEpisodesParams::startItemId() const {
	return m_startItemId;
}

void GetEpisodesParams::setStartItemId(QString newStartItemId)  {
	m_startItemId = newStartItemId;
}

bool GetEpisodesParams::startItemIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_startItemId.isNull();
}

void GetEpisodesParams::setStartItemIdNull() {
	m_startItemId.clear();
}


const QString &GetEpisodesParams::userId() const {
	return m_userId;
}

void GetEpisodesParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetEpisodesParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetEpisodesParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
