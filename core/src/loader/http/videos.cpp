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

#include <JellyfinQt/loader/http/videos.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetAdditionalPartLoader::GetAdditionalPartLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetAdditionalPartParams>(apiClient) {}

QString GetAdditionalPartLoader::path(const GetAdditionalPartParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Videos/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/AdditionalParts");
}

QUrlQuery GetAdditionalPartLoader::query(const GetAdditionalPartParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	
	return result;
}

QByteArray GetAdditionalPartLoader::body(const GetAdditionalPartParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetAdditionalPartLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

DeleteAlternateSourcesLoader::DeleteAlternateSourcesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DeleteAlternateSourcesParams>(apiClient) {}

QString DeleteAlternateSourcesLoader::path(const DeleteAlternateSourcesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Videos/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/AlternateSources");
}

QUrlQuery DeleteAlternateSourcesLoader::query(const DeleteAlternateSourcesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray DeleteAlternateSourcesLoader::body(const DeleteAlternateSourcesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DeleteAlternateSourcesLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

MergeVersionsLoader::MergeVersionsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, MergeVersionsParams>(apiClient) {}

QString MergeVersionsLoader::path(const MergeVersionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Videos/MergeVersions");
}

QUrlQuery MergeVersionsLoader::query(const MergeVersionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("ids", Support::toString<QStringList>(params.ids()));

	// Optional parameters
	
	return result;
}

QByteArray MergeVersionsLoader::body(const MergeVersionsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation MergeVersionsLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
