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

DeleteItemsLoader::DeleteItemsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DeleteItemsParams>(apiClient) {}

QString DeleteItemsLoader::path(const DeleteItemsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items");
}

QUrlQuery DeleteItemsLoader::query(const DeleteItemsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.idsNull()) {
		result.addQueryItem("ids", Support::toString<QStringList>(params.ids()));
	}
	
	return result;
}

QByteArray DeleteItemsLoader::body(const DeleteItemsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DeleteItemsLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

DeleteItemLoader::DeleteItemLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DeleteItemParams>(apiClient) {}

QString DeleteItemLoader::path(const DeleteItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) ;
}

QUrlQuery DeleteItemLoader::query(const DeleteItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray DeleteItemLoader::body(const DeleteItemParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DeleteItemLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

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

QByteArray GetSimilarAlbumsLoader::body(const GetSimilarAlbumsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetSimilarAlbumsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

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

QByteArray GetSimilarArtistsLoader::body(const GetSimilarArtistsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetSimilarArtistsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

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

QByteArray GetAncestorsLoader::body(const GetAncestorsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetAncestorsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

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

QByteArray GetCriticReviewsLoader::body(const GetCriticReviewsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetCriticReviewsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

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

QByteArray GetSimilarItemsLoader::body(const GetSimilarItemsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetSimilarItemsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

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
	if (!params.sortByNull()) {
		result.addQueryItem("sortBy", Support::toString<QList<ItemSortBy>>(params.sortBy()));
	}
	if (!params.sortOrderNull()) {
		result.addQueryItem("sortOrder", Support::toString<QList<SortOrder>>(params.sortOrder()));
	}
	
	return result;
}

QByteArray GetThemeMediaLoader::body(const GetThemeMediaParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetThemeMediaLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

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
	if (!params.sortByNull()) {
		result.addQueryItem("sortBy", Support::toString<QList<ItemSortBy>>(params.sortBy()));
	}
	if (!params.sortOrderNull()) {
		result.addQueryItem("sortOrder", Support::toString<QList<SortOrder>>(params.sortOrder()));
	}
	
	return result;
}

QByteArray GetThemeSongsLoader::body(const GetThemeSongsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetThemeSongsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

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
	if (!params.sortByNull()) {
		result.addQueryItem("sortBy", Support::toString<QList<ItemSortBy>>(params.sortBy()));
	}
	if (!params.sortOrderNull()) {
		result.addQueryItem("sortOrder", Support::toString<QList<SortOrder>>(params.sortOrder()));
	}
	
	return result;
}

QByteArray GetThemeVideosLoader::body(const GetThemeVideosParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetThemeVideosLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

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

QByteArray GetItemCountsLoader::body(const GetItemCountsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetItemCountsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

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
		result.addQueryItem("libraryContentType", Support::toString<CollectionType>(params.libraryContentType()));
	}
	if (!params.isNewLibraryNull()) {
		result.addQueryItem("isNewLibrary", Support::toString<std::optional<bool>>(params.isNewLibrary()));
	}
	
	return result;
}

QByteArray GetLibraryOptionsInfoLoader::body(const GetLibraryOptionsInfoParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetLibraryOptionsInfoLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

PostUpdatedMediaLoader::PostUpdatedMediaLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, PostUpdatedMediaParams>(apiClient) {}

QString PostUpdatedMediaLoader::path(const PostUpdatedMediaParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Library/Media/Updated");
}

QUrlQuery PostUpdatedMediaLoader::query(const PostUpdatedMediaParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray PostUpdatedMediaLoader::body(const PostUpdatedMediaParams &params) const {
	return Support::toString<QSharedPointer<MediaUpdateInfoDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation PostUpdatedMediaLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

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

QByteArray GetMediaFoldersLoader::body(const GetMediaFoldersParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetMediaFoldersLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

PostAddedMoviesLoader::PostAddedMoviesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, PostAddedMoviesParams>(apiClient) {}

QString PostAddedMoviesLoader::path(const PostAddedMoviesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Library/Movies/Added");
}

QUrlQuery PostAddedMoviesLoader::query(const PostAddedMoviesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.tmdbIdNull()) {
		result.addQueryItem("tmdbId", Support::toString<QString>(params.tmdbId()));
	}
	if (!params.imdbIdNull()) {
		result.addQueryItem("imdbId", Support::toString<QString>(params.imdbId()));
	}
	
	return result;
}

QByteArray PostAddedMoviesLoader::body(const PostAddedMoviesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation PostAddedMoviesLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

PostUpdatedMoviesLoader::PostUpdatedMoviesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, PostUpdatedMoviesParams>(apiClient) {}

QString PostUpdatedMoviesLoader::path(const PostUpdatedMoviesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Library/Movies/Updated");
}

QUrlQuery PostUpdatedMoviesLoader::query(const PostUpdatedMoviesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.tmdbIdNull()) {
		result.addQueryItem("tmdbId", Support::toString<QString>(params.tmdbId()));
	}
	if (!params.imdbIdNull()) {
		result.addQueryItem("imdbId", Support::toString<QString>(params.imdbId()));
	}
	
	return result;
}

QByteArray PostUpdatedMoviesLoader::body(const PostUpdatedMoviesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation PostUpdatedMoviesLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

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

QByteArray GetPhysicalPathsLoader::body(const GetPhysicalPathsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetPhysicalPathsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

RefreshLibraryLoader::RefreshLibraryLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, RefreshLibraryParams>(apiClient) {}

QString RefreshLibraryLoader::path(const RefreshLibraryParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Library/Refresh");
}

QUrlQuery RefreshLibraryLoader::query(const RefreshLibraryParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray RefreshLibraryLoader::body(const RefreshLibraryParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation RefreshLibraryLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

PostAddedSeriesLoader::PostAddedSeriesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, PostAddedSeriesParams>(apiClient) {}

QString PostAddedSeriesLoader::path(const PostAddedSeriesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Library/Series/Added");
}

QUrlQuery PostAddedSeriesLoader::query(const PostAddedSeriesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.tvdbIdNull()) {
		result.addQueryItem("tvdbId", Support::toString<QString>(params.tvdbId()));
	}
	
	return result;
}

QByteArray PostAddedSeriesLoader::body(const PostAddedSeriesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation PostAddedSeriesLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

PostUpdatedSeriesLoader::PostUpdatedSeriesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, PostUpdatedSeriesParams>(apiClient) {}

QString PostUpdatedSeriesLoader::path(const PostUpdatedSeriesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Library/Series/Updated");
}

QUrlQuery PostUpdatedSeriesLoader::query(const PostUpdatedSeriesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.tvdbIdNull()) {
		result.addQueryItem("tvdbId", Support::toString<QString>(params.tvdbId()));
	}
	
	return result;
}

QByteArray PostUpdatedSeriesLoader::body(const PostUpdatedSeriesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation PostUpdatedSeriesLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

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

QByteArray GetSimilarMoviesLoader::body(const GetSimilarMoviesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetSimilarMoviesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

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

QByteArray GetSimilarShowsLoader::body(const GetSimilarShowsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetSimilarShowsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

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

QByteArray GetSimilarTrailersLoader::body(const GetSimilarTrailersParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetSimilarTrailersLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
