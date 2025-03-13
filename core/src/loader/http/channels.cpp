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

#include <JellyfinQt/loader/http/channels.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetChannelsLoader::GetChannelsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetChannelsParams>(apiClient) {}

QString GetChannelsLoader::path(const GetChannelsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Channels");
}

QUrlQuery GetChannelsLoader::query(const GetChannelsParams &params) const {
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
	if (!params.supportsLatestItemsNull()) {
		result.addQueryItem("supportsLatestItems", Support::toString<std::optional<bool>>(params.supportsLatestItems()));
	}
	if (!params.supportsMediaDeletionNull()) {
		result.addQueryItem("supportsMediaDeletion", Support::toString<std::optional<bool>>(params.supportsMediaDeletion()));
	}
	if (!params.isFavoriteNull()) {
		result.addQueryItem("isFavorite", Support::toString<std::optional<bool>>(params.isFavorite()));
	}
	
	return result;
}

QByteArray GetChannelsLoader::body(const GetChannelsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetChannelsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetChannelFeaturesLoader::GetChannelFeaturesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<ChannelFeatures, GetChannelFeaturesParams>(apiClient) {}

QString GetChannelFeaturesLoader::path(const GetChannelFeaturesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Channels/") + Support::toString< QString>(params.channelId()) + QStringLiteral("/Features");
}

QUrlQuery GetChannelFeaturesLoader::query(const GetChannelFeaturesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetChannelFeaturesLoader::body(const GetChannelFeaturesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetChannelFeaturesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetChannelItemsLoader::GetChannelItemsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetChannelItemsParams>(apiClient) {}

QString GetChannelItemsLoader::path(const GetChannelItemsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Channels/") + Support::toString< QString>(params.channelId()) + QStringLiteral("/Items");
}

QUrlQuery GetChannelItemsLoader::query(const GetChannelItemsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.folderIdNull()) {
		result.addQueryItem("folderId", Support::toString<QString>(params.folderId()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString<std::optional<qint32>>(params.startIndex()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.sortOrderNull()) {
		result.addQueryItem("sortOrder", Support::toString<QList<SortOrder>>(params.sortOrder()));
	}
	if (!params.filtersNull()) {
		result.addQueryItem("filters", Support::toString<QList<ItemFilter>>(params.filters()));
	}
	if (!params.sortByNull()) {
		result.addQueryItem("sortBy", Support::toString<QList<ItemSortBy>>(params.sortBy()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	
	return result;
}

QByteArray GetChannelItemsLoader::body(const GetChannelItemsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetChannelItemsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetAllChannelFeaturesLoader::GetAllChannelFeaturesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<ChannelFeatures>, GetAllChannelFeaturesParams>(apiClient) {}

QString GetAllChannelFeaturesLoader::path(const GetAllChannelFeaturesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Channels/Features");
}

QUrlQuery GetAllChannelFeaturesLoader::query(const GetAllChannelFeaturesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetAllChannelFeaturesLoader::body(const GetAllChannelFeaturesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetAllChannelFeaturesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetLatestChannelItemsLoader::GetLatestChannelItemsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetLatestChannelItemsParams>(apiClient) {}

QString GetLatestChannelItemsLoader::path(const GetLatestChannelItemsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Channels/Items/Latest");
}

QUrlQuery GetLatestChannelItemsLoader::query(const GetLatestChannelItemsParams &params) const {
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
	if (!params.filtersNull()) {
		result.addQueryItem("filters", Support::toString<QList<ItemFilter>>(params.filters()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	if (!params.channelIdsNull()) {
		result.addQueryItem("channelIds", Support::toString<QStringList>(params.channelIds()));
	}
	
	return result;
}

QByteArray GetLatestChannelItemsLoader::body(const GetLatestChannelItemsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetLatestChannelItemsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
