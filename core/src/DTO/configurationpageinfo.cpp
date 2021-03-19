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

#include <JellyfinQt/DTO/configurationpagetype.h>

namespace Jellyfin {
namespace DTO {

ConfigurationPageInfo::ConfigurationPageInfo(QObject *parent) : QObject(parent) {}

ConfigurationPageInfo *ConfigurationPageInfo::fromJSON(QJsonObject source, QObject *parent) {
	ConfigurationPageInfo *instance = new ConfigurationPageInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void ConfigurationPageInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject ConfigurationPageInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString ConfigurationPageInfo::name() const { return m_name; }
void ConfigurationPageInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

bool ConfigurationPageInfo::enableInMainMenu() const { return m_enableInMainMenu; }
void ConfigurationPageInfo::setEnableInMainMenu(bool newEnableInMainMenu) {
	m_enableInMainMenu = newEnableInMainMenu;
	emit enableInMainMenuChanged(newEnableInMainMenu);
}

QString ConfigurationPageInfo::menuSection() const { return m_menuSection; }
void ConfigurationPageInfo::setMenuSection(QString newMenuSection) {
	m_menuSection = newMenuSection;
	emit menuSectionChanged(newMenuSection);
}

QString ConfigurationPageInfo::menuIcon() const { return m_menuIcon; }
void ConfigurationPageInfo::setMenuIcon(QString newMenuIcon) {
	m_menuIcon = newMenuIcon;
	emit menuIconChanged(newMenuIcon);
}

QString ConfigurationPageInfo::displayName() const { return m_displayName; }
void ConfigurationPageInfo::setDisplayName(QString newDisplayName) {
	m_displayName = newDisplayName;
	emit displayNameChanged(newDisplayName);
}

ConfigurationPageType ConfigurationPageInfo::configurationPageType() const { return m_configurationPageType; }
void ConfigurationPageInfo::setConfigurationPageType(ConfigurationPageType newConfigurationPageType) {
	m_configurationPageType = newConfigurationPageType;
	emit configurationPageTypeChanged(newConfigurationPageType);
}

QString ConfigurationPageInfo::pluginId() const { return m_pluginId; }
void ConfigurationPageInfo::setPluginId(QString newPluginId) {
	m_pluginId = newPluginId;
	emit pluginIdChanged(newPluginId);
}


} // NS Jellyfin
} // NS DTO
