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

#include <JellyfinQt/loader/http/localization.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetCountriesLoader::GetCountriesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<CountryInfo>, GetCountriesParams>(apiClient) {}

QString GetCountriesLoader::path(const GetCountriesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Localization/Countries");
}

QUrlQuery GetCountriesLoader::query(const GetCountriesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetCountriesLoader::body(const GetCountriesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetCountriesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetCulturesLoader::GetCulturesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<CultureDto>, GetCulturesParams>(apiClient) {}

QString GetCulturesLoader::path(const GetCulturesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Localization/Cultures");
}

QUrlQuery GetCulturesLoader::query(const GetCulturesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetCulturesLoader::body(const GetCulturesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetCulturesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetLocalizationOptionsLoader::GetLocalizationOptionsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<LocalizationOption>, GetLocalizationOptionsParams>(apiClient) {}

QString GetLocalizationOptionsLoader::path(const GetLocalizationOptionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Localization/Options");
}

QUrlQuery GetLocalizationOptionsLoader::query(const GetLocalizationOptionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetLocalizationOptionsLoader::body(const GetLocalizationOptionsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetLocalizationOptionsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetParentalRatingsLoader::GetParentalRatingsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<ParentalRating>, GetParentalRatingsParams>(apiClient) {}

QString GetParentalRatingsLoader::path(const GetParentalRatingsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Localization/ParentalRatings");
}

QUrlQuery GetParentalRatingsLoader::query(const GetParentalRatingsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetParentalRatingsLoader::body(const GetParentalRatingsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetParentalRatingsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
