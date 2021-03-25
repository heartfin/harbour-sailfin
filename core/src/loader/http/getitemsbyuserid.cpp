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

#include <JellyfinQt/loader/http/getitemsbyuserid.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {


GetItemsByUserId::GetItemsByUserId(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<Jellyfin::DTO::BaseItemDtoQueryResult, GetItemsByUserIdParams>(apiClient) {}

QString GetItemsByUserId::path(const GetItemsByUserIdParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString(params.userId()) + QStringLiteral("/Items");
}

QUrlQuery GetItemsByUserId::query(const GetItemsByUserIdParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.maxOfficialRatingNull()) {
		result.addQueryItem("maxOfficialRating", Support::toString(params.maxOfficialRating()));
	}
	if (!params.hasThemeSongNull()) {
		result.addQueryItem("hasThemeSong", Support::toString(params.hasThemeSong()));
	}
	if (!params.hasThemeVideoNull()) {
		result.addQueryItem("hasThemeVideo", Support::toString(params.hasThemeVideo()));
	}
	if (!params.hasSubtitlesNull()) {
		result.addQueryItem("hasSubtitles", Support::toString(params.hasSubtitles()));
	}
	if (!params.hasSpecialFeatureNull()) {
		result.addQueryItem("hasSpecialFeature", Support::toString(params.hasSpecialFeature()));
	}
	if (!params.hasTrailerNull()) {
		result.addQueryItem("hasTrailer", Support::toString(params.hasTrailer()));
	}
	if (!params.adjacentToNull()) {
		result.addQueryItem("adjacentTo", Support::toString(params.adjacentTo()));
	}
	if (!params.parentIndexNumberNull()) {
		result.addQueryItem("parentIndexNumber", Support::toString(params.parentIndexNumber()));
	}
	if (!params.hasParentalRatingNull()) {
		result.addQueryItem("hasParentalRating", Support::toString(params.hasParentalRating()));
	}
	if (!params.isHdNull()) {
		result.addQueryItem("isHd", Support::toString(params.isHd()));
	}
	if (!params.is4KNull()) {
		result.addQueryItem("is4K", Support::toString(params.is4K()));
	}
	if (!params.locationTypesNull()) {
		result.addQueryItem("locationTypes", Support::toString(params.locationTypes()));
	}
	if (!params.excludeLocationTypesNull()) {
		result.addQueryItem("excludeLocationTypes", Support::toString(params.excludeLocationTypes()));
	}
	if (!params.isMissingNull()) {
		result.addQueryItem("isMissing", Support::toString(params.isMissing()));
	}
	if (!params.isUnairedNull()) {
		result.addQueryItem("isUnaired", Support::toString(params.isUnaired()));
	}
	if (!params.minCommunityRatingNull()) {
		result.addQueryItem("minCommunityRating", Support::toString(params.minCommunityRating()));
	}
	if (!params.minCriticRatingNull()) {
		result.addQueryItem("minCriticRating", Support::toString(params.minCriticRating()));
	}
	if (!params.minPremiereDateNull()) {
		result.addQueryItem("minPremiereDate", Support::toString(params.minPremiereDate()));
	}
	if (!params.minDateLastSavedNull()) {
		result.addQueryItem("minDateLastSaved", Support::toString(params.minDateLastSaved()));
	}
	if (!params.minDateLastSavedForUserNull()) {
		result.addQueryItem("minDateLastSavedForUser", Support::toString(params.minDateLastSavedForUser()));
	}
	if (!params.maxPremiereDateNull()) {
		result.addQueryItem("maxPremiereDate", Support::toString(params.maxPremiereDate()));
	}
	if (!params.hasOverviewNull()) {
		result.addQueryItem("hasOverview", Support::toString(params.hasOverview()));
	}
	if (!params.hasImdbIdNull()) {
		result.addQueryItem("hasImdbId", Support::toString(params.hasImdbId()));
	}
	if (!params.hasTmdbIdNull()) {
		result.addQueryItem("hasTmdbId", Support::toString(params.hasTmdbId()));
	}
	if (!params.hasTvdbIdNull()) {
		result.addQueryItem("hasTvdbId", Support::toString(params.hasTvdbId()));
	}
	if (!params.excludeItemIdsNull()) {
		result.addQueryItem("excludeItemIds", Support::toString(params.excludeItemIds()));
	}
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString(params.startIndex()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString(params.limit()));
	}
	if (!params.recursiveNull()) {
		result.addQueryItem("recursive", Support::toString(params.recursive()));
	}
	if (!params.searchTermNull()) {
		result.addQueryItem("searchTerm", Support::toString(params.searchTerm()));
	}
	if (!params.sortOrderNull()) {
		result.addQueryItem("sortOrder", Support::toString(params.sortOrder()));
	}
	if (!params.parentIdNull()) {
		result.addQueryItem("parentId", Support::toString(params.parentId()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString(params.fields()));
	}
	if (!params.excludeItemTypesNull()) {
		result.addQueryItem("excludeItemTypes", Support::toString(params.excludeItemTypes()));
	}
	if (!params.includeItemTypesNull()) {
		result.addQueryItem("includeItemTypes", Support::toString(params.includeItemTypes()));
	}
	if (!params.filtersNull()) {
		result.addQueryItem("filters", Support::toString(params.filters()));
	}
	if (!params.isFavoriteNull()) {
		result.addQueryItem("isFavorite", Support::toString(params.isFavorite()));
	}
	if (!params.mediaTypesNull()) {
		result.addQueryItem("mediaTypes", Support::toString(params.mediaTypes()));
	}
	if (!params.imageTypesNull()) {
		result.addQueryItem("imageTypes", Support::toString(params.imageTypes()));
	}
	if (!params.sortByNull()) {
		result.addQueryItem("sortBy", Support::toString(params.sortBy()));
	}
	if (!params.isPlayedNull()) {
		result.addQueryItem("isPlayed", Support::toString(params.isPlayed()));
	}
	if (!params.genresNull()) {
		result.addQueryItem("genres", Support::toString(params.genres()));
	}
	if (!params.officialRatingsNull()) {
		result.addQueryItem("officialRatings", Support::toString(params.officialRatings()));
	}
	if (!params.tagsNull()) {
		result.addQueryItem("tags", Support::toString(params.tags()));
	}
	if (!params.yearsNull()) {
		result.addQueryItem("years", Support::toString(params.years()));
	}
	if (!params.enableUserDataNull()) {
		result.addQueryItem("enableUserData", Support::toString(params.enableUserData()));
	}
	if (!params.imageTypeLimitNull()) {
		result.addQueryItem("imageTypeLimit", Support::toString(params.imageTypeLimit()));
	}
	if (!params.enableImageTypesNull()) {
		result.addQueryItem("enableImageTypes", Support::toString(params.enableImageTypes()));
	}
	if (!params.personNull()) {
		result.addQueryItem("person", Support::toString(params.person()));
	}
	if (!params.personIdsNull()) {
		result.addQueryItem("personIds", Support::toString(params.personIds()));
	}
	if (!params.personTypesNull()) {
		result.addQueryItem("personTypes", Support::toString(params.personTypes()));
	}
	if (!params.studiosNull()) {
		result.addQueryItem("studios", Support::toString(params.studios()));
	}
	if (!params.artistsNull()) {
		result.addQueryItem("artists", Support::toString(params.artists()));
	}
	if (!params.excludeArtistIdsNull()) {
		result.addQueryItem("excludeArtistIds", Support::toString(params.excludeArtistIds()));
	}
	if (!params.artistIdsNull()) {
		result.addQueryItem("artistIds", Support::toString(params.artistIds()));
	}
	if (!params.albumArtistIdsNull()) {
		result.addQueryItem("albumArtistIds", Support::toString(params.albumArtistIds()));
	}
	if (!params.contributingArtistIdsNull()) {
		result.addQueryItem("contributingArtistIds", Support::toString(params.contributingArtistIds()));
	}
	if (!params.albumsNull()) {
		result.addQueryItem("albums", Support::toString(params.albums()));
	}
	if (!params.albumIdsNull()) {
		result.addQueryItem("albumIds", Support::toString(params.albumIds()));
	}
	if (!params.idsNull()) {
		result.addQueryItem("ids", Support::toString(params.ids()));
	}
	if (!params.videoTypesNull()) {
		result.addQueryItem("videoTypes", Support::toString(params.videoTypes()));
	}
	if (!params.minOfficialRatingNull()) {
		result.addQueryItem("minOfficialRating", Support::toString(params.minOfficialRating()));
	}
	if (!params.isLockedNull()) {
		result.addQueryItem("isLocked", Support::toString(params.isLocked()));
	}
	if (!params.isPlaceHolderNull()) {
		result.addQueryItem("isPlaceHolder", Support::toString(params.isPlaceHolder()));
	}
	if (!params.hasOfficialRatingNull()) {
		result.addQueryItem("hasOfficialRating", Support::toString(params.hasOfficialRating()));
	}
	if (!params.collapseBoxSetItemsNull()) {
		result.addQueryItem("collapseBoxSetItems", Support::toString(params.collapseBoxSetItems()));
	}
	if (!params.minWidthNull()) {
		result.addQueryItem("minWidth", Support::toString(params.minWidth()));
	}
	if (!params.minHeightNull()) {
		result.addQueryItem("minHeight", Support::toString(params.minHeight()));
	}
	if (!params.maxWidthNull()) {
		result.addQueryItem("maxWidth", Support::toString(params.maxWidth()));
	}
	if (!params.maxHeightNull()) {
		result.addQueryItem("maxHeight", Support::toString(params.maxHeight()));
	}
	if (!params.is3DNull()) {
		result.addQueryItem("is3D", Support::toString(params.is3D()));
	}
	if (!params.seriesStatusNull()) {
		result.addQueryItem("seriesStatus", Support::toString(params.seriesStatus()));
	}
	if (!params.nameStartsWithOrGreaterNull()) {
		result.addQueryItem("nameStartsWithOrGreater", Support::toString(params.nameStartsWithOrGreater()));
	}
	if (!params.nameStartsWithNull()) {
		result.addQueryItem("nameStartsWith", Support::toString(params.nameStartsWith()));
	}
	if (!params.nameLessThanNull()) {
		result.addQueryItem("nameLessThan", Support::toString(params.nameLessThan()));
	}
	if (!params.studioIdsNull()) {
		result.addQueryItem("studioIds", Support::toString(params.studioIds()));
	}
	if (!params.genreIdsNull()) {
		result.addQueryItem("genreIds", Support::toString(params.genreIds()));
	}
	if (!params.enableTotalRecordCountNull()) {
		result.addQueryItem("enableTotalRecordCount", Support::toString(params.enableTotalRecordCount()));
	}
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString(params.enableImages()));
	}
	
	return result;
}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
