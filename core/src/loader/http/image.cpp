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

#include <JellyfinQt/loader/http/image.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetItemImageInfosLoader::GetItemImageInfosLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<ImageInfo>, GetItemImageInfosParams>(apiClient) {}

QString GetItemImageInfosLoader::path(const GetItemImageInfosParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Images");
}

QUrlQuery GetItemImageInfosLoader::query(const GetItemImageInfosParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetItemImageInfosLoader::body(const GetItemImageInfosParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetItemImageInfosLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

DeleteItemImageLoader::DeleteItemImageLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DeleteItemImageParams>(apiClient) {}

QString DeleteItemImageLoader::path(const DeleteItemImageParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Images/") + Support::toString< ImageType>(params.imageType()) ;
}

QUrlQuery DeleteItemImageLoader::query(const DeleteItemImageParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.imageIndexNull()) {
		result.addQueryItem("imageIndex", Support::toString<std::optional<qint32>>(params.imageIndex()));
	}
	
	return result;
}

QByteArray DeleteItemImageLoader::body(const DeleteItemImageParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DeleteItemImageLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

SetItemImageLoader::SetItemImageLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SetItemImageParams>(apiClient) {}

QString SetItemImageLoader::path(const SetItemImageParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Images/") + Support::toString< ImageType>(params.imageType()) ;
}

QUrlQuery SetItemImageLoader::query(const SetItemImageParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SetItemImageLoader::body(const SetItemImageParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation SetItemImageLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

DeleteItemImageByIndexLoader::DeleteItemImageByIndexLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DeleteItemImageByIndexParams>(apiClient) {}

QString DeleteItemImageByIndexLoader::path(const DeleteItemImageByIndexParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Images/") + Support::toString< ImageType>(params.imageType()) + QStringLiteral("/") + Support::toString< qint32>(params.imageIndex()) ;
}

QUrlQuery DeleteItemImageByIndexLoader::query(const DeleteItemImageByIndexParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray DeleteItemImageByIndexLoader::body(const DeleteItemImageByIndexParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DeleteItemImageByIndexLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

SetItemImageByIndexLoader::SetItemImageByIndexLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SetItemImageByIndexParams>(apiClient) {}

QString SetItemImageByIndexLoader::path(const SetItemImageByIndexParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Images/") + Support::toString< ImageType>(params.imageType()) + QStringLiteral("/") + Support::toString< qint32>(params.imageIndex()) ;
}

QUrlQuery SetItemImageByIndexLoader::query(const SetItemImageByIndexParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SetItemImageByIndexLoader::body(const SetItemImageByIndexParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation SetItemImageByIndexLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

UpdateItemImageIndexLoader::UpdateItemImageIndexLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UpdateItemImageIndexParams>(apiClient) {}

QString UpdateItemImageIndexLoader::path(const UpdateItemImageIndexParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Images/") + Support::toString< ImageType>(params.imageType()) + QStringLiteral("/") + Support::toString< qint32>(params.imageIndex()) + QStringLiteral("/Index");
}

QUrlQuery UpdateItemImageIndexLoader::query(const UpdateItemImageIndexParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.newIndexNull()) {
		result.addQueryItem("newIndex", Support::toString<std::optional<qint32>>(params.newIndex()));
	}
	
	return result;
}

QByteArray UpdateItemImageIndexLoader::body(const UpdateItemImageIndexParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation UpdateItemImageIndexLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

PostUserImageLoader::PostUserImageLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, PostUserImageParams>(apiClient) {}

QString PostUserImageLoader::path(const PostUserImageParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Images/") + Support::toString< ImageType>(params.imageType()) ;
}

QUrlQuery PostUserImageLoader::query(const PostUserImageParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.indexNull()) {
		result.addQueryItem("index", Support::toString<std::optional<qint32>>(params.index()));
	}
	
	return result;
}

QByteArray PostUserImageLoader::body(const PostUserImageParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation PostUserImageLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

DeleteUserImageLoader::DeleteUserImageLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DeleteUserImageParams>(apiClient) {}

QString DeleteUserImageLoader::path(const DeleteUserImageParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Images/") + Support::toString< ImageType>(params.imageType()) ;
}

QUrlQuery DeleteUserImageLoader::query(const DeleteUserImageParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.indexNull()) {
		result.addQueryItem("index", Support::toString<std::optional<qint32>>(params.index()));
	}
	
	return result;
}

QByteArray DeleteUserImageLoader::body(const DeleteUserImageParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DeleteUserImageLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

PostUserImageByIndexLoader::PostUserImageByIndexLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, PostUserImageByIndexParams>(apiClient) {}

QString PostUserImageByIndexLoader::path(const PostUserImageByIndexParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Images/") + Support::toString< ImageType>(params.imageType()) + QStringLiteral("/") + Support::toString< qint32>(params.index()) ;
}

QUrlQuery PostUserImageByIndexLoader::query(const PostUserImageByIndexParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray PostUserImageByIndexLoader::body(const PostUserImageByIndexParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation PostUserImageByIndexLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

DeleteUserImageByIndexLoader::DeleteUserImageByIndexLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DeleteUserImageByIndexParams>(apiClient) {}

QString DeleteUserImageByIndexLoader::path(const DeleteUserImageByIndexParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Images/") + Support::toString< ImageType>(params.imageType()) + QStringLiteral("/") + Support::toString< qint32>(params.index()) ;
}

QUrlQuery DeleteUserImageByIndexLoader::query(const DeleteUserImageByIndexParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray DeleteUserImageByIndexLoader::body(const DeleteUserImageByIndexParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DeleteUserImageByIndexLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
