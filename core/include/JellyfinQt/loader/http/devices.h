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

#ifndef JELLYFIN_LOADER_HTTP_DEVICES_H
#define JELLYFIN_LOADER_HTTP_DEVICES_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/deviceinfodtoqueryresult.h"
#include "JellyfinQt/dto/deviceinfodto.h"
#include "JellyfinQt/dto/deviceoptionsdto.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Get Devices.
 */

class GetDevicesLoader : public Jellyfin::Support::HttpLoader<DeviceInfoDtoQueryResult, GetDevicesParams> {
public:
	explicit GetDevicesLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetDevicesParams& parameters) const override;
	QUrlQuery query(const GetDevicesParams& parameters) const override;
	QByteArray body(const GetDevicesParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Deletes a device.
 */

class DeleteDeviceLoader : public Jellyfin::Support::HttpLoader<void, DeleteDeviceParams> {
public:
	explicit DeleteDeviceLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const DeleteDeviceParams& parameters) const override;
	QUrlQuery query(const DeleteDeviceParams& parameters) const override;
	QByteArray body(const DeleteDeviceParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Get info for a device.
 */

class GetDeviceInfoLoader : public Jellyfin::Support::HttpLoader<DeviceInfoDto, GetDeviceInfoParams> {
public:
	explicit GetDeviceInfoLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetDeviceInfoParams& parameters) const override;
	QUrlQuery query(const GetDeviceInfoParams& parameters) const override;
	QByteArray body(const GetDeviceInfoParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Get options for a device.
 */

class GetDeviceOptionsLoader : public Jellyfin::Support::HttpLoader<DeviceOptionsDto, GetDeviceOptionsParams> {
public:
	explicit GetDeviceOptionsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetDeviceOptionsParams& parameters) const override;
	QUrlQuery query(const GetDeviceOptionsParams& parameters) const override;
	QByteArray body(const GetDeviceOptionsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Update device options.
 */

class UpdateDeviceOptionsLoader : public Jellyfin::Support::HttpLoader<void, UpdateDeviceOptionsParams> {
public:
	explicit UpdateDeviceOptionsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const UpdateDeviceOptionsParams& parameters) const override;
	QUrlQuery query(const UpdateDeviceOptionsParams& parameters) const override;
	QByteArray body(const UpdateDeviceOptionsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_DEVICES_H
