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
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/dto/configurationpagetype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class ConfigurationPageInfo {
public:
	ConfigurationPageInfo();
	ConfigurationPageInfo(const ConfigurationPageInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(ConfigurationPageInfo &other);
	
	static ConfigurationPageInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();

	/**
	 * @brief Gets or sets a value indicating whether the configurations page is enabled in the main menu.
	 */
	bool enableInMainMenu() const;
	/**
	* @brief Gets or sets a value indicating whether the configurations page is enabled in the main menu.
	*/
	void setEnableInMainMenu(bool newEnableInMainMenu);

	/**
	 * @brief Gets or sets the menu section.
	 */
	QString menuSection() const;
	/**
	* @brief Gets or sets the menu section.
	*/
	void setMenuSection(QString newMenuSection);
	bool menuSectionNull() const;
	void setMenuSectionNull();

	/**
	 * @brief Gets or sets the menu icon.
	 */
	QString menuIcon() const;
	/**
	* @brief Gets or sets the menu icon.
	*/
	void setMenuIcon(QString newMenuIcon);
	bool menuIconNull() const;
	void setMenuIconNull();

	/**
	 * @brief Gets or sets the display name.
	 */
	QString displayName() const;
	/**
	* @brief Gets or sets the display name.
	*/
	void setDisplayName(QString newDisplayName);
	bool displayNameNull() const;
	void setDisplayNameNull();


	ConfigurationPageType configurationPageType() const;

	void setConfigurationPageType(ConfigurationPageType newConfigurationPageType);

	/**
	 * @brief Gets or sets the plugin id.
	 */
	QString pluginId() const;
	/**
	* @brief Gets or sets the plugin id.
	*/
	void setPluginId(QString newPluginId);
	bool pluginIdNull() const;
	void setPluginIdNull();


protected:
	QString m_name;
	bool m_enableInMainMenu;
	QString m_menuSection;
	QString m_menuIcon;
	QString m_displayName;
	ConfigurationPageType m_configurationPageType;
	QString m_pluginId;
};

} // NS DTO

namespace Support {

using ConfigurationPageInfo = Jellyfin::DTO::ConfigurationPageInfo;

template <>
ConfigurationPageInfo fromJsonValue(const QJsonValue &source, convertType<ConfigurationPageInfo>);

template<>
QJsonValue toJsonValue(const ConfigurationPageInfo &source, convertType<ConfigurationPageInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_CONFIGURATIONPAGEINFO_H
