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

#ifndef JELLYFIN_LOADER_HTTP_PLAYLISTS_H
#define JELLYFIN_LOADER_HTTP_PLAYLISTS_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/playlistcreationresult.h"
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
 * @brief Creates a new playlist.
 */

class CreatePlaylistLoader : public Jellyfin::Support::HttpLoader<PlaylistCreationResult, CreatePlaylistParams> {
public:
	explicit CreatePlaylistLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const CreatePlaylistParams& parameters) const override;
	QUrlQuery query(const CreatePlaylistParams& parameters) const override;
	QByteArray body(const CreatePlaylistParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Adds items to a playlist.
 */

class AddToPlaylistLoader : public Jellyfin::Support::HttpLoader<void, AddToPlaylistParams> {
public:
	explicit AddToPlaylistLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const AddToPlaylistParams& parameters) const override;
	QUrlQuery query(const AddToPlaylistParams& parameters) const override;
	QByteArray body(const AddToPlaylistParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Removes items from a playlist.
 */

class RemoveFromPlaylistLoader : public Jellyfin::Support::HttpLoader<void, RemoveFromPlaylistParams> {
public:
	explicit RemoveFromPlaylistLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const RemoveFromPlaylistParams& parameters) const override;
	QUrlQuery query(const RemoveFromPlaylistParams& parameters) const override;
	QByteArray body(const RemoveFromPlaylistParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets the original items of a playlist.
 */

class GetPlaylistItemsLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetPlaylistItemsParams> {
public:
	explicit GetPlaylistItemsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetPlaylistItemsParams& parameters) const override;
	QUrlQuery query(const GetPlaylistItemsParams& parameters) const override;
	QByteArray body(const GetPlaylistItemsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Moves a playlist item.
 */

class MoveItemLoader : public Jellyfin::Support::HttpLoader<void, MoveItemParams> {
public:
	explicit MoveItemLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const MoveItemParams& parameters) const override;
	QUrlQuery query(const MoveItemParams& parameters) const override;
	QByteArray body(const MoveItemParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_PLAYLISTS_H
