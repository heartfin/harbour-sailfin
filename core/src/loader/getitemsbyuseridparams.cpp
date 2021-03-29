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

#include "JellyfinQt/loader/getitemsbyuseridparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetItemsByUserIdParams

const QString &GetItemsByUserIdParams::userId() const {
	return m_userId;
}

void GetItemsByUserIdParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const QString &GetItemsByUserIdParams::adjacentTo() const {
	return m_adjacentTo;
}

void GetItemsByUserIdParams::setAdjacentTo(QString newAdjacentTo)  {
	m_adjacentTo = newAdjacentTo;
}

bool GetItemsByUserIdParams::adjacentToNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_adjacentTo.isNull();
}

void GetItemsByUserIdParams::setAdjacentToNull() {
	m_adjacentTo.clear();
}


const QStringList &GetItemsByUserIdParams::albumArtistIds() const {
	return m_albumArtistIds;
}

void GetItemsByUserIdParams::setAlbumArtistIds(QStringList newAlbumArtistIds)  {
	m_albumArtistIds = newAlbumArtistIds;
}

bool GetItemsByUserIdParams::albumArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_albumArtistIds.size() == 0;
}

void GetItemsByUserIdParams::setAlbumArtistIdsNull() {
	m_albumArtistIds.clear();
}


const QStringList &GetItemsByUserIdParams::albumIds() const {
	return m_albumIds;
}

void GetItemsByUserIdParams::setAlbumIds(QStringList newAlbumIds)  {
	m_albumIds = newAlbumIds;
}

bool GetItemsByUserIdParams::albumIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_albumIds.size() == 0;
}

void GetItemsByUserIdParams::setAlbumIdsNull() {
	m_albumIds.clear();
}


const QStringList &GetItemsByUserIdParams::albums() const {
	return m_albums;
}

void GetItemsByUserIdParams::setAlbums(QStringList newAlbums)  {
	m_albums = newAlbums;
}

bool GetItemsByUserIdParams::albumsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_albums.size() == 0;
}

void GetItemsByUserIdParams::setAlbumsNull() {
	m_albums.clear();
}


const QStringList &GetItemsByUserIdParams::artistIds() const {
	return m_artistIds;
}

void GetItemsByUserIdParams::setArtistIds(QStringList newArtistIds)  {
	m_artistIds = newArtistIds;
}

bool GetItemsByUserIdParams::artistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_artistIds.size() == 0;
}

void GetItemsByUserIdParams::setArtistIdsNull() {
	m_artistIds.clear();
}


const QStringList &GetItemsByUserIdParams::artists() const {
	return m_artists;
}

void GetItemsByUserIdParams::setArtists(QStringList newArtists)  {
	m_artists = newArtists;
}

bool GetItemsByUserIdParams::artistsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_artists.size() == 0;
}

void GetItemsByUserIdParams::setArtistsNull() {
	m_artists.clear();
}


const bool &GetItemsByUserIdParams::collapseBoxSetItems() const {
	return m_collapseBoxSetItems.value();
}

void GetItemsByUserIdParams::setCollapseBoxSetItems(bool newCollapseBoxSetItems)  {
	m_collapseBoxSetItems = newCollapseBoxSetItems;
}

bool GetItemsByUserIdParams::collapseBoxSetItemsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_collapseBoxSetItems.has_value();
}

void GetItemsByUserIdParams::setCollapseBoxSetItemsNull() {
	m_collapseBoxSetItems = std::nullopt;
}


const QStringList &GetItemsByUserIdParams::contributingArtistIds() const {
	return m_contributingArtistIds;
}

void GetItemsByUserIdParams::setContributingArtistIds(QStringList newContributingArtistIds)  {
	m_contributingArtistIds = newContributingArtistIds;
}

bool GetItemsByUserIdParams::contributingArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_contributingArtistIds.size() == 0;
}

