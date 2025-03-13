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

#include <JellyfinQt/loader/http/userviews.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetUserViewsLoader::GetUserViewsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetUserViewsParams>(apiClient) {}

QString GetUserViewsLoader::path(const GetUserViewsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/UserViews");
}

QUrlQuery GetUserViewsLoader::query(const GetUserViewsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.includeExternalContentNull()) {
		result.addQueryItem("includeExternalContent", Support::toString<std::optional<bool>>(params.includeExternalContent()));
	}
	if (!params.presetViewsNull()) {
		result.addQueryItem("presetViews", Support::toString<QList<CollectionType>>(params.presetViews()));
	}
	if (!params.includeHiddenNull()) {
		result.addQueryItem("includeHidden", Support::toString<std::optional<bool>>(params.includeHidden()));
	}
	
	return result;
}

QByteArray GetUserViewsLoader::body(const GetUserViewsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetUserViewsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetGroupingOptionsLoader::GetGroupingOptionsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<SpecialViewOptionDto>, GetGroupingOptionsParams>(apiClient) {}

QString GetGroupingOptionsLoader::path(const GetGroupingOptionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/UserViews/GroupingOptions");
}

QUrlQuery GetGroupingOptionsLoader::query(const GetGroupingOptionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	
	return result;
}

QByteArray GetGroupingOptionsLoader::body(const GetGroupingOptionsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetGroupingOptionsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
