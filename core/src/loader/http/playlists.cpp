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

#include <JellyfinQt/loader/http/playlists.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

CreatePlaylistLoader::CreatePlaylistLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<PlaylistCreationResult, CreatePlaylistParams>(apiClient) {}

QString CreatePlaylistLoader::path(const CreatePlaylistParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Playlists");
}

QUrlQuery CreatePlaylistLoader::query(const CreatePlaylistParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.nameNull()) {
		result.addQueryItem("name", Support::toString<QString>(params.name()));
	}
	if (!params.idsNull()) {
		result.addQueryItem("ids", Support::toString<QStringList>(params.ids()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.mediaTypeNull()) {
		result.addQueryItem("mediaType", Support::toString<QString>(params.mediaType()));
	}
	
	return result;
}

QByteArray CreatePlaylistLoader::body(const CreatePlaylistParams &params) const {
	return Support::toString<QSharedPointer<CreatePlaylistDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation CreatePlaylistLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

AddToPlaylistLoader::AddToPlaylistLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, AddToPlaylistParams>(apiClient) {}

QString AddToPlaylistLoader::path(const AddToPlaylistParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Playlists/") + Support::toString< QString>(params.playlistId()) + QStringLiteral("/Items");
}

QUrlQuery AddToPlaylistLoader::query(const AddToPlaylistParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.idsNull()) {
		result.addQueryItem("ids", Support::toString<QStringList>(params.ids()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	
	return result;
}

QByteArray AddToPlaylistLoader::body(const AddToPlaylistParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation AddToPlaylistLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

RemoveFromPlaylistLoader::RemoveFromPlaylistLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, RemoveFromPlaylistParams>(apiClient) {}

QString RemoveFromPlaylistLoader::path(const RemoveFromPlaylistParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Playlists/") + Support::toString< QString>(params.playlistId()) + QStringLiteral("/Items");
}

QUrlQuery RemoveFromPlaylistLoader::query(const RemoveFromPlaylistParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.entryIdsNull()) {
		result.addQueryItem("entryIds", Support::toString<QStringList>(params.entryIds()));
	}
	
	return result;
}

QByteArray RemoveFromPlaylistLoader::body(const RemoveFromPlaylistParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation RemoveFromPlaylistLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

GetPlaylistItemsLoader::GetPlaylistItemsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetPlaylistItemsParams>(apiClient) {}

QString GetPlaylistItemsLoader::path(const GetPlaylistItemsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Playlists/") + Support::toString< QString>(params.playlistId()) + QStringLiteral("/Items");
}

QUrlQuery GetPlaylistItemsLoader::query(const GetPlaylistItemsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("userId", Support::toString<QString>(params.userId()));

	// Optional parameters
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString<std::optional<qint32>>(params.startIndex()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString<std::optional<bool>>(params.enableImages()));
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
	
	return result;
}

QByteArray GetPlaylistItemsLoader::body(const GetPlaylistItemsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetPlaylistItemsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

MoveItemLoader::MoveItemLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, MoveItemParams>(apiClient) {}

QString MoveItemLoader::path(const MoveItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Playlists/") + Support::toString< QString>(params.playlistId()) + QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Move/") + Support::toString< qint32>(params.newIndex()) ;
}

QUrlQuery MoveItemLoader::query(const MoveItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray MoveItemLoader::body(const MoveItemParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation MoveItemLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
