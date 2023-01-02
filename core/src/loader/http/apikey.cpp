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

#include <JellyfinQt/loader/http/apikey.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetKeysLoader::GetKeysLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<AuthenticationInfoQueryResult, GetKeysParams>(apiClient) {}

QString GetKeysLoader::path(const GetKeysParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Auth/Keys");
}

QUrlQuery GetKeysLoader::query(const GetKeysParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetKeysLoader::body(const GetKeysParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetKeysLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

CreateKeyLoader::CreateKeyLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, CreateKeyParams>(apiClient) {}

QString CreateKeyLoader::path(const CreateKeyParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Auth/Keys");
}

QUrlQuery CreateKeyLoader::query(const CreateKeyParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("app", Support::toString<QString>(params.app()));

	// Optional parameters
	
	return result;
}

QByteArray CreateKeyLoader::body(const CreateKeyParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation CreateKeyLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

RevokeKeyLoader::RevokeKeyLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, RevokeKeyParams>(apiClient) {}

QString RevokeKeyLoader::path(const RevokeKeyParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Auth/Keys/") + Support::toString< QString>(params.key()) ;
}

QUrlQuery RevokeKeyLoader::query(const RevokeKeyParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray RevokeKeyLoader::body(const RevokeKeyParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation RevokeKeyLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