void GetItemsByUserIdParams::setContributingArtistIdsNull() {
	m_contributingArtistIds.clear();
}


const QList<ImageType> &GetItemsByUserIdParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetItemsByUserIdParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetItemsByUserIdParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetItemsByUserIdParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetItemsByUserIdParams::enableImages() const {
	return m_enableImages.value();
}

void GetItemsByUserIdParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetItemsByUserIdParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetItemsByUserIdParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetItemsByUserIdParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetItemsByUserIdParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetItemsByUserIdParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetItemsByUserIdParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetItemsByUserIdParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetItemsByUserIdParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetItemsByUserIdParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetItemsByUserIdParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QStringList &GetItemsByUserIdParams::excludeArtistIds() const {
	return m_excludeArtistIds;
}

void GetItemsByUserIdParams::setExcludeArtistIds(QStringList newExcludeArtistIds)  {
	m_excludeArtistIds = newExcludeArtistIds;
}

bool GetItemsByUserIdParams::excludeArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeArtistIds.size() == 0;
}

void GetItemsByUserIdParams::setExcludeArtistIdsNull() {
	m_excludeArtistIds.clear();
}


const QStringList &GetItemsByUserIdParams::excludeItemIds() const {
	return m_excludeItemIds;
}

void GetItemsByUserIdParams::setExcludeItemIds(QStringList newExcludeItemIds)  {
	m_excludeItemIds = newExcludeItemIds;
}

bool GetItemsByUserIdParams::excludeItemIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemIds.size() == 0;
}

void GetItemsByUserIdParams::setExcludeItemIdsNull() {
	m_excludeItemIds.clear();
}


const QStringList &GetItemsByUserIdParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetItemsByUserIdParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetItemsByUserIdParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetItemsByUserIdParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<LocationType> &GetItemsByUserIdParams::excludeLocationTypes() const {
	return m_excludeLocationTypes;
}

void GetItemsByUserIdParams::setExcludeLocationTypes(QList<LocationType> newExcludeLocationTypes)  {
	m_excludeLocationTypes = newExcludeLocationTypes;
}

bool GetItemsByUserIdParams::excludeLocationTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeLocationTypes.size() == 0;
}

void GetItemsByUserIdParams::setExcludeLocationTypesNull() {
	m_excludeLocationTypes.clear();
}


const QList<ItemFields> &GetItemsByUserIdParams::fields() const {
	return m_fields;
}

void GetItemsByUserIdParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetItemsByUserIdParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetItemsByUserIdParams::setFieldsNull() {
	m_fields.clear();
}


const QList<ItemFilter> &GetItemsByUserIdParams::filters() const {
	return m_filters;
}

void GetItemsByUserIdParams::setFilters(QList<ItemFilter> newFilters)  {
	m_filters = newFilters;
}

bool GetItemsByUserIdParams::filtersNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_filters.size() == 0;
}

void GetItemsByUserIdParams::setFiltersNull() {
	m_filters.clear();
}


const QStringList &GetItemsByUserIdParams::genreIds() const {
	return m_genreIds;
}

void GetItemsByUserIdParams::setGenreIds(QStringList newGenreIds)  {
	m_genreIds = newGenreIds;
}

bool GetItemsByUserIdParams::genreIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genreIds.size() == 0;
}

void GetItemsByUserIdParams::setGenreIdsNull() {
	m_genreIds.clear();
}


const QStringList &GetItemsByUserIdParams::genres() const {
	return m_genres;
}

void GetItemsByUserIdParams::setGenres(QStringList newGenres)  {
	m_genres = newGenres;
}

bool GetItemsByUserIdParams::genresNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genres.size() == 0;
}

void GetItemsByUserIdParams::setGenresNull() {
	m_genres.clear();
}


const bool &GetItemsByUserIdParams::hasImdbId() const {
	return m_hasImdbId.value();
}

