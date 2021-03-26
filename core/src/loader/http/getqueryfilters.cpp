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

#include <JellyfinQt/loader/http/getqueryfilters.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {


GetQueryFiltersLoader::GetQueryFiltersLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<Jellyfin::DTO::QueryFilters, GetQueryFiltersParams>(apiClient) {}

QString GetQueryFiltersLoader::path(const GetQueryFiltersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/Filters2");
}

QUrlQuery GetQueryFiltersLoader::query(const GetQueryFiltersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString(params.userId()));
	}
	if (!params.parentIdNull()) {
		result.addQueryItem("parentId", Support::toString(params.parentId()));
	}
	if (!params.includeItemTypesNull()) {
		result.addQueryItem("includeItemTypes", Support::toString(params.includeItemTypes()));
	}
	if (!params.isAiringNull()) {
		result.addQueryItem("isAiring", Support::toString(params.isAiring()));
	}
	if (!params.isMovieNull()) {
		result.addQueryItem("isMovie", Support::toString(params.isMovie()));
	}
	if (!params.isSportsNull()) {
		result.addQueryItem("isSports", Support::toString(params.isSports()));
	}
	if (!params.isKidsNull()) {
		result.addQueryItem("isKids", Support::toString(params.isKids()));
	}
	if (!params.isNewsNull()) {
		result.addQueryItem("isNews", Support::toString(params.isNews()));
	}
	if (!params.isSeriesNull()) {
		result.addQueryItem("isSeries", Support::toString(params.isSeries()));
	}
	if (!params.recursiveNull()) {
		result.addQueryItem("recursive", Support::toString(params.recursive()));
	}
	
	return result;
}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
