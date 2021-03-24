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

#ifndef JELLYFIN_DTO_PLUGININFO_H
#define JELLYFIN_DTO_PLUGININFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QSharedPointer>
#include <QString>
#include <QUuid>
#include <optional>

#include "JellyfinQt/DTO/pluginstatus.h"
#include "JellyfinQt/DTO/version.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class PluginInfo {
public:PluginInfo();PluginInfo(const PluginInfo &other);
	
	static PluginInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);

	QSharedPointer<Version> version() const;

	void setVersion(QSharedPointer<Version> newVersion);
	/**
	 * @brief Gets or sets the name of the configuration file.
	 */
	QString configurationFileName() const;
	/**
	* @brief Gets or sets the name of the configuration file.
	*/
	void setConfigurationFileName(QString newConfigurationFileName);
	/**
	 * @brief Gets or sets the description.
	 */
	QString description() const;
	/**
	* @brief Gets or sets the description.
	*/
	void setDescription(QString newDescription);
	/**
	 * @brief Gets or sets the unique id.
	 */
	QUuid jellyfinId() const;
	/**
	* @brief Gets or sets the unique id.
	*/
	void setJellyfinId(QUuid newJellyfinId);
	/**
	 * @brief Gets or sets a value indicating whether the plugin can be uninstalled.
	 */
	bool canUninstall() const;
	/**
	* @brief Gets or sets a value indicating whether the plugin can be uninstalled.
	*/
	void setCanUninstall(bool newCanUninstall);
	/**
	 * @brief Gets or sets a value indicating whether this plugin has a valid image.
	 */
	bool hasImage() const;
	/**
	* @brief Gets or sets a value indicating whether this plugin has a valid image.
	*/
	void setHasImage(bool newHasImage);

	PluginStatus status() const;

	void setStatus(PluginStatus newStatus);

protected:
	QString m_name;
	QSharedPointer<Version> m_version = nullptr;
	QString m_configurationFileName;
	QString m_description;
	QUuid m_jellyfinId;
	bool m_canUninstall;
	bool m_hasImage;
	PluginStatus m_status;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PLUGININFO_H
