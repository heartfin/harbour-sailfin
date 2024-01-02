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

#ifndef JELLYFIN_LOADER_HTTP_QUICKCONNECT_H
#define JELLYFIN_LOADER_HTTP_QUICKCONNECT_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/quickconnectresult.h"
#include "JellyfinQt/dto/quickconnectresult.h"
#include "JellyfinQt/dto/quickconnectstate.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Temporarily activates quick connect for five minutes.
 */

class ActivateLoader : public Jellyfin::Support::HttpLoader<void, ActivateParams> {
public:
	explicit ActivateLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const ActivateParams& parameters) const override;
	QUrlQuery query(const ActivateParams& parameters) const override;
	QByteArray body(const ActivateParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Authorizes a pending quick connect request.
 */

class AuthorizeLoader : public Jellyfin::Support::HttpLoader<bool, AuthorizeParams> {
public:
	explicit AuthorizeLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const AuthorizeParams& parameters) const override;
	QUrlQuery query(const AuthorizeParams& parameters) const override;
	QByteArray body(const AuthorizeParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Enables or disables quick connect.
 */

class AvailableLoader : public Jellyfin::Support::HttpLoader<void, AvailableParams> {
public:
	explicit AvailableLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const AvailableParams& parameters) const override;
	QUrlQuery query(const AvailableParams& parameters) const override;
	QByteArray body(const AvailableParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Attempts to retrieve authentication information.
 */

class ConnectLoader : public Jellyfin::Support::HttpLoader<QuickConnectResult, ConnectParams> {
public:
	explicit ConnectLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const ConnectParams& parameters) const override;
	QUrlQuery query(const ConnectParams& parameters) const override;
	QByteArray body(const ConnectParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Deauthorize all quick connect devices for the current user.
 */

class DeauthorizeLoader : public Jellyfin::Support::HttpLoader<qint32, DeauthorizeParams> {
public:
	explicit DeauthorizeLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const DeauthorizeParams& parameters) const override;
	QUrlQuery query(const DeauthorizeParams& parameters) const override;
	QByteArray body(const DeauthorizeParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Initiate a new quick connect request.
 */

class InitiateLoader : public Jellyfin::Support::HttpLoader<QuickConnectResult, InitiateParams> {
public:
	explicit InitiateLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const InitiateParams& parameters) const override;
	QUrlQuery query(const InitiateParams& parameters) const override;
	QByteArray body(const InitiateParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets the current quick connect state.
 */

class GetStatusLoader : public Jellyfin::Support::HttpLoader<QuickConnectState, GetStatusParams> {
public:
	explicit GetStatusLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetStatusParams& parameters) const override;
	QUrlQuery query(const GetStatusParams& parameters) const override;
	QByteArray body(const GetStatusParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_QUICKCONNECT_H
