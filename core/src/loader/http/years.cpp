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

#include <JellyfinQt/loader/http/years.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetYearsLoader::GetYearsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetYearsParams>(apiClient) {}

QString GetYearsLoader::path(const GetYearsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Years");
}

QUrlQuery GetYearsLoader::query(const GetYearsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString<std::optional<qint32>>(params.startIndex()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.sortOrderNull()) {
		result.addQueryItem("sortOrder", Support::toString<QList<SortOrder>>(params.sortOrder()));
	}
	if (!params.parentIdNull()) {
		result.addQueryItem("parentId", Support::toString<QString>(params.parentId()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	if (!params.excludeItemTypesNull()) {
		result.addQueryItem("excludeItemTypes", Support::toString<QList<BaseItemKind>>(params.excludeItemTypes()));
	}
	if (!params.includeItemTypesNull()) {
		result.addQueryItem("includeItemTypes", Support::toString<QList<BaseItemKind>>(params.includeItemTypes()));
	}
	if (!params.mediaTypesNull()) {
		result.addQueryItem("mediaTypes", Support::toString<QList<MediaType>>(params.mediaTypes()));
	}
	if (!params.sortByNull()) {
		result.addQueryItem("sortBy", Support::toString<QList<ItemSortBy>>(params.sortBy()));
	}
	if (!params.enableUserDataNull()) {
		result.addQueryItem("enableUserData", Support::toString<std::optional<bool>>(params.enableUserData()));
	}
	if (!params.imageTypeLimitNull()) {
		result.addQueryItem("imageTypeLimit", Support::toString<std::optional<qint32>>(params.imageTypeLimit()));
	}
	if (!params.enableImageTypesNull()) {
		result.addQueryItem("enableImageTypes", Support::toString<QList<ImageType>>(params.enableImageTypes()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.recursiveNull()) {
		result.addQueryItem("recursive", Support::toString<std::optional<bool>>(params.recursive()));
	}
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString<std::optional<bool>>(params.enableImages()));
	}
	
	return result;
}

QByteArray GetYearsLoader::body(const GetYearsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetYearsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetYearLoader::GetYearLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDto, GetYearParams>(apiClient) {}

QString GetYearLoader::path(const GetYearParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Years/") + Support::toString< qint32>(params.year()) ;
}

QUrlQuery GetYearLoader::query(const GetYearParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	
	return result;
}

QByteArray GetYearLoader::body(const GetYearParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetYearLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
