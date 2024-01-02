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

#include <JellyfinQt/loader/http/devices.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetDevicesLoader::GetDevicesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<DeviceInfoQueryResult, GetDevicesParams>(apiClient) {}

QString GetDevicesLoader::path(const GetDevicesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Devices");
}

QUrlQuery GetDevicesLoader::query(const GetDevicesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.supportsSyncNull()) {
		result.addQueryItem("supportsSync", Support::toString<std::optional<bool>>(params.supportsSync()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	
	return result;
}

QByteArray GetDevicesLoader::body(const GetDevicesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetDevicesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

DeleteDeviceLoader::DeleteDeviceLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DeleteDeviceParams>(apiClient) {}

QString DeleteDeviceLoader::path(const DeleteDeviceParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Devices");
}

QUrlQuery DeleteDeviceLoader::query(const DeleteDeviceParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("id", Support::toString<QString>(params.jellyfinId()));

	// Optional parameters
	
	return result;
}

QByteArray DeleteDeviceLoader::body(const DeleteDeviceParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DeleteDeviceLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

GetDeviceInfoLoader::GetDeviceInfoLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<DeviceInfo, GetDeviceInfoParams>(apiClient) {}

QString GetDeviceInfoLoader::path(const GetDeviceInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Devices/Info");
}

QUrlQuery GetDeviceInfoLoader::query(const GetDeviceInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("id", Support::toString<QString>(params.jellyfinId()));

	// Optional parameters
	
	return result;
}

QByteArray GetDeviceInfoLoader::body(const GetDeviceInfoParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetDeviceInfoLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetDeviceOptionsLoader::GetDeviceOptionsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<DeviceOptions, GetDeviceOptionsParams>(apiClient) {}

QString GetDeviceOptionsLoader::path(const GetDeviceOptionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Devices/Options");
}

QUrlQuery GetDeviceOptionsLoader::query(const GetDeviceOptionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("id", Support::toString<QString>(params.jellyfinId()));

	// Optional parameters
	
	return result;
}

QByteArray GetDeviceOptionsLoader::body(const GetDeviceOptionsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetDeviceOptionsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

UpdateDeviceOptionsLoader::UpdateDeviceOptionsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UpdateDeviceOptionsParams>(apiClient) {}

QString UpdateDeviceOptionsLoader::path(const UpdateDeviceOptionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Devices/Options");
}

QUrlQuery UpdateDeviceOptionsLoader::query(const UpdateDeviceOptionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("id", Support::toString<QString>(params.jellyfinId()));

	// Optional parameters
	
	return result;
}

QByteArray UpdateDeviceOptionsLoader::body(const UpdateDeviceOptionsParams &params) const {
	return Support::toString<QSharedPointer<DeviceOptions>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation UpdateDeviceOptionsLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
