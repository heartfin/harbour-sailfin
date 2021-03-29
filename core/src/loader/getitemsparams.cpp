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

#include "JellyfinQt/loader/getitemsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetItemsParams

const QString &GetItemsParams::adjacentTo() const {
	return m_adjacentTo;
}

void GetItemsParams::setAdjacentTo(QString newAdjacentTo)  {
	m_adjacentTo = newAdjacentTo;
}

bool GetItemsParams::adjacentToNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_adjacentTo.isNull();
}

void GetItemsParams::setAdjacentToNull() {
	m_adjacentTo.clear();
}


const QStringList &GetItemsParams::albumArtistIds() const {
	return m_albumArtistIds;
}

void GetItemsParams::setAlbumArtistIds(QStringList newAlbumArtistIds)  {
	m_albumArtistIds = newAlbumArtistIds;
}

bool GetItemsParams::albumArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_albumArtistIds.size() == 0;
}

void GetItemsParams::setAlbumArtistIdsNull() {
	m_albumArtistIds.clear();
}


const QStringList &GetItemsParams::albumIds() const {
	return m_albumIds;
}

void GetItemsParams::setAlbumIds(QStringList newAlbumIds)  {
	m_albumIds = newAlbumIds;
}

bool GetItemsParams::albumIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_albumIds.size() == 0;
}

void GetItemsParams::setAlbumIdsNull() {
	m_albumIds.clear();
}


const QStringList &GetItemsParams::albums() const {
	return m_albums;
}

void GetItemsParams::setAlbums(QStringList newAlbums)  {
	m_albums = newAlbums;
}

bool GetItemsParams::albumsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_albums.size() == 0;
}

void GetItemsParams::setAlbumsNull() {
	m_albums.clear();
}


const QStringList &GetItemsParams::artistIds() const {
	return m_artistIds;
}

void GetItemsParams::setArtistIds(QStringList newArtistIds)  {
	m_artistIds = newArtistIds;
}

bool GetItemsParams::artistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_artistIds.size() == 0;
}

void GetItemsParams::setArtistIdsNull() {
	m_artistIds.clear();
}


const QStringList &GetItemsParams::artists() const {
	return m_artists;
}

void GetItemsParams::setArtists(QStringList newArtists)  {
	m_artists = newArtists;
}

bool GetItemsParams::artistsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_artists.size() == 0;
}

void GetItemsParams::setArtistsNull() {
	m_artists.clear();
}


const bool &GetItemsParams::collapseBoxSetItems() const {
	return m_collapseBoxSetItems.value();
}

void GetItemsParams::setCollapseBoxSetItems(bool newCollapseBoxSetItems)  {
	m_collapseBoxSetItems = newCollapseBoxSetItems;
}

bool GetItemsParams::collapseBoxSetItemsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_collapseBoxSetItems.has_value();
}

void GetItemsParams::setCollapseBoxSetItemsNull() {
	m_collapseBoxSetItems = std::nullopt;
}


const QStringList &GetItemsParams::contributingArtistIds() const {
	return m_contributingArtistIds;
}

void GetItemsParams::setContributingArtistIds(QStringList newContributingArtistIds)  {
	m_contributingArtistIds = newContributingArtistIds;
}

bool GetItemsParams::contributingArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_contributingArtistIds.size() == 0;
}

void GetItemsParams::setContributingArtistIdsNull() {
	m_contributingArtistIds.clear();
}


const QList<ImageType> &GetItemsParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetItemsParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetItemsParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetItemsParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetItemsParams::enableImages() const {
	return m_enableImages.value();
}

void GetItemsParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetItemsParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetItemsParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetItemsParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetItemsParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetItemsParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetItemsParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetItemsParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetItemsParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetItemsParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetItemsParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QStringList &GetItemsParams::excludeArtistIds() const {
	return m_excludeArtistIds;
}

void GetItemsParams::setExcludeArtistIds(QStringList newExcludeArtistIds)  {
	m_excludeArtistIds = newExcludeArtistIds;
}

