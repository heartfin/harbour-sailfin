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

#include "JellyfinQt/loader/getalbumartistsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetAlbumArtistsParams

const QList<ImageType> &GetAlbumArtistsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetAlbumArtistsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetAlbumArtistsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetAlbumArtistsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetAlbumArtistsParams::enableImages() const {
	return m_enableImages.value();
}

void GetAlbumArtistsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetAlbumArtistsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetAlbumArtistsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetAlbumArtistsParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetAlbumArtistsParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetAlbumArtistsParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetAlbumArtistsParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetAlbumArtistsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetAlbumArtistsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetAlbumArtistsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetAlbumArtistsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QStringList &GetAlbumArtistsParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetAlbumArtistsParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetAlbumArtistsParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetAlbumArtistsParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<ItemFields> &GetAlbumArtistsParams::fields() const {
	return m_fields;
}

void GetAlbumArtistsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetAlbumArtistsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetAlbumArtistsParams::setFieldsNull() {
	m_fields.clear();
}


const QList<ItemFilter> &GetAlbumArtistsParams::filters() const {
	return m_filters;
}

void GetAlbumArtistsParams::setFilters(QList<ItemFilter> newFilters)  {
	m_filters = newFilters;
}

bool GetAlbumArtistsParams::filtersNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_filters.size() == 0;
}

void GetAlbumArtistsParams::setFiltersNull() {
	m_filters.clear();
}


const QStringList &GetAlbumArtistsParams::genreIds() const {
	return m_genreIds;
}

void GetAlbumArtistsParams::setGenreIds(QStringList newGenreIds)  {
	m_genreIds = newGenreIds;
}

bool GetAlbumArtistsParams::genreIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genreIds.size() == 0;
}

void GetAlbumArtistsParams::setGenreIdsNull() {
	m_genreIds.clear();
}


const QStringList &GetAlbumArtistsParams::genres() const {
	return m_genres;
}

void GetAlbumArtistsParams::setGenres(QStringList newGenres)  {
	m_genres = newGenres;
}

bool GetAlbumArtistsParams::genresNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genres.size() == 0;
}

void GetAlbumArtistsParams::setGenresNull() {
	m_genres.clear();
}


const qint32 &GetAlbumArtistsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetAlbumArtistsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetAlbumArtistsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetAlbumArtistsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QStringList &GetAlbumArtistsParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetAlbumArtistsParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetAlbumArtistsParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetAlbumArtistsParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetAlbumArtistsParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetAlbumArtistsParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetAlbumArtistsParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetAlbumArtistsParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const qint32 &GetAlbumArtistsParams::limit() const {
	return m_limit.value();
}

void GetAlbumArtistsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetAlbumArtistsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetAlbumArtistsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QStringList &GetAlbumArtistsParams::mediaTypes() const {
	return m_mediaTypes;
}

void GetAlbumArtistsParams::setMediaTypes(QStringList newMediaTypes)  {
	m_mediaTypes = newMediaTypes;
}

bool GetAlbumArtistsParams::mediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaTypes.size() == 0;
}

void GetAlbumArtistsParams::setMediaTypesNull() {
	m_mediaTypes.clear();
}


const double &GetAlbumArtistsParams::minCommunityRating() const {
	return m_minCommunityRating.value();
}

void GetAlbumArtistsParams::setMinCommunityRating(double newMinCommunityRating)  {
	m_minCommunityRating = newMinCommunityRating;
}

bool GetAlbumArtistsParams::minCommunityRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minCommunityRating.has_value();
}

void GetAlbumArtistsParams::setMinCommunityRatingNull() {
	m_minCommunityRating = std::nullopt;
}


const QString &GetAlbumArtistsParams::nameLessThan() const {
	return m_nameLessThan;
}

void GetAlbumArtistsParams::setNameLessThan(QString newNameLessThan)  {
	m_nameLessThan = newNameLessThan;
}

bool GetAlbumArtistsParams::nameLessThanNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameLessThan.isNull();
}

void GetAlbumArtistsParams::setNameLessThanNull() {
	m_nameLessThan.clear();
}


const QString &GetAlbumArtistsParams::nameStartsWith() const {
	return m_nameStartsWith;
}

void GetAlbumArtistsParams::setNameStartsWith(QString newNameStartsWith)  {
	m_nameStartsWith = newNameStartsWith;
}

bool GetAlbumArtistsParams::nameStartsWithNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWith.isNull();
}

void GetAlbumArtistsParams::setNameStartsWithNull() {
	m_nameStartsWith.clear();
}


