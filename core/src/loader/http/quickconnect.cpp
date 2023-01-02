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

ActivateLoader::ActivateLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, ActivateParams>(apiClient) {}

QString ActivateLoader::path(const ActivateParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/QuickConnect/Activate");
}

QUrlQuery ActivateLoader::query(const ActivateParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray ActivateLoader::body(const ActivateParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation ActivateLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

AuthorizeLoader::AuthorizeLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<bool, AuthorizeParams>(apiClient) {}

QString AuthorizeLoader::path(const AuthorizeParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/QuickConnect/Authorize");
}

QUrlQuery AuthorizeLoader::query(const AuthorizeParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("code", Support::toString<QString>(params.code()));

	// Optional parameters
	
	return result;
}

QByteArray AuthorizeLoader::body(const AuthorizeParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation AuthorizeLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

AvailableLoader::AvailableLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, AvailableParams>(apiClient) {}

QString AvailableLoader::path(const AvailableParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/QuickConnect/Available");
}

QUrlQuery AvailableLoader::query(const AvailableParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.statusNull()) {
		result.addQueryItem("status", Support::toString<QuickConnectState>(params.status()));
	}
	
	return result;
}

QByteArray AvailableLoader::body(const AvailableParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation AvailableLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

ConnectLoader::ConnectLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QuickConnectResult, ConnectParams>(apiClient) {}

QString ConnectLoader::path(const ConnectParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/QuickConnect/Connect");
}

QUrlQuery ConnectLoader::query(const ConnectParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("secret", Support::toString<QString>(params.secret()));

	// Optional parameters
	
	return result;
}

QByteArray ConnectLoader::body(const ConnectParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation ConnectLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

DeauthorizeLoader::DeauthorizeLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<qint32, DeauthorizeParams>(apiClient) {}

QString DeauthorizeLoader::path(const DeauthorizeParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/QuickConnect/Deauthorize");
}

QUrlQuery DeauthorizeLoader::query(const DeauthorizeParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray DeauthorizeLoader::body(const DeauthorizeParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DeauthorizeLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

InitiateLoader::InitiateLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QuickConnectResult, InitiateParams>(apiClient) {}

QString InitiateLoader::path(const InitiateParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/QuickConnect/Initiate");
}

QUrlQuery InitiateLoader::query(const InitiateParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray InitiateLoader::body(const InitiateParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation InitiateLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetStatusLoader::GetStatusLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QuickConnectState, GetStatusParams>(apiClient) {}

QString GetStatusLoader::path(const GetStatusParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/QuickConnect/Status");
}

QUrlQuery GetStatusLoader::query(const GetStatusParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetStatusLoader::body(const GetStatusParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetStatusLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
