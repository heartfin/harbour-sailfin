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

#include <JellyfinQt/loader/http/userlibrary.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

MarkFavoriteItemLoader::MarkFavoriteItemLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<UserItemDataDto, MarkFavoriteItemParams>(apiClient) {}

QString MarkFavoriteItemLoader::path(const MarkFavoriteItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/FavoriteItems/") + Support::toString< QString>(params.itemId()) ;
}

QUrlQuery MarkFavoriteItemLoader::query(const MarkFavoriteItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray MarkFavoriteItemLoader::body(const MarkFavoriteItemParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation MarkFavoriteItemLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

UnmarkFavoriteItemLoader::UnmarkFavoriteItemLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<UserItemDataDto, UnmarkFavoriteItemParams>(apiClient) {}

QString UnmarkFavoriteItemLoader::path(const UnmarkFavoriteItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/FavoriteItems/") + Support::toString< QString>(params.itemId()) ;
}

QUrlQuery UnmarkFavoriteItemLoader::query(const UnmarkFavoriteItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray UnmarkFavoriteItemLoader::body(const UnmarkFavoriteItemParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation UnmarkFavoriteItemLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

GetItemLoader::GetItemLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDto, GetItemParams>(apiClient) {}

QString GetItemLoader::path(const GetItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) ;
}

QUrlQuery GetItemLoader::query(const GetItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetItemLoader::body(const GetItemParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetItemLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetIntrosLoader::GetIntrosLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetIntrosParams>(apiClient) {}

QString GetIntrosLoader::path(const GetIntrosParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Intros");
}

QUrlQuery GetIntrosLoader::query(const GetIntrosParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetIntrosLoader::body(const GetIntrosParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetIntrosLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetLocalTrailersLoader::GetLocalTrailersLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<BaseItemDto>, GetLocalTrailersParams>(apiClient) {}

QString GetLocalTrailersLoader::path(const GetLocalTrailersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/LocalTrailers");
}

QUrlQuery GetLocalTrailersLoader::query(const GetLocalTrailersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetLocalTrailersLoader::body(const GetLocalTrailersParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetLocalTrailersLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

DeleteUserItemRatingLoader::DeleteUserItemRatingLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<UserItemDataDto, DeleteUserItemRatingParams>(apiClient) {}

QString DeleteUserItemRatingLoader::path(const DeleteUserItemRatingParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Rating");
}

QUrlQuery DeleteUserItemRatingLoader::query(const DeleteUserItemRatingParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray DeleteUserItemRatingLoader::body(const DeleteUserItemRatingParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DeleteUserItemRatingLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

UpdateUserItemRatingLoader::UpdateUserItemRatingLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<UserItemDataDto, UpdateUserItemRatingParams>(apiClient) {}

QString UpdateUserItemRatingLoader::path(const UpdateUserItemRatingParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Rating");
}

QUrlQuery UpdateUserItemRatingLoader::query(const UpdateUserItemRatingParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.likesNull()) {
		result.addQueryItem("likes", Support::toString<std::optional<bool>>(params.likes()));
	}
	
	return result;
}

QByteArray UpdateUserItemRatingLoader::body(const UpdateUserItemRatingParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation UpdateUserItemRatingLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

GetSpecialFeaturesLoader::GetSpecialFeaturesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<BaseItemDto>, GetSpecialFeaturesParams>(apiClient) {}

QString GetSpecialFeaturesLoader::path(const GetSpecialFeaturesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/SpecialFeatures");
}

QUrlQuery GetSpecialFeaturesLoader::query(const GetSpecialFeaturesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetSpecialFeaturesLoader::body(const GetSpecialFeaturesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetSpecialFeaturesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetLatestMediaLoader::GetLatestMediaLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<BaseItemDto>, GetLatestMediaParams>(apiClient) {}

QString GetLatestMediaLoader::path(const GetLatestMediaParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Items/Latest");
}

QUrlQuery GetLatestMediaLoader::query(const GetLatestMediaParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.parentIdNull()) {
		result.addQueryItem("parentId", Support::toString<QString>(params.parentId()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	if (!params.includeItemTypesNull()) {
		result.addQueryItem("includeItemTypes", Support::toString<QStringList>(params.includeItemTypes()));
	}
	if (!params.isPlayedNull()) {
		result.addQueryItem("isPlayed", Support::toString<std::optional<bool>>(params.isPlayed()));
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
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.groupItemsNull()) {
		result.addQueryItem("groupItems", Support::toString<std::optional<bool>>(params.groupItems()));
	}
	
	return result;
}

QByteArray GetLatestMediaLoader::body(const GetLatestMediaParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetLatestMediaLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetRootFolderLoader::GetRootFolderLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDto, GetRootFolderParams>(apiClient) {}

QString GetRootFolderLoader::path(const GetRootFolderParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Items/Root");
}

QUrlQuery GetRootFolderLoader::query(const GetRootFolderParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetRootFolderLoader::body(const GetRootFolderParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetRootFolderLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
