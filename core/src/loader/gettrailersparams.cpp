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

#include "JellyfinQt/loader/gettrailersparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetTrailersParams

const QString &GetTrailersParams::adjacentTo() const {
	return m_adjacentTo;
}

void GetTrailersParams::setAdjacentTo(QString newAdjacentTo)  {
	m_adjacentTo = newAdjacentTo;
}

bool GetTrailersParams::adjacentToNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_adjacentTo.isNull();
}

void GetTrailersParams::setAdjacentToNull() {
	m_adjacentTo.clear();
}


const QStringList &GetTrailersParams::albumArtistIds() const {
	return m_albumArtistIds;
}

void GetTrailersParams::setAlbumArtistIds(QStringList newAlbumArtistIds)  {
	m_albumArtistIds = newAlbumArtistIds;
}

bool GetTrailersParams::albumArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_albumArtistIds.size() == 0;
}

void GetTrailersParams::setAlbumArtistIdsNull() {
	m_albumArtistIds.clear();
}


const QStringList &GetTrailersParams::albumIds() const {
	return m_albumIds;
}

void GetTrailersParams::setAlbumIds(QStringList newAlbumIds)  {
	m_albumIds = newAlbumIds;
}

bool GetTrailersParams::albumIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_albumIds.size() == 0;
}

void GetTrailersParams::setAlbumIdsNull() {
	m_albumIds.clear();
}


const QStringList &GetTrailersParams::albums() const {
	return m_albums;
}

void GetTrailersParams::setAlbums(QStringList newAlbums)  {
	m_albums = newAlbums;
}

bool GetTrailersParams::albumsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_albums.size() == 0;
}

void GetTrailersParams::setAlbumsNull() {
	m_albums.clear();
}


const QStringList &GetTrailersParams::artistIds() const {
	return m_artistIds;
}

void GetTrailersParams::setArtistIds(QStringList newArtistIds)  {
	m_artistIds = newArtistIds;
}

bool GetTrailersParams::artistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_artistIds.size() == 0;
}

void GetTrailersParams::setArtistIdsNull() {
	m_artistIds.clear();
}


const QStringList &GetTrailersParams::artists() const {
	return m_artists;
}

void GetTrailersParams::setArtists(QStringList newArtists)  {
	m_artists = newArtists;
}

bool GetTrailersParams::artistsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_artists.size() == 0;
}

void GetTrailersParams::setArtistsNull() {
	m_artists.clear();
}


const bool &GetTrailersParams::collapseBoxSetItems() const {
	return m_collapseBoxSetItems.value();
}

void GetTrailersParams::setCollapseBoxSetItems(bool newCollapseBoxSetItems)  {
	m_collapseBoxSetItems = newCollapseBoxSetItems;
}

bool GetTrailersParams::collapseBoxSetItemsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_collapseBoxSetItems.has_value();
}

void GetTrailersParams::setCollapseBoxSetItemsNull() {
	m_collapseBoxSetItems = std::nullopt;
}


const QStringList &GetTrailersParams::contributingArtistIds() const {
	return m_contributingArtistIds;
}

void GetTrailersParams::setContributingArtistIds(QStringList newContributingArtistIds)  {
	m_contributingArtistIds = newContributingArtistIds;
}

bool GetTrailersParams::contributingArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_contributingArtistIds.size() == 0;
}

void GetTrailersParams::setContributingArtistIdsNull() {
	m_contributingArtistIds.clear();
}


const QList<ImageType> &GetTrailersParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetTrailersParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetTrailersParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetTrailersParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetTrailersParams::enableImages() const {
	return m_enableImages.value();
}

void GetTrailersParams::setEnableImages(bool newEnableImages)  {
	m_enableImages = newEnableImages;
}

bool GetTrailersParams::enableImagesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImages.has_value();
}

void GetTrailersParams::setEnableImagesNull() {
	m_enableImages = std::nullopt;
}


const bool &GetTrailersParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetTrailersParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetTrailersParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetTrailersParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const bool &GetTrailersParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetTrailersParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetTrailersParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetTrailersParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QStringList &GetTrailersParams::excludeArtistIds() const {
	return m_excludeArtistIds;
}

