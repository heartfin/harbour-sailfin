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

#include <JellyfinQt/loader/http/plugins.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetPluginsLoader::GetPluginsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<PluginInfo>, GetPluginsParams>(apiClient) {}

QString GetPluginsLoader::path(const GetPluginsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Plugins");
}

QUrlQuery GetPluginsLoader::query(const GetPluginsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetPluginsLoader::body(const GetPluginsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetPluginsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

UninstallPluginLoader::UninstallPluginLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UninstallPluginParams>(apiClient) {}

QString UninstallPluginLoader::path(const UninstallPluginParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Plugins/") + Support::toString< QString>(params.pluginId()) ;
}

QUrlQuery UninstallPluginLoader::query(const UninstallPluginParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray UninstallPluginLoader::body(const UninstallPluginParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation UninstallPluginLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

UninstallPluginByVersionLoader::UninstallPluginByVersionLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UninstallPluginByVersionParams>(apiClient) {}

QString UninstallPluginByVersionLoader::path(const UninstallPluginByVersionParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Plugins/") + Support::toString< QString>(params.pluginId()) + QStringLiteral("/") + Support::toString< QString>(params.version()) ;
}

QUrlQuery UninstallPluginByVersionLoader::query(const UninstallPluginByVersionParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray UninstallPluginByVersionLoader::body(const UninstallPluginByVersionParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation UninstallPluginByVersionLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

DisablePluginLoader::DisablePluginLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DisablePluginParams>(apiClient) {}

QString DisablePluginLoader::path(const DisablePluginParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Plugins/") + Support::toString< QString>(params.pluginId()) + QStringLiteral("/") + Support::toString< QString>(params.version()) + QStringLiteral("/Disable");
}

QUrlQuery DisablePluginLoader::query(const DisablePluginParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray DisablePluginLoader::body(const DisablePluginParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DisablePluginLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

EnablePluginLoader::EnablePluginLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, EnablePluginParams>(apiClient) {}

QString EnablePluginLoader::path(const EnablePluginParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Plugins/") + Support::toString< QString>(params.pluginId()) + QStringLiteral("/") + Support::toString< QString>(params.version()) + QStringLiteral("/Enable");
}

QUrlQuery EnablePluginLoader::query(const EnablePluginParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray EnablePluginLoader::body(const EnablePluginParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation EnablePluginLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

GetPluginConfigurationLoader::GetPluginConfigurationLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BasePluginConfiguration, GetPluginConfigurationParams>(apiClient) {}

QString GetPluginConfigurationLoader::path(const GetPluginConfigurationParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Plugins/") + Support::toString< QString>(params.pluginId()) + QStringLiteral("/Configuration");
}

QUrlQuery GetPluginConfigurationLoader::query(const GetPluginConfigurationParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetPluginConfigurationLoader::body(const GetPluginConfigurationParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetPluginConfigurationLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

UpdatePluginConfigurationLoader::UpdatePluginConfigurationLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UpdatePluginConfigurationParams>(apiClient) {}

QString UpdatePluginConfigurationLoader::path(const UpdatePluginConfigurationParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Plugins/") + Support::toString< QString>(params.pluginId()) + QStringLiteral("/Configuration");
}

QUrlQuery UpdatePluginConfigurationLoader::query(const UpdatePluginConfigurationParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray UpdatePluginConfigurationLoader::body(const UpdatePluginConfigurationParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation UpdatePluginConfigurationLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

GetPluginManifestLoader::GetPluginManifestLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, GetPluginManifestParams>(apiClient) {}

QString GetPluginManifestLoader::path(const GetPluginManifestParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Plugins/") + Support::toString< QString>(params.pluginId()) + QStringLiteral("/Manifest");
}

QUrlQuery GetPluginManifestLoader::query(const GetPluginManifestParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetPluginManifestLoader::body(const GetPluginManifestParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetPluginManifestLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
