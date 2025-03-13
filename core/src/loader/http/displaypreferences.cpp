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

#include <JellyfinQt/loader/http/displaypreferences.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetDisplayPreferencesLoader::GetDisplayPreferencesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<DisplayPreferencesDto, GetDisplayPreferencesParams>(apiClient) {}

QString GetDisplayPreferencesLoader::path(const GetDisplayPreferencesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/DisplayPreferences/") + Support::toString< QString>(params.displayPreferencesId()) ;
}

QUrlQuery GetDisplayPreferencesLoader::query(const GetDisplayPreferencesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("client", Support::toString<QString>(params.client()));

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	
	return result;
}

QByteArray GetDisplayPreferencesLoader::body(const GetDisplayPreferencesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetDisplayPreferencesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

UpdateDisplayPreferencesLoader::UpdateDisplayPreferencesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UpdateDisplayPreferencesParams>(apiClient) {}

QString UpdateDisplayPreferencesLoader::path(const UpdateDisplayPreferencesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/DisplayPreferences/") + Support::toString< QString>(params.displayPreferencesId()) ;
}

QUrlQuery UpdateDisplayPreferencesLoader::query(const UpdateDisplayPreferencesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("client", Support::toString<QString>(params.client()));

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	
	return result;
}

QByteArray UpdateDisplayPreferencesLoader::body(const UpdateDisplayPreferencesParams &params) const {
	return Support::toString<QSharedPointer<DisplayPreferencesDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation UpdateDisplayPreferencesLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