void GetTrailersParams::setExcludeArtistIds(QStringList newExcludeArtistIds)  {
	m_excludeArtistIds = newExcludeArtistIds;
}

bool GetTrailersParams::excludeArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeArtistIds.size() == 0;
}

void GetTrailersParams::setExcludeArtistIdsNull() {
	m_excludeArtistIds.clear();
}


const QStringList &GetTrailersParams::excludeItemIds() const {
	return m_excludeItemIds;
}

void GetTrailersParams::setExcludeItemIds(QStringList newExcludeItemIds)  {
	m_excludeItemIds = newExcludeItemIds;
}

bool GetTrailersParams::excludeItemIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemIds.size() == 0;
}

void GetTrailersParams::setExcludeItemIdsNull() {
	m_excludeItemIds.clear();
}


const QStringList &GetTrailersParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetTrailersParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetTrailersParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetTrailersParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const QList<LocationType> &GetTrailersParams::excludeLocationTypes() const {
	return m_excludeLocationTypes;
}

void GetTrailersParams::setExcludeLocationTypes(QList<LocationType> newExcludeLocationTypes)  {
	m_excludeLocationTypes = newExcludeLocationTypes;
}

bool GetTrailersParams::excludeLocationTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeLocationTypes.size() == 0;
}

void GetTrailersParams::setExcludeLocationTypesNull() {
	m_excludeLocationTypes.clear();
}


const QList<ItemFields> &GetTrailersParams::fields() const {
	return m_fields;
}

void GetTrailersParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetTrailersParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetTrailersParams::setFieldsNull() {
	m_fields.clear();
}


const QList<ItemFilter> &GetTrailersParams::filters() const {
	return m_filters;
}

void GetTrailersParams::setFilters(QList<ItemFilter> newFilters)  {
	m_filters = newFilters;
}

bool GetTrailersParams::filtersNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_filters.size() == 0;
}

void GetTrailersParams::setFiltersNull() {
	m_filters.clear();
}


const QStringList &GetTrailersParams::genreIds() const {
	return m_genreIds;
}

void GetTrailersParams::setGenreIds(QStringList newGenreIds)  {
	m_genreIds = newGenreIds;
}

bool GetTrailersParams::genreIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genreIds.size() == 0;
}

void GetTrailersParams::setGenreIdsNull() {
	m_genreIds.clear();
}


const QStringList &GetTrailersParams::genres() const {
	return m_genres;
}

void GetTrailersParams::setGenres(QStringList newGenres)  {
	m_genres = newGenres;
}

bool GetTrailersParams::genresNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_genres.size() == 0;
}

void GetTrailersParams::setGenresNull() {
	m_genres.clear();
}


const bool &GetTrailersParams::hasImdbId() const {
	return m_hasImdbId.value();
}

void GetTrailersParams::setHasImdbId(bool newHasImdbId)  {
	m_hasImdbId = newHasImdbId;
}

bool GetTrailersParams::hasImdbIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasImdbId.has_value();
}

void GetTrailersParams::setHasImdbIdNull() {
	m_hasImdbId = std::nullopt;
}


const bool &GetTrailersParams::hasOfficialRating() const {
	return m_hasOfficialRating.value();
}

void GetTrailersParams::setHasOfficialRating(bool newHasOfficialRating)  {
	m_hasOfficialRating = newHasOfficialRating;
}

bool GetTrailersParams::hasOfficialRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasOfficialRating.has_value();
}

void GetTrailersParams::setHasOfficialRatingNull() {
	m_hasOfficialRating = std::nullopt;
}


const bool &GetTrailersParams::hasOverview() const {
	return m_hasOverview.value();
}

void GetTrailersParams::setHasOverview(bool newHasOverview)  {
	m_hasOverview = newHasOverview;
}

bool GetTrailersParams::hasOverviewNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasOverview.has_value();
}

void GetTrailersParams::setHasOverviewNull() {
	m_hasOverview = std::nullopt;
}


const bool &GetTrailersParams::hasParentalRating() const {
	return m_hasParentalRating.value();
}

