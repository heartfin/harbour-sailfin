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

#include <JellyfinQt/DTO/iplugin.h>

namespace Jellyfin {
namespace DTO {

IPlugin::IPlugin(QObject *parent) : QObject(parent) {}

IPlugin *IPlugin::fromJSON(QJsonObject source, QObject *parent) {
	IPlugin *instance = new IPlugin(parent);
	instance->updateFromJSON(source);
	return instance;
}

void IPlugin::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject IPlugin::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString IPlugin::name() const { return m_name; }
void IPlugin::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString IPlugin::description() const { return m_description; }
void IPlugin::setDescription(QString newDescription) {
	m_description = newDescription;
	emit descriptionChanged(newDescription);
}

QString IPlugin::jellyfinId() const { return m_jellyfinId; }
void IPlugin::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

Version * IPlugin::version() const { return m_version; }
void IPlugin::setVersion(Version * newVersion) {
	m_version = newVersion;
	emit versionChanged(newVersion);
}

QString IPlugin::assemblyFilePath() const { return m_assemblyFilePath; }
void IPlugin::setAssemblyFilePath(QString newAssemblyFilePath) {
	m_assemblyFilePath = newAssemblyFilePath;
	emit assemblyFilePathChanged(newAssemblyFilePath);
}

bool IPlugin::canUninstall() const { return m_canUninstall; }
void IPlugin::setCanUninstall(bool newCanUninstall) {
	m_canUninstall = newCanUninstall;
	emit canUninstallChanged(newCanUninstall);
}

QString IPlugin::dataFolderPath() const { return m_dataFolderPath; }
void IPlugin::setDataFolderPath(QString newDataFolderPath) {
	m_dataFolderPath = newDataFolderPath;
	emit dataFolderPathChanged(newDataFolderPath);
}


} // NS Jellyfin
} // NS DTO
