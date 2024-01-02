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

#include <JellyfinQt/loader/http/remoteimage.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetRemoteImagesLoader::GetRemoteImagesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<RemoteImageResult, GetRemoteImagesParams>(apiClient) {}

QString GetRemoteImagesLoader::path(const GetRemoteImagesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/RemoteImages");
}

QUrlQuery GetRemoteImagesLoader::query(const GetRemoteImagesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.typeNull()) {
		result.addQueryItem("type", Support::toString<ImageType>(params.type()));
	}
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString<std::optional<qint32>>(params.startIndex()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.providerNameNull()) {
		result.addQueryItem("providerName", Support::toString<QString>(params.providerName()));
	}
	if (!params.includeAllLanguagesNull()) {
		result.addQueryItem("includeAllLanguages", Support::toString<std::optional<bool>>(params.includeAllLanguages()));
	}
	
	return result;
}

QByteArray GetRemoteImagesLoader::body(const GetRemoteImagesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetRemoteImagesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

DownloadRemoteImageLoader::DownloadRemoteImageLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DownloadRemoteImageParams>(apiClient) {}

QString DownloadRemoteImageLoader::path(const DownloadRemoteImageParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/RemoteImages/Download");
}

QUrlQuery DownloadRemoteImageLoader::query(const DownloadRemoteImageParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("type", Support::toString<ImageType>(params.type()));

	// Optional parameters
	if (!params.imageUrlNull()) {
		result.addQueryItem("imageUrl", Support::toString<QString>(params.imageUrl()));
	}
	
	return result;
}

QByteArray DownloadRemoteImageLoader::body(const DownloadRemoteImageParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DownloadRemoteImageLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

GetRemoteImageProvidersLoader::GetRemoteImageProvidersLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<ImageProviderInfo>, GetRemoteImageProvidersParams>(apiClient) {}

QString GetRemoteImageProvidersLoader::path(const GetRemoteImageProvidersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/RemoteImages/Providers");
}

QUrlQuery GetRemoteImageProvidersLoader::query(const GetRemoteImageProvidersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetRemoteImageProvidersLoader::body(const GetRemoteImageProvidersParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetRemoteImageProvidersLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
