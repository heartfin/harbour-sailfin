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

#include <JellyfinQt/loader/http/items.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetItemsLoader::GetItemsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetItemsParams>(apiClient) {}

QString GetItemsLoader::path(const GetItemsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items");
}

QUrlQuery GetItemsLoader::query(const GetItemsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.maxOfficialRatingNull()) {
		result.addQueryItem("maxOfficialRating", Support::toString<QString>(params.maxOfficialRating()));
	}
	if (!params.hasThemeSongNull()) {
		result.addQueryItem("hasThemeSong", Support::toString<std::optional<bool>>(params.hasThemeSong()));
	}
	if (!params.hasThemeVideoNull()) {
		result.addQueryItem("hasThemeVideo", Support::toString<std::optional<bool>>(params.hasThemeVideo()));
	}
	if (!params.hasSubtitlesNull()) {
		result.addQueryItem("hasSubtitles", Support::toString<std::optional<bool>>(params.hasSubtitles()));
	}
	if (!params.hasSpecialFeatureNull()) {
		result.addQueryItem("hasSpecialFeature", Support::toString<std::optional<bool>>(params.hasSpecialFeature()));
	}
	if (!params.hasTrailerNull()) {
		result.addQueryItem("hasTrailer", Support::toString<std::optional<bool>>(params.hasTrailer()));
	}
	if (!params.adjacentToNull()) {
		result.addQueryItem("adjacentTo", Support::toString<QString>(params.adjacentTo()));
	}
	if (!params.parentIndexNumberNull()) {
		result.addQueryItem("parentIndexNumber", Support::toString<std::optional<qint32>>(params.parentIndexNumber()));
	}
	if (!params.hasParentalRatingNull()) {
		result.addQueryItem("hasParentalRating", Support::toString<std::optional<bool>>(params.hasParentalRating()));
	}
	if (!params.isHdNull()) {
		result.addQueryItem("isHd", Support::toString<std::optional<bool>>(params.isHd()));
	}
	if (!params.is4KNull()) {
		result.addQueryItem("is4K", Support::toString<std::optional<bool>>(params.is4K()));
	}
	if (!params.locationTypesNull()) {
		result.addQueryItem("locationTypes", Support::toString<QList<LocationType>>(params.locationTypes()));
	}
	if (!params.excludeLocationTypesNull()) {
		result.addQueryItem("excludeLocationTypes", Support::toString<QList<LocationType>>(params.excludeLocationTypes()));
	}
	if (!params.isMissingNull()) {
		result.addQueryItem("isMissing", Support::toString<std::optional<bool>>(params.isMissing()));
	}
	if (!params.isUnairedNull()) {
		result.addQueryItem("isUnaired", Support::toString<std::optional<bool>>(params.isUnaired()));
	}
	if (!params.minCommunityRatingNull()) {
		result.addQueryItem("minCommunityRating", Support::toString<std::optional<double>>(params.minCommunityRating()));
	}
	if (!params.minCriticRatingNull()) {
		result.addQueryItem("minCriticRating", Support::toString<std::optional<double>>(params.minCriticRating()));
	}
	if (!params.minPremiereDateNull()) {
		result.addQueryItem("minPremiereDate", Support::toString<QDateTime>(params.minPremiereDate()));
	}
	if (!params.minDateLastSavedNull()) {
		result.addQueryItem("minDateLastSaved", Support::toString<QDateTime>(params.minDateLastSaved()));
	}
	if (!params.minDateLastSavedForUserNull()) {
		result.addQueryItem("minDateLastSavedForUser", Support::toString<QDateTime>(params.minDateLastSavedForUser()));
	}
	if (!params.maxPremiereDateNull()) {
		result.addQueryItem("maxPremiereDate", Support::toString<QDateTime>(params.maxPremiereDate()));
	}
	if (!params.hasOverviewNull()) {
		result.addQueryItem("hasOverview", Support::toString<std::optional<bool>>(params.hasOverview()));
	}
	if (!params.hasImdbIdNull()) {
		result.addQueryItem("hasImdbId", Support::toString<std::optional<bool>>(params.hasImdbId()));
	}
	if (!params.hasTmdbIdNull()) {
		result.addQueryItem("hasTmdbId", Support::toString<std::optional<bool>>(params.hasTmdbId()));
	}
	if (!params.hasTvdbIdNull()) {
		result.addQueryItem("hasTvdbId", Support::toString<std::optional<bool>>(params.hasTvdbId()));
	}
	if (!params.excludeItemIdsNull()) {
		result.addQueryItem("excludeItemIds", Support::toString<QStringList>(params.excludeItemIds()));
	}
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString<std::optional<qint32>>(params.startIndex()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.recursiveNull()) {
		result.addQueryItem("recursive", Support::toString<std::optional<bool>>(params.recursive()));
	}
	if (!params.searchTermNull()) {
		result.addQueryItem("searchTerm", Support::toString<QString>(params.searchTerm()));
	}
	if (!params.sortOrderNull()) {
		result.addQueryItem("sortOrder", Support::toString<QString>(params.sortOrder()));
	}
	if (!params.parentIdNull()) {
		result.addQueryItem("parentId", Support::toString<QString>(params.parentId()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	if (!params.excludeItemTypesNull()) {
		result.addQueryItem("excludeItemTypes", Support::toString<QStringList>(params.excludeItemTypes()));
	}
	if (!params.includeItemTypesNull()) {
		result.addQueryItem("includeItemTypes", Support::toString<QStringList>(params.includeItemTypes()));
	}
	if (!params.filtersNull()) {
		result.addQueryItem("filters", Support::toString<QList<ItemFilter>>(params.filters()));
	}
	if (!params.isFavoriteNull()) {
		result.addQueryItem("isFavorite", Support::toString<std::optional<bool>>(params.isFavorite()));
	}
	if (!params.mediaTypesNull()) {
		result.addQueryItem("mediaTypes", Support::toString<QStringList>(params.mediaTypes()));
	}
	if (!params.imageTypesNull()) {
		result.addQueryItem("imageTypes", Support::toString<QList<ImageType>>(params.imageTypes()));
	}
	if (!params.sortByNull()) {
		result.addQueryItem("sortBy", Support::toString<QString>(params.sortBy()));
	}
	if (!params.isPlayedNull()) {
		result.addQueryItem("isPlayed", Support::toString<std::optional<bool>>(params.isPlayed()));
	}
	if (!params.genresNull()) {
		result.addQueryItem("genres", Support::toString<QStringList>(params.genres()));
	}
	if (!params.officialRatingsNull()) {
		result.addQueryItem("officialRatings", Support::toString<QStringList>(params.officialRatings()));
	}
	if (!params.tagsNull()) {
		result.addQueryItem("tags", Support::toString<QStringList>(params.tags()));
	}
	if (!params.yearsNull()) {
		result.addQueryItem("years", Support::toString<QList<qint32>>(params.years()));
	}
	if (!params.enableUserDataNull()) {
		result.addQueryItem("enableUserData", Support::toString<std::optional<bool>>(params.enableUserData()));
	}
	if (!params.imageTypeLimitNull()) {
		result.addQueryItem("imageTypeLimit", Support::toString<std::optional<qint32>>(params.imageTypeLimit()));
	}
	if (!params.enableImageTypesNull()) {
		result.addQueryItem("enableImageTypes", Support::toString<QList<ImageType>>(params.enableImageTypes()));
	}
	if (!params.personNull()) {
		result.addQueryItem("person", Support::toString<QString>(params.person()));
	}
	if (!params.personIdsNull()) {
		result.addQueryItem("personIds", Support::toString<QStringList>(params.personIds()));
	}
	if (!params.personTypesNull()) {
		result.addQueryItem("personTypes", Support::toString<QStringList>(params.personTypes()));
	}
	if (!params.studiosNull()) {
		result.addQueryItem("studios", Support::toString<QStringList>(params.studios()));
	}
	if (!params.artistsNull()) {
		result.addQueryItem("artists", Support::toString<QStringList>(params.artists()));
	}
	if (!params.excludeArtistIdsNull()) {
		result.addQueryItem("excludeArtistIds", Support::toString<QStringList>(params.excludeArtistIds()));
	}
	if (!params.artistIdsNull()) {
		result.addQueryItem("artistIds", Support::toString<QStringList>(params.artistIds()));
	}
	if (!params.albumArtistIdsNull()) {
		result.addQueryItem("albumArtistIds", Support::toString<QStringList>(params.albumArtistIds()));
	}
	if (!params.contributingArtistIdsNull()) {
		result.addQueryItem("contributingArtistIds", Support::toString<QStringList>(params.contributingArtistIds()));
	}
	if (!params.albumsNull()) {
		result.addQueryItem("albums", Support::toString<QStringList>(params.albums()));
	}
	if (!params.albumIdsNull()) {
		result.addQueryItem("albumIds", Support::toString<QStringList>(params.albumIds()));
	}
	if (!params.idsNull()) {
		result.addQueryItem("ids", Support::toString<QStringList>(params.ids()));
	}
	if (!params.videoTypesNull()) {
		result.addQueryItem("videoTypes", Support::toString<QList<VideoType>>(params.videoTypes()));
	}
	if (!params.minOfficialRatingNull()) {
		result.addQueryItem("minOfficialRating", Support::toString<QString>(params.minOfficialRating()));
	}
	if (!params.isLockedNull()) {
		result.addQueryItem("isLocked", Support::toString<std::optional<bool>>(params.isLocked()));
	}
	if (!params.isPlaceHolderNull()) {
		result.addQueryItem("isPlaceHolder", Support::toString<std::optional<bool>>(params.isPlaceHolder()));
	}
	if (!params.hasOfficialRatingNull()) {
		result.addQueryItem("hasOfficialRating", Support::toString<std::optional<bool>>(params.hasOfficialRating()));
	}
	if (!params.collapseBoxSetItemsNull()) {
		result.addQueryItem("collapseBoxSetItems", Support::toString<std::optional<bool>>(params.collapseBoxSetItems()));
	}
	if (!params.minWidthNull()) {
		result.addQueryItem("minWidth", Support::toString<std::optional<qint32>>(params.minWidth()));
	}
	if (!params.minHeightNull()) {
		result.addQueryItem("minHeight", Support::toString<std::optional<qint32>>(params.minHeight()));
	}
	if (!params.maxWidthNull()) {
		result.addQueryItem("maxWidth", Support::toString<std::optional<qint32>>(params.maxWidth()));
	}
	if (!params.maxHeightNull()) {
		result.addQueryItem("maxHeight", Support::toString<std::optional<qint32>>(params.maxHeight()));
	}
	if (!params.is3DNull()) {
		result.addQueryItem("is3D", Support::toString<std::optional<bool>>(params.is3D()));
	}
	if (!params.seriesStatusNull()) {
		result.addQueryItem("seriesStatus", Support::toString<QList<SeriesStatus>>(params.seriesStatus()));
	}
	if (!params.nameStartsWithOrGreaterNull()) {
		result.addQueryItem("nameStartsWithOrGreater", Support::toString<QString>(params.nameStartsWithOrGreater()));
	}
	if (!params.nameStartsWithNull()) {
		result.addQueryItem("nameStartsWith", Support::toString<QString>(params.nameStartsWith()));
	}
	if (!params.nameLessThanNull()) {
		result.addQueryItem("nameLessThan", Support::toString<QString>(params.nameLessThan()));
	}
	if (!params.studioIdsNull()) {
		result.addQueryItem("studioIds", Support::toString<QStringList>(params.studioIds()));
	}
	if (!params.genreIdsNull()) {
		result.addQueryItem("genreIds", Support::toString<QStringList>(params.genreIds()));
	}
	if (!params.enableTotalRecordCountNull()) {
		result.addQueryItem("enableTotalRecordCount", Support::toString<std::optional<bool>>(params.enableTotalRecordCount()));
	}
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString<std::optional<bool>>(params.enableImages()));
	}
	
	return result;
}

