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

#include <JellyfinQt/loader/http/getrecordings.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {


GetRecordings::GetRecordings(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<Jellyfin::DTO::BaseItemDtoQueryResult, GetRecordingsParams>(apiClient) {}

QString GetRecordings::path(const GetRecordingsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Recordings");
}

QUrlQuery GetRecordings::query(const GetRecordingsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.channelIdNull()) {
		result.addQueryItem("channelId", Support::toString(params.channelId()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString(params.userId()));
	}
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString(params.startIndex()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString(params.limit()));
	}
	if (!params.statusNull()) {
		result.addQueryItem("status", Support::toString(params.status()));
	}
	if (!params.isInProgressNull()) {
		result.addQueryItem("isInProgress", Support::toString(params.isInProgress()));
	}
	if (!params.seriesTimerIdNull()) {
		result.addQueryItem("seriesTimerId", Support::toString(params.seriesTimerId()));
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
	if (!params.isMovieNull()) {
		result.addQueryItem("isMovie", Support::toString(params.isMovie()));
	}
	if (!params.isSeriesNull()) {
		result.addQueryItem("isSeries", Support::toString(params.isSeries()));
	}
	if (!params.isKidsNull()) {
		result.addQueryItem("isKids", Support::toString(params.isKids()));
	}
	if (!params.isSportsNull()) {
		result.addQueryItem("isSports", Support::toString(params.isSports()));
	}
	if (!params.isNewsNull()) {
		result.addQueryItem("isNews", Support::toString(params.isNews()));
	}
	if (!params.isLibraryItemNull()) {
		result.addQueryItem("isLibraryItem", Support::toString(params.isLibraryItem()));
	}
	if (!params.enableTotalRecordCountNull()) {
		result.addQueryItem("enableTotalRecordCount", Support::toString(params.enableTotalRecordCount()));
	}
	
	return result;
}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
