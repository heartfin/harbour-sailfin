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

#include "JellyfinQt/loader/getartistsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetArtistsParams

const QList<ImageType> &GetArtistsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetArtistsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetArtistsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetArtistsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetArtistsParams::enableImages() const {
	return m_enableImages.value();
}

void GetArtistsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetArtistsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetArtistsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetArtistsParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetArtistsParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetArtistsParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetArtistsParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetArtistsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetArtistsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetArtistsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetArtistsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QStringList &GetArtistsParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetArtistsParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetArtistsParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetArtistsParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<ItemFields> &GetArtistsParams::fields() const {
	return m_fields;
}

void GetArtistsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetArtistsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetArtistsParams::setFieldsNull() {
	m_fields.clear();
}


const QList<ItemFilter> &GetArtistsParams::filters() const {
	return m_filters;
}

void GetArtistsParams::setFilters(QList<ItemFilter> newFilters)  {
	m_filters = newFilters;
}

bool GetArtistsParams::filtersNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_filters.size() == 0;
}

void GetArtistsParams::setFiltersNull() {
	m_filters.clear();
}


const QStringList &GetArtistsParams::genreIds() const {
	return m_genreIds;
}

void GetArtistsParams::setGenreIds(QStringList newGenreIds)  {
	m_genreIds = newGenreIds;
}

bool GetArtistsParams::genreIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genreIds.size() == 0;
}

void GetArtistsParams::setGenreIdsNull() {
	m_genreIds.clear();
}


const QStringList &GetArtistsParams::genres() const {
	return m_genres;
}

void GetArtistsParams::setGenres(QStringList newGenres)  {
	m_genres = newGenres;
}

bool GetArtistsParams::genresNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genres.size() == 0;
}

void GetArtistsParams::setGenresNull() {
	m_genres.clear();
}


const qint32 &GetArtistsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetArtistsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetArtistsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetArtistsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QStringList &GetArtistsParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetArtistsParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetArtistsParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetArtistsParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetArtistsParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetArtistsParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetArtistsParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetArtistsParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const qint32 &GetArtistsParams::limit() const {
	return m_limit.value();
}

void GetArtistsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetArtistsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetArtistsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QStringList &GetArtistsParams::mediaTypes() const {
	return m_mediaTypes;
}

void GetArtistsParams::setMediaTypes(QStringList newMediaTypes)  {
	m_mediaTypes = newMediaTypes;
}

bool GetArtistsParams::mediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaTypes.size() == 0;
}

void GetArtistsParams::setMediaTypesNull() {
	m_mediaTypes.clear();
}


const double &GetArtistsParams::minCommunityRating() const {
	return m_minCommunityRating.value();
}

void GetArtistsParams::setMinCommunityRating(double newMinCommunityRating)  {
	m_minCommunityRating = newMinCommunityRating;
}

bool GetArtistsParams::minCommunityRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minCommunityRating.has_value();
}

void GetArtistsParams::setMinCommunityRatingNull() {
	m_minCommunityRating = std::nullopt;
}


const QString &GetArtistsParams::nameLessThan() const {
	return m_nameLessThan;
}

void GetArtistsParams::setNameLessThan(QString newNameLessThan)  {
	m_nameLessThan = newNameLessThan;
}

bool GetArtistsParams::nameLessThanNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameLessThan.isNull();
}

void GetArtistsParams::setNameLessThanNull() {
	m_nameLessThan.clear();
}


const QString &GetArtistsParams::nameStartsWith() const {
	return m_nameStartsWith;
}

void GetArtistsParams::setNameStartsWith(QString newNameStartsWith)  {
	m_nameStartsWith = newNameStartsWith;
}

bool GetArtistsParams::nameStartsWithNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWith.isNull();
}

void GetArtistsParams::setNameStartsWithNull() {
	m_nameStartsWith.clear();
}


const QString &GetArtistsParams::nameStartsWithOrGreater() const {
	return m_nameStartsWithOrGreater;
}