void GetItemsByUserIdParams::setHasImdbId(bool newHasImdbId)  {
	m_hasImdbId = newHasImdbId;
}

bool GetItemsByUserIdParams::hasImdbIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasImdbId.has_value();
}

void GetItemsByUserIdParams::setHasImdbIdNull() {
	m_hasImdbId = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasOfficialRating() const {
	return m_hasOfficialRating.value();
}

void GetItemsByUserIdParams::setHasOfficialRating(bool newHasOfficialRating)  {
	m_hasOfficialRating = newHasOfficialRating;
}

bool GetItemsByUserIdParams::hasOfficialRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasOfficialRating.has_value();
}

void GetItemsByUserIdParams::setHasOfficialRatingNull() {
	m_hasOfficialRating = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasOverview() const {
	return m_hasOverview.value();
}

void GetItemsByUserIdParams::setHasOverview(bool newHasOverview)  {
	m_hasOverview = newHasOverview;
}

bool GetItemsByUserIdParams::hasOverviewNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasOverview.has_value();
}

void GetItemsByUserIdParams::setHasOverviewNull() {
	m_hasOverview = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasParentalRating() const {
	return m_hasParentalRating.value();
}

void GetItemsByUserIdParams::setHasParentalRating(bool newHasParentalRating)  {
	m_hasParentalRating = newHasParentalRating;
}

bool GetItemsByUserIdParams::hasParentalRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasParentalRating.has_value();
}

void GetItemsByUserIdParams::setHasParentalRatingNull() {
	m_hasParentalRating = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasSpecialFeature() const {
	return m_hasSpecialFeature.value();
}

void GetItemsByUserIdParams::setHasSpecialFeature(bool newHasSpecialFeature)  {
	m_hasSpecialFeature = newHasSpecialFeature;
}

bool GetItemsByUserIdParams::hasSpecialFeatureNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasSpecialFeature.has_value();
}

void GetItemsByUserIdParams::setHasSpecialFeatureNull() {
	m_hasSpecialFeature = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasSubtitles() const {
	return m_hasSubtitles.value();
}

void GetItemsByUserIdParams::setHasSubtitles(bool newHasSubtitles)  {
	m_hasSubtitles = newHasSubtitles;
}

bool GetItemsByUserIdParams::hasSubtitlesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasSubtitles.has_value();
}

void GetItemsByUserIdParams::setHasSubtitlesNull() {
	m_hasSubtitles = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasThemeSong() const {
	return m_hasThemeSong.value();
}

void GetItemsByUserIdParams::setHasThemeSong(bool newHasThemeSong)  {
	m_hasThemeSong = newHasThemeSong;
}

bool GetItemsByUserIdParams::hasThemeSongNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasThemeSong.has_value();
}

void GetItemsByUserIdParams::setHasThemeSongNull() {
	m_hasThemeSong = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasThemeVideo() const {
	return m_hasThemeVideo.value();
}

void GetItemsByUserIdParams::setHasThemeVideo(bool newHasThemeVideo)  {
	m_hasThemeVideo = newHasThemeVideo;
}

bool GetItemsByUserIdParams::hasThemeVideoNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasThemeVideo.has_value();
}

void GetItemsByUserIdParams::setHasThemeVideoNull() {
	m_hasThemeVideo = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasTmdbId() const {
	return m_hasTmdbId.value();
}

void GetItemsByUserIdParams::setHasTmdbId(bool newHasTmdbId)  {
	m_hasTmdbId = newHasTmdbId;
}

bool GetItemsByUserIdParams::hasTmdbIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasTmdbId.has_value();
}

void GetItemsByUserIdParams::setHasTmdbIdNull() {
	m_hasTmdbId = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasTrailer() const {
	return m_hasTrailer.value();
}

void GetItemsByUserIdParams::setHasTrailer(bool newHasTrailer)  {
	m_hasTrailer = newHasTrailer;
}

bool GetItemsByUserIdParams::hasTrailerNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasTrailer.has_value();
}

