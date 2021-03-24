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

#include <JellyfinQt/dto/configurationpageinfo.h>

namespace Jellyfin {
namespace DTO {

ConfigurationPageInfo::ConfigurationPageInfo() {}

ConfigurationPageInfo::ConfigurationPageInfo(const ConfigurationPageInfo &other) :

	m_name(other.m_name),
	m_enableInMainMenu(other.m_enableInMainMenu),
	m_menuSection(other.m_menuSection),
	m_menuIcon(other.m_menuIcon),
	m_displayName(other.m_displayName),
	m_configurationPageType(other.m_configurationPageType),
	m_pluginId(other.m_pluginId){}


void ConfigurationPageInfo::replaceData(ConfigurationPageInfo &other) {
	m_name = other.m_name;
	m_enableInMainMenu = other.m_enableInMainMenu;
	m_menuSection = other.m_menuSection;
	m_menuIcon = other.m_menuIcon;
	m_displayName = other.m_displayName;
	m_configurationPageType = other.m_configurationPageType;
	m_pluginId = other.m_pluginId;
}

ConfigurationPageInfo ConfigurationPageInfo::fromJson(QJsonObject source) {
	ConfigurationPageInfo instance;
	instance.setFromJson(source);
	return instance;
}


void ConfigurationPageInfo::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_enableInMainMenu = Jellyfin::Support::fromJsonValue<bool>(source["EnableInMainMenu"]);
	m_menuSection = Jellyfin::Support::fromJsonValue<QString>(source["MenuSection"]);
	m_menuIcon = Jellyfin::Support::fromJsonValue<QString>(source["MenuIcon"]);
	m_displayName = Jellyfin::Support::fromJsonValue<QString>(source["DisplayName"]);
	m_configurationPageType = Jellyfin::Support::fromJsonValue<ConfigurationPageType>(source["ConfigurationPageType"]);
	m_pluginId = Jellyfin::Support::fromJsonValue<QString>(source["PluginId"]);

}
	
QJsonObject ConfigurationPageInfo::toJson() {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["EnableInMainMenu"] = Jellyfin::Support::toJsonValue<bool>(m_enableInMainMenu);
	result["MenuSection"] = Jellyfin::Support::toJsonValue<QString>(m_menuSection);
	result["MenuIcon"] = Jellyfin::Support::toJsonValue<QString>(m_menuIcon);
	result["DisplayName"] = Jellyfin::Support::toJsonValue<QString>(m_displayName);
	result["ConfigurationPageType"] = Jellyfin::Support::toJsonValue<ConfigurationPageType>(m_configurationPageType);
	result["PluginId"] = Jellyfin::Support::toJsonValue<QString>(m_pluginId);

	return result;
}

QString ConfigurationPageInfo::name() const { return m_name; }

void ConfigurationPageInfo::setName(QString newName) {
	m_name = newName;
}
bool ConfigurationPageInfo::nameNull() const {
	return m_name.isNull();
}

void ConfigurationPageInfo::setNameNull() {
	m_name.clear();

}
bool ConfigurationPageInfo::enableInMainMenu() const { return m_enableInMainMenu; }

void ConfigurationPageInfo::setEnableInMainMenu(bool newEnableInMainMenu) {
	m_enableInMainMenu = newEnableInMainMenu;
}

QString ConfigurationPageInfo::menuSection() const { return m_menuSection; }

void ConfigurationPageInfo::setMenuSection(QString newMenuSection) {
	m_menuSection = newMenuSection;
}
bool ConfigurationPageInfo::menuSectionNull() const {
	return m_menuSection.isNull();
}

void ConfigurationPageInfo::setMenuSectionNull() {
	m_menuSection.clear();

}
QString ConfigurationPageInfo::menuIcon() const { return m_menuIcon; }

void ConfigurationPageInfo::setMenuIcon(QString newMenuIcon) {
	m_menuIcon = newMenuIcon;
}
bool ConfigurationPageInfo::menuIconNull() const {
	return m_menuIcon.isNull();
}

void ConfigurationPageInfo::setMenuIconNull() {
	m_menuIcon.clear();

}
QString ConfigurationPageInfo::displayName() const { return m_displayName; }

void ConfigurationPageInfo::setDisplayName(QString newDisplayName) {
	m_displayName = newDisplayName;
}
bool ConfigurationPageInfo::displayNameNull() const {
	return m_displayName.isNull();
}

void ConfigurationPageInfo::setDisplayNameNull() {
	m_displayName.clear();

}
ConfigurationPageType ConfigurationPageInfo::configurationPageType() const { return m_configurationPageType; }

void ConfigurationPageInfo::setConfigurationPageType(ConfigurationPageType newConfigurationPageType) {
	m_configurationPageType = newConfigurationPageType;
}

QString ConfigurationPageInfo::pluginId() const { return m_pluginId; }

void ConfigurationPageInfo::setPluginId(QString newPluginId) {
	m_pluginId = newPluginId;
}
bool ConfigurationPageInfo::pluginIdNull() const {
	return m_pluginId.isNull();
}

void ConfigurationPageInfo::setPluginIdNull() {
	m_pluginId.clear();

}

} // NS DTO

namespace Support {

using ConfigurationPageInfo = Jellyfin::DTO::ConfigurationPageInfo;

template <>
ConfigurationPageInfo fromJsonValue<ConfigurationPageInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return ConfigurationPageInfo::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