bool GetItemsParams::excludeArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeArtistIds.size() == 0;
}

void GetItemsParams::setExcludeArtistIdsNull() {
	m_excludeArtistIds.clear();
}


const QStringList &GetItemsParams::excludeItemIds() const {
	return m_excludeItemIds;
}

void GetItemsParams::setExcludeItemIds(QStringList newExcludeItemIds)  {
	m_excludeItemIds = newExcludeItemIds;
}

bool GetItemsParams::excludeItemIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemIds.size() == 0;
}

void GetItemsParams::setExcludeItemIdsNull() {
	m_excludeItemIds.clear();
}


const QStringList &GetItemsParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetItemsParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetItemsParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetItemsParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<LocationType> &GetItemsParams::excludeLocationTypes() const {
	return m_excludeLocationTypes;
}

void GetItemsParams::setExcludeLocationTypes(QList<LocationType> newExcludeLocationTypes)  {
	m_excludeLocationTypes = newExcludeLocationTypes;
}

bool GetItemsParams::excludeLocationTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeLocationTypes.size() == 0;
}

void GetItemsParams::setExcludeLocationTypesNull() {
	m_excludeLocationTypes.clear();
}


const QList<ItemFields> &GetItemsParams::fields() const {
	return m_fields;
}

void GetItemsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetItemsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetItemsParams::setFieldsNull() {
	m_fields.clear();
}


const QList<ItemFilter> &GetItemsParams::filters() const {
	return m_filters;
}

void GetItemsParams::setFilters(QList<ItemFilter> newFilters)  {
	m_filters = newFilters;
}

bool GetItemsParams::filtersNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_filters.size() == 0;
}

void GetItemsParams::setFiltersNull() {
	m_filters.clear();
}


const QStringList &GetItemsParams::genreIds() const {
	return m_genreIds;
}

void GetItemsParams::setGenreIds(QStringList newGenreIds)  {
	m_genreIds = newGenreIds;
}

bool GetItemsParams::genreIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genreIds.size() == 0;
}

void GetItemsParams::setGenreIdsNull() {
	m_genreIds.clear();
}


const QStringList &GetItemsParams::genres() const {
	return m_genres;
}

void GetItemsParams::setGenres(QStringList newGenres)  {
	m_genres = newGenres;
}

bool GetItemsParams::genresNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genres.size() == 0;
}

void GetItemsParams::setGenresNull() {
	m_genres.clear();
}


const bool &GetItemsParams::hasImdbId() const {
	return m_hasImdbId.value();
}

void GetItemsParams::setHasImdbId(bool newHasImdbId)  {
	m_hasImdbId = newHasImdbId;
}

bool GetItemsParams::hasImdbIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasImdbId.has_value();
}

void GetItemsParams::setHasImdbIdNull() {
	m_hasImdbId = std::nullopt;
}


const bool &GetItemsParams::hasOfficialRating() const {
	return m_hasOfficialRating.value();
}

void GetItemsParams::setHasOfficialRating(bool newHasOfficialRating)  {
	m_hasOfficialRating = newHasOfficialRating;
}

bool GetItemsParams::hasOfficialRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasOfficialRating.has_value();
}

void GetItemsParams::setHasOfficialRatingNull() {
	m_hasOfficialRating = std::nullopt;
}


const bool &GetItemsParams::hasOverview() const {
	return m_hasOverview.value();
}

void GetItemsParams::setHasOverview(bool newHasOverview)  {
	m_hasOverview = newHasOverview;
}

bool GetItemsParams::hasOverviewNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasOverview.has_value();
}

void GetItemsParams::setHasOverviewNull() {
	m_hasOverview = std::nullopt;
}


const bool &GetItemsParams::hasParentalRating() const {
	return m_hasParentalRating.value();
}

void GetItemsParams::setHasParentalRating(bool newHasParentalRating)  {
	m_hasParentalRating = newHasParentalRating;
}

