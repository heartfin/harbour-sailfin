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

#include <JellyfinQt/loader/http/imagebyname.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetGeneralImagesLoader::GetGeneralImagesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<ImageByNameInfo>, GetGeneralImagesParams>(apiClient) {}

QString GetGeneralImagesLoader::path(const GetGeneralImagesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Images/General");
}

QUrlQuery GetGeneralImagesLoader::query(const GetGeneralImagesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetGeneralImagesLoader::body(const GetGeneralImagesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetGeneralImagesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetMediaInfoImagesLoader::GetMediaInfoImagesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<ImageByNameInfo>, GetMediaInfoImagesParams>(apiClient) {}

QString GetMediaInfoImagesLoader::path(const GetMediaInfoImagesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Images/MediaInfo");
}

QUrlQuery GetMediaInfoImagesLoader::query(const GetMediaInfoImagesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetMediaInfoImagesLoader::body(const GetMediaInfoImagesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetMediaInfoImagesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetRatingImagesLoader::GetRatingImagesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<ImageByNameInfo>, GetRatingImagesParams>(apiClient) {}

QString GetRatingImagesLoader::path(const GetRatingImagesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Images/Ratings");
}

QUrlQuery GetRatingImagesLoader::query(const GetRatingImagesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetRatingImagesLoader::body(const GetRatingImagesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetRatingImagesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
