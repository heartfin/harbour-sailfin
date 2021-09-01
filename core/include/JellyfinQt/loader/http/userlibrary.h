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

#ifndef JELLYFIN_LOADER_HTTP_USERLIBRARY_H
#define JELLYFIN_LOADER_HTTP_USERLIBRARY_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/useritemdatadto.h"
#include "JellyfinQt/dto/useritemdatadto.h"
#include "JellyfinQt/dto/baseitemdto.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/baseitemdto.h"
#include "JellyfinQt/dto/useritemdatadto.h"
#include "JellyfinQt/dto/useritemdatadto.h"
#include "JellyfinQt/dto/baseitemdto.h"
#include "JellyfinQt/dto/baseitemdto.h"
#include "JellyfinQt/dto/baseitemdto.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Marks an item as a favorite.
 */

class MarkFavoriteItemLoader : public Jellyfin::Support::HttpLoader<UserItemDataDto, MarkFavoriteItemParams> {
public:
	explicit MarkFavoriteItemLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const MarkFavoriteItemParams& parameters) const override;
	QUrlQuery query(const MarkFavoriteItemParams& parameters) const override;
};
/**
 * @brief Unmarks item as a favorite.
 */

class UnmarkFavoriteItemLoader : public Jellyfin::Support::HttpLoader<UserItemDataDto, UnmarkFavoriteItemParams> {
public:
	explicit UnmarkFavoriteItemLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const UnmarkFavoriteItemParams& parameters) const override;
	QUrlQuery query(const UnmarkFavoriteItemParams& parameters) const override;
};
/**
 * @brief Gets an item from a user's library.
 */

class GetItemLoader : public Jellyfin::Support::HttpLoader<BaseItemDto, GetItemParams> {
public:
	explicit GetItemLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetItemParams& parameters) const override;
	QUrlQuery query(const GetItemParams& parameters) const override;
};
/**
 * @brief Gets intros to play before the main media item plays.
 */

class GetIntrosLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetIntrosParams> {
public:
	explicit GetIntrosLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetIntrosParams& parameters) const override;
	QUrlQuery query(const GetIntrosParams& parameters) const override;
};
/**
 * @brief Gets local trailers for an item.
 */

class GetLocalTrailersLoader : public Jellyfin::Support::HttpLoader<QList<BaseItemDto>, GetLocalTrailersParams> {
public:
	explicit GetLocalTrailersLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetLocalTrailersParams& parameters) const override;
	QUrlQuery query(const GetLocalTrailersParams& parameters) const override;
};
/**
 * @brief Deletes a user's saved personal rating for an item.
 */

class DeleteUserItemRatingLoader : public Jellyfin::Support::HttpLoader<UserItemDataDto, DeleteUserItemRatingParams> {
public:
	explicit DeleteUserItemRatingLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const DeleteUserItemRatingParams& parameters) const override;
	QUrlQuery query(const DeleteUserItemRatingParams& parameters) const override;
};
/**
 * @brief Updates a user's rating for an item.
 */

class UpdateUserItemRatingLoader : public Jellyfin::Support::HttpLoader<UserItemDataDto, UpdateUserItemRatingParams> {
public:
	explicit UpdateUserItemRatingLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const UpdateUserItemRatingParams& parameters) const override;
	QUrlQuery query(const UpdateUserItemRatingParams& parameters) const override;
};
/**
 * @brief Gets special features for an item.
 */

class GetSpecialFeaturesLoader : public Jellyfin::Support::HttpLoader<QList<BaseItemDto>, GetSpecialFeaturesParams> {
public:
	explicit GetSpecialFeaturesLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetSpecialFeaturesParams& parameters) const override;
	QUrlQuery query(const GetSpecialFeaturesParams& parameters) const override;
};
/**
 * @brief Gets latest media.
 */

class GetLatestMediaLoader : public Jellyfin::Support::HttpLoader<QList<BaseItemDto>, GetLatestMediaParams> {
public:
	explicit GetLatestMediaLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetLatestMediaParams& parameters) const override;
	QUrlQuery query(const GetLatestMediaParams& parameters) const override;
};
/**
 * @brief Gets the root folder from a user's library.
 */

class GetRootFolderLoader : public Jellyfin::Support::HttpLoader<BaseItemDto, GetRootFolderParams> {
public:
	explicit GetRootFolderLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetRootFolderParams& parameters) const override;
	QUrlQuery query(const GetRootFolderParams& parameters) const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_USERLIBRARY_H
