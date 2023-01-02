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

#include <JellyfinQt/loader/http/librarystructure.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetVirtualFoldersLoader::GetVirtualFoldersLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<VirtualFolderInfo>, GetVirtualFoldersParams>(apiClient) {}

QString GetVirtualFoldersLoader::path(const GetVirtualFoldersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Library/VirtualFolders");
}

QUrlQuery GetVirtualFoldersLoader::query(const GetVirtualFoldersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetVirtualFoldersLoader::body(const GetVirtualFoldersParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetVirtualFoldersLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

AddVirtualFolderLoader::AddVirtualFolderLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, AddVirtualFolderParams>(apiClient) {}

QString AddVirtualFolderLoader::path(const AddVirtualFolderParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Library/VirtualFolders");
}

QUrlQuery AddVirtualFolderLoader::query(const AddVirtualFolderParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.nameNull()) {
		result.addQueryItem("name", Support::toString<QString>(params.name()));
	}
	if (!params.collectionTypeNull()) {
		result.addQueryItem("collectionType", Support::toString<QString>(params.collectionType()));
	}
	if (!params.pathsNull()) {
		result.addQueryItem("paths", Support::toString<QStringList>(params.paths()));
	}
	if (!params.refreshLibraryNull()) {
		result.addQueryItem("refreshLibrary", Support::toString<std::optional<bool>>(params.refreshLibrary()));
	}
	
	return result;
}

QByteArray AddVirtualFolderLoader::body(const AddVirtualFolderParams &params) const {
	return Support::toString<QSharedPointer<AddVirtualFolderDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation AddVirtualFolderLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

RemoveVirtualFolderLoader::RemoveVirtualFolderLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, RemoveVirtualFolderParams>(apiClient) {}

QString RemoveVirtualFolderLoader::path(const RemoveVirtualFolderParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Library/VirtualFolders");
}

QUrlQuery RemoveVirtualFolderLoader::query(const RemoveVirtualFolderParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.nameNull()) {
		result.addQueryItem("name", Support::toString<QString>(params.name()));
	}
	if (!params.refreshLibraryNull()) {
		result.addQueryItem("refreshLibrary", Support::toString<std::optional<bool>>(params.refreshLibrary()));
	}
	
	return result;
}

QByteArray RemoveVirtualFolderLoader::body(const RemoveVirtualFolderParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation RemoveVirtualFolderLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

UpdateLibraryOptionsLoader::UpdateLibraryOptionsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UpdateLibraryOptionsParams>(apiClient) {}

QString UpdateLibraryOptionsLoader::path(const UpdateLibraryOptionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Library/VirtualFolders/LibraryOptions");
}

QUrlQuery UpdateLibraryOptionsLoader::query(const UpdateLibraryOptionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray UpdateLibraryOptionsLoader::body(const UpdateLibraryOptionsParams &params) const {
	return Support::toString<QSharedPointer<UpdateLibraryOptionsDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation UpdateLibraryOptionsLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

RenameVirtualFolderLoader::RenameVirtualFolderLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, RenameVirtualFolderParams>(apiClient) {}

QString RenameVirtualFolderLoader::path(const RenameVirtualFolderParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Library/VirtualFolders/Name");
}

QUrlQuery RenameVirtualFolderLoader::query(const RenameVirtualFolderParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.nameNull()) {
		result.addQueryItem("name", Support::toString<QString>(params.name()));
	}
	if (!params.newNameNull()) {
		result.addQueryItem("newName", Support::toString<QString>(params.newName()));
	}
	if (!params.refreshLibraryNull()) {
		result.addQueryItem("refreshLibrary", Support::toString<std::optional<bool>>(params.refreshLibrary()));
	}
	
	return result;
}

QByteArray RenameVirtualFolderLoader::body(const RenameVirtualFolderParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation RenameVirtualFolderLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

AddMediaPathLoader::AddMediaPathLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, AddMediaPathParams>(apiClient) {}

QString AddMediaPathLoader::path(const AddMediaPathParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Library/VirtualFolders/Paths");
}

QUrlQuery AddMediaPathLoader::query(const AddMediaPathParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.refreshLibraryNull()) {
		result.addQueryItem("refreshLibrary", Support::toString<std::optional<bool>>(params.refreshLibrary()));
	}
	
	return result;
}

QByteArray AddMediaPathLoader::body(const AddMediaPathParams &params) const {
	return Support::toString<QSharedPointer<MediaPathDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation AddMediaPathLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

RemoveMediaPathLoader::RemoveMediaPathLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, RemoveMediaPathParams>(apiClient) {}

QString RemoveMediaPathLoader::path(const RemoveMediaPathParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Library/VirtualFolders/Paths");
}

QUrlQuery RemoveMediaPathLoader::query(const RemoveMediaPathParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.nameNull()) {
		result.addQueryItem("name", Support::toString<QString>(params.name()));
	}
	if (!params.pathNull()) {
		result.addQueryItem("path", Support::toString<QString>(params.path()));
	}
	if (!params.refreshLibraryNull()) {
		result.addQueryItem("refreshLibrary", Support::toString<std::optional<bool>>(params.refreshLibrary()));
	}
	
	return result;
}

QByteArray RemoveMediaPathLoader::body(const RemoveMediaPathParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation RemoveMediaPathLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

UpdateMediaPathLoader::UpdateMediaPathLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UpdateMediaPathParams>(apiClient) {}

QString UpdateMediaPathLoader::path(const UpdateMediaPathParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Library/VirtualFolders/Paths/Update");
}

QUrlQuery UpdateMediaPathLoader::query(const UpdateMediaPathParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.nameNull()) {
		result.addQueryItem("name", Support::toString<QString>(params.name()));
	}
	
	return result;
}

QByteArray UpdateMediaPathLoader::body(const UpdateMediaPathParams &params) const {
	return Support::toString<QSharedPointer<MediaPathInfo>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation UpdateMediaPathLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