void GetItemsByUserIdParams::setHasTrailerNull() {
	m_hasTrailer = std::nullopt;
}


const bool &GetItemsByUserIdParams::hasTvdbId() const {
	return m_hasTvdbId.value();
}

void GetItemsByUserIdParams::setHasTvdbId(bool newHasTvdbId)  {
	m_hasTvdbId = newHasTvdbId;
}

bool GetItemsByUserIdParams::hasTvdbIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasTvdbId.has_value();
}

void GetItemsByUserIdParams::setHasTvdbIdNull() {
	m_hasTvdbId = std::nullopt;
}


const QStringList &GetItemsByUserIdParams::ids() const {
	return m_ids;
}

void GetItemsByUserIdParams::setIds(QStringList newIds)  {
	m_ids = newIds;
}

bool GetItemsByUserIdParams::idsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_ids.size() == 0;
}

void GetItemsByUserIdParams::setIdsNull() {
	m_ids.clear();
}


const qint32 &GetItemsByUserIdParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetItemsByUserIdParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetItemsByUserIdParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetItemsByUserIdParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QList<ImageType> &GetItemsByUserIdParams::imageTypes() const {
	return m_imageTypes;
}

void GetItemsByUserIdParams::setImageTypes(QList<ImageType> newImageTypes)  {
	m_imageTypes = newImageTypes;
}

bool GetItemsByUserIdParams::imageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_imageTypes.size() == 0;
}

void GetItemsByUserIdParams::setImageTypesNull() {
	m_imageTypes.clear();
}


const QStringList &GetItemsByUserIdParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetItemsByUserIdParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetItemsByUserIdParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetItemsByUserIdParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetItemsByUserIdParams::is3D() const {
	return m_is3D.value();
}

void GetItemsByUserIdParams::setIs3D(bool newIs3D)  {
	m_is3D = newIs3D;
}

bool GetItemsByUserIdParams::is3DNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_is3D.has_value();
}

void GetItemsByUserIdParams::setIs3DNull() {
	m_is3D = std::nullopt;
}


const bool &GetItemsByUserIdParams::is4K() const {
	return m_is4K.value();
}

void GetItemsByUserIdParams::setIs4K(bool newIs4K)  {
	m_is4K = newIs4K;
}

bool GetItemsByUserIdParams::is4KNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_is4K.has_value();
}

void GetItemsByUserIdParams::setIs4KNull() {
	m_is4K = std::nullopt;
}


const bool &GetItemsByUserIdParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetItemsByUserIdParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetItemsByUserIdParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetItemsByUserIdParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const bool &GetItemsByUserIdParams::isHd() const {
	return m_isHd.value();
}

void GetItemsByUserIdParams::setIsHd(bool newIsHd)  {
	m_isHd = newIsHd;
}

bool GetItemsByUserIdParams::isHdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isHd.has_value();
}

void GetItemsByUserIdParams::setIsHdNull() {
	m_isHd = std::nullopt;
}


const bool &GetItemsByUserIdParams::isLocked() const {
	return m_isLocked.value();
}

void GetItemsByUserIdParams::setIsLocked(bool newIsLocked)  {
	m_isLocked = newIsLocked;
}

bool GetItemsByUserIdParams::isLockedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isLocked.has_value();
}

void GetItemsByUserIdParams::setIsLockedNull() {
	m_isLocked = std::nullopt;
}


const bool &GetItemsByUserIdParams::isMissing() const {
	return m_isMissing.value();
}

void GetItemsByUserIdParams::setIsMissing(bool newIsMissing)  {
	m_isMissing = newIsMissing;
}

bool GetItemsByUserIdParams::isMissingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMissing.has_value();
}

void GetItemsByUserIdParams::setIsMissingNull() {
	m_isMissing = std::nullopt;
}