void GetTrailersParams::setHasParentalRating(bool newHasParentalRating)  {
	m_hasParentalRating = newHasParentalRating;
}

bool GetTrailersParams::hasParentalRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasParentalRating.has_value();
}

void GetTrailersParams::setHasParentalRatingNull() {
	m_hasParentalRating = std::nullopt;
}


const bool &GetTrailersParams::hasSpecialFeature() const {
	return m_hasSpecialFeature.value();
}

void GetTrailersParams::setHasSpecialFeature(bool newHasSpecialFeature)  {
	m_hasSpecialFeature = newHasSpecialFeature;
}

bool GetTrailersParams::hasSpecialFeatureNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasSpecialFeature.has_value();
}

void GetTrailersParams::setHasSpecialFeatureNull() {
	m_hasSpecialFeature = std::nullopt;
}


const bool &GetTrailersParams::hasSubtitles() const {
	return m_hasSubtitles.value();
}

void GetTrailersParams::setHasSubtitles(bool newHasSubtitles)  {
	m_hasSubtitles = newHasSubtitles;
}

bool GetTrailersParams::hasSubtitlesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasSubtitles.has_value();
}

void GetTrailersParams::setHasSubtitlesNull() {
	m_hasSubtitles = std::nullopt;
}


const bool &GetTrailersParams::hasThemeSong() const {
	return m_hasThemeSong.value();
}

void GetTrailersParams::setHasThemeSong(bool newHasThemeSong)  {
	m_hasThemeSong = newHasThemeSong;
}

bool GetTrailersParams::hasThemeSongNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasThemeSong.has_value();
}

void GetTrailersParams::setHasThemeSongNull() {
	m_hasThemeSong = std::nullopt;
}


const bool &GetTrailersParams::hasThemeVideo() const {
	return m_hasThemeVideo.value();
}

void GetTrailersParams::setHasThemeVideo(bool newHasThemeVideo)  {
	m_hasThemeVideo = newHasThemeVideo;
}

bool GetTrailersParams::hasThemeVideoNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasThemeVideo.has_value();
}

void GetTrailersParams::setHasThemeVideoNull() {
	m_hasThemeVideo = std::nullopt;
}


const bool &GetTrailersParams::hasTmdbId() const {
	return m_hasTmdbId.value();
}

void GetTrailersParams::setHasTmdbId(bool newHasTmdbId)  {
	m_hasTmdbId = newHasTmdbId;
}

bool GetTrailersParams::hasTmdbIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasTmdbId.has_value();
}

void GetTrailersParams::setHasTmdbIdNull() {
	m_hasTmdbId = std::nullopt;
}


const bool &GetTrailersParams::hasTrailer() const {
	return m_hasTrailer.value();
}

void GetTrailersParams::setHasTrailer(bool newHasTrailer)  {
	m_hasTrailer = newHasTrailer;
}

bool GetTrailersParams::hasTrailerNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasTrailer.has_value();
}

void GetTrailersParams::setHasTrailerNull() {
	m_hasTrailer = std::nullopt;
}


const bool &GetTrailersParams::hasTvdbId() const {
	return m_hasTvdbId.value();
}

void GetTrailersParams::setHasTvdbId(bool newHasTvdbId)  {
	m_hasTvdbId = newHasTvdbId;
}

bool GetTrailersParams::hasTvdbIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasTvdbId.has_value();
}

void GetTrailersParams::setHasTvdbIdNull() {
	m_hasTvdbId = std::nullopt;
}


const QStringList &GetTrailersParams::ids() const {
	return m_ids;
}

void GetTrailersParams::setIds(QStringList newIds)  {
	m_ids = newIds;
}

bool GetTrailersParams::idsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_ids.size() == 0;
}

void GetTrailersParams::setIdsNull() {
	m_ids.clear();
}


const qint32 &GetTrailersParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetTrailersParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetTrailersParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetTrailersParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const QList<ImageType> &GetTrailersParams::imageTypes() const {
	return m_imageTypes;
}

void GetTrailersParams::setImageTypes(QList<ImageType> newImageTypes)  {
	m_imageTypes = newImageTypes;
}

