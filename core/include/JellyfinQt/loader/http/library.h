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

#ifndef JELLYFIN_LOADER_HTTP_LIBRARY_H
#define JELLYFIN_LOADER_HTTP_LIBRARY_H

#include <optional>
#include <QString>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/baseitemdto.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/allthememediaresult.h"
#include "JellyfinQt/dto/thememediaresult.h"
#include "JellyfinQt/dto/thememediaresult.h"
#include "JellyfinQt/dto/itemcounts.h"
#include "JellyfinQt/dto/libraryoptionsresultdto.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Gets similar items.
 */

class GetSimilarAlbumsLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetSimilarAlbumsParams> {
public:
	explicit GetSimilarAlbumsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetSimilarAlbumsParams& parameters) const override;
	QUrlQuery query(const GetSimilarAlbumsParams& parameters) const override;
};
/**
 * @brief Gets similar items.
 */

class GetSimilarArtistsLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetSimilarArtistsParams> {
public:
	explicit GetSimilarArtistsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetSimilarArtistsParams& parameters) const override;
	QUrlQuery query(const GetSimilarArtistsParams& parameters) const override;
};
/**
 * @brief Gets all parents of an item.
 */

class GetAncestorsLoader : public Jellyfin::Support::HttpLoader<QList<BaseItemDto>, GetAncestorsParams> {
public:
	explicit GetAncestorsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetAncestorsParams& parameters) const override;
	QUrlQuery query(const GetAncestorsParams& parameters) const override;
};
/**
 * @brief Gets critic review for an item.
 */

class GetCriticReviewsLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetCriticReviewsParams> {
public:
	explicit GetCriticReviewsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetCriticReviewsParams& parameters) const override;
	QUrlQuery query(const GetCriticReviewsParams& parameters) const override;
};
/**
 * @brief Gets similar items.
 */

class GetSimilarItemsLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetSimilarItemsParams> {
public:
	explicit GetSimilarItemsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetSimilarItemsParams& parameters) const override;
	QUrlQuery query(const GetSimilarItemsParams& parameters) const override;
};
/**
 * @brief Get theme songs and videos for an item.
 */

class GetThemeMediaLoader : public Jellyfin::Support::HttpLoader<AllThemeMediaResult, GetThemeMediaParams> {
public:
	explicit GetThemeMediaLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetThemeMediaParams& parameters) const override;
	QUrlQuery query(const GetThemeMediaParams& parameters) const override;
};
/**
 * @brief Get theme songs for an item.
 */

class GetThemeSongsLoader : public Jellyfin::Support::HttpLoader<ThemeMediaResult, GetThemeSongsParams> {
public:
	explicit GetThemeSongsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetThemeSongsParams& parameters) const override;
	QUrlQuery query(const GetThemeSongsParams& parameters) const override;
};
/**
 * @brief Get theme videos for an item.
 */

class GetThemeVideosLoader : public Jellyfin::Support::HttpLoader<ThemeMediaResult, GetThemeVideosParams> {
public:
	explicit GetThemeVideosLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetThemeVideosParams& parameters) const override;
	QUrlQuery query(const GetThemeVideosParams& parameters) const override;
};
/**
 * @brief Get item counts.
 */

class GetItemCountsLoader : public Jellyfin::Support::HttpLoader<ItemCounts, GetItemCountsParams> {
public:
	explicit GetItemCountsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetItemCountsParams& parameters) const override;
	QUrlQuery query(const GetItemCountsParams& parameters) const override;
};
/**
 * @brief Gets the library options info.
 */

class GetLibraryOptionsInfoLoader : public Jellyfin::Support::HttpLoader<LibraryOptionsResultDto, GetLibraryOptionsInfoParams> {
public:
	explicit GetLibraryOptionsInfoLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetLibraryOptionsInfoParams& parameters) const override;
	QUrlQuery query(const GetLibraryOptionsInfoParams& parameters) const override;
};
/**
 * @brief Gets all user media folders.
 */

class GetMediaFoldersLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetMediaFoldersParams> {
public:
	explicit GetMediaFoldersLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetMediaFoldersParams& parameters) const override;
	QUrlQuery query(const GetMediaFoldersParams& parameters) const override;
};
/**
 * @brief Gets a list of physical paths from virtual folders.
 */

class GetPhysicalPathsLoader : public Jellyfin::Support::HttpLoader<QStringList, GetPhysicalPathsParams> {
public:
	explicit GetPhysicalPathsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetPhysicalPathsParams& parameters) const override;
	QUrlQuery query(const GetPhysicalPathsParams& parameters) const override;
};
/**
 * @brief Gets similar items.
 */

class GetSimilarMoviesLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetSimilarMoviesParams> {
public:
	explicit GetSimilarMoviesLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetSimilarMoviesParams& parameters) const override;
	QUrlQuery query(const GetSimilarMoviesParams& parameters) const override;
};
/**
 * @brief Gets similar items.
 */

class GetSimilarShowsLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetSimilarShowsParams> {
public:
	explicit GetSimilarShowsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetSimilarShowsParams& parameters) const override;
	QUrlQuery query(const GetSimilarShowsParams& parameters) const override;
};
/**
 * @brief Gets similar items.
 */

class GetSimilarTrailersLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetSimilarTrailersParams> {
public:
	explicit GetSimilarTrailersLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetSimilarTrailersParams& parameters) const override;
	QUrlQuery query(const GetSimilarTrailersParams& parameters) const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_LIBRARY_H