const bool &GetItemsByUserIdParams::isPlaceHolder() const {
	return m_isPlaceHolder.value();
}

void GetItemsByUserIdParams::setIsPlaceHolder(bool newIsPlaceHolder)  {
	m_isPlaceHolder = newIsPlaceHolder;
}

bool GetItemsByUserIdParams::isPlaceHolderNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isPlaceHolder.has_value();
}

void GetItemsByUserIdParams::setIsPlaceHolderNull() {
	m_isPlaceHolder = std::nullopt;
}


const bool &GetItemsByUserIdParams::isPlayed() const {
	return m_isPlayed.value();
}

void GetItemsByUserIdParams::setIsPlayed(bool newIsPlayed)  {
	m_isPlayed = newIsPlayed;
}

bool GetItemsByUserIdParams::isPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isPlayed.has_value();
}

void GetItemsByUserIdParams::setIsPlayedNull() {
	m_isPlayed = std::nullopt;
}


const bool &GetItemsByUserIdParams::isUnaired() const {
	return m_isUnaired.value();
}

void GetItemsByUserIdParams::setIsUnaired(bool newIsUnaired)  {
	m_isUnaired = newIsUnaired;
}

bool GetItemsByUserIdParams::isUnairedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isUnaired.has_value();
}

void GetItemsByUserIdParams::setIsUnairedNull() {
	m_isUnaired = std::nullopt;
}


const qint32 &GetItemsByUserIdParams::limit() const {
	return m_limit.value();
}

void GetItemsByUserIdParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetItemsByUserIdParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetItemsByUserIdParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QList<LocationType> &GetItemsByUserIdParams::locationTypes() const {
	return m_locationTypes;
}

void GetItemsByUserIdParams::setLocationTypes(QList<LocationType> newLocationTypes)  {
	m_locationTypes = newLocationTypes;
}

bool GetItemsByUserIdParams::locationTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_locationTypes.size() == 0;
}

void GetItemsByUserIdParams::setLocationTypesNull() {
	m_locationTypes.clear();
}


const qint32 &GetItemsByUserIdParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetItemsByUserIdParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetItemsByUserIdParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetItemsByUserIdParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const QString &GetItemsByUserIdParams::maxOfficialRating() const {
	return m_maxOfficialRating;
}

void GetItemsByUserIdParams::setMaxOfficialRating(QString newMaxOfficialRating)  {
	m_maxOfficialRating = newMaxOfficialRating;
}

bool GetItemsByUserIdParams::maxOfficialRatingNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_maxOfficialRating.isNull();
}

void GetItemsByUserIdParams::setMaxOfficialRatingNull() {
	m_maxOfficialRating.clear();
}


const QDateTime &GetItemsByUserIdParams::maxPremiereDate() const {
	return m_maxPremiereDate;
}

void GetItemsByUserIdParams::setMaxPremiereDate(QDateTime newMaxPremiereDate)  {
	m_maxPremiereDate = newMaxPremiereDate;
}

bool GetItemsByUserIdParams::maxPremiereDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_maxPremiereDate.isNull();
}

void GetItemsByUserIdParams::setMaxPremiereDateNull() {
	m_maxPremiereDate= QDateTime();
}


const qint32 &GetItemsByUserIdParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetItemsByUserIdParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetItemsByUserIdParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetItemsByUserIdParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const QStringList &GetItemsByUserIdParams::mediaTypes() const {
	return m_mediaTypes;
}

void GetItemsByUserIdParams::setMediaTypes(QStringList newMediaTypes)  {
	m_mediaTypes = newMediaTypes;
}

bool GetItemsByUserIdParams::mediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaTypes.size() == 0;
}

void GetItemsByUserIdParams::setMediaTypesNull() {
	m_mediaTypes.clear();
}


const double &GetItemsByUserIdParams::minCommunityRating() const {
	return m_minCommunityRating.value();
}

