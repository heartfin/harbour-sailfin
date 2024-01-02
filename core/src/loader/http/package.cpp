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

QByteArray GetPackagesLoader::body(const GetPackagesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetPackagesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

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

QByteArray GetPackageInfoLoader::body(const GetPackageInfoParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetPackageInfoLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

InstallPackageLoader::InstallPackageLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, InstallPackageParams>(apiClient) {}

QString InstallPackageLoader::path(const InstallPackageParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Packages/Installed/") + Support::toString< QString>(params.name()) ;
}

QUrlQuery InstallPackageLoader::query(const InstallPackageParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.assemblyGuidNull()) {
		result.addQueryItem("assemblyGuid", Support::toString<QString>(params.assemblyGuid()));
	}
	if (!params.versionNull()) {
		result.addQueryItem("version", Support::toString<QString>(params.version()));
	}
	if (!params.repositoryUrlNull()) {
		result.addQueryItem("repositoryUrl", Support::toString<QString>(params.repositoryUrl()));
	}
	
	return result;
}

QByteArray InstallPackageLoader::body(const InstallPackageParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation InstallPackageLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

CancelPackageInstallationLoader::CancelPackageInstallationLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, CancelPackageInstallationParams>(apiClient) {}

QString CancelPackageInstallationLoader::path(const CancelPackageInstallationParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Packages/Installing/") + Support::toString< QString>(params.packageId()) ;
}

QUrlQuery CancelPackageInstallationLoader::query(const CancelPackageInstallationParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray CancelPackageInstallationLoader::body(const CancelPackageInstallationParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation CancelPackageInstallationLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

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

QByteArray GetRepositoriesLoader::body(const GetRepositoriesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetRepositoriesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

SetRepositoriesLoader::SetRepositoriesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SetRepositoriesParams>(apiClient) {}

QString SetRepositoriesLoader::path(const SetRepositoriesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Repositories");
}

QUrlQuery SetRepositoriesLoader::query(const SetRepositoriesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SetRepositoriesLoader::body(const SetRepositoriesParams &params) const {
	return Support::toString<QList<RepositoryInfo>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SetRepositoriesLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
