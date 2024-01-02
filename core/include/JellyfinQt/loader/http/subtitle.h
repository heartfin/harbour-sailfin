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

#ifndef JELLYFIN_LOADER_HTTP_SUBTITLE_H
#define JELLYFIN_LOADER_HTTP_SUBTITLE_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/fontfile.h"
#include "JellyfinQt/dto/remotesubtitleinfo.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Gets a list of available fallback font files.
 */

class GetFallbackFontListLoader : public Jellyfin::Support::HttpLoader<QList<FontFile>, GetFallbackFontListParams> {
public:
	explicit GetFallbackFontListLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetFallbackFontListParams& parameters) const override;
	QUrlQuery query(const GetFallbackFontListParams& parameters) const override;
	QByteArray body(const GetFallbackFontListParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Search remote subtitles.
 */

class SearchRemoteSubtitlesLoader : public Jellyfin::Support::HttpLoader<QList<RemoteSubtitleInfo>, SearchRemoteSubtitlesParams> {
public:
	explicit SearchRemoteSubtitlesLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SearchRemoteSubtitlesParams& parameters) const override;
	QUrlQuery query(const SearchRemoteSubtitlesParams& parameters) const override;
	QByteArray body(const SearchRemoteSubtitlesParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Downloads a remote subtitle.
 */

class DownloadRemoteSubtitlesLoader : public Jellyfin::Support::HttpLoader<void, DownloadRemoteSubtitlesParams> {
public:
	explicit DownloadRemoteSubtitlesLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const DownloadRemoteSubtitlesParams& parameters) const override;
	QUrlQuery query(const DownloadRemoteSubtitlesParams& parameters) const override;
	QByteArray body(const DownloadRemoteSubtitlesParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Upload an external subtitle file.
 */

class UploadSubtitleLoader : public Jellyfin::Support::HttpLoader<void, UploadSubtitleParams> {
public:
	explicit UploadSubtitleLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const UploadSubtitleParams& parameters) const override;
	QUrlQuery query(const UploadSubtitleParams& parameters) const override;
	QByteArray body(const UploadSubtitleParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Deletes an external subtitle file.
 */

class DeleteSubtitleLoader : public Jellyfin::Support::HttpLoader<void, DeleteSubtitleParams> {
public:
	explicit DeleteSubtitleLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const DeleteSubtitleParams& parameters) const override;
	QUrlQuery query(const DeleteSubtitleParams& parameters) const override;
	QByteArray body(const DeleteSubtitleParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_SUBTITLE_H
