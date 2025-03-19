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

#include <JellyfinQt/loader/http/search.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetSearchHintsLoader::GetSearchHintsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<SearchHintResult, GetSearchHintsParams>(apiClient) {}

QString GetSearchHintsLoader::path(const GetSearchHintsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Search/Hints");
}

QUrlQuery GetSearchHintsLoader::query(const GetSearchHintsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("searchTerm", Support::toString<QString>(params.searchTerm()));

	// Optional parameters
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString<std::optional<qint32>>(params.startIndex()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.includeItemTypesNull()) {
		result.addQueryItem("includeItemTypes", Support::toString<QList<BaseItemKind>>(params.includeItemTypes()));
	}
	if (!params.excludeItemTypesNull()) {
		result.addQueryItem("excludeItemTypes", Support::toString<QList<BaseItemKind>>(params.excludeItemTypes()));
	}
	if (!params.mediaTypesNull()) {
		result.addQueryItem("mediaTypes", Support::toString<QList<MediaType>>(params.mediaTypes()));
	}
	if (!params.parentIdNull()) {
		result.addQueryItem("parentId", Support::toString<QString>(params.parentId()));
	}
	if (!params.isMovieNull()) {
		result.addQueryItem("isMovie", Support::toString<std::optional<bool>>(params.isMovie()));
	}
	if (!params.isSeriesNull()) {
		result.addQueryItem("isSeries", Support::toString<std::optional<bool>>(params.isSeries()));
	}
	if (!params.isNewsNull()) {
		result.addQueryItem("isNews", Support::toString<std::optional<bool>>(params.isNews()));
	}
	if (!params.isKidsNull()) {
		result.addQueryItem("isKids", Support::toString<std::optional<bool>>(params.isKids()));
	}
	if (!params.isSportsNull()) {
		result.addQueryItem("isSports", Support::toString<std::optional<bool>>(params.isSports()));
	}
	if (!params.includePeopleNull()) {
		result.addQueryItem("includePeople", Support::toString<std::optional<bool>>(params.includePeople()));
	}
	if (!params.includeMediaNull()) {
		result.addQueryItem("includeMedia", Support::toString<std::optional<bool>>(params.includeMedia()));
	}
	if (!params.includeGenresNull()) {
		result.addQueryItem("includeGenres", Support::toString<std::optional<bool>>(params.includeGenres()));
	}
	if (!params.includeStudiosNull()) {
		result.addQueryItem("includeStudios", Support::toString<std::optional<bool>>(params.includeStudios()));
	}
	if (!params.includeArtistsNull()) {
		result.addQueryItem("includeArtists", Support::toString<std::optional<bool>>(params.includeArtists()));
	}
	
	return result;
}

QByteArray GetSearchHintsLoader::body(const GetSearchHintsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetSearchHintsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