bool GetItemsParams::hasParentalRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasParentalRating.has_value();
}

void GetItemsParams::setHasParentalRatingNull() {
	m_hasParentalRating = std::nullopt;
}


const bool &GetItemsParams::hasSpecialFeature() const {
	return m_hasSpecialFeature.value();
}

void GetItemsParams::setHasSpecialFeature(bool newHasSpecialFeature)  {
	m_hasSpecialFeature = newHasSpecialFeature;
}

bool GetItemsParams::hasSpecialFeatureNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasSpecialFeature.has_value();
}

void GetItemsParams::setHasSpecialFeatureNull() {
	m_hasSpecialFeature = std::nullopt;
}


const bool &GetItemsParams::hasSubtitles() const {
	return m_hasSubtitles.value();
}

void GetItemsParams::setHasSubtitles(bool newHasSubtitles)  {
	m_hasSubtitles = newHasSubtitles;
}

bool GetItemsParams::hasSubtitlesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasSubtitles.has_value();
}

void GetItemsParams::setHasSubtitlesNull() {
	m_hasSubtitles = std::nullopt;
}


const bool &GetItemsParams::hasThemeSong() const {
	return m_hasThemeSong.value();
}

void GetItemsParams::setHasThemeSong(bool newHasThemeSong)  {
	m_hasThemeSong = newHasThemeSong;
}

bool GetItemsParams::hasThemeSongNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasThemeSong.has_value();
}

void GetItemsParams::setHasThemeSongNull() {
	m_hasThemeSong = std::nullopt;
}


const bool &GetItemsParams::hasThemeVideo() const {
	return m_hasThemeVideo.value();
}

void GetItemsParams::setHasThemeVideo(bool newHasThemeVideo)  {
	m_hasThemeVideo = newHasThemeVideo;
}

bool GetItemsParams::hasThemeVideoNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasThemeVideo.has_value();
}

void GetItemsParams::setHasThemeVideoNull() {
	m_hasThemeVideo = std::nullopt;
}


const bool &GetItemsParams::hasTmdbId() const {
	return m_hasTmdbId.value();
}

void GetItemsParams::setHasTmdbId(bool newHasTmdbId)  {
	m_hasTmdbId = newHasTmdbId;
}

bool GetItemsParams::hasTmdbIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasTmdbId.has_value();
}

void GetItemsParams::setHasTmdbIdNull() {
	m_hasTmdbId = std::nullopt;
}


const bool &GetItemsParams::hasTrailer() const {
	return m_hasTrailer.value();
}

void GetItemsParams::setHasTrailer(bool newHasTrailer)  {
	m_hasTrailer = newHasTrailer;
}

bool GetItemsParams::hasTrailerNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasTrailer.has_value();
}

void GetItemsParams::setHasTrailerNull() {
	m_hasTrailer = std::nullopt;
}


const bool &GetItemsParams::hasTvdbId() const {
	return m_hasTvdbId.value();
}

void GetItemsParams::setHasTvdbId(bool newHasTvdbId)  {
	m_hasTvdbId = newHasTvdbId;
}

bool GetItemsParams::hasTvdbIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasTvdbId.has_value();
}

void GetItemsParams::setHasTvdbIdNull() {
	m_hasTvdbId = std::nullopt;
}


const QStringList &GetItemsParams::ids() const {
	return m_ids;
}

void GetItemsParams::setIds(QStringList newIds)  {
	m_ids = newIds;
}

bool GetItemsParams::idsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_ids.size() == 0;
}

void GetItemsParams::setIdsNull() {
	m_ids.clear();
}


const qint32 &GetItemsParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetItemsParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetItemsParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetItemsParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QList<ImageType> &GetItemsParams::imageTypes() const {
	return m_imageTypes;
}

void GetItemsParams::setImageTypes(QList<ImageType> newImageTypes)  {
	m_imageTypes = newImageTypes;
}

bool GetItemsParams::imageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_imageTypes.size() == 0;
}