void GetArtistsParams::setNameStartsWithOrGreater(QString newNameStartsWithOrGreater)  {
	m_nameStartsWithOrGreater = newNameStartsWithOrGreater;
}

bool GetArtistsParams::nameStartsWithOrGreaterNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWithOrGreater.isNull();
}

void GetArtistsParams::setNameStartsWithOrGreaterNull() {
	m_nameStartsWithOrGreater.clear();
}


const QStringList &GetArtistsParams::officialRatings() const {
	return m_officialRatings;
}

void GetArtistsParams::setOfficialRatings(QStringList newOfficialRatings)  {
	m_officialRatings = newOfficialRatings;
}

bool GetArtistsParams::officialRatingsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_officialRatings.size() == 0;
}

void GetArtistsParams::setOfficialRatingsNull() {
	m_officialRatings.clear();
}


const QString &GetArtistsParams::parentId() const {
	return m_parentId;
}

void GetArtistsParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetArtistsParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetArtistsParams::setParentIdNull() {
	m_parentId.clear();
}


const QString &GetArtistsParams::person() const {
	return m_person;
}

void GetArtistsParams::setPerson(QString newPerson)  {
	m_person = newPerson;
}

bool GetArtistsParams::personNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_person.isNull();
}

void GetArtistsParams::setPersonNull() {
	m_person.clear();
}


const QStringList &GetArtistsParams::personIds() const {
	return m_personIds;
}

void GetArtistsParams::setPersonIds(QStringList newPersonIds)  {
	m_personIds = newPersonIds;
}

bool GetArtistsParams::personIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personIds.size() == 0;
}

void GetArtistsParams::setPersonIdsNull() {
	m_personIds.clear();
}


const QStringList &GetArtistsParams::personTypes() const {
	return m_personTypes;
}

void GetArtistsParams::setPersonTypes(QStringList newPersonTypes)  {
	m_personTypes = newPersonTypes;
}

bool GetArtistsParams::personTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personTypes.size() == 0;
}

void GetArtistsParams::setPersonTypesNull() {
	m_personTypes.clear();
}


const QString &GetArtistsParams::searchTerm() const {
	return m_searchTerm;
}

void GetArtistsParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetArtistsParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetArtistsParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const qint32 &GetArtistsParams::startIndex() const {
	return m_startIndex.value();
}

void GetArtistsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetArtistsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetArtistsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QStringList &GetArtistsParams::studioIds() const {
	return m_studioIds;
}

void GetArtistsParams::setStudioIds(QStringList newStudioIds)  {
	m_studioIds = newStudioIds;
}

bool GetArtistsParams::studioIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studioIds.size() == 0;
}

void GetArtistsParams::setStudioIdsNull() {
	m_studioIds.clear();
}


const QStringList &GetArtistsParams::studios() const {
	return m_studios;
}

void GetArtistsParams::setStudios(QStringList newStudios)  {
	m_studios = newStudios;
}

bool GetArtistsParams::studiosNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studios.size() == 0;
}

void GetArtistsParams::setStudiosNull() {
	m_studios.clear();
}


const QStringList &GetArtistsParams::tags() const {
	return m_tags;
}

void GetArtistsParams::setTags(QStringList newTags)  {
	m_tags = newTags;
}

bool GetArtistsParams::tagsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tags.size() == 0;
}

void GetArtistsParams::setTagsNull() {
	m_tags.clear();
}


const QString &GetArtistsParams::userId() const {
	return m_userId;
}

void GetArtistsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetArtistsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetArtistsParams::setUserIdNull() {
	m_userId.clear();
}


const QList<qint32> &GetArtistsParams::years() const {
	return m_years;
}

void GetArtistsParams::setYears(QList<qint32> newYears)  {
	m_years = newYears;
}

bool GetArtistsParams::yearsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_years.size() == 0;
}

void GetArtistsParams::setYearsNull() {
	m_years.clear();
}



} // NS Loader
} // NS Jellyfin
