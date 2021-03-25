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

#include <JellyfinQt/loader/http/getgenres.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {


GetGenres::GetGenres(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<Jellyfin::DTO::BaseItemDtoQueryResult, GetGenresParams>(apiClient) {}

QString GetGenres::path(const GetGenresParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Genres");
}

QUrlQuery GetGenres::query(const GetGenresParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString(params.startIndex()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString(params.limit()));
	}
	if (!params.searchTermNull()) {
		result.addQueryItem("searchTerm", Support::toString(params.searchTerm()));
	}
	if (!params.parentIdNull()) {
		result.addQueryItem("parentId", Support::toString(params.parentId()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString(params.fields()));
	}
	if (!params.excludeItemTypesNull()) {
		result.addQueryItem("excludeItemTypes", Support::toString(params.excludeItemTypes()));
	}
	if (!params.includeItemTypesNull()) {
		result.addQueryItem("includeItemTypes", Support::toString(params.includeItemTypes()));
	}
	if (!params.isFavoriteNull()) {
		result.addQueryItem("isFavorite", Support::toString(params.isFavorite()));
	}
	if (!params.imageTypeLimitNull()) {
		result.addQueryItem("imageTypeLimit", Support::toString(params.imageTypeLimit()));
	}
	if (!params.enableImageTypesNull()) {
		result.addQueryItem("enableImageTypes", Support::toString(params.enableImageTypes()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString(params.userId()));
	}
	if (!params.nameStartsWithOrGreaterNull()) {
		result.addQueryItem("nameStartsWithOrGreater", Support::toString(params.nameStartsWithOrGreater()));
	}
	if (!params.nameStartsWithNull()) {
		result.addQueryItem("nameStartsWith", Support::toString(params.nameStartsWith()));
	}
	if (!params.nameLessThanNull()) {
		result.addQueryItem("nameLessThan", Support::toString(params.nameLessThan()));
	}
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString(params.enableImages()));
	}
	if (!params.enableTotalRecordCountNull()) {
		result.addQueryItem("enableTotalRecordCount", Support::toString(params.enableTotalRecordCount()));
	}
	
	return result;
}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
