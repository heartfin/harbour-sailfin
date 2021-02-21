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
#include <QObject>
#include <QString>

#include "JellyfinQt/DTO/pluginstatus.h"

namespace Jellyfin {
namespace DTO {

class Version;

class PluginInfo : public QObject {
	Q_OBJECT
public:
	explicit PluginInfo(QObject *parent = nullptr);
	static PluginInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	Q_PROPERTY(Version * version READ version WRITE setVersion NOTIFY versionChanged)
	/**
	 * @brief Gets or sets the name of the configuration file.
	 */
	Q_PROPERTY(QString configurationFileName READ configurationFileName WRITE setConfigurationFileName NOTIFY configurationFileNameChanged)
	/**
	 * @brief Gets or sets the description.
	 */
	Q_PROPERTY(QString description READ description WRITE setDescription NOTIFY descriptionChanged)
	/**
	 * @brief Gets or sets the unique id.
	 */
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	/**
	 * @brief Gets or sets a value indicating whether the plugin can be uninstalled.
	 */
	Q_PROPERTY(bool canUninstall READ canUninstall WRITE setCanUninstall NOTIFY canUninstallChanged)
	/**
	 * @brief Gets or sets a value indicating whether this plugin has a valid image.
	 */
	Q_PROPERTY(bool hasImage READ hasImage WRITE setHasImage NOTIFY hasImageChanged)
	Q_PROPERTY(PluginStatus status READ status WRITE setStatus NOTIFY statusChanged)

	QString name() const;
	void setName(QString newName);
	
	Version * version() const;
	void setVersion(Version * newVersion);
	
	QString configurationFileName() const;
	void setConfigurationFileName(QString newConfigurationFileName);
	
	QString description() const;
	void setDescription(QString newDescription);
	
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	bool canUninstall() const;
	void setCanUninstall(bool newCanUninstall);
	
	bool hasImage() const;
	void setHasImage(bool newHasImage);
	
	PluginStatus status() const;
	void setStatus(PluginStatus newStatus);
	
signals:
	void nameChanged(QString newName);
	void versionChanged(Version * newVersion);
	void configurationFileNameChanged(QString newConfigurationFileName);
	void descriptionChanged(QString newDescription);
	void jellyfinIdChanged(QString newJellyfinId);
	void canUninstallChanged(bool newCanUninstall);
	void hasImageChanged(bool newHasImage);
	void statusChanged(PluginStatus newStatus);
protected:
	QString m_name;
	Version * m_version = nullptr;
	QString m_configurationFileName;
	QString m_description;
	QString m_jellyfinId;
	bool m_canUninstall;
	bool m_hasImage;
	PluginStatus m_status;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PLUGININFO_H
