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

#include "JellyfinQt/loader/getlivetvchannelsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetLiveTvChannelsParams

const bool &GetLiveTvChannelsParams::addCurrentProgram() const {
	return m_addCurrentProgram.value();
}

void GetLiveTvChannelsParams::setAddCurrentProgram(bool newAddCurrentProgram)  {
	m_addCurrentProgram = newAddCurrentProgram;
}

bool GetLiveTvChannelsParams::addCurrentProgramNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_addCurrentProgram.has_value();
}

void GetLiveTvChannelsParams::setAddCurrentProgramNull() {
	m_addCurrentProgram = std::nullopt;
}


const bool &GetLiveTvChannelsParams::enableFavoriteSorting() const {
	return m_enableFavoriteSorting.value();
}

void GetLiveTvChannelsParams::setEnableFavoriteSorting(bool newEnableFavoriteSorting)  {
	m_enableFavoriteSorting = newEnableFavoriteSorting;
}

bool GetLiveTvChannelsParams::enableFavoriteSortingNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableFavoriteSorting.has_value();
}

void GetLiveTvChannelsParams::setEnableFavoriteSortingNull() {
	m_enableFavoriteSorting = std::nullopt;
}


const QList<ImageType> &GetLiveTvChannelsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetLiveTvChannelsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetLiveTvChannelsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetLiveTvChannelsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetLiveTvChannelsParams::enableImages() const {
	return m_enableImages.value();
}

void GetLiveTvChannelsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetLiveTvChannelsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetLiveTvChannelsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetLiveTvChannelsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetLiveTvChannelsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetLiveTvChannelsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetLiveTvChannelsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetLiveTvChannelsParams::fields() const {
	return m_fields;
}

void GetLiveTvChannelsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetLiveTvChannelsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetLiveTvChannelsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetLiveTvChannelsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetLiveTvChannelsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetLiveTvChannelsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetLiveTvChannelsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const bool &GetLiveTvChannelsParams::isDisliked() const {
	return m_isDisliked.value();
}

void GetLiveTvChannelsParams::setIsDisliked(bool newIsDisliked)  {
	m_isDisliked = newIsDisliked;
}

bool GetLiveTvChannelsParams::isDislikedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isDisliked.has_value();
}

void GetLiveTvChannelsParams::setIsDislikedNull() {
	m_isDisliked = std::nullopt;
}


const bool &GetLiveTvChannelsParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetLiveTvChannelsParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetLiveTvChannelsParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetLiveTvChannelsParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const bool &GetLiveTvChannelsParams::isKids() const {
	return m_isKids.value();
}

void GetLiveTvChannelsParams::setIsKids(bool newIsKids)  {
	m_isKids = newIsKids;
}

bool GetLiveTvChannelsParams::isKidsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isKids.has_value();
}

void GetLiveTvChannelsParams::setIsKidsNull() {
	m_isKids = std::nullopt;
}


const bool &GetLiveTvChannelsParams::isLiked() const {
	return m_isLiked.value();
}

void GetLiveTvChannelsParams::setIsLiked(bool newIsLiked)  {
	m_isLiked = newIsLiked;
}

bool GetLiveTvChannelsParams::isLikedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isLiked.has_value();
}

void GetLiveTvChannelsParams::setIsLikedNull() {
	m_isLiked = std::nullopt;
}


const bool &GetLiveTvChannelsParams::isMovie() const {
	return m_isMovie.value();
}

void GetLiveTvChannelsParams::setIsMovie(bool newIsMovie)  {
	m_isMovie = newIsMovie;
}

bool GetLiveTvChannelsParams::isMovieNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMovie.has_value();
}

void GetLiveTvChannelsParams::setIsMovieNull() {
	m_isMovie = std::nullopt;
}


const bool &GetLiveTvChannelsParams::isNews() const {
	return m_isNews.value();
}

void GetLiveTvChannelsParams::setIsNews(bool newIsNews)  {
	m_isNews = newIsNews;
}

bool GetLiveTvChannelsParams::isNewsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isNews.has_value();
}

void GetLiveTvChannelsParams::setIsNewsNull() {
	m_isNews = std::nullopt;
}


const bool &GetLiveTvChannelsParams::isSeries() const {
	return m_isSeries.value();
}

void GetLiveTvChannelsParams::setIsSeries(bool newIsSeries)  {
	m_isSeries = newIsSeries;
}

bool GetLiveTvChannelsParams::isSeriesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSeries.has_value();
}

void GetLiveTvChannelsParams::setIsSeriesNull() {
	m_isSeries = std::nullopt;
}


const bool &GetLiveTvChannelsParams::isSports() const {
	return m_isSports.value();
}

void GetLiveTvChannelsParams::setIsSports(bool newIsSports)  {
	m_isSports = newIsSports;
}

bool GetLiveTvChannelsParams::isSportsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSports.has_value();
}

void GetLiveTvChannelsParams::setIsSportsNull() {
	m_isSports = std::nullopt;
}


const qint32 &GetLiveTvChannelsParams::limit() const {
	return m_limit.value();
}

void GetLiveTvChannelsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetLiveTvChannelsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetLiveTvChannelsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QStringList &GetLiveTvChannelsParams::sortBy() const {
	return m_sortBy;
}

void GetLiveTvChannelsParams::setSortBy(QStringList newSortBy)  {
	m_sortBy = newSortBy;
}

bool GetLiveTvChannelsParams::sortByNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortBy.size() == 0;
}

void GetLiveTvChannelsParams::setSortByNull() {
	m_sortBy.clear();
}


const SortOrder &GetLiveTvChannelsParams::sortOrder() const {
	return m_sortOrder;
}

void GetLiveTvChannelsParams::setSortOrder(SortOrder newSortOrder)  {
	m_sortOrder = newSortOrder;
}

bool GetLiveTvChannelsParams::sortOrderNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortOrder== SortOrder::EnumNotSet;
}

void GetLiveTvChannelsParams::setSortOrderNull() {
	m_sortOrder= SortOrder::EnumNotSet;
}


const qint32 &GetLiveTvChannelsParams::startIndex() const {
	return m_startIndex.value();
}

void GetLiveTvChannelsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetLiveTvChannelsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetLiveTvChannelsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const ChannelType &GetLiveTvChannelsParams::type() const {
	return m_type;
}

void GetLiveTvChannelsParams::setType(ChannelType newType)  {
	m_type = newType;
}

bool GetLiveTvChannelsParams::typeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_type== ChannelType::EnumNotSet;
}

void GetLiveTvChannelsParams::setTypeNull() {
	m_type= ChannelType::EnumNotSet;
}


const QString &GetLiveTvChannelsParams::userId() const {
	return m_userId;
}

void GetLiveTvChannelsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetLiveTvChannelsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetLiveTvChannelsParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
