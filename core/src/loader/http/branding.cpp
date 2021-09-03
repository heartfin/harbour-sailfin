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

#include <JellyfinQt/loader/http/branding.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetBrandingOptionsLoader::GetBrandingOptionsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BrandingOptions, GetBrandingOptionsParams>(apiClient) {}

QString GetBrandingOptionsLoader::path(const GetBrandingOptionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Branding/Configuration");
}

QUrlQuery GetBrandingOptionsLoader::query(const GetBrandingOptionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetBrandingOptionsLoader::body(const GetBrandingOptionsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetBrandingOptionsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetBrandingCssLoader::GetBrandingCssLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QString, GetBrandingCssParams>(apiClient) {}

QString GetBrandingCssLoader::path(const GetBrandingCssParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Branding/Css");
}

QUrlQuery GetBrandingCssLoader::query(const GetBrandingCssParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetBrandingCssLoader::body(const GetBrandingCssParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetBrandingCssLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetBrandingCss_2Loader::GetBrandingCss_2Loader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QString, GetBrandingCss_2Params>(apiClient) {}

QString GetBrandingCss_2Loader::path(const GetBrandingCss_2Params &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Branding/Css.css");
}

QUrlQuery GetBrandingCss_2Loader::query(const GetBrandingCss_2Params &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetBrandingCss_2Loader::body(const GetBrandingCss_2Params &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetBrandingCss_2Loader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
