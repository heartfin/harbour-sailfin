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

#ifndef JELLYFIN_LOADER_HTTP_PLUGINS_H
#define JELLYFIN_LOADER_HTTP_PLUGINS_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/plugininfo.h"
#include "JellyfinQt/dto/basepluginconfiguration.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Gets a list of currently installed plugins.
 */

class GetPluginsLoader : public Jellyfin::Support::HttpLoader<QList<PluginInfo>, GetPluginsParams> {
public:
	explicit GetPluginsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetPluginsParams& parameters) const override;
	QUrlQuery query(const GetPluginsParams& parameters) const override;
	QByteArray body(const GetPluginsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Uninstalls a plugin.
 */

class UninstallPluginLoader : public Jellyfin::Support::HttpLoader<void, UninstallPluginParams> {
public:
	explicit UninstallPluginLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const UninstallPluginParams& parameters) const override;
	QUrlQuery query(const UninstallPluginParams& parameters) const override;
	QByteArray body(const UninstallPluginParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Uninstalls a plugin by version.
 */

class UninstallPluginByVersionLoader : public Jellyfin::Support::HttpLoader<void, UninstallPluginByVersionParams> {
public:
	explicit UninstallPluginByVersionLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const UninstallPluginByVersionParams& parameters) const override;
	QUrlQuery query(const UninstallPluginByVersionParams& parameters) const override;
	QByteArray body(const UninstallPluginByVersionParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Disable a plugin.
 */

class DisablePluginLoader : public Jellyfin::Support::HttpLoader<void, DisablePluginParams> {
public:
	explicit DisablePluginLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const DisablePluginParams& parameters) const override;
	QUrlQuery query(const DisablePluginParams& parameters) const override;
	QByteArray body(const DisablePluginParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Enables a disabled plugin.
 */

class EnablePluginLoader : public Jellyfin::Support::HttpLoader<void, EnablePluginParams> {
public:
	explicit EnablePluginLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const EnablePluginParams& parameters) const override;
	QUrlQuery query(const EnablePluginParams& parameters) const override;
	QByteArray body(const EnablePluginParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets plugin configuration.
 */

class GetPluginConfigurationLoader : public Jellyfin::Support::HttpLoader<BasePluginConfiguration, GetPluginConfigurationParams> {
public:
	explicit GetPluginConfigurationLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetPluginConfigurationParams& parameters) const override;
	QUrlQuery query(const GetPluginConfigurationParams& parameters) const override;
	QByteArray body(const GetPluginConfigurationParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Updates plugin configuration.
 */

class UpdatePluginConfigurationLoader : public Jellyfin::Support::HttpLoader<void, UpdatePluginConfigurationParams> {
public:
	explicit UpdatePluginConfigurationLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const UpdatePluginConfigurationParams& parameters) const override;
	QUrlQuery query(const UpdatePluginConfigurationParams& parameters) const override;
	QByteArray body(const UpdatePluginConfigurationParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets a plugin's manifest.
 */

class GetPluginManifestLoader : public Jellyfin::Support::HttpLoader<void, GetPluginManifestParams> {
public:
	explicit GetPluginManifestLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetPluginManifestParams& parameters) const override;
	QUrlQuery query(const GetPluginManifestParams& parameters) const override;
	QByteArray body(const GetPluginManifestParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Updates plugin security info.
 */

class UpdatePluginSecurityInfoLoader : public Jellyfin::Support::HttpLoader<void, UpdatePluginSecurityInfoParams> {
public:
	explicit UpdatePluginSecurityInfoLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const UpdatePluginSecurityInfoParams& parameters) const override;
	QUrlQuery query(const UpdatePluginSecurityInfoParams& parameters) const override;
	QByteArray body(const UpdatePluginSecurityInfoParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_PLUGINS_H