void GetItemsByUserIdParams::setMinCommunityRating(double newMinCommunityRating)  {
	m_minCommunityRating = newMinCommunityRating;
}

bool GetItemsByUserIdParams::minCommunityRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minCommunityRating.has_value();
}

void GetItemsByUserIdParams::setMinCommunityRatingNull() {
	m_minCommunityRating = std::nullopt;
}


const double &GetItemsByUserIdParams::minCriticRating() const {
	return m_minCriticRating.value();
}

void GetItemsByUserIdParams::setMinCriticRating(double newMinCriticRating)  {
	m_minCriticRating = newMinCriticRating;
}

bool GetItemsByUserIdParams::minCriticRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minCriticRating.has_value();
}

void GetItemsByUserIdParams::setMinCriticRatingNull() {
	m_minCriticRating = std::nullopt;
}


const QDateTime &GetItemsByUserIdParams::minDateLastSaved() const {
	return m_minDateLastSaved;
}

void GetItemsByUserIdParams::setMinDateLastSaved(QDateTime newMinDateLastSaved)  {
	m_minDateLastSaved = newMinDateLastSaved;
}

bool GetItemsByUserIdParams::minDateLastSavedNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minDateLastSaved.isNull();
}

void GetItemsByUserIdParams::setMinDateLastSavedNull() {
	m_minDateLastSaved= QDateTime();
}


const QDateTime &GetItemsByUserIdParams::minDateLastSavedForUser() const {
	return m_minDateLastSavedForUser;
}

void GetItemsByUserIdParams::setMinDateLastSavedForUser(QDateTime newMinDateLastSavedForUser)  {
	m_minDateLastSavedForUser = newMinDateLastSavedForUser;
}

bool GetItemsByUserIdParams::minDateLastSavedForUserNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minDateLastSavedForUser.isNull();
}

void GetItemsByUserIdParams::setMinDateLastSavedForUserNull() {
	m_minDateLastSavedForUser= QDateTime();
}


const qint32 &GetItemsByUserIdParams::minHeight() const {
	return m_minHeight.value();
}

void GetItemsByUserIdParams::setMinHeight(qint32 newMinHeight)  {
	m_minHeight = newMinHeight;
}

bool GetItemsByUserIdParams::minHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minHeight.has_value();
}

void GetItemsByUserIdParams::setMinHeightNull() {
	m_minHeight = std::nullopt;
}


const QString &GetItemsByUserIdParams::minOfficialRating() const {
	return m_minOfficialRating;
}

void GetItemsByUserIdParams::setMinOfficialRating(QString newMinOfficialRating)  {
	m_minOfficialRating = newMinOfficialRating;
}

bool GetItemsByUserIdParams::minOfficialRatingNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minOfficialRating.isNull();
}

void GetItemsByUserIdParams::setMinOfficialRatingNull() {
	m_minOfficialRating.clear();
}


const QDateTime &GetItemsByUserIdParams::minPremiereDate() const {
	return m_minPremiereDate;
}

void GetItemsByUserIdParams::setMinPremiereDate(QDateTime newMinPremiereDate)  {
	m_minPremiereDate = newMinPremiereDate;
}

bool GetItemsByUserIdParams::minPremiereDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minPremiereDate.isNull();
}

void GetItemsByUserIdParams::setMinPremiereDateNull() {
	m_minPremiereDate= QDateTime();
}


const qint32 &GetItemsByUserIdParams::minWidth() const {
	return m_minWidth.value();
}

void GetItemsByUserIdParams::setMinWidth(qint32 newMinWidth)  {
	m_minWidth = newMinWidth;
}

bool GetItemsByUserIdParams::minWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minWidth.has_value();
}

void GetItemsByUserIdParams::setMinWidthNull() {
	m_minWidth = std::nullopt;
}


const QString &GetItemsByUserIdParams::nameLessThan() const {
	return m_nameLessThan;
}

