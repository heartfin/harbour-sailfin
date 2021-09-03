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

#ifndef JELLYFIN_LOADER_HTTP_TVSHOWS_H
#define JELLYFIN_LOADER_HTTP_TVSHOWS_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
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
 * @brief Gets episodes for a tv season.
 */

class GetEpisodesLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetEpisodesParams> {
public:
	explicit GetEpisodesLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetEpisodesParams& parameters) const override;
	QUrlQuery query(const GetEpisodesParams& parameters) const override;
	QByteArray body(const GetEpisodesParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets seasons for a tv series.
 */

class GetSeasonsLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetSeasonsParams> {
public:
	explicit GetSeasonsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetSeasonsParams& parameters) const override;
	QUrlQuery query(const GetSeasonsParams& parameters) const override;
	QByteArray body(const GetSeasonsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets a list of next up episodes.
 */

class GetNextUpLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetNextUpParams> {
public:
	explicit GetNextUpLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetNextUpParams& parameters) const override;
	QUrlQuery query(const GetNextUpParams& parameters) const override;
	QByteArray body(const GetNextUpParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets a list of upcoming episodes.
 */

class GetUpcomingEpisodesLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetUpcomingEpisodesParams> {
public:
	explicit GetUpcomingEpisodesLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetUpcomingEpisodesParams& parameters) const override;
	QUrlQuery query(const GetUpcomingEpisodesParams& parameters) const override;
	QByteArray body(const GetUpcomingEpisodesParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_TVSHOWS_H
