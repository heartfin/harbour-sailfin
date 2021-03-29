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

#include "JellyfinQt/loader/getrecommendedprogramsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetRecommendedProgramsParams

const QList<ImageType> &GetRecommendedProgramsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetRecommendedProgramsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetRecommendedProgramsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetRecommendedProgramsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetRecommendedProgramsParams::enableImages() const {
	return m_enableImages.value();
}

void GetRecommendedProgramsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetRecommendedProgramsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetRecommendedProgramsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetRecommendedProgramsParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetRecommendedProgramsParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetRecommendedProgramsParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetRecommendedProgramsParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetRecommendedProgramsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetRecommendedProgramsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetRecommendedProgramsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetRecommendedProgramsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetRecommendedProgramsParams::fields() const {
	return m_fields;
}

void GetRecommendedProgramsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetRecommendedProgramsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetRecommendedProgramsParams::setFieldsNull() {
	m_fields.clear();
}


const QStringList &GetRecommendedProgramsParams::genreIds() const {
	return m_genreIds;
}

void GetRecommendedProgramsParams::setGenreIds(QStringList newGenreIds)  {
	m_genreIds = newGenreIds;
}

bool GetRecommendedProgramsParams::genreIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genreIds.size() == 0;
}

void GetRecommendedProgramsParams::setGenreIdsNull() {
	m_genreIds.clear();
}


const bool &GetRecommendedProgramsParams::hasAired() const {
	return m_hasAired.value();
}

void GetRecommendedProgramsParams::setHasAired(bool newHasAired)  {
	m_hasAired = newHasAired;
}

bool GetRecommendedProgramsParams::hasAiredNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasAired.has_value();
}

void GetRecommendedProgramsParams::setHasAiredNull() {
	m_hasAired = std::nullopt;
}


const qint32 &GetRecommendedProgramsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetRecommendedProgramsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetRecommendedProgramsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetRecommendedProgramsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const bool &GetRecommendedProgramsParams::isAiring() const {
	return m_isAiring.value();
}

void GetRecommendedProgramsParams::setIsAiring(bool newIsAiring)  {
	m_isAiring = newIsAiring;
}

bool GetRecommendedProgramsParams::isAiringNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isAiring.has_value();
}

void GetRecommendedProgramsParams::setIsAiringNull() {
	m_isAiring = std::nullopt;
}


const bool &GetRecommendedProgramsParams::isKids() const {
	return m_isKids.value();
}

void GetRecommendedProgramsParams::setIsKids(bool newIsKids)  {
	m_isKids = newIsKids;
}

bool GetRecommendedProgramsParams::isKidsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isKids.has_value();
}

void GetRecommendedProgramsParams::setIsKidsNull() {
	m_isKids = std::nullopt;
}


const bool &GetRecommendedProgramsParams::isMovie() const {
	return m_isMovie.value();
}

void GetRecommendedProgramsParams::setIsMovie(bool newIsMovie)  {
	m_isMovie = newIsMovie;
}

bool GetRecommendedProgramsParams::isMovieNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMovie.has_value();
}

void GetRecommendedProgramsParams::setIsMovieNull() {
	m_isMovie = std::nullopt;
}


const bool &GetRecommendedProgramsParams::isNews() const {
	return m_isNews.value();
}

void GetRecommendedProgramsParams::setIsNews(bool newIsNews)  {
	m_isNews = newIsNews;
}

bool GetRecommendedProgramsParams::isNewsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isNews.has_value();
}

void GetRecommendedProgramsParams::setIsNewsNull() {
	m_isNews = std::nullopt;
}


const bool &GetRecommendedProgramsParams::isSeries() const {
	return m_isSeries.value();
}

void GetRecommendedProgramsParams::setIsSeries(bool newIsSeries)  {
	m_isSeries = newIsSeries;
}

bool GetRecommendedProgramsParams::isSeriesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSeries.has_value();
}

void GetRecommendedProgramsParams::setIsSeriesNull() {
	m_isSeries = std::nullopt;
}


const bool &GetRecommendedProgramsParams::isSports() const {
	return m_isSports.value();
}

void GetRecommendedProgramsParams::setIsSports(bool newIsSports)  {
	m_isSports = newIsSports;
}

bool GetRecommendedProgramsParams::isSportsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSports.has_value();
}

void GetRecommendedProgramsParams::setIsSportsNull() {
	m_isSports = std::nullopt;
}


const qint32 &GetRecommendedProgramsParams::limit() const {
	return m_limit.value();
}

void GetRecommendedProgramsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetRecommendedProgramsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetRecommendedProgramsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetRecommendedProgramsParams::userId() const {
	return m_userId;
}

void GetRecommendedProgramsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetRecommendedProgramsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetRecommendedProgramsParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