void GetItemsByUserIdParams::setNameLessThan(QString newNameLessThan)  {
	m_nameLessThan = newNameLessThan;
}

bool GetItemsByUserIdParams::nameLessThanNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameLessThan.isNull();
}

void GetItemsByUserIdParams::setNameLessThanNull() {
	m_nameLessThan.clear();
}


const QString &GetItemsByUserIdParams::nameStartsWith() const {
	return m_nameStartsWith;
}

void GetItemsByUserIdParams::setNameStartsWith(QString newNameStartsWith)  {
	m_nameStartsWith = newNameStartsWith;
}

bool GetItemsByUserIdParams::nameStartsWithNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWith.isNull();
}

void GetItemsByUserIdParams::setNameStartsWithNull() {
	m_nameStartsWith.clear();
}


const QString &GetItemsByUserIdParams::nameStartsWithOrGreater() const {
	return m_nameStartsWithOrGreater;
}

void GetItemsByUserIdParams::setNameStartsWithOrGreater(QString newNameStartsWithOrGreater)  {
	m_nameStartsWithOrGreater = newNameStartsWithOrGreater;
}

bool GetItemsByUserIdParams::nameStartsWithOrGreaterNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWithOrGreater.isNull();
}

void GetItemsByUserIdParams::setNameStartsWithOrGreaterNull() {
	m_nameStartsWithOrGreater.clear();
}


const QStringList &GetItemsByUserIdParams::officialRatings() const {
	return m_officialRatings;
}

void GetItemsByUserIdParams::setOfficialRatings(QStringList newOfficialRatings)  {
	m_officialRatings = newOfficialRatings;
}

bool GetItemsByUserIdParams::officialRatingsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_officialRatings.size() == 0;
}

void GetItemsByUserIdParams::setOfficialRatingsNull() {
	m_officialRatings.clear();
}


const QString &GetItemsByUserIdParams::parentId() const {
	return m_parentId;
}

void GetItemsByUserIdParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetItemsByUserIdParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetItemsByUserIdParams::setParentIdNull() {
	m_parentId.clear();
}


const qint32 &GetItemsByUserIdParams::parentIndexNumber() const {
	return m_parentIndexNumber.value();
}

void GetItemsByUserIdParams::setParentIndexNumber(qint32 newParentIndexNumber)  {
	m_parentIndexNumber = newParentIndexNumber;
}

bool GetItemsByUserIdParams::parentIndexNumberNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_parentIndexNumber.has_value();
}

void GetItemsByUserIdParams::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;
}


const QString &GetItemsByUserIdParams::person() const {
	return m_person;
}

void GetItemsByUserIdParams::setPerson(QString newPerson)  {
	m_person = newPerson;
}

bool GetItemsByUserIdParams::personNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_person.isNull();
}

void GetItemsByUserIdParams::setPersonNull() {
	m_person.clear();
}


const QStringList &GetItemsByUserIdParams::personIds() const {
	return m_personIds;
}

void GetItemsByUserIdParams::setPersonIds(QStringList newPersonIds)  {
	m_personIds = newPersonIds;
}

bool GetItemsByUserIdParams::personIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personIds.size() == 0;
}

void GetItemsByUserIdParams::setPersonIdsNull() {
	m_personIds.clear();
}


const QStringList &GetItemsByUserIdParams::personTypes() const {
	return m_personTypes;
}

void GetItemsByUserIdParams::setPersonTypes(QStringList newPersonTypes)  {
	m_personTypes = newPersonTypes;
}

bool GetItemsByUserIdParams::personTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personTypes.size() == 0;
}

void GetItemsByUserIdParams::setPersonTypesNull() {
	m_personTypes.clear();
}


const bool &GetItemsByUserIdParams::recursive() const {
	return m_recursive.value();
}

void GetItemsByUserIdParams::setRecursive(bool newRecursive)  {
	m_recursive = newRecursive;
}

