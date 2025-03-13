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

#include <JellyfinQt/loader/http/filter.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetQueryFiltersLegacyLoader::GetQueryFiltersLegacyLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QueryFiltersLegacy, GetQueryFiltersLegacyParams>(apiClient) {}

QString GetQueryFiltersLegacyLoader::path(const GetQueryFiltersLegacyParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/Filters");
}

QUrlQuery GetQueryFiltersLegacyLoader::query(const GetQueryFiltersLegacyParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.parentIdNull()) {
		result.addQueryItem("parentId", Support::toString<QString>(params.parentId()));
	}
	if (!params.includeItemTypesNull()) {
		result.addQueryItem("includeItemTypes", Support::toString<QList<BaseItemKind>>(params.includeItemTypes()));
	}
	if (!params.mediaTypesNull()) {
		result.addQueryItem("mediaTypes", Support::toString<QList<MediaType>>(params.mediaTypes()));
	}
	
	return result;
}

QByteArray GetQueryFiltersLegacyLoader::body(const GetQueryFiltersLegacyParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetQueryFiltersLegacyLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetQueryFiltersLoader::GetQueryFiltersLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QueryFilters, GetQueryFiltersParams>(apiClient) {}

QString GetQueryFiltersLoader::path(const GetQueryFiltersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/Filters2");
}

QUrlQuery GetQueryFiltersLoader::query(const GetQueryFiltersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.parentIdNull()) {
		result.addQueryItem("parentId", Support::toString<QString>(params.parentId()));
	}
	if (!params.includeItemTypesNull()) {
		result.addQueryItem("includeItemTypes", Support::toString<QList<BaseItemKind>>(params.includeItemTypes()));
	}
	if (!params.isAiringNull()) {
		result.addQueryItem("isAiring", Support::toString<std::optional<bool>>(params.isAiring()));
	}
	if (!params.isMovieNull()) {
		result.addQueryItem("isMovie", Support::toString<std::optional<bool>>(params.isMovie()));
	}
	if (!params.isSportsNull()) {
		result.addQueryItem("isSports", Support::toString<std::optional<bool>>(params.isSports()));
	}
	if (!params.isKidsNull()) {
		result.addQueryItem("isKids", Support::toString<std::optional<bool>>(params.isKids()));
	}
	if (!params.isNewsNull()) {
		result.addQueryItem("isNews", Support::toString<std::optional<bool>>(params.isNews()));
	}
	if (!params.isSeriesNull()) {
		result.addQueryItem("isSeries", Support::toString<std::optional<bool>>(params.isSeries()));
	}
	if (!params.recursiveNull()) {
		result.addQueryItem("recursive", Support::toString<std::optional<bool>>(params.recursive()));
	}
	
	return result;
}

QByteArray GetQueryFiltersLoader::body(const GetQueryFiltersParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetQueryFiltersLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
