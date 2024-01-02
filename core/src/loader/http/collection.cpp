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

#include <JellyfinQt/loader/http/collection.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

CreateCollectionLoader::CreateCollectionLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<CollectionCreationResult, CreateCollectionParams>(apiClient) {}

QString CreateCollectionLoader::path(const CreateCollectionParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Collections");
}

QUrlQuery CreateCollectionLoader::query(const CreateCollectionParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.nameNull()) {
		result.addQueryItem("name", Support::toString<QString>(params.name()));
	}
	if (!params.idsNull()) {
		result.addQueryItem("ids", Support::toString<QStringList>(params.ids()));
	}
	if (!params.parentIdNull()) {
		result.addQueryItem("parentId", Support::toString<QString>(params.parentId()));
	}
	if (!params.isLockedNull()) {
		result.addQueryItem("isLocked", Support::toString<std::optional<bool>>(params.isLocked()));
	}
	
	return result;
}

QByteArray CreateCollectionLoader::body(const CreateCollectionParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation CreateCollectionLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

AddToCollectionLoader::AddToCollectionLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, AddToCollectionParams>(apiClient) {}

QString AddToCollectionLoader::path(const AddToCollectionParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Collections/") + Support::toString< QString>(params.collectionId()) + QStringLiteral("/Items");
}

QUrlQuery AddToCollectionLoader::query(const AddToCollectionParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("ids", Support::toString<QStringList>(params.ids()));

	// Optional parameters
	
	return result;
}

QByteArray AddToCollectionLoader::body(const AddToCollectionParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation AddToCollectionLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

RemoveFromCollectionLoader::RemoveFromCollectionLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, RemoveFromCollectionParams>(apiClient) {}

QString RemoveFromCollectionLoader::path(const RemoveFromCollectionParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Collections/") + Support::toString< QString>(params.collectionId()) + QStringLiteral("/Items");
}

QUrlQuery RemoveFromCollectionLoader::query(const RemoveFromCollectionParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("ids", Support::toString<QStringList>(params.ids()));

	// Optional parameters
	
	return result;
}

QByteArray RemoveFromCollectionLoader::body(const RemoveFromCollectionParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation RemoveFromCollectionLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
