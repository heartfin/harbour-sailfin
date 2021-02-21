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

#ifndef JELLYFIN_DTO_CONFIGURATIONPAGEINFO_H
#define JELLYFIN_DTO_CONFIGURATIONPAGEINFO_H

#include <QJsonObject>
#include <QObject>
#include <QString>

#include "JellyfinQt/DTO/configurationpagetype.h"

namespace Jellyfin {
namespace DTO {

class ConfigurationPageInfo : public QObject {
	Q_OBJECT
public:
	explicit ConfigurationPageInfo(QObject *parent = nullptr);
	static ConfigurationPageInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets a value indicating whether the configurations page is enabled in the main menu.
	 */
	Q_PROPERTY(bool enableInMainMenu READ enableInMainMenu WRITE setEnableInMainMenu NOTIFY enableInMainMenuChanged)
	/**
	 * @brief Gets or sets the menu section.
	 */
	Q_PROPERTY(QString menuSection READ menuSection WRITE setMenuSection NOTIFY menuSectionChanged)
	/**
	 * @brief Gets or sets the menu icon.
	 */
	Q_PROPERTY(QString menuIcon READ menuIcon WRITE setMenuIcon NOTIFY menuIconChanged)
	/**
	 * @brief Gets or sets the display name.
	 */
	Q_PROPERTY(QString displayName READ displayName WRITE setDisplayName NOTIFY displayNameChanged)
	Q_PROPERTY(ConfigurationPageType configurationPageType READ configurationPageType WRITE setConfigurationPageType NOTIFY configurationPageTypeChanged)
	/**
	 * @brief Gets or sets the plugin id.
	 */
	Q_PROPERTY(QString pluginId READ pluginId WRITE setPluginId NOTIFY pluginIdChanged)

	QString name() const;
	void setName(QString newName);
	
	bool enableInMainMenu() const;
	void setEnableInMainMenu(bool newEnableInMainMenu);
	
	QString menuSection() const;
	void setMenuSection(QString newMenuSection);
	
	QString menuIcon() const;
	void setMenuIcon(QString newMenuIcon);
	
	QString displayName() const;
	void setDisplayName(QString newDisplayName);
	
	ConfigurationPageType configurationPageType() const;
	void setConfigurationPageType(ConfigurationPageType newConfigurationPageType);
	
	QString pluginId() const;
	void setPluginId(QString newPluginId);
	
signals:
	void nameChanged(QString newName);
	void enableInMainMenuChanged(bool newEnableInMainMenu);
	void menuSectionChanged(QString newMenuSection);
	void menuIconChanged(QString newMenuIcon);
	void displayNameChanged(QString newDisplayName);
	void configurationPageTypeChanged(ConfigurationPageType newConfigurationPageType);
	void pluginIdChanged(QString newPluginId);
protected:
	QString m_name;
	bool m_enableInMainMenu;
	QString m_menuSection;
	QString m_menuIcon;
	QString m_displayName;
	ConfigurationPageType m_configurationPageType;
	QString m_pluginId;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_CONFIGURATIONPAGEINFO_H