bool GetTrailersParams::imageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_imageTypes.size() == 0;
}

void GetTrailersParams::setImageTypesNull() {
	m_imageTypes.clear();
}


const bool &GetTrailersParams::is3D() const {
	return m_is3D.value();
}

void GetTrailersParams::setIs3D(bool newIs3D)  {
	m_is3D = newIs3D;
}

bool GetTrailersParams::is3DNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_is3D.has_value();
}

void GetTrailersParams::setIs3DNull() {
	m_is3D = std::nullopt;
}


const bool &GetTrailersParams::is4K() const {
	return m_is4K.value();
}

void GetTrailersParams::setIs4K(bool newIs4K)  {
	m_is4K = newIs4K;
}

bool GetTrailersParams::is4KNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_is4K.has_value();
}

void GetTrailersParams::setIs4KNull() {
	m_is4K = std::nullopt;
}


const bool &GetTrailersParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetTrailersParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetTrailersParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetTrailersParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const bool &GetTrailersParams::isHd() const {
	return m_isHd.value();
}

void GetTrailersParams::setIsHd(bool newIsHd)  {
	m_isHd = newIsHd;
}

bool GetTrailersParams::isHdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isHd.has_value();
}

void GetTrailersParams::setIsHdNull() {
	m_isHd = std::nullopt;
}


const bool &GetTrailersParams::isLocked() const {
	return m_isLocked.value();
}

void GetTrailersParams::setIsLocked(bool newIsLocked)  {
	m_isLocked = newIsLocked;
}

bool GetTrailersParams::isLockedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isLocked.has_value();
}

void GetTrailersParams::setIsLockedNull() {
	m_isLocked = std::nullopt;
}


const bool &GetTrailersParams::isMissing() const {
	return m_isMissing.value();
}

void GetTrailersParams::setIsMissing(bool newIsMissing)  {
	m_isMissing = newIsMissing;
}

bool GetTrailersParams::isMissingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMissing.has_value();
}

void GetTrailersParams::setIsMissingNull() {
	m_isMissing = std::nullopt;
}


const bool &GetTrailersParams::isPlaceHolder() const {
	return m_isPlaceHolder.value();
}

void GetTrailersParams::setIsPlaceHolder(bool newIsPlaceHolder)  {
	m_isPlaceHolder = newIsPlaceHolder;
}

bool GetTrailersParams::isPlaceHolderNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isPlaceHolder.has_value();
}

void GetTrailersParams::setIsPlaceHolderNull() {
	m_isPlaceHolder = std::nullopt;
}


const bool &GetTrailersParams::isPlayed() const {
	return m_isPlayed.value();
}

void GetTrailersParams::setIsPlayed(bool newIsPlayed)  {
	m_isPlayed = newIsPlayed;
}

bool GetTrailersParams::isPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isPlayed.has_value();
}

void GetTrailersParams::setIsPlayedNull() {
	m_isPlayed = std::nullopt;
}


const bool &GetTrailersParams::isUnaired() const {
	return m_isUnaired.value();
}

void GetTrailersParams::setIsUnaired(bool newIsUnaired)  {
	m_isUnaired = newIsUnaired;
}

bool GetTrailersParams::isUnairedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isUnaired.has_value();
}

void GetTrailersParams::setIsUnairedNull() {
	m_isUnaired = std::nullopt;
}


const qint32 &GetTrailersParams::limit() const {
	return m_limit.value();
}

void GetTrailersParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetTrailersParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetTrailersParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QList<LocationType> &GetTrailersParams::locationTypes() const {
	return m_locationTypes;
}

void GetTrailersParams::setLocationTypes(QList<LocationType> newLocationTypes)  {
	m_locationTypes = newLocationTypes;
}

bool GetTrailersParams::locationTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_locationTypes.size() == 0;
}

void GetTrailersParams::setLocationTypesNull() {
	m_locationTypes.clear();
}


const qint32 &GetTrailersParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetTrailersParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetTrailersParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetTrailersParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const QString &GetTrailersParams::maxOfficialRating() const {
	return m_maxOfficialRating;
}