const QString &GetAlbumArtistsParams::nameStartsWithOrGreater() const {
	return m_nameStartsWithOrGreater;
}

void GetAlbumArtistsParams::setNameStartsWithOrGreater(QString newNameStartsWithOrGreater)  {
	m_nameStartsWithOrGreater = newNameStartsWithOrGreater;
}

bool GetAlbumArtistsParams::nameStartsWithOrGreaterNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWithOrGreater.isNull();
}

void GetAlbumArtistsParams::setNameStartsWithOrGreaterNull() {
	m_nameStartsWithOrGreater.clear();
}


const QStringList &GetAlbumArtistsParams::officialRatings() const {
	return m_officialRatings;
}

void GetAlbumArtistsParams::setOfficialRatings(QStringList newOfficialRatings)  {
	m_officialRatings = newOfficialRatings;
}

bool GetAlbumArtistsParams::officialRatingsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_officialRatings.size() == 0;
}

void GetAlbumArtistsParams::setOfficialRatingsNull() {
	m_officialRatings.clear();
}


const QString &GetAlbumArtistsParams::parentId() const {
	return m_parentId;
}

void GetAlbumArtistsParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetAlbumArtistsParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetAlbumArtistsParams::setParentIdNull() {
	m_parentId.clear();
}


const QString &GetAlbumArtistsParams::person() const {
	return m_person;
}

void GetAlbumArtistsParams::setPerson(QString newPerson)  {
	m_person = newPerson;
}

bool GetAlbumArtistsParams::personNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_person.isNull();
}

void GetAlbumArtistsParams::setPersonNull() {
	m_person.clear();
}


const QStringList &GetAlbumArtistsParams::personIds() const {
	return m_personIds;
}

void GetAlbumArtistsParams::setPersonIds(QStringList newPersonIds)  {
	m_personIds = newPersonIds;
}

bool GetAlbumArtistsParams::personIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personIds.size() == 0;
}

void GetAlbumArtistsParams::setPersonIdsNull() {
	m_personIds.clear();
}


const QStringList &GetAlbumArtistsParams::personTypes() const {
	return m_personTypes;
}

void GetAlbumArtistsParams::setPersonTypes(QStringList newPersonTypes)  {
	m_personTypes = newPersonTypes;
}

bool GetAlbumArtistsParams::personTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personTypes.size() == 0;
}

void GetAlbumArtistsParams::setPersonTypesNull() {
	m_personTypes.clear();
}


const QString &GetAlbumArtistsParams::searchTerm() const {
	return m_searchTerm;
}

void GetAlbumArtistsParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetAlbumArtistsParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetAlbumArtistsParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const qint32 &GetAlbumArtistsParams::startIndex() const {
	return m_startIndex.value();
}

void GetAlbumArtistsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetAlbumArtistsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetAlbumArtistsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QStringList &GetAlbumArtistsParams::studioIds() const {
	return m_studioIds;
}

void GetAlbumArtistsParams::setStudioIds(QStringList newStudioIds)  {
	m_studioIds = newStudioIds;
}

bool GetAlbumArtistsParams::studioIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studioIds.size() == 0;
}

void GetAlbumArtistsParams::setStudioIdsNull() {
	m_studioIds.clear();
}


const QStringList &GetAlbumArtistsParams::studios() const {
	return m_studios;
}

void GetAlbumArtistsParams::setStudios(QStringList newStudios)  {
	m_studios = newStudios;
}

bool GetAlbumArtistsParams::studiosNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studios.size() == 0;
}

void GetAlbumArtistsParams::setStudiosNull() {
	m_studios.clear();
}


const QStringList &GetAlbumArtistsParams::tags() const {
	return m_tags;
}

void GetAlbumArtistsParams::setTags(QStringList newTags)  {
	m_tags = newTags;
}

bool GetAlbumArtistsParams::tagsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tags.size() == 0;
}

void GetAlbumArtistsParams::setTagsNull() {
	m_tags.clear();
}


const QString &GetAlbumArtistsParams::userId() const {
	return m_userId;
}

void GetAlbumArtistsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetAlbumArtistsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetAlbumArtistsParams::setUserIdNull() {
	m_userId.clear();
}


const QList<qint32> &GetAlbumArtistsParams::years() const {
	return m_years;
}

void GetAlbumArtistsParams::setYears(QList<qint32> newYears)  {
	m_years = newYears;
}

bool GetAlbumArtistsParams::yearsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_years.size() == 0;
}

void GetAlbumArtistsParams::setYearsNull() {
	m_years.clear();
}



} // NS Loader
} // NS Jellyfin