bool GetItemsByUserIdParams::recursiveNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_recursive.has_value();
}

void GetItemsByUserIdParams::setRecursiveNull() {
	m_recursive = std::nullopt;
}


const QString &GetItemsByUserIdParams::searchTerm() const {
	return m_searchTerm;
}

void GetItemsByUserIdParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetItemsByUserIdParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetItemsByUserIdParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const QList<SeriesStatus> &GetItemsByUserIdParams::seriesStatus() const {
	return m_seriesStatus;
}

void GetItemsByUserIdParams::setSeriesStatus(QList<SeriesStatus> newSeriesStatus)  {
	m_seriesStatus = newSeriesStatus;
}

bool GetItemsByUserIdParams::seriesStatusNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_seriesStatus.size() == 0;
}

void GetItemsByUserIdParams::setSeriesStatusNull() {
	m_seriesStatus.clear();
}


const QString &GetItemsByUserIdParams::sortBy() const {
	return m_sortBy;
}

void GetItemsByUserIdParams::setSortBy(QString newSortBy)  {
	m_sortBy = newSortBy;
}

bool GetItemsByUserIdParams::sortByNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortBy.isNull();
}

void GetItemsByUserIdParams::setSortByNull() {
	m_sortBy.clear();
}


const QString &GetItemsByUserIdParams::sortOrder() const {
	return m_sortOrder;
}

void GetItemsByUserIdParams::setSortOrder(QString newSortOrder)  {
	m_sortOrder = newSortOrder;
}

bool GetItemsByUserIdParams::sortOrderNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortOrder.isNull();
}

void GetItemsByUserIdParams::setSortOrderNull() {
	m_sortOrder.clear();
}


const qint32 &GetItemsByUserIdParams::startIndex() const {
	return m_startIndex.value();
}

void GetItemsByUserIdParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetItemsByUserIdParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetItemsByUserIdParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QStringList &GetItemsByUserIdParams::studioIds() const {
	return m_studioIds;
}

void GetItemsByUserIdParams::setStudioIds(QStringList newStudioIds)  {
	m_studioIds = newStudioIds;
}

bool GetItemsByUserIdParams::studioIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studioIds.size() == 0;
}

void GetItemsByUserIdParams::setStudioIdsNull() {
	m_studioIds.clear();
}


const QStringList &GetItemsByUserIdParams::studios() const {
	return m_studios;
}

void GetItemsByUserIdParams::setStudios(QStringList newStudios)  {
	m_studios = newStudios;
}

bool GetItemsByUserIdParams::studiosNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studios.size() == 0;
}

void GetItemsByUserIdParams::setStudiosNull() {
	m_studios.clear();
}


const QStringList &GetItemsByUserIdParams::tags() const {
	return m_tags;
}

void GetItemsByUserIdParams::setTags(QStringList newTags)  {
	m_tags = newTags;
}

bool GetItemsByUserIdParams::tagsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tags.size() == 0;
}

void GetItemsByUserIdParams::setTagsNull() {
	m_tags.clear();
}


const QList<VideoType> &GetItemsByUserIdParams::videoTypes() const {
	return m_videoTypes;
}

void GetItemsByUserIdParams::setVideoTypes(QList<VideoType> newVideoTypes)  {
	m_videoTypes = newVideoTypes;
}

bool GetItemsByUserIdParams::videoTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoTypes.size() == 0;
}

void GetItemsByUserIdParams::setVideoTypesNull() {
	m_videoTypes.clear();
}


const QList<qint32> &GetItemsByUserIdParams::years() const {
	return m_years;
}

void GetItemsByUserIdParams::setYears(QList<qint32> newYears)  {
	m_years = newYears;
}

bool GetItemsByUserIdParams::yearsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_years.size() == 0;
}

void GetItemsByUserIdParams::setYearsNull() {
	m_years.clear();
}



} // NS Loader
} // NS Jellyfin
