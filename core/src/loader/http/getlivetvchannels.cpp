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

#include <JellyfinQt/loader/http/getlivetvchannels.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {


GetLiveTvChannelsLoader::GetLiveTvChannelsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<Jellyfin::DTO::BaseItemDtoQueryResult, GetLiveTvChannelsParams>(apiClient) {}

QString GetLiveTvChannelsLoader::path(const GetLiveTvChannelsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Channels");
}

QUrlQuery GetLiveTvChannelsLoader::query(const GetLiveTvChannelsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.typeNull()) {
		result.addQueryItem("type", Support::toString(params.type()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString(params.userId()));
	}
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString(params.startIndex()));
	}
	if (!params.isMovieNull()) {
		result.addQueryItem("isMovie", Support::toString(params.isMovie()));
	}
	if (!params.isSeriesNull()) {
		result.addQueryItem("isSeries", Support::toString(params.isSeries()));
	}
	if (!params.isNewsNull()) {
		result.addQueryItem("isNews", Support::toString(params.isNews()));
	}
	if (!params.isKidsNull()) {
		result.addQueryItem("isKids", Support::toString(params.isKids()));
	}
	if (!params.isSportsNull()) {
		result.addQueryItem("isSports", Support::toString(params.isSports()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString(params.limit()));
	}
	if (!params.isFavoriteNull()) {
		result.addQueryItem("isFavorite", Support::toString(params.isFavorite()));
	}
	if (!params.isLikedNull()) {
		result.addQueryItem("isLiked", Support::toString(params.isLiked()));
	}
	if (!params.isDislikedNull()) {
		result.addQueryItem("isDisliked", Support::toString(params.isDisliked()));
	}
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString(params.enableImages()));
	}
	if (!params.imageTypeLimitNull()) {
		result.addQueryItem("imageTypeLimit", Support::toString(params.imageTypeLimit()));
	}
	if (!params.enableImageTypesNull()) {
		result.addQueryItem("enableImageTypes", Support::toString(params.enableImageTypes()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString(params.fields()));
	}
	if (!params.enableUserDataNull()) {
		result.addQueryItem("enableUserData", Support::toString(params.enableUserData()));
	}
	if (!params.sortByNull()) {
		result.addQueryItem("sortBy", Support::toString(params.sortBy()));
	}
	if (!params.sortOrderNull()) {
		result.addQueryItem("sortOrder", Support::toString(params.sortOrder()));
	}
	if (!params.enableFavoriteSortingNull()) {
		result.addQueryItem("enableFavoriteSorting", Support::toString(params.enableFavoriteSorting()));
	}
	if (!params.addCurrentProgramNull()) {
		result.addQueryItem("addCurrentProgram", Support::toString(params.addCurrentProgram()));
	}
	
	return result;
}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