void GetItemsParams::setImageTypesNull() {
	m_imageTypes.clear();
}


const QStringList &GetItemsParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetItemsParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetItemsParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetItemsParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetItemsParams::is3D() const {
	return m_is3D.value();
}

void GetItemsParams::setIs3D(bool newIs3D)  {
	m_is3D = newIs3D;
}

bool GetItemsParams::is3DNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_is3D.has_value();
}

void GetItemsParams::setIs3DNull() {
	m_is3D = std::nullopt;
}


const bool &GetItemsParams::is4K() const {
	return m_is4K.value();
}

void GetItemsParams::setIs4K(bool newIs4K)  {
	m_is4K = newIs4K;
}

bool GetItemsParams::is4KNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_is4K.has_value();
}

void GetItemsParams::setIs4KNull() {
	m_is4K = std::nullopt;
}


const bool &GetItemsParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetItemsParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetItemsParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetItemsParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const bool &GetItemsParams::isHd() const {
	return m_isHd.value();
}

void GetItemsParams::setIsHd(bool newIsHd)  {
	m_isHd = newIsHd;
}

bool GetItemsParams::isHdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isHd.has_value();
}

void GetItemsParams::setIsHdNull() {
	m_isHd = std::nullopt;
}


const bool &GetItemsParams::isLocked() const {
	return m_isLocked.value();
}

void GetItemsParams::setIsLocked(bool newIsLocked)  {
	m_isLocked = newIsLocked;
}

bool GetItemsParams::isLockedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isLocked.has_value();
}

void GetItemsParams::setIsLockedNull() {
	m_isLocked = std::nullopt;
}


const bool &GetItemsParams::isMissing() const {
	return m_isMissing.value();
}

void GetItemsParams::setIsMissing(bool newIsMissing)  {
	m_isMissing = newIsMissing;
}

bool GetItemsParams::isMissingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMissing.has_value();
}

void GetItemsParams::setIsMissingNull() {
	m_isMissing = std::nullopt;
}


const bool &GetItemsParams::isPlaceHolder() const {
	return m_isPlaceHolder.value();
}

void GetItemsParams::setIsPlaceHolder(bool newIsPlaceHolder)  {
	m_isPlaceHolder = newIsPlaceHolder;
}

bool GetItemsParams::isPlaceHolderNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isPlaceHolder.has_value();
}

void GetItemsParams::setIsPlaceHolderNull() {
	m_isPlaceHolder = std::nullopt;
}


const bool &GetItemsParams::isPlayed() const {
	return m_isPlayed.value();
}

void GetItemsParams::setIsPlayed(bool newIsPlayed)  {
	m_isPlayed = newIsPlayed;
}

bool GetItemsParams::isPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isPlayed.has_value();
}

void GetItemsParams::setIsPlayedNull() {
	m_isPlayed = std::nullopt;
}


const bool &GetItemsParams::isUnaired() const {
	return m_isUnaired.value();
}

void GetItemsParams::setIsUnaired(bool newIsUnaired)  {
	m_isUnaired = newIsUnaired;
}

bool GetItemsParams::isUnairedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isUnaired.has_value();
}

void GetItemsParams::setIsUnairedNull() {
	m_isUnaired = std::nullopt;
}


const qint32 &GetItemsParams::limit() const {
	return m_limit.value();
}

void GetItemsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetItemsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetItemsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QList<LocationType> &GetItemsParams::locationTypes() const {
	return m_locationTypes;
}

void GetItemsParams::setLocationTypes(QList<LocationType> newLocationTypes)  {
	m_locationTypes = newLocationTypes;
}

bool GetItemsParams::locationTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_locationTypes.size() == 0;
}

void GetItemsParams::setLocationTypesNull() {
	m_locationTypes.clear();
}


const qint32 &GetItemsParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetItemsParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetItemsParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetItemsParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const QString &GetItemsParams::maxOfficialRating() const {
	return m_maxOfficialRating;
}