GetItemsByUserIdLoader::GetItemsByUserIdLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetItemsByUserIdParams>(apiClient) {}

QString GetItemsByUserIdLoader::path(const GetItemsByUserIdParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Items");
}

QUrlQuery GetItemsByUserIdLoader::query(const GetItemsByUserIdParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.maxOfficialRatingNull()) {
		result.addQueryItem("maxOfficialRating", Support::toString<QString>(params.maxOfficialRating()));
	}
	if (!params.hasThemeSongNull()) {
		result.addQueryItem("hasThemeSong", Support::toString<std::optional<bool>>(params.hasThemeSong()));
	}
	if (!params.hasThemeVideoNull()) {
		result.addQueryItem("hasThemeVideo", Support::toString<std::optional<bool>>(params.hasThemeVideo()));
	}
	if (!params.hasSubtitlesNull()) {
		result.addQueryItem("hasSubtitles", Support::toString<std::optional<bool>>(params.hasSubtitles()));
	}
	if (!params.hasSpecialFeatureNull()) {
		result.addQueryItem("hasSpecialFeature", Support::toString<std::optional<bool>>(params.hasSpecialFeature()));
	}
	if (!params.hasTrailerNull()) {
		result.addQueryItem("hasTrailer", Support::toString<std::optional<bool>>(params.hasTrailer()));
	}
	if (!params.adjacentToNull()) {
		result.addQueryItem("adjacentTo", Support::toString<QString>(params.adjacentTo()));
	}
	if (!params.parentIndexNumberNull()) {
		result.addQueryItem("parentIndexNumber", Support::toString<std::optional<qint32>>(params.parentIndexNumber()));
	}
	if (!params.hasParentalRatingNull()) {
		result.addQueryItem("hasParentalRating", Support::toString<std::optional<bool>>(params.hasParentalRating()));
	}
	if (!params.isHdNull()) {
		result.addQueryItem("isHd", Support::toString<std::optional<bool>>(params.isHd()));
	}
	if (!params.is4KNull()) {
		result.addQueryItem("is4K", Support::toString<std::optional<bool>>(params.is4K()));
	}
	if (!params.locationTypesNull()) {
		result.addQueryItem("locationTypes", Support::toString<QList<LocationType>>(params.locationTypes()));
	}
	if (!params.excludeLocationTypesNull()) {
		result.addQueryItem("excludeLocationTypes", Support::toString<QList<LocationType>>(params.excludeLocationTypes()));
	}
	if (!params.isMissingNull()) {
		result.addQueryItem("isMissing", Support::toString<std::optional<bool>>(params.isMissing()));
	}
	if (!params.isUnairedNull()) {
		result.addQueryItem("isUnaired", Support::toString<std::optional<bool>>(params.isUnaired()));
	}
	if (!params.minCommunityRatingNull()) {
		result.addQueryItem("minCommunityRating", Support::toString<std::optional<double>>(params.minCommunityRating()));
	}
	if (!params.minCriticRatingNull()) {
		result.addQueryItem("minCriticRating", Support::toString<std::optional<double>>(params.minCriticRating()));
	}
	if (!params.minPremiereDateNull()) {
		result.addQueryItem("minPremiereDate", Support::toString<QDateTime>(params.minPremiereDate()));
	}
	if (!params.minDateLastSavedNull()) {
		result.addQueryItem("minDateLastSaved", Support::toString<QDateTime>(params.minDateLastSaved()));
	}
	if (!params.minDateLastSavedForUserNull()) {
		result.addQueryItem("minDateLastSavedForUser", Support::toString<QDateTime>(params.minDateLastSavedForUser()));
	}
	if (!params.maxPremiereDateNull()) {
		result.addQueryItem("maxPremiereDate", Support::toString<QDateTime>(params.maxPremiereDate()));
	}
	if (!params.hasOverviewNull()) {
		result.addQueryItem("hasOverview", Support::toString<std::optional<bool>>(params.hasOverview()));
	}
	if (!params.hasImdbIdNull()) {
		result.addQueryItem("hasImdbId", Support::toString<std::optional<bool>>(params.hasImdbId()));
	}
	if (!params.hasTmdbIdNull()) {
		result.addQueryItem("hasTmdbId", Support::toString<std::optional<bool>>(params.hasTmdbId()));
	}
	if (!params.hasTvdbIdNull()) {
		result.addQueryItem("hasTvdbId", Support::toString<std::optional<bool>>(params.hasTvdbId()));
	}
	if (!params.excludeItemIdsNull()) {
		result.addQueryItem("excludeItemIds", Support::toString<QStringList>(params.excludeItemIds()));
	}
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString<std::optional<qint32>>(params.startIndex()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.recursiveNull()) {
		result.addQueryItem("recursive", Support::toString<std::optional<bool>>(params.recursive()));
	}
	if (!params.searchTermNull()) {
		result.addQueryItem("searchTerm", Support::toString<QString>(params.searchTerm()));
	}
	if (!params.sortOrderNull()) {
		result.addQueryItem("sortOrder", Support::toString<QString>(params.sortOrder()));
	}
	if (!params.parentIdNull()) {
		result.addQueryItem("parentId", Support::toString<QString>(params.parentId()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	if (!params.excludeItemTypesNull()) {
		result.addQueryItem("excludeItemTypes", Support::toString<QStringList>(params.excludeItemTypes()));
	}
	if (!params.includeItemTypesNull()) {
		result.addQueryItem("includeItemTypes", Support::toString<QStringList>(params.includeItemTypes()));
	}
	if (!params.filtersNull()) {
		result.addQueryItem("filters", Support::toString<QList<ItemFilter>>(params.filters()));
	}
	if (!params.isFavoriteNull()) {
		result.addQueryItem("isFavorite", Support::toString<std::optional<bool>>(params.isFavorite()));
	}
	if (!params.mediaTypesNull()) {
		result.addQueryItem("mediaTypes", Support::toString<QStringList>(params.mediaTypes()));
	}
	if (!params.imageTypesNull()) {
		result.addQueryItem("imageTypes", Support::toString<QList<ImageType>>(params.imageTypes()));
	}
	if (!params.sortByNull()) {
		result.addQueryItem("sortBy", Support::toString<QString>(params.sortBy()));
	}
	if (!params.isPlayedNull()) {
		result.addQueryItem("isPlayed", Support::toString<std::optional<bool>>(params.isPlayed()));
	}
	if (!params.genresNull()) {
		result.addQueryItem("genres", Support::toString<QStringList>(params.genres()));
	}
	if (!params.officialRatingsNull()) {
		result.addQueryItem("officialRatings", Support::toString<QStringList>(params.officialRatings()));
	}
	if (!params.tagsNull()) {
		result.addQueryItem("tags", Support::toString<QStringList>(params.tags()));
	}
	if (!params.yearsNull()) {
		result.addQueryItem("years", Support::toString<QList<qint32>>(params.years()));
	}
	if (!params.enableUserDataNull()) {
		result.addQueryItem("enableUserData", Support::toString<std::optional<bool>>(params.enableUserData()));
	}
	if (!params.imageTypeLimitNull()) {
		result.addQueryItem("imageTypeLimit", Support::toString<std::optional<qint32>>(params.imageTypeLimit()));
	}
	if (!params.enableImageTypesNull()) {
		result.addQueryItem("enableImageTypes", Support::toString<QList<ImageType>>(params.enableImageTypes()));
	}
	if (!params.personNull()) {
		result.addQueryItem("person", Support::toString<QString>(params.person()));
	}
	if (!params.personIdsNull()) {
		result.addQueryItem("personIds", Support::toString<QStringList>(params.personIds()));
	}
	if (!params.personTypesNull()) {
		result.addQueryItem("personTypes", Support::toString<QStringList>(params.personTypes()));
	}
	if (!params.studiosNull()) {
		result.addQueryItem("studios", Support::toString<QStringList>(params.studios()));
	}
	if (!params.artistsNull()) {
		result.addQueryItem("artists", Support::toString<QStringList>(params.artists()));
	}
	if (!params.excludeArtistIdsNull()) {
		result.addQueryItem("excludeArtistIds", Support::toString<QStringList>(params.excludeArtistIds()));
	}
	if (!params.artistIdsNull()) {
		result.addQueryItem("artistIds", Support::toString<QStringList>(params.artistIds()));
	}
	if (!params.albumArtistIdsNull()) {
		result.addQueryItem("albumArtistIds", Support::toString<QStringList>(params.albumArtistIds()));
	}
	if (!params.contributingArtistIdsNull()) {
		result.addQueryItem("contributingArtistIds", Support::toString<QStringList>(params.contributingArtistIds()));
	}
	if (!params.albumsNull()) {
		result.addQueryItem("albums", Support::toString<QStringList>(params.albums()));
	}
	if (!params.albumIdsNull()) {
		result.addQueryItem("albumIds", Support::toString<QStringList>(params.albumIds()));
	}
	if (!params.idsNull()) {
		result.addQueryItem("ids", Support::toString<QStringList>(params.ids()));
	}
	if (!params.videoTypesNull()) {
		result.addQueryItem("videoTypes", Support::toString<QList<VideoType>>(params.videoTypes()));
	}
	if (!params.minOfficialRatingNull()) {
		result.addQueryItem("minOfficialRating", Support::toString<QString>(params.minOfficialRating()));
	}
	if (!params.isLockedNull()) {
		result.addQueryItem("isLocked", Support::toString<std::optional<bool>>(params.isLocked()));
	}
	if (!params.isPlaceHolderNull()) {
		result.addQueryItem("isPlaceHolder", Support::toString<std::optional<bool>>(params.isPlaceHolder()));
	}
	if (!params.hasOfficialRatingNull()) {
		result.addQueryItem("hasOfficialRating", Support::toString<std::optional<bool>>(params.hasOfficialRating()));
	}
	if (!params.collapseBoxSetItemsNull()) {
		result.addQueryItem("collapseBoxSetItems", Support::toString<std::optional<bool>>(params.collapseBoxSetItems()));
	}
	if (!params.minWidthNull()) {
		result.addQueryItem("minWidth", Support::toString<std::optional<qint32>>(params.minWidth()));
	}
	if (!params.minHeightNull()) {
		result.addQueryItem("minHeight", Support::toString<std::optional<qint32>>(params.minHeight()));
	}
	if (!params.maxWidthNull()) {
		result.addQueryItem("maxWidth", Support::toString<std::optional<qint32>>(params.maxWidth()));
	}
	if (!params.maxHeightNull()) {
		result.addQueryItem("maxHeight", Support::toString<std::optional<qint32>>(params.maxHeight()));
	}
	if (!params.is3DNull()) {
		result.addQueryItem("is3D", Support::toString<std::optional<bool>>(params.is3D()));
	}
	if (!params.seriesStatusNull()) {
		result.addQueryItem("seriesStatus", Support::toString<QList<SeriesStatus>>(params.seriesStatus()));
	}
	if (!params.nameStartsWithOrGreaterNull()) {
		result.addQueryItem("nameStartsWithOrGreater", Support::toString<QString>(params.nameStartsWithOrGreater()));
	}
	if (!params.nameStartsWithNull()) {
		result.addQueryItem("nameStartsWith", Support::toString<QString>(params.nameStartsWith()));
	}
	if (!params.nameLessThanNull()) {
		result.addQueryItem("nameLessThan", Support::toString<QString>(params.nameLessThan()));
	}
	if (!params.studioIdsNull()) {
		result.addQueryItem("studioIds", Support::toString<QStringList>(params.studioIds()));
	}
	if (!params.genreIdsNull()) {
		result.addQueryItem("genreIds", Support::toString<QStringList>(params.genreIds()));
	}
	if (!params.enableTotalRecordCountNull()) {
		result.addQueryItem("enableTotalRecordCount", Support::toString<std::optional<bool>>(params.enableTotalRecordCount()));
	}
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString<std::optional<bool>>(params.enableImages()));
	}
	
	return result;
}

