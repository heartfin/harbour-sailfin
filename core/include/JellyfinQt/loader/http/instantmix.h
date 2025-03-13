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

#ifndef JELLYFIN_LOADER_HTTP_INSTANTMIX_H
#define JELLYFIN_LOADER_HTTP_INSTANTMIX_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
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
 * @brief Creates an instant playlist based on a given album.
 */

class GetInstantMixFromAlbumLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetInstantMixFromAlbumParams> {
public:
	explicit GetInstantMixFromAlbumLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetInstantMixFromAlbumParams& parameters) const override;
	QUrlQuery query(const GetInstantMixFromAlbumParams& parameters) const override;
	QByteArray body(const GetInstantMixFromAlbumParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Creates an instant playlist based on a given artist.
 */

class GetInstantMixFromArtistsLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetInstantMixFromArtistsParams> {
public:
	explicit GetInstantMixFromArtistsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetInstantMixFromArtistsParams& parameters) const override;
	QUrlQuery query(const GetInstantMixFromArtistsParams& parameters) const override;
	QByteArray body(const GetInstantMixFromArtistsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Creates an instant playlist based on a given artist.
 */

class GetInstantMixFromArtists2Loader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetInstantMixFromArtists2Params> {
public:
	explicit GetInstantMixFromArtists2Loader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetInstantMixFromArtists2Params& parameters) const override;
	QUrlQuery query(const GetInstantMixFromArtists2Params& parameters) const override;
	QByteArray body(const GetInstantMixFromArtists2Params& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Creates an instant playlist based on a given item.
 */

class GetInstantMixFromItemLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetInstantMixFromItemParams> {
public:
	explicit GetInstantMixFromItemLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetInstantMixFromItemParams& parameters) const override;
	QUrlQuery query(const GetInstantMixFromItemParams& parameters) const override;
	QByteArray body(const GetInstantMixFromItemParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Creates an instant playlist based on a given genre.
 */

class GetInstantMixFromMusicGenreByNameLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetInstantMixFromMusicGenreByNameParams> {
public:
	explicit GetInstantMixFromMusicGenreByNameLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetInstantMixFromMusicGenreByNameParams& parameters) const override;
	QUrlQuery query(const GetInstantMixFromMusicGenreByNameParams& parameters) const override;
	QByteArray body(const GetInstantMixFromMusicGenreByNameParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Creates an instant playlist based on a given genre.
 */

class GetInstantMixFromMusicGenreByIdLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetInstantMixFromMusicGenreByIdParams> {
public:
	explicit GetInstantMixFromMusicGenreByIdLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetInstantMixFromMusicGenreByIdParams& parameters) const override;
	QUrlQuery query(const GetInstantMixFromMusicGenreByIdParams& parameters) const override;
	QByteArray body(const GetInstantMixFromMusicGenreByIdParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Creates an instant playlist based on a given playlist.
 */

class GetInstantMixFromPlaylistLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetInstantMixFromPlaylistParams> {
public:
	explicit GetInstantMixFromPlaylistLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetInstantMixFromPlaylistParams& parameters) const override;
	QUrlQuery query(const GetInstantMixFromPlaylistParams& parameters) const override;
	QByteArray body(const GetInstantMixFromPlaylistParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Creates an instant playlist based on a given song.
 */

class GetInstantMixFromSongLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetInstantMixFromSongParams> {
public:
	explicit GetInstantMixFromSongLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetInstantMixFromSongParams& parameters) const override;
	QUrlQuery query(const GetInstantMixFromSongParams& parameters) const override;
	QByteArray body(const GetInstantMixFromSongParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_INSTANTMIX_H