void GetTrailersParams::setMaxOfficialRating(QString newMaxOfficialRating)  {
	m_maxOfficialRating = newMaxOfficialRating;
}

bool GetTrailersParams::maxOfficialRatingNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_maxOfficialRating.isNull();
}

void GetTrailersParams::setMaxOfficialRatingNull() {
	m_maxOfficialRating.clear();
}


const QDateTime &GetTrailersParams::maxPremiereDate() const {
	return m_maxPremiereDate;
}

void GetTrailersParams::setMaxPremiereDate(QDateTime newMaxPremiereDate)  {
	m_maxPremiereDate = newMaxPremiereDate;
}

bool GetTrailersParams::maxPremiereDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_maxPremiereDate.isNull();
}

void GetTrailersParams::setMaxPremiereDateNull() {
	m_maxPremiereDate= QDateTime();
}


const qint32 &GetTrailersParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetTrailersParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetTrailersParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetTrailersParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const QStringList &GetTrailersParams::mediaTypes() const {
	return m_mediaTypes;
}

void GetTrailersParams::setMediaTypes(QStringList newMediaTypes)  {
	m_mediaTypes = newMediaTypes;
}

bool GetTrailersParams::mediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaTypes.size() == 0;
}

void GetTrailersParams::setMediaTypesNull() {
	m_mediaTypes.clear();
}


const double &GetTrailersParams::minCommunityRating() const {
	return m_minCommunityRating.value();
}

void GetTrailersParams::setMinCommunityRating(double newMinCommunityRating)  {
	m_minCommunityRating = newMinCommunityRating;
}

bool GetTrailersParams::minCommunityRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minCommunityRating.has_value();
}

void GetTrailersParams::setMinCommunityRatingNull() {
	m_minCommunityRating = std::nullopt;
}


const double &GetTrailersParams::minCriticRating() const {
	return m_minCriticRating.value();
}

void GetTrailersParams::setMinCriticRating(double newMinCriticRating)  {
	m_minCriticRating = newMinCriticRating;
}

bool GetTrailersParams::minCriticRatingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minCriticRating.has_value();
}

void GetTrailersParams::setMinCriticRatingNull() {
	m_minCriticRating = std::nullopt;
}


const QDateTime &GetTrailersParams::minDateLastSaved() const {
	return m_minDateLastSaved;
}

void GetTrailersParams::setMinDateLastSaved(QDateTime newMinDateLastSaved)  {
	m_minDateLastSaved = newMinDateLastSaved;
}

bool GetTrailersParams::minDateLastSavedNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minDateLastSaved.isNull();
}

void GetTrailersParams::setMinDateLastSavedNull() {
	m_minDateLastSaved= QDateTime();
}


const QDateTime &GetTrailersParams::minDateLastSavedForUser() const {
	return m_minDateLastSavedForUser;
}

void GetTrailersParams::setMinDateLastSavedForUser(QDateTime newMinDateLastSavedForUser)  {
	m_minDateLastSavedForUser = newMinDateLastSavedForUser;
}

bool GetTrailersParams::minDateLastSavedForUserNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minDateLastSavedForUser.isNull();
}

void GetTrailersParams::setMinDateLastSavedForUserNull() {
	m_minDateLastSavedForUser= QDateTime();
}


const qint32 &GetTrailersParams::minHeight() const {
	return m_minHeight.value();
}

void GetTrailersParams::setMinHeight(qint32 newMinHeight)  {
	m_minHeight = newMinHeight;
}

bool GetTrailersParams::minHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minHeight.has_value();
}

void GetTrailersParams::setMinHeightNull() {
	m_minHeight = std::nullopt;
}


const QString &GetTrailersParams::minOfficialRating() const {
	return m_minOfficialRating;
}

void GetTrailersParams::setMinOfficialRating(QString newMinOfficialRating)  {
	m_minOfficialRating = newMinOfficialRating;
}

bool GetTrailersParams::minOfficialRatingNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minOfficialRating.isNull();
}

void GetTrailersParams::setMinOfficialRatingNull() {
	m_minOfficialRating.clear();
}


const QDateTime &GetTrailersParams::minPremiereDate() const {
	return m_minPremiereDate;
}

