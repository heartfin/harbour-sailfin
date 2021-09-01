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

#include <JellyfinQt/loader/http/package.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetPackagesLoader::GetPackagesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<PackageInfo>, GetPackagesParams>(apiClient) {}

QString GetPackagesLoader::path(const GetPackagesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Packages");
}

QUrlQuery GetPackagesLoader::query(const GetPackagesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

GetPackageInfoLoader::GetPackageInfoLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<PackageInfo, GetPackageInfoParams>(apiClient) {}

QString GetPackageInfoLoader::path(const GetPackageInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Packages/") + Support::toString< QString>(params.name()) ;
}

QUrlQuery GetPackageInfoLoader::query(const GetPackageInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.assemblyGuidNull()) {
		result.addQueryItem("assemblyGuid", Support::toString<QString>(params.assemblyGuid()));
	}
	
	return result;
}

GetRepositoriesLoader::GetRepositoriesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<RepositoryInfo>, GetRepositoriesParams>(apiClient) {}

QString GetRepositoriesLoader::path(const GetRepositoriesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Repositories");
}

QUrlQuery GetRepositoriesLoader::query(const GetRepositoriesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