void GetItemsParams::setMaxOfficialRating(QString newMaxOfficialRating)  {
	m_maxOfficialRating = newMaxOfficialRating;
}

bool GetItemsParams::maxOfficialRatingNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_maxOfficialRating.isNull();
}

void GetItemsParams::setMaxOfficialRatingNull() {
	m_maxOfficialRating.clear();
}


const QDateTime &GetItemsParams::maxPremiereDate() const {
	return m_maxPremiereDate;
}

void GetItemsParams::setMaxPremiereDate(QDateTime newMaxPremiereDate)  {
	m_maxPremiereDate = newMaxPremiereDate;
}

bool GetItemsParams::maxPremiereDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_maxPremiereDate.isNull();
}

void GetItemsParams::setMaxPremiereDateNull() {
	m_maxPremiereDate= QDateTime();
}


const qint32 &GetItemsParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetItemsParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetItemsParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetItemsParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const QStringList &GetItemsParams::mediaTypes() const {
	return m_mediaTypes;
}

void GetItemsParams::setMediaTypes(QStringList newMediaTypes)  {
	m_mediaTypes = newMediaTypes;
}

bool GetItemsParams::mediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaTypes.size() == 0;
}

void GetItemsParams::setMediaTypesNull() {
	m_mediaTypes.clear();
}


const double &GetItemsParams::minCommunityRating() const {
	return m_minCommunityRating.value();
}

void GetItemsParams::setMinCommunityRating(double newMinCommunityRating)  {
	m_minCommunityRating = newMinCommunityRating;
}

bool GetItemsParams::minCommunityRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minCommunityRating.has_value();
}

void GetItemsParams::setMinCommunityRatingNull() {
	m_minCommunityRating = std::nullopt;
}


const double &GetItemsParams::minCriticRating() const {
	return m_minCriticRating.value();
}

void GetItemsParams::setMinCriticRating(double newMinCriticRating)  {
	m_minCriticRating = newMinCriticRating;
}

bool GetItemsParams::minCriticRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minCriticRating.has_value();
}

void GetItemsParams::setMinCriticRatingNull() {
	m_minCriticRating = std::nullopt;
}


const QDateTime &GetItemsParams::minDateLastSaved() const {
	return m_minDateLastSaved;
}

void GetItemsParams::setMinDateLastSaved(QDateTime newMinDateLastSaved)  {
	m_minDateLastSaved = newMinDateLastSaved;
}

bool GetItemsParams::minDateLastSavedNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minDateLastSaved.isNull();
}

void GetItemsParams::setMinDateLastSavedNull() {
	m_minDateLastSaved= QDateTime();
}


const QDateTime &GetItemsParams::minDateLastSavedForUser() const {
	return m_minDateLastSavedForUser;
}

void GetItemsParams::setMinDateLastSavedForUser(QDateTime newMinDateLastSavedForUser)  {
	m_minDateLastSavedForUser = newMinDateLastSavedForUser;
}

bool GetItemsParams::minDateLastSavedForUserNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minDateLastSavedForUser.isNull();
}

void GetItemsParams::setMinDateLastSavedForUserNull() {
	m_minDateLastSavedForUser= QDateTime();
}


const qint32 &GetItemsParams::minHeight() const {
	return m_minHeight.value();
}

void GetItemsParams::setMinHeight(qint32 newMinHeight)  {
	m_minHeight = newMinHeight;
}

bool GetItemsParams::minHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minHeight.has_value();
}

void GetItemsParams::setMinHeightNull() {
	m_minHeight = std::nullopt;
}


const QString &GetItemsParams::minOfficialRating() const {
	return m_minOfficialRating;
}

void GetItemsParams::setMinOfficialRating(QString newMinOfficialRating)  {
	m_minOfficialRating = newMinOfficialRating;
}

bool GetItemsParams::minOfficialRatingNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minOfficialRating.isNull();
}

