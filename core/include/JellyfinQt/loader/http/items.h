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

#ifndef JELLYFIN_LOADER_HTTP_ITEMS_H
#define JELLYFIN_LOADER_HTTP_ITEMS_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/useritemdatadto.h"
#include "JellyfinQt/dto/useritemdatadto.h"
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
 * @brief Gets items based on a query.
 */

class GetItemsLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetItemsParams> {
public:
	explicit GetItemsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetItemsParams& parameters) const override;
	QUrlQuery query(const GetItemsParams& parameters) const override;
	QByteArray body(const GetItemsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Get Item User Data.
 */

class GetItemUserDataLoader : public Jellyfin::Support::HttpLoader<UserItemDataDto, GetItemUserDataParams> {
public:
	explicit GetItemUserDataLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetItemUserDataParams& parameters) const override;
	QUrlQuery query(const GetItemUserDataParams& parameters) const override;
	QByteArray body(const GetItemUserDataParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Update Item User Data.
 */

class UpdateItemUserDataLoader : public Jellyfin::Support::HttpLoader<UserItemDataDto, UpdateItemUserDataParams> {
public:
	explicit UpdateItemUserDataLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const UpdateItemUserDataParams& parameters) const override;
	QUrlQuery query(const UpdateItemUserDataParams& parameters) const override;
	QByteArray body(const UpdateItemUserDataParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets items based on a query.
 */

class GetResumeItemsLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetResumeItemsParams> {
public:
	explicit GetResumeItemsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetResumeItemsParams& parameters) const override;
	QUrlQuery query(const GetResumeItemsParams& parameters) const override;
	QByteArray body(const GetResumeItemsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_ITEMS_H
