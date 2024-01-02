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

#ifndef JELLYFIN_LOADER_HTTP_LIBRARYSTRUCTURE_H
#define JELLYFIN_LOADER_HTTP_LIBRARYSTRUCTURE_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/virtualfolderinfo.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Gets all virtual folders.
 */

class GetVirtualFoldersLoader : public Jellyfin::Support::HttpLoader<QList<VirtualFolderInfo>, GetVirtualFoldersParams> {
public:
	explicit GetVirtualFoldersLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetVirtualFoldersParams& parameters) const override;
	QUrlQuery query(const GetVirtualFoldersParams& parameters) const override;
	QByteArray body(const GetVirtualFoldersParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Adds a virtual folder.
 */

class AddVirtualFolderLoader : public Jellyfin::Support::HttpLoader<void, AddVirtualFolderParams> {
public:
	explicit AddVirtualFolderLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const AddVirtualFolderParams& parameters) const override;
	QUrlQuery query(const AddVirtualFolderParams& parameters) const override;
	QByteArray body(const AddVirtualFolderParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Removes a virtual folder.
 */

class RemoveVirtualFolderLoader : public Jellyfin::Support::HttpLoader<void, RemoveVirtualFolderParams> {
public:
	explicit RemoveVirtualFolderLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const RemoveVirtualFolderParams& parameters) const override;
	QUrlQuery query(const RemoveVirtualFolderParams& parameters) const override;
	QByteArray body(const RemoveVirtualFolderParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Update library options.
 */

class UpdateLibraryOptionsLoader : public Jellyfin::Support::HttpLoader<void, UpdateLibraryOptionsParams> {
public:
	explicit UpdateLibraryOptionsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const UpdateLibraryOptionsParams& parameters) const override;
	QUrlQuery query(const UpdateLibraryOptionsParams& parameters) const override;
	QByteArray body(const UpdateLibraryOptionsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Renames a virtual folder.
 */

class RenameVirtualFolderLoader : public Jellyfin::Support::HttpLoader<void, RenameVirtualFolderParams> {
public:
	explicit RenameVirtualFolderLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const RenameVirtualFolderParams& parameters) const override;
	QUrlQuery query(const RenameVirtualFolderParams& parameters) const override;
	QByteArray body(const RenameVirtualFolderParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Add a media path to a library.
 */

class AddMediaPathLoader : public Jellyfin::Support::HttpLoader<void, AddMediaPathParams> {
public:
	explicit AddMediaPathLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const AddMediaPathParams& parameters) const override;
	QUrlQuery query(const AddMediaPathParams& parameters) const override;
	QByteArray body(const AddMediaPathParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Remove a media path.
 */

class RemoveMediaPathLoader : public Jellyfin::Support::HttpLoader<void, RemoveMediaPathParams> {
public:
	explicit RemoveMediaPathLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const RemoveMediaPathParams& parameters) const override;
	QUrlQuery query(const RemoveMediaPathParams& parameters) const override;
	QByteArray body(const RemoveMediaPathParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Updates a media path.
 */

class UpdateMediaPathLoader : public Jellyfin::Support::HttpLoader<void, UpdateMediaPathParams> {
public:
	explicit UpdateMediaPathLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const UpdateMediaPathParams& parameters) const override;
	QUrlQuery query(const UpdateMediaPathParams& parameters) const override;
	QByteArray body(const UpdateMediaPathParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_LIBRARYSTRUCTURE_H