void GetItemsParams::setMinOfficialRatingNull() {
	m_minOfficialRating.clear();
}


const QDateTime &GetItemsParams::minPremiereDate() const {
	return m_minPremiereDate;
}

void GetItemsParams::setMinPremiereDate(QDateTime newMinPremiereDate)  {
	m_minPremiereDate = newMinPremiereDate;
}

bool GetItemsParams::minPremiereDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minPremiereDate.isNull();
}

void GetItemsParams::setMinPremiereDateNull() {
	m_minPremiereDate= QDateTime();
}


const qint32 &GetItemsParams::minWidth() const {
	return m_minWidth.value();
}

void GetItemsParams::setMinWidth(qint32 newMinWidth)  {
	m_minWidth = newMinWidth;
}

bool GetItemsParams::minWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minWidth.has_value();
}

void GetItemsParams::setMinWidthNull() {
	m_minWidth = std::nullopt;
}


const QString &GetItemsParams::nameLessThan() const {
	return m_nameLessThan;
}

void GetItemsParams::setNameLessThan(QString newNameLessThan)  {
	m_nameLessThan = newNameLessThan;
}

bool GetItemsParams::nameLessThanNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameLessThan.isNull();
}

void GetItemsParams::setNameLessThanNull() {
	m_nameLessThan.clear();
}


const QString &GetItemsParams::nameStartsWith() const {
	return m_nameStartsWith;
}

void GetItemsParams::setNameStartsWith(QString newNameStartsWith)  {
	m_nameStartsWith = newNameStartsWith;
}

bool GetItemsParams::nameStartsWithNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWith.isNull();
}

void GetItemsParams::setNameStartsWithNull() {
	m_nameStartsWith.clear();
}


const QString &GetItemsParams::nameStartsWithOrGreater() const {
	return m_nameStartsWithOrGreater;
}

void GetItemsParams::setNameStartsWithOrGreater(QString newNameStartsWithOrGreater)  {
	m_nameStartsWithOrGreater = newNameStartsWithOrGreater;
}

bool GetItemsParams::nameStartsWithOrGreaterNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWithOrGreater.isNull();
}

void GetItemsParams::setNameStartsWithOrGreaterNull() {
	m_nameStartsWithOrGreater.clear();
}


const QStringList &GetItemsParams::officialRatings() const {
	return m_officialRatings;
}

void GetItemsParams::setOfficialRatings(QStringList newOfficialRatings)  {
	m_officialRatings = newOfficialRatings;
}

bool GetItemsParams::officialRatingsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_officialRatings.size() == 0;
}

void GetItemsParams::setOfficialRatingsNull() {
	m_officialRatings.clear();
}


const QString &GetItemsParams::parentId() const {
	return m_parentId;
}

void GetItemsParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetItemsParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetItemsParams::setParentIdNull() {
	m_parentId.clear();
}


const qint32 &GetItemsParams::parentIndexNumber() const {
	return m_parentIndexNumber.value();
}

void GetItemsParams::setParentIndexNumber(qint32 newParentIndexNumber)  {
	m_parentIndexNumber = newParentIndexNumber;
}

bool GetItemsParams::parentIndexNumberNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_parentIndexNumber.has_value();
}

void GetItemsParams::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;
}


const QString &GetItemsParams::person() const {
	return m_person;
}

void GetItemsParams::setPerson(QString newPerson)  {
	m_person = newPerson;
}

bool GetItemsParams::personNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_person.isNull();
}

void GetItemsParams::setPersonNull() {
	m_person.clear();
}


const QStringList &GetItemsParams::personIds() const {
	return m_personIds;
}

void GetItemsParams::setPersonIds(QStringList newPersonIds)  {
	m_personIds = newPersonIds;
}

bool GetItemsParams::personIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personIds.size() == 0;
}

void GetItemsParams::setPersonIdsNull() {
	m_personIds.clear();
}


const QStringList &GetItemsParams::personTypes() const {
	return m_personTypes;
}

