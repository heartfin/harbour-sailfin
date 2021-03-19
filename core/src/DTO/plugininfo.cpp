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

#include <JellyfinQt/DTO/plugininfo.h>

#include <JellyfinQt/DTO/pluginstatus.h>

namespace Jellyfin {
namespace DTO {

PluginInfo::PluginInfo(QObject *parent) : QObject(parent) {}

PluginInfo *PluginInfo::fromJSON(QJsonObject source, QObject *parent) {
	PluginInfo *instance = new PluginInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void PluginInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject PluginInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString PluginInfo::name() const { return m_name; }
void PluginInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

Version * PluginInfo::version() const { return m_version; }
void PluginInfo::setVersion(Version * newVersion) {
	m_version = newVersion;
	emit versionChanged(newVersion);
}

QString PluginInfo::configurationFileName() const { return m_configurationFileName; }
void PluginInfo::setConfigurationFileName(QString newConfigurationFileName) {
	m_configurationFileName = newConfigurationFileName;
	emit configurationFileNameChanged(newConfigurationFileName);
}

QString PluginInfo::description() const { return m_description; }
void PluginInfo::setDescription(QString newDescription) {
	m_description = newDescription;
	emit descriptionChanged(newDescription);
}

QString PluginInfo::jellyfinId() const { return m_jellyfinId; }
void PluginInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

bool PluginInfo::canUninstall() const { return m_canUninstall; }
void PluginInfo::setCanUninstall(bool newCanUninstall) {
	m_canUninstall = newCanUninstall;
	emit canUninstallChanged(newCanUninstall);
}

bool PluginInfo::hasImage() const { return m_hasImage; }
void PluginInfo::setHasImage(bool newHasImage) {
	m_hasImage = newHasImage;
	emit hasImageChanged(newHasImage);
}

PluginStatus PluginInfo::status() const { return m_status; }
void PluginInfo::setStatus(PluginStatus newStatus) {
	m_status = newStatus;
	emit statusChanged(newStatus);
}


} // NS Jellyfin
} // NS DTO