void GetTrailersParams::setMinPremiereDate(QDateTime newMinPremiereDate)  {
	m_minPremiereDate = newMinPremiereDate;
}

bool GetTrailersParams::minPremiereDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minPremiereDate.isNull();
}

void GetTrailersParams::setMinPremiereDateNull() {
	m_minPremiereDate= QDateTime();
}


const qint32 &GetTrailersParams::minWidth() const {
	return m_minWidth.value();
}

void GetTrailersParams::setMinWidth(qint32 newMinWidth)  {
	m_minWidth = newMinWidth;
}

bool GetTrailersParams::minWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minWidth.has_value();
}

void GetTrailersParams::setMinWidthNull() {
	m_minWidth = std::nullopt;
}


const QString &GetTrailersParams::nameLessThan() const {
	return m_nameLessThan;
}

void GetTrailersParams::setNameLessThan(QString newNameLessThan)  {
	m_nameLessThan = newNameLessThan;
}

bool GetTrailersParams::nameLessThanNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameLessThan.isNull();
}

void GetTrailersParams::setNameLessThanNull() {
	m_nameLessThan.clear();
}


const QString &GetTrailersParams::nameStartsWith() const {
	return m_nameStartsWith;
}

void GetTrailersParams::setNameStartsWith(QString newNameStartsWith)  {
	m_nameStartsWith = newNameStartsWith;
}

bool GetTrailersParams::nameStartsWithNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWith.isNull();
}

void GetTrailersParams::setNameStartsWithNull() {
	m_nameStartsWith.clear();
}


const QString &GetTrailersParams::nameStartsWithOrGreater() const {
	return m_nameStartsWithOrGreater;
}

void GetTrailersParams::setNameStartsWithOrGreater(QString newNameStartsWithOrGreater)  {
	m_nameStartsWithOrGreater = newNameStartsWithOrGreater;
}

bool GetTrailersParams::nameStartsWithOrGreaterNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nameStartsWithOrGreater.isNull();
}

void GetTrailersParams::setNameStartsWithOrGreaterNull() {
	m_nameStartsWithOrGreater.clear();
}


const QStringList &GetTrailersParams::officialRatings() const {
	return m_officialRatings;
}

void GetTrailersParams::setOfficialRatings(QStringList newOfficialRatings)  {
	m_officialRatings = newOfficialRatings;
}

bool GetTrailersParams::officialRatingsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_officialRatings.size() == 0;
}

void GetTrailersParams::setOfficialRatingsNull() {
	m_officialRatings.clear();
}


const QString &GetTrailersParams::parentId() const {
	return m_parentId;
}

void GetTrailersParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetTrailersParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetTrailersParams::setParentIdNull() {
	m_parentId.clear();
}


const qint32 &GetTrailersParams::parentIndexNumber() const {
	return m_parentIndexNumber.value();
}

void GetTrailersParams::setParentIndexNumber(qint32 newParentIndexNumber)  {
	m_parentIndexNumber = newParentIndexNumber;
}

bool GetTrailersParams::parentIndexNumberNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_parentIndexNumber.has_value();
}

void GetTrailersParams::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;
}


const QString &GetTrailersParams::person() const {
	return m_person;
}

void GetTrailersParams::setPerson(QString newPerson)  {
	m_person = newPerson;
}

bool GetTrailersParams::personNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_person.isNull();
}

void GetTrailersParams::setPersonNull() {
	m_person.clear();
}


const QStringList &GetTrailersParams::personIds() const {
	return m_personIds;
}

void GetTrailersParams::setPersonIds(QStringList newPersonIds)  {
	m_personIds = newPersonIds;
}

bool GetTrailersParams::personIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personIds.size() == 0;
}

void GetTrailersParams::setPersonIdsNull() {
	m_personIds.clear();
}


const QStringList &GetTrailersParams::personTypes() const {
	return m_personTypes;
}

void GetTrailersParams::setPersonTypes(QStringList newPersonTypes)  {
	m_personTypes = newPersonTypes;
}

bool GetTrailersParams::personTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_personTypes.size() == 0;
}

void GetTrailersParams::setPersonTypesNull() {
	m_personTypes.clear();
}