void GetItemsParams::setPersonTypes(QStringList newPersonTypes)  {
	m_personTypes = newPersonTypes;
}

bool GetItemsParams::personTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personTypes.size() == 0;
}

void GetItemsParams::setPersonTypesNull() {
	m_personTypes.clear();
}


const bool &GetItemsParams::recursive() const {
	return m_recursive.value();
}

void GetItemsParams::setRecursive(bool newRecursive)  {
	m_recursive = newRecursive;
}

bool GetItemsParams::recursiveNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_recursive.has_value();
}

void GetItemsParams::setRecursiveNull() {
	m_recursive = std::nullopt;
}


const QString &GetItemsParams::searchTerm() const {
	return m_searchTerm;
}

void GetItemsParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetItemsParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetItemsParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const QList<SeriesStatus> &GetItemsParams::seriesStatus() const {
	return m_seriesStatus;
}

void GetItemsParams::setSeriesStatus(QList<SeriesStatus> newSeriesStatus)  {
	m_seriesStatus = newSeriesStatus;
}

bool GetItemsParams::seriesStatusNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_seriesStatus.size() == 0;
}

void GetItemsParams::setSeriesStatusNull() {
	m_seriesStatus.clear();
}


const QString &GetItemsParams::sortBy() const {
	return m_sortBy;
}

void GetItemsParams::setSortBy(QString newSortBy)  {
	m_sortBy = newSortBy;
}

bool GetItemsParams::sortByNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortBy.isNull();
}

void GetItemsParams::setSortByNull() {
	m_sortBy.clear();
}


const QString &GetItemsParams::sortOrder() const {
	return m_sortOrder;
}

void GetItemsParams::setSortOrder(QString newSortOrder)  {
	m_sortOrder = newSortOrder;
}

bool GetItemsParams::sortOrderNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortOrder.isNull();
}

void GetItemsParams::setSortOrderNull() {
	m_sortOrder.clear();
}


const qint32 &GetItemsParams::startIndex() const {
	return m_startIndex.value();
}

void GetItemsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetItemsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetItemsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QStringList &GetItemsParams::studioIds() const {
	return m_studioIds;
}

void GetItemsParams::setStudioIds(QStringList newStudioIds)  {
	m_studioIds = newStudioIds;
}

bool GetItemsParams::studioIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studioIds.size() == 0;
}

void GetItemsParams::setStudioIdsNull() {
	m_studioIds.clear();
}


const QStringList &GetItemsParams::studios() const {
	return m_studios;
}

void GetItemsParams::setStudios(QStringList newStudios)  {
	m_studios = newStudios;
}

bool GetItemsParams::studiosNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studios.size() == 0;
}

void GetItemsParams::setStudiosNull() {
	m_studios.clear();
}


const QStringList &GetItemsParams::tags() const {
	return m_tags;
}

void GetItemsParams::setTags(QStringList newTags)  {
	m_tags = newTags;
}

bool GetItemsParams::tagsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tags.size() == 0;
}

void GetItemsParams::setTagsNull() {
	m_tags.clear();
}


const QString &GetItemsParams::userId() const {
	return m_userId;
}

void GetItemsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetItemsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetItemsParams::setUserIdNull() {
	m_userId.clear();
}


const QList<VideoType> &GetItemsParams::videoTypes() const {
	return m_videoTypes;
}

void GetItemsParams::setVideoTypes(QList<VideoType> newVideoTypes)  {
	m_videoTypes = newVideoTypes;
}

bool GetItemsParams::videoTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoTypes.size() == 0;
}

void GetItemsParams::setVideoTypesNull() {
	m_videoTypes.clear();
}


const QList<qint32> &GetItemsParams::years() const {
	return m_years;
}

void GetItemsParams::setYears(QList<qint32> newYears)  {
	m_years = newYears;
}

bool GetItemsParams::yearsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_years.size() == 0;
}

void GetItemsParams::setYearsNull() {
	m_years.clear();
}



} // NS Loader
} // NS Jellyfin
