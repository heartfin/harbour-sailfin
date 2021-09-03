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

#include <JellyfinQt/loader/http/artists.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetArtistsLoader::GetArtistsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetArtistsParams>(apiClient) {}

QString GetArtistsLoader::path(const GetArtistsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Artists");
}

QUrlQuery GetArtistsLoader::query(const GetArtistsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.minCommunityRatingNull()) {
		result.addQueryItem("minCommunityRating", Support::toString<std::optional<double>>(params.minCommunityRating()));
	}
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
	if (!params.genresNull()) {
		result.addQueryItem("genres", Support::toString<QStringList>(params.genres()));
	}
	if (!params.genreIdsNull()) {
		result.addQueryItem("genreIds", Support::toString<QStringList>(params.genreIds()));
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
	if (!params.studioIdsNull()) {
		result.addQueryItem("studioIds", Support::toString<QStringList>(params.studioIds()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
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
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString<std::optional<bool>>(params.enableImages()));
	}
	if (!params.enableTotalRecordCountNull()) {
		result.addQueryItem("enableTotalRecordCount", Support::toString<std::optional<bool>>(params.enableTotalRecordCount()));
	}
	
	return result;
}

QByteArray GetArtistsLoader::body(const GetArtistsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetArtistsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetArtistByNameLoader::GetArtistByNameLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDto, GetArtistByNameParams>(apiClient) {}

QString GetArtistByNameLoader::path(const GetArtistByNameParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Artists/") + Support::toString< QString>(params.name()) ;
}

QUrlQuery GetArtistByNameLoader::query(const GetArtistByNameParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	
	return result;
}

QByteArray GetArtistByNameLoader::body(const GetArtistByNameParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetArtistByNameLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetAlbumArtistsLoader::GetAlbumArtistsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetAlbumArtistsParams>(apiClient) {}

QString GetAlbumArtistsLoader::path(const GetAlbumArtistsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Artists/AlbumArtists");
}

QUrlQuery GetAlbumArtistsLoader::query(const GetAlbumArtistsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.minCommunityRatingNull()) {
		result.addQueryItem("minCommunityRating", Support::toString<std::optional<double>>(params.minCommunityRating()));
	}
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
	if (!params.genresNull()) {
		result.addQueryItem("genres", Support::toString<QStringList>(params.genres()));
	}
	if (!params.genreIdsNull()) {
		result.addQueryItem("genreIds", Support::toString<QStringList>(params.genreIds()));
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
	if (!params.studioIdsNull()) {
		result.addQueryItem("studioIds", Support::toString<QStringList>(params.studioIds()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
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
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString<std::optional<bool>>(params.enableImages()));
	}
	if (!params.enableTotalRecordCountNull()) {
		result.addQueryItem("enableTotalRecordCount", Support::toString<std::optional<bool>>(params.enableTotalRecordCount()));
	}
	
	return result;
}

QByteArray GetAlbumArtistsLoader::body(const GetAlbumArtistsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetAlbumArtistsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
