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

#ifndef JELLYFIN_LOADER_HTTP_LYRICS_H
#define JELLYFIN_LOADER_HTTP_LYRICS_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/lyricdto.h"
#include "JellyfinQt/dto/lyricdto.h"
#include "JellyfinQt/dto/remotelyricinfodto.h"
#include "JellyfinQt/dto/lyricdto.h"
#include "JellyfinQt/dto/lyricdto.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Gets an item's lyrics.
 */

class GetLyricsLoader : public Jellyfin::Support::HttpLoader<LyricDto, GetLyricsParams> {
public:
	explicit GetLyricsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetLyricsParams& parameters) const override;
	QUrlQuery query(const GetLyricsParams& parameters) const override;
	QByteArray body(const GetLyricsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Upload an external lyric file.
 */

class UploadLyricsLoader : public Jellyfin::Support::HttpLoader<LyricDto, UploadLyricsParams> {
public:
	explicit UploadLyricsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const UploadLyricsParams& parameters) const override;
	QUrlQuery query(const UploadLyricsParams& parameters) const override;
	QByteArray body(const UploadLyricsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Deletes an external lyric file.
 */

class DeleteLyricsLoader : public Jellyfin::Support::HttpLoader<void, DeleteLyricsParams> {
public:
	explicit DeleteLyricsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const DeleteLyricsParams& parameters) const override;
	QUrlQuery query(const DeleteLyricsParams& parameters) const override;
	QByteArray body(const DeleteLyricsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Search remote lyrics.
 */

class SearchRemoteLyricsLoader : public Jellyfin::Support::HttpLoader<QList<RemoteLyricInfoDto>, SearchRemoteLyricsParams> {
public:
	explicit SearchRemoteLyricsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SearchRemoteLyricsParams& parameters) const override;
	QUrlQuery query(const SearchRemoteLyricsParams& parameters) const override;
	QByteArray body(const SearchRemoteLyricsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Downloads a remote lyric.
 */

class DownloadRemoteLyricsLoader : public Jellyfin::Support::HttpLoader<LyricDto, DownloadRemoteLyricsParams> {
public:
	explicit DownloadRemoteLyricsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const DownloadRemoteLyricsParams& parameters) const override;
	QUrlQuery query(const DownloadRemoteLyricsParams& parameters) const override;
	QByteArray body(const DownloadRemoteLyricsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets the remote lyrics.
 */

class GetRemoteLyricsLoader : public Jellyfin::Support::HttpLoader<LyricDto, GetRemoteLyricsParams> {
public:
	explicit GetRemoteLyricsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetRemoteLyricsParams& parameters) const override;
	QUrlQuery query(const GetRemoteLyricsParams& parameters) const override;
	QByteArray body(const GetRemoteLyricsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_LYRICS_H
