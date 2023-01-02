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

#include <JellyfinQt/loader/http/system.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetEndpointInfoLoader::GetEndpointInfoLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<EndPointInfo, GetEndpointInfoParams>(apiClient) {}

QString GetEndpointInfoLoader::path(const GetEndpointInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/System/Endpoint");
}

QUrlQuery GetEndpointInfoLoader::query(const GetEndpointInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetEndpointInfoLoader::body(const GetEndpointInfoParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetEndpointInfoLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetSystemInfoLoader::GetSystemInfoLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<SystemInfo, GetSystemInfoParams>(apiClient) {}

QString GetSystemInfoLoader::path(const GetSystemInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/System/Info");
}

QUrlQuery GetSystemInfoLoader::query(const GetSystemInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetSystemInfoLoader::body(const GetSystemInfoParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetSystemInfoLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetPublicSystemInfoLoader::GetPublicSystemInfoLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<PublicSystemInfo, GetPublicSystemInfoParams>(apiClient) {}

QString GetPublicSystemInfoLoader::path(const GetPublicSystemInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/System/Info/Public");
}

QUrlQuery GetPublicSystemInfoLoader::query(const GetPublicSystemInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetPublicSystemInfoLoader::body(const GetPublicSystemInfoParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetPublicSystemInfoLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetServerLogsLoader::GetServerLogsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<LogFile>, GetServerLogsParams>(apiClient) {}

QString GetServerLogsLoader::path(const GetServerLogsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/System/Logs");
}

QUrlQuery GetServerLogsLoader::query(const GetServerLogsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetServerLogsLoader::body(const GetServerLogsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetServerLogsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetPingSystemLoader::GetPingSystemLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QString, GetPingSystemParams>(apiClient) {}

QString GetPingSystemLoader::path(const GetPingSystemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/System/Ping");
}

QUrlQuery GetPingSystemLoader::query(const GetPingSystemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetPingSystemLoader::body(const GetPingSystemParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetPingSystemLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

PostPingSystemLoader::PostPingSystemLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QString, PostPingSystemParams>(apiClient) {}

QString PostPingSystemLoader::path(const PostPingSystemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/System/Ping");
}

QUrlQuery PostPingSystemLoader::query(const PostPingSystemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray PostPingSystemLoader::body(const PostPingSystemParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation PostPingSystemLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

RestartApplicationLoader::RestartApplicationLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, RestartApplicationParams>(apiClient) {}

QString RestartApplicationLoader::path(const RestartApplicationParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/System/Restart");
}

QUrlQuery RestartApplicationLoader::query(const RestartApplicationParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray RestartApplicationLoader::body(const RestartApplicationParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation RestartApplicationLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

ShutdownApplicationLoader::ShutdownApplicationLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, ShutdownApplicationParams>(apiClient) {}

QString ShutdownApplicationLoader::path(const ShutdownApplicationParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/System/Shutdown");
}

QUrlQuery ShutdownApplicationLoader::query(const ShutdownApplicationParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray ShutdownApplicationLoader::body(const ShutdownApplicationParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation ShutdownApplicationLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

GetWakeOnLanInfoLoader::GetWakeOnLanInfoLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<WakeOnLanInfo>, GetWakeOnLanInfoParams>(apiClient) {}

QString GetWakeOnLanInfoLoader::path(const GetWakeOnLanInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/System/WakeOnLanInfo");
}

QUrlQuery GetWakeOnLanInfoLoader::query(const GetWakeOnLanInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetWakeOnLanInfoLoader::body(const GetWakeOnLanInfoParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetWakeOnLanInfoLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
