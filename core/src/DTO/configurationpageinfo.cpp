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

#include <JellyfinQt/DTO/configurationpageinfo.h>

namespace Jellyfin {
namespace DTO {

ConfigurationPageInfo::ConfigurationPageInfo(QObject *parent) {}

ConfigurationPageInfo ConfigurationPageInfo::fromJson(QJsonObject source) {ConfigurationPageInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void ConfigurationPageInfo::setFromJson(QJsonObject source) {
	m_name = fromJsonValue<QString>(source["Name"]);
	m_enableInMainMenu = fromJsonValue<bool>(source["EnableInMainMenu"]);
	m_menuSection = fromJsonValue<QString>(source["MenuSection"]);
	m_menuIcon = fromJsonValue<QString>(source["MenuIcon"]);
	m_displayName = fromJsonValue<QString>(source["DisplayName"]);
	m_configurationPageType = fromJsonValue<ConfigurationPageType>(source["ConfigurationPageType"]);
	m_pluginId = fromJsonValue<QUuid>(source["PluginId"]);

}
	
QJsonObject ConfigurationPageInfo::toJson() {
	QJsonObject result;
	result["Name"] = toJsonValue<QString>(m_name);
	result["EnableInMainMenu"] = toJsonValue<bool>(m_enableInMainMenu);
	result["MenuSection"] = toJsonValue<QString>(m_menuSection);
	result["MenuIcon"] = toJsonValue<QString>(m_menuIcon);
	result["DisplayName"] = toJsonValue<QString>(m_displayName);
	result["ConfigurationPageType"] = toJsonValue<ConfigurationPageType>(m_configurationPageType);
	result["PluginId"] = toJsonValue<QUuid>(m_pluginId);

	return result;
}

QString ConfigurationPageInfo::name() const { return m_name; }

void ConfigurationPageInfo::setName(QString newName) {
	m_name = newName;
}
bool ConfigurationPageInfo::enableInMainMenu() const { return m_enableInMainMenu; }

void ConfigurationPageInfo::setEnableInMainMenu(bool newEnableInMainMenu) {
	m_enableInMainMenu = newEnableInMainMenu;
}
QString ConfigurationPageInfo::menuSection() const { return m_menuSection; }

void ConfigurationPageInfo::setMenuSection(QString newMenuSection) {
	m_menuSection = newMenuSection;
}
QString ConfigurationPageInfo::menuIcon() const { return m_menuIcon; }

void ConfigurationPageInfo::setMenuIcon(QString newMenuIcon) {
	m_menuIcon = newMenuIcon;
}
QString ConfigurationPageInfo::displayName() const { return m_displayName; }

void ConfigurationPageInfo::setDisplayName(QString newDisplayName) {
	m_displayName = newDisplayName;
}
ConfigurationPageType ConfigurationPageInfo::configurationPageType() const { return m_configurationPageType; }

void ConfigurationPageInfo::setConfigurationPageType(ConfigurationPageType newConfigurationPageType) {
	m_configurationPageType = newConfigurationPageType;
}
QUuid ConfigurationPageInfo::pluginId() const { return m_pluginId; }

void ConfigurationPageInfo::setPluginId(QUuid newPluginId) {
	m_pluginId = newPluginId;
}


} // NS Jellyfin
} // NS DTO
