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

#include <JellyfinQt/loader/http/quickconnect.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

AuthorizeQuickConnectLoader::AuthorizeQuickConnectLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<bool, AuthorizeQuickConnectParams>(apiClient) {}

QString AuthorizeQuickConnectLoader::path(const AuthorizeQuickConnectParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/QuickConnect/Authorize");
}

QUrlQuery AuthorizeQuickConnectLoader::query(const AuthorizeQuickConnectParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("code", Support::toString<QString>(params.code()));

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	
	return result;
}

QByteArray AuthorizeQuickConnectLoader::body(const AuthorizeQuickConnectParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation AuthorizeQuickConnectLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

GetQuickConnectStateLoader::GetQuickConnectStateLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QuickConnectResult, GetQuickConnectStateParams>(apiClient) {}

QString GetQuickConnectStateLoader::path(const GetQuickConnectStateParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/QuickConnect/Connect");
}

QUrlQuery GetQuickConnectStateLoader::query(const GetQuickConnectStateParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("secret", Support::toString<QString>(params.secret()));

	// Optional parameters
	
	return result;
}

QByteArray GetQuickConnectStateLoader::body(const GetQuickConnectStateParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetQuickConnectStateLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetQuickConnectEnabledLoader::GetQuickConnectEnabledLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<bool, GetQuickConnectEnabledParams>(apiClient) {}

QString GetQuickConnectEnabledLoader::path(const GetQuickConnectEnabledParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/QuickConnect/Enabled");
}

QUrlQuery GetQuickConnectEnabledLoader::query(const GetQuickConnectEnabledParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetQuickConnectEnabledLoader::body(const GetQuickConnectEnabledParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetQuickConnectEnabledLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

InitiateQuickConnectLoader::InitiateQuickConnectLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QuickConnectResult, InitiateQuickConnectParams>(apiClient) {}

QString InitiateQuickConnectLoader::path(const InitiateQuickConnectParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/QuickConnect/Initiate");
}

QUrlQuery InitiateQuickConnectLoader::query(const InitiateQuickConnectParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray InitiateQuickConnectLoader::body(const InitiateQuickConnectParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation InitiateQuickConnectLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