GetResumeItemsLoader::GetResumeItemsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetResumeItemsParams>(apiClient) {}

QString GetResumeItemsLoader::path(const GetResumeItemsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Items/Resume");
}

QUrlQuery GetResumeItemsLoader::query(const GetResumeItemsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString<std::optional<qint32>>(params.startIndex()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.searchTermNull()) {
		result.addQueryItem("searchTerm", Support::toString<QString>(params.searchTerm()));
	}
	if (!params.parentIdNull()) {
		result.addQueryItem("parentId", Support::toString<QString>(params.parentId()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	if (!params.mediaTypesNull()) {
		result.addQueryItem("mediaTypes", Support::toString<QStringList>(params.mediaTypes()));
	}
	if (!params.enableUserDataNull()) {
		result.addQueryItem("enableUserData", Support::toString<std::optional<bool>>(params.enableUserData()));
	}
	if (!params.imageTypeLimitNull()) {
		result.addQueryItem("imageTypeLimit", Support::toString<std::optional<qint32>>(params.imageTypeLimit()));
	}
	if (!params.enableImageTypesNull()) {
		result.addQueryItem("enableImageTypes", Support::toString<QList<ImageType>>(params.enableImageTypes()));
	}
	if (!params.excludeItemTypesNull()) {
		result.addQueryItem("excludeItemTypes", Support::toString<QStringList>(params.excludeItemTypes()));
	}
	if (!params.includeItemTypesNull()) {
		result.addQueryItem("includeItemTypes", Support::toString<QStringList>(params.includeItemTypes()));
	}
	if (!params.enableTotalRecordCountNull()) {
		result.addQueryItem("enableTotalRecordCount", Support::toString<std::optional<bool>>(params.enableTotalRecordCount()));
	}
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString<std::optional<bool>>(params.enableImages()));
	}
	
	return result;
}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
