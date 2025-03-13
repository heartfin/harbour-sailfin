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

#include <JellyfinQt/loader/http/tvshows.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetEpisodesLoader::GetEpisodesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetEpisodesParams>(apiClient) {}

QString GetEpisodesLoader::path(const GetEpisodesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Shows/") + Support::toString< QString>(params.seriesId()) + QStringLiteral("/Episodes");
}

QUrlQuery GetEpisodesLoader::query(const GetEpisodesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	if (!params.seasonNull()) {
		result.addQueryItem("season", Support::toString<std::optional<qint32>>(params.season()));
	}
	if (!params.seasonIdNull()) {
		result.addQueryItem("seasonId", Support::toString<QString>(params.seasonId()));
	}
	if (!params.isMissingNull()) {
		result.addQueryItem("isMissing", Support::toString<std::optional<bool>>(params.isMissing()));
	}
	if (!params.adjacentToNull()) {
		result.addQueryItem("adjacentTo", Support::toString<QString>(params.adjacentTo()));
	}
	if (!params.startItemIdNull()) {
		result.addQueryItem("startItemId", Support::toString<QString>(params.startItemId()));
	}
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString<std::optional<qint32>>(params.startIndex()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString<std::optional<bool>>(params.enableImages()));
	}
	if (!params.imageTypeLimitNull()) {
		result.addQueryItem("imageTypeLimit", Support::toString<std::optional<qint32>>(params.imageTypeLimit()));
	}
	if (!params.enableImageTypesNull()) {
		result.addQueryItem("enableImageTypes", Support::toString<QList<ImageType>>(params.enableImageTypes()));
	}
	if (!params.enableUserDataNull()) {
		result.addQueryItem("enableUserData", Support::toString<std::optional<bool>>(params.enableUserData()));
	}
	if (!params.sortByNull()) {
		result.addQueryItem("sortBy", Support::toString<ItemSortBy>(params.sortBy()));
	}
	
	return result;
}

QByteArray GetEpisodesLoader::body(const GetEpisodesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetEpisodesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetSeasonsLoader::GetSeasonsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetSeasonsParams>(apiClient) {}

QString GetSeasonsLoader::path(const GetSeasonsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Shows/") + Support::toString< QString>(params.seriesId()) + QStringLiteral("/Seasons");
}

QUrlQuery GetSeasonsLoader::query(const GetSeasonsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	if (!params.isSpecialSeasonNull()) {
		result.addQueryItem("isSpecialSeason", Support::toString<std::optional<bool>>(params.isSpecialSeason()));
	}
	if (!params.isMissingNull()) {
		result.addQueryItem("isMissing", Support::toString<std::optional<bool>>(params.isMissing()));
	}
	if (!params.adjacentToNull()) {
		result.addQueryItem("adjacentTo", Support::toString<QString>(params.adjacentTo()));
	}
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString<std::optional<bool>>(params.enableImages()));
	}
	if (!params.imageTypeLimitNull()) {
		result.addQueryItem("imageTypeLimit", Support::toString<std::optional<qint32>>(params.imageTypeLimit()));
	}
	if (!params.enableImageTypesNull()) {
		result.addQueryItem("enableImageTypes", Support::toString<QList<ImageType>>(params.enableImageTypes()));
	}
	if (!params.enableUserDataNull()) {
		result.addQueryItem("enableUserData", Support::toString<std::optional<bool>>(params.enableUserData()));
	}
	
	return result;
}

QByteArray GetSeasonsLoader::body(const GetSeasonsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetSeasonsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetNextUpLoader::GetNextUpLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetNextUpParams>(apiClient) {}

QString GetNextUpLoader::path(const GetNextUpParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Shows/NextUp");
}

QUrlQuery GetNextUpLoader::query(const GetNextUpParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString<std::optional<qint32>>(params.startIndex()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	if (!params.seriesIdNull()) {
		result.addQueryItem("seriesId", Support::toString<QString>(params.seriesId()));
	}
	if (!params.parentIdNull()) {
		result.addQueryItem("parentId", Support::toString<QString>(params.parentId()));
	}
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString<std::optional<bool>>(params.enableImages()));
	}
	if (!params.imageTypeLimitNull()) {
		result.addQueryItem("imageTypeLimit", Support::toString<std::optional<qint32>>(params.imageTypeLimit()));
	}
	if (!params.enableImageTypesNull()) {
		result.addQueryItem("enableImageTypes", Support::toString<QList<ImageType>>(params.enableImageTypes()));
	}
	if (!params.enableUserDataNull()) {
		result.addQueryItem("enableUserData", Support::toString<std::optional<bool>>(params.enableUserData()));
	}
	if (!params.nextUpDateCutoffNull()) {
		result.addQueryItem("nextUpDateCutoff", Support::toString<QDateTime>(params.nextUpDateCutoff()));
	}
	if (!params.enableTotalRecordCountNull()) {
		result.addQueryItem("enableTotalRecordCount", Support::toString<std::optional<bool>>(params.enableTotalRecordCount()));
	}
	if (!params.disableFirstEpisodeNull()) {
		result.addQueryItem("disableFirstEpisode", Support::toString<std::optional<bool>>(params.disableFirstEpisode()));
	}
	if (!params.enableResumableNull()) {
		result.addQueryItem("enableResumable", Support::toString<std::optional<bool>>(params.enableResumable()));
	}
	if (!params.enableRewatchingNull()) {
		result.addQueryItem("enableRewatching", Support::toString<std::optional<bool>>(params.enableRewatching()));
	}
	
	return result;
}

QByteArray GetNextUpLoader::body(const GetNextUpParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetNextUpLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetUpcomingEpisodesLoader::GetUpcomingEpisodesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetUpcomingEpisodesParams>(apiClient) {}

QString GetUpcomingEpisodesLoader::path(const GetUpcomingEpisodesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Shows/Upcoming");
}

QUrlQuery GetUpcomingEpisodesLoader::query(const GetUpcomingEpisodesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString<std::optional<qint32>>(params.startIndex()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	if (!params.parentIdNull()) {
		result.addQueryItem("parentId", Support::toString<QString>(params.parentId()));
	}
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString<std::optional<bool>>(params.enableImages()));
	}
	if (!params.imageTypeLimitNull()) {
		result.addQueryItem("imageTypeLimit", Support::toString<std::optional<qint32>>(params.imageTypeLimit()));
	}
	if (!params.enableImageTypesNull()) {
		result.addQueryItem("enableImageTypes", Support::toString<QList<ImageType>>(params.enableImageTypes()));
	}
	if (!params.enableUserDataNull()) {
		result.addQueryItem("enableUserData", Support::toString<std::optional<bool>>(params.enableUserData()));
	}
	
	return result;
}

QByteArray GetUpcomingEpisodesLoader::body(const GetUpcomingEpisodesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetUpcomingEpisodesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
