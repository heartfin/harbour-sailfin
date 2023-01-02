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

#ifndef JELLYFIN_LOADER_HTTP_ENVIRONMENT_H
#define JELLYFIN_LOADER_HTTP_ENVIRONMENT_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/defaultdirectorybrowserinfodto.h"
#include "JellyfinQt/dto/filesystementryinfo.h"
#include "JellyfinQt/dto/filesystementryinfo.h"
#include "JellyfinQt/dto/filesystementryinfo.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Get Default directory browser.
 */

class GetDefaultDirectoryBrowserLoader : public Jellyfin::Support::HttpLoader<DefaultDirectoryBrowserInfoDto, GetDefaultDirectoryBrowserParams> {
public:
	explicit GetDefaultDirectoryBrowserLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetDefaultDirectoryBrowserParams& parameters) const override;
	QUrlQuery query(const GetDefaultDirectoryBrowserParams& parameters) const override;
	QByteArray body(const GetDefaultDirectoryBrowserParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets the contents of a given directory in the file system.
 */

class GetDirectoryContentsLoader : public Jellyfin::Support::HttpLoader<QList<FileSystemEntryInfo>, GetDirectoryContentsParams> {
public:
	explicit GetDirectoryContentsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetDirectoryContentsParams& parameters) const override;
	QUrlQuery query(const GetDirectoryContentsParams& parameters) const override;
	QByteArray body(const GetDirectoryContentsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets available drives from the server's file system.
 */

class GetDrivesLoader : public Jellyfin::Support::HttpLoader<QList<FileSystemEntryInfo>, GetDrivesParams> {
public:
	explicit GetDrivesLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetDrivesParams& parameters) const override;
	QUrlQuery query(const GetDrivesParams& parameters) const override;
	QByteArray body(const GetDrivesParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets network paths.
 */

class GetNetworkSharesLoader : public Jellyfin::Support::HttpLoader<QList<FileSystemEntryInfo>, GetNetworkSharesParams> {
public:
	explicit GetNetworkSharesLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetNetworkSharesParams& parameters) const override;
	QUrlQuery query(const GetNetworkSharesParams& parameters) const override;
	QByteArray body(const GetNetworkSharesParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets the parent path of a given path.
 */

class GetParentPathLoader : public Jellyfin::Support::HttpLoader<QString, GetParentPathParams> {
public:
	explicit GetParentPathLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetParentPathParams& parameters) const override;
	QUrlQuery query(const GetParentPathParams& parameters) const override;
	QByteArray body(const GetParentPathParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Validates path.
 */

class ValidatePathLoader : public Jellyfin::Support::HttpLoader<void, ValidatePathParams> {
public:
	explicit ValidatePathLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const ValidatePathParams& parameters) const override;
	QUrlQuery query(const ValidatePathParams& parameters) const override;
	QByteArray body(const ValidatePathParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_ENVIRONMENT_H
