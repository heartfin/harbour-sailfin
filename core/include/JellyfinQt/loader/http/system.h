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

#ifndef JELLYFIN_LOADER_HTTP_SYSTEM_H
#define JELLYFIN_LOADER_HTTP_SYSTEM_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/endpointinfo.h"
#include "JellyfinQt/dto/systeminfo.h"
#include "JellyfinQt/dto/publicsysteminfo.h"
#include "JellyfinQt/dto/logfile.h"
#include "JellyfinQt/dto/wakeonlaninfo.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Gets information about the request endpoint.
 */

class GetEndpointInfoLoader : public Jellyfin::Support::HttpLoader<EndPointInfo, GetEndpointInfoParams> {
public:
	explicit GetEndpointInfoLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetEndpointInfoParams& parameters) const override;
	QUrlQuery query(const GetEndpointInfoParams& parameters) const override;
};
/**
 * @brief Gets information about the server.
 */

class GetSystemInfoLoader : public Jellyfin::Support::HttpLoader<SystemInfo, GetSystemInfoParams> {
public:
	explicit GetSystemInfoLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetSystemInfoParams& parameters) const override;
	QUrlQuery query(const GetSystemInfoParams& parameters) const override;
};
/**
 * @brief Gets public information about the server.
 */

class GetPublicSystemInfoLoader : public Jellyfin::Support::HttpLoader<PublicSystemInfo, GetPublicSystemInfoParams> {
public:
	explicit GetPublicSystemInfoLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetPublicSystemInfoParams& parameters) const override;
	QUrlQuery query(const GetPublicSystemInfoParams& parameters) const override;
};
/**
 * @brief Gets a list of available server log files.
 */

class GetServerLogsLoader : public Jellyfin::Support::HttpLoader<QList<LogFile>, GetServerLogsParams> {
public:
	explicit GetServerLogsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetServerLogsParams& parameters) const override;
	QUrlQuery query(const GetServerLogsParams& parameters) const override;
};
/**
 * @brief Pings the system.
 */

class GetPingSystemLoader : public Jellyfin::Support::HttpLoader<QString, GetPingSystemParams> {
public:
	explicit GetPingSystemLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetPingSystemParams& parameters) const override;
	QUrlQuery query(const GetPingSystemParams& parameters) const override;
};
/**
 * @brief Pings the system.
 */

class PostPingSystemLoader : public Jellyfin::Support::HttpLoader<QString, PostPingSystemParams> {
public:
	explicit PostPingSystemLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const PostPingSystemParams& parameters) const override;
	QUrlQuery query(const PostPingSystemParams& parameters) const override;
};
/**
 * @brief Gets wake on lan information.
 */

class GetWakeOnLanInfoLoader : public Jellyfin::Support::HttpLoader<QList<WakeOnLanInfo>, GetWakeOnLanInfoParams> {
public:
	explicit GetWakeOnLanInfoLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetWakeOnLanInfoParams& parameters) const override;
	QUrlQuery query(const GetWakeOnLanInfoParams& parameters) const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_SYSTEM_H
