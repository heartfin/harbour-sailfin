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

#include <JellyfinQt/loader/http/configuration.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetConfigurationLoader::GetConfigurationLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<ServerConfiguration, GetConfigurationParams>(apiClient) {}

QString GetConfigurationLoader::path(const GetConfigurationParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/System/Configuration");
}

QUrlQuery GetConfigurationLoader::query(const GetConfigurationParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

GetNamedConfigurationLoader::GetNamedConfigurationLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QString, GetNamedConfigurationParams>(apiClient) {}

QString GetNamedConfigurationLoader::path(const GetNamedConfigurationParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/System/Configuration/") + Support::toString< QString>(params.key()) ;
}

QUrlQuery GetNamedConfigurationLoader::query(const GetNamedConfigurationParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

GetDefaultMetadataOptionsLoader::GetDefaultMetadataOptionsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<MetadataOptions, GetDefaultMetadataOptionsParams>(apiClient) {}

QString GetDefaultMetadataOptionsLoader::path(const GetDefaultMetadataOptionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/System/Configuration/MetadataOptions/Default");
}

QUrlQuery GetDefaultMetadataOptionsLoader::query(const GetDefaultMetadataOptionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
