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

#ifndef JELLYFIN_LOADER_HTTP_CONFIGURATION_H
#define JELLYFIN_LOADER_HTTP_CONFIGURATION_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/serverconfiguration.h"
#include "JellyfinQt/dto/metadataoptions.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Gets application configuration.
 */

class GetConfigurationLoader : public Jellyfin::Support::HttpLoader<ServerConfiguration, GetConfigurationParams> {
public:
	explicit GetConfigurationLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetConfigurationParams& parameters) const override;
	QUrlQuery query(const GetConfigurationParams& parameters) const override;
	QByteArray body(const GetConfigurationParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Updates application configuration.
 */

class UpdateConfigurationLoader : public Jellyfin::Support::HttpLoader<void, UpdateConfigurationParams> {
public:
	explicit UpdateConfigurationLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const UpdateConfigurationParams& parameters) const override;
	QUrlQuery query(const UpdateConfigurationParams& parameters) const override;
	QByteArray body(const UpdateConfigurationParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets a named configuration.
 */

class GetNamedConfigurationLoader : public Jellyfin::Support::HttpLoader<QString, GetNamedConfigurationParams> {
public:
	explicit GetNamedConfigurationLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetNamedConfigurationParams& parameters) const override;
	QUrlQuery query(const GetNamedConfigurationParams& parameters) const override;
	QByteArray body(const GetNamedConfigurationParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Updates named configuration.
 */

class UpdateNamedConfigurationLoader : public Jellyfin::Support::HttpLoader<void, UpdateNamedConfigurationParams> {
public:
	explicit UpdateNamedConfigurationLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const UpdateNamedConfigurationParams& parameters) const override;
	QUrlQuery query(const UpdateNamedConfigurationParams& parameters) const override;
	QByteArray body(const UpdateNamedConfigurationParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets a default MetadataOptions object.
 */

class GetDefaultMetadataOptionsLoader : public Jellyfin::Support::HttpLoader<MetadataOptions, GetDefaultMetadataOptionsParams> {
public:
	explicit GetDefaultMetadataOptionsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetDefaultMetadataOptionsParams& parameters) const override;
	QUrlQuery query(const GetDefaultMetadataOptionsParams& parameters) const override;
	QByteArray body(const GetDefaultMetadataOptionsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_CONFIGURATION_H
