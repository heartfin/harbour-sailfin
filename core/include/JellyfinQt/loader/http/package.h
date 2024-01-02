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

#ifndef JELLYFIN_LOADER_HTTP_PACKAGE_H
#define JELLYFIN_LOADER_HTTP_PACKAGE_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/packageinfo.h"
#include "JellyfinQt/dto/packageinfo.h"
#include "JellyfinQt/dto/repositoryinfo.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Gets available packages.
 */

class GetPackagesLoader : public Jellyfin::Support::HttpLoader<QList<PackageInfo>, GetPackagesParams> {
public:
	explicit GetPackagesLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetPackagesParams& parameters) const override;
	QUrlQuery query(const GetPackagesParams& parameters) const override;
	QByteArray body(const GetPackagesParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets a package by name or assembly GUID.
 */

class GetPackageInfoLoader : public Jellyfin::Support::HttpLoader<PackageInfo, GetPackageInfoParams> {
public:
	explicit GetPackageInfoLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetPackageInfoParams& parameters) const override;
	QUrlQuery query(const GetPackageInfoParams& parameters) const override;
	QByteArray body(const GetPackageInfoParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Installs a package.
 */

class InstallPackageLoader : public Jellyfin::Support::HttpLoader<void, InstallPackageParams> {
public:
	explicit InstallPackageLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const InstallPackageParams& parameters) const override;
	QUrlQuery query(const InstallPackageParams& parameters) const override;
	QByteArray body(const InstallPackageParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Cancels a package installation.
 */

class CancelPackageInstallationLoader : public Jellyfin::Support::HttpLoader<void, CancelPackageInstallationParams> {
public:
	explicit CancelPackageInstallationLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const CancelPackageInstallationParams& parameters) const override;
	QUrlQuery query(const CancelPackageInstallationParams& parameters) const override;
	QByteArray body(const CancelPackageInstallationParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets all package repositories.
 */

class GetRepositoriesLoader : public Jellyfin::Support::HttpLoader<QList<RepositoryInfo>, GetRepositoriesParams> {
public:
	explicit GetRepositoriesLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetRepositoriesParams& parameters) const override;
	QUrlQuery query(const GetRepositoriesParams& parameters) const override;
	QByteArray body(const GetRepositoriesParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Sets the enabled and existing package repositories.
 */

class SetRepositoriesLoader : public Jellyfin::Support::HttpLoader<void, SetRepositoriesParams> {
public:
	explicit SetRepositoriesLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SetRepositoriesParams& parameters) const override;
	QUrlQuery query(const SetRepositoriesParams& parameters) const override;
	QByteArray body(const SetRepositoriesParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_PACKAGE_H
