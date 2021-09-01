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

#include <JellyfinQt/loader/http/library.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetSimilarAlbumsLoader::GetSimilarAlbumsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetSimilarAlbumsParams>(apiClient) {}

QString GetSimilarAlbumsLoader::path(const GetSimilarAlbumsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Albums/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Similar");
}

QUrlQuery GetSimilarAlbumsLoader::query(const GetSimilarAlbumsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.excludeArtistIdsNull()) {
		result.addQueryItem("excludeArtistIds", Support::toString<QStringList>(params.excludeArtistIds()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	
	return result;
}

GetSimilarArtistsLoader::GetSimilarArtistsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetSimilarArtistsParams>(apiClient) {}

QString GetSimilarArtistsLoader::path(const GetSimilarArtistsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Artists/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Similar");
}

QUrlQuery GetSimilarArtistsLoader::query(const GetSimilarArtistsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.excludeArtistIdsNull()) {
		result.addQueryItem("excludeArtistIds", Support::toString<QStringList>(params.excludeArtistIds()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	
	return result;
}

GetAncestorsLoader::GetAncestorsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<BaseItemDto>, GetAncestorsParams>(apiClient) {}

QString GetAncestorsLoader::path(const GetAncestorsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Ancestors");
}

QUrlQuery GetAncestorsLoader::query(const GetAncestorsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	
	return result;
}

GetCriticReviewsLoader::GetCriticReviewsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetCriticReviewsParams>(apiClient) {}

QString GetCriticReviewsLoader::path(const GetCriticReviewsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/CriticReviews");
}

QUrlQuery GetCriticReviewsLoader::query(const GetCriticReviewsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

GetSimilarItemsLoader::GetSimilarItemsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetSimilarItemsParams>(apiClient) {}

QString GetSimilarItemsLoader::path(const GetSimilarItemsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Similar");
}

QUrlQuery GetSimilarItemsLoader::query(const GetSimilarItemsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.excludeArtistIdsNull()) {
		result.addQueryItem("excludeArtistIds", Support::toString<QStringList>(params.excludeArtistIds()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	
	return result;
}

GetThemeMediaLoader::GetThemeMediaLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<AllThemeMediaResult, GetThemeMediaParams>(apiClient) {}

QString GetThemeMediaLoader::path(const GetThemeMediaParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/ThemeMedia");
}

QUrlQuery GetThemeMediaLoader::query(const GetThemeMediaParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.inheritFromParentNull()) {
		result.addQueryItem("inheritFromParent", Support::toString<std::optional<bool>>(params.inheritFromParent()));
	}
	
	return result;
}

GetThemeSongsLoader::GetThemeSongsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<ThemeMediaResult, GetThemeSongsParams>(apiClient) {}

QString GetThemeSongsLoader::path(const GetThemeSongsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/ThemeSongs");
}

QUrlQuery GetThemeSongsLoader::query(const GetThemeSongsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.inheritFromParentNull()) {
		result.addQueryItem("inheritFromParent", Support::toString<std::optional<bool>>(params.inheritFromParent()));
	}
	
	return result;
}

GetThemeVideosLoader::GetThemeVideosLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<ThemeMediaResult, GetThemeVideosParams>(apiClient) {}

QString GetThemeVideosLoader::path(const GetThemeVideosParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/ThemeVideos");
}

QUrlQuery GetThemeVideosLoader::query(const GetThemeVideosParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.inheritFromParentNull()) {
		result.addQueryItem("inheritFromParent", Support::toString<std::optional<bool>>(params.inheritFromParent()));
	}
	
	return result;
}

GetItemCountsLoader::GetItemCountsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<ItemCounts, GetItemCountsParams>(apiClient) {}

QString GetItemCountsLoader::path(const GetItemCountsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/Counts");
}

QUrlQuery GetItemCountsLoader::query(const GetItemCountsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.isFavoriteNull()) {
		result.addQueryItem("isFavorite", Support::toString<std::optional<bool>>(params.isFavorite()));
	}
	
	return result;
}

GetLibraryOptionsInfoLoader::GetLibraryOptionsInfoLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<LibraryOptionsResultDto, GetLibraryOptionsInfoParams>(apiClient) {}

QString GetLibraryOptionsInfoLoader::path(const GetLibraryOptionsInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Libraries/AvailableOptions");
}

QUrlQuery GetLibraryOptionsInfoLoader::query(const GetLibraryOptionsInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.libraryContentTypeNull()) {
		result.addQueryItem("libraryContentType", Support::toString<QString>(params.libraryContentType()));
	}
	if (!params.isNewLibraryNull()) {
		result.addQueryItem("isNewLibrary", Support::toString<std::optional<bool>>(params.isNewLibrary()));
	}
	
	return result;
}

GetMediaFoldersLoader::GetMediaFoldersLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetMediaFoldersParams>(apiClient) {}

QString GetMediaFoldersLoader::path(const GetMediaFoldersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Library/MediaFolders");
}

QUrlQuery GetMediaFoldersLoader::query(const GetMediaFoldersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.isHiddenNull()) {
		result.addQueryItem("isHidden", Support::toString<std::optional<bool>>(params.isHidden()));
	}
	
	return result;
}

GetPhysicalPathsLoader::GetPhysicalPathsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QStringList, GetPhysicalPathsParams>(apiClient) {}

QString GetPhysicalPathsLoader::path(const GetPhysicalPathsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Library/PhysicalPaths");
}

QUrlQuery GetPhysicalPathsLoader::query(const GetPhysicalPathsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

GetSimilarMoviesLoader::GetSimilarMoviesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetSimilarMoviesParams>(apiClient) {}

QString GetSimilarMoviesLoader::path(const GetSimilarMoviesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Movies/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Similar");
}

QUrlQuery GetSimilarMoviesLoader::query(const GetSimilarMoviesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.excludeArtistIdsNull()) {
		result.addQueryItem("excludeArtistIds", Support::toString<QStringList>(params.excludeArtistIds()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	
	return result;
}

GetSimilarShowsLoader::GetSimilarShowsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetSimilarShowsParams>(apiClient) {}

QString GetSimilarShowsLoader::path(const GetSimilarShowsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Shows/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Similar");
}

QUrlQuery GetSimilarShowsLoader::query(const GetSimilarShowsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.excludeArtistIdsNull()) {
		result.addQueryItem("excludeArtistIds", Support::toString<QStringList>(params.excludeArtistIds()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	
	return result;
}

GetSimilarTrailersLoader::GetSimilarTrailersLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetSimilarTrailersParams>(apiClient) {}

QString GetSimilarTrailersLoader::path(const GetSimilarTrailersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Trailers/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Similar");
}

QUrlQuery GetSimilarTrailersLoader::query(const GetSimilarTrailersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.excludeArtistIdsNull()) {
		result.addQueryItem("excludeArtistIds", Support::toString<QStringList>(params.excludeArtistIds()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	
	return result;
}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