const bool &GetTrailersParams::recursive() const {
	return m_recursive.value();
}

void GetTrailersParams::setRecursive(bool newRecursive)  {
	m_recursive = newRecursive;
}

bool GetTrailersParams::recursiveNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_recursive.has_value();
}

void GetTrailersParams::setRecursiveNull() {
	m_recursive = std::nullopt;
}


const QString &GetTrailersParams::searchTerm() const {
	return m_searchTerm;
}

void GetTrailersParams::setSearchTerm(QString newSearchTerm)  {
	m_searchTerm = newSearchTerm;
}

bool GetTrailersParams::searchTermNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_searchTerm.isNull();
}

void GetTrailersParams::setSearchTermNull() {
	m_searchTerm.clear();
}


const QList<SeriesStatus> &GetTrailersParams::seriesStatus() const {
	return m_seriesStatus;
}

void GetTrailersParams::setSeriesStatus(QList<SeriesStatus> newSeriesStatus)  {
	m_seriesStatus = newSeriesStatus;
}

bool GetTrailersParams::seriesStatusNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_seriesStatus.size() == 0;
}

void GetTrailersParams::setSeriesStatusNull() {
	m_seriesStatus.clear();
}


const QString &GetTrailersParams::sortBy() const {
	return m_sortBy;
}

void GetTrailersParams::setSortBy(QString newSortBy)  {
	m_sortBy = newSortBy;
}

bool GetTrailersParams::sortByNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortBy.isNull();
}

void GetTrailersParams::setSortByNull() {
	m_sortBy.clear();
}


const QString &GetTrailersParams::sortOrder() const {
	return m_sortOrder;
}

void GetTrailersParams::setSortOrder(QString newSortOrder)  {
	m_sortOrder = newSortOrder;
}

bool GetTrailersParams::sortOrderNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortOrder.isNull();
}

void GetTrailersParams::setSortOrderNull() {
	m_sortOrder.clear();
}


const qint32 &GetTrailersParams::startIndex() const {
	return m_startIndex.value();
}

void GetTrailersParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetTrailersParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetTrailersParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QStringList &GetTrailersParams::studioIds() const {
	return m_studioIds;
}

void GetTrailersParams::setStudioIds(QStringList newStudioIds)  {
	m_studioIds = newStudioIds;
}

bool GetTrailersParams::studioIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studioIds.size() == 0;
}

void GetTrailersParams::setStudioIdsNull() {
	m_studioIds.clear();
}


const QStringList &GetTrailersParams::studios() const {
	return m_studios;
}

void GetTrailersParams::setStudios(QStringList newStudios)  {
	m_studios = newStudios;
}

bool GetTrailersParams::studiosNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_studios.size() == 0;
}

void GetTrailersParams::setStudiosNull() {
	m_studios.clear();
}


const QStringList &GetTrailersParams::tags() const {
	return m_tags;
}

void GetTrailersParams::setTags(QStringList newTags)  {
	m_tags = newTags;
}

bool GetTrailersParams::tagsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tags.size() == 0;
}

void GetTrailersParams::setTagsNull() {
	m_tags.clear();
}


const QString &GetTrailersParams::userId() const {
	return m_userId;
}

void GetTrailersParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetTrailersParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetTrailersParams::setUserIdNull() {
	m_userId.clear();
}


const QList<VideoType> &GetTrailersParams::videoTypes() const {
	return m_videoTypes;
}

void GetTrailersParams::setVideoTypes(QList<VideoType> newVideoTypes)  {
	m_videoTypes = newVideoTypes;
}

bool GetTrailersParams::videoTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoTypes.size() == 0;
}

void GetTrailersParams::setVideoTypesNull() {
	m_videoTypes.clear();
}


const QList<qint32> &GetTrailersParams::years() const {
	return m_years;
}

void GetTrailersParams::setYears(QList<qint32> newYears)  {
	m_years = newYears;
}

bool GetTrailersParams::yearsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_years.size() == 0;
}

void GetTrailersParams::setYearsNull() {
	m_years.clear();
}



} // NS Loader
} // NS Jellyfin
