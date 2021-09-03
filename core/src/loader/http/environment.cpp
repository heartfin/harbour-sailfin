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

#include <JellyfinQt/loader/http/environment.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetDefaultDirectoryBrowserLoader::GetDefaultDirectoryBrowserLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<DefaultDirectoryBrowserInfoDto, GetDefaultDirectoryBrowserParams>(apiClient) {}

QString GetDefaultDirectoryBrowserLoader::path(const GetDefaultDirectoryBrowserParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Environment/DefaultDirectoryBrowser");
}

QUrlQuery GetDefaultDirectoryBrowserLoader::query(const GetDefaultDirectoryBrowserParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetDefaultDirectoryBrowserLoader::body(const GetDefaultDirectoryBrowserParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetDefaultDirectoryBrowserLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetDirectoryContentsLoader::GetDirectoryContentsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<FileSystemEntryInfo>, GetDirectoryContentsParams>(apiClient) {}

QString GetDirectoryContentsLoader::path(const GetDirectoryContentsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Environment/DirectoryContents");
}

QUrlQuery GetDirectoryContentsLoader::query(const GetDirectoryContentsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("path", Support::toString<QString>(params.path()));

	// Optional parameters
	if (!params.includeFilesNull()) {
		result.addQueryItem("includeFiles", Support::toString<std::optional<bool>>(params.includeFiles()));
	}
	if (!params.includeDirectoriesNull()) {
		result.addQueryItem("includeDirectories", Support::toString<std::optional<bool>>(params.includeDirectories()));
	}
	
	return result;
}

QByteArray GetDirectoryContentsLoader::body(const GetDirectoryContentsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetDirectoryContentsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetDrivesLoader::GetDrivesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<FileSystemEntryInfo>, GetDrivesParams>(apiClient) {}

QString GetDrivesLoader::path(const GetDrivesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Environment/Drives");
}

QUrlQuery GetDrivesLoader::query(const GetDrivesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetDrivesLoader::body(const GetDrivesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetDrivesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetNetworkSharesLoader::GetNetworkSharesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<FileSystemEntryInfo>, GetNetworkSharesParams>(apiClient) {}

QString GetNetworkSharesLoader::path(const GetNetworkSharesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Environment/NetworkShares");
}

QUrlQuery GetNetworkSharesLoader::query(const GetNetworkSharesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetNetworkSharesLoader::body(const GetNetworkSharesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetNetworkSharesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetParentPathLoader::GetParentPathLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QString, GetParentPathParams>(apiClient) {}

QString GetParentPathLoader::path(const GetParentPathParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Environment/ParentPath");
}

QUrlQuery GetParentPathLoader::query(const GetParentPathParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("path", Support::toString<QString>(params.path()));

	// Optional parameters
	
	return result;
}

QByteArray GetParentPathLoader::body(const GetParentPathParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetParentPathLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
