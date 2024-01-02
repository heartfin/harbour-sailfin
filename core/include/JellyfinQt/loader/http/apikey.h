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

#ifndef JELLYFIN_LOADER_HTTP_APIKEY_H
#define JELLYFIN_LOADER_HTTP_APIKEY_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/authenticationinfoqueryresult.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Get all keys.
 */

class GetKeysLoader : public Jellyfin::Support::HttpLoader<AuthenticationInfoQueryResult, GetKeysParams> {
public:
	explicit GetKeysLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetKeysParams& parameters) const override;
	QUrlQuery query(const GetKeysParams& parameters) const override;
	QByteArray body(const GetKeysParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Create a new api key.
 */

class CreateKeyLoader : public Jellyfin::Support::HttpLoader<void, CreateKeyParams> {
public:
	explicit CreateKeyLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const CreateKeyParams& parameters) const override;
	QUrlQuery query(const CreateKeyParams& parameters) const override;
	QByteArray body(const CreateKeyParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Remove an api key.
 */

class RevokeKeyLoader : public Jellyfin::Support::HttpLoader<void, RevokeKeyParams> {
public:
	explicit RevokeKeyLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const RevokeKeyParams& parameters) const override;
	QUrlQuery query(const RevokeKeyParams& parameters) const override;
	QByteArray body(const RevokeKeyParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_APIKEY_H
