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

IPlugin::IPlugin(QObject *parent) {}

IPlugin IPlugin::fromJson(QJsonObject source) {IPlugin instance;
	instance->setFromJson(source, false);
	return instance;
}


void IPlugin::setFromJson(QJsonObject source) {
	m_name = fromJsonValue<QString>(source["Name"]);
	m_description = fromJsonValue<QString>(source["Description"]);
	m_jellyfinId = fromJsonValue<QUuid>(source["Id"]);
	m_version = fromJsonValue<QSharedPointer<Version>>(source["Version"]);
	m_assemblyFilePath = fromJsonValue<QString>(source["AssemblyFilePath"]);
	m_canUninstall = fromJsonValue<bool>(source["CanUninstall"]);
	m_dataFolderPath = fromJsonValue<QString>(source["DataFolderPath"]);

}
	
QJsonObject IPlugin::toJson() {
	QJsonObject result;
	result["Name"] = toJsonValue<QString>(m_name);
	result["Description"] = toJsonValue<QString>(m_description);
	result["Id"] = toJsonValue<QUuid>(m_jellyfinId);
	result["Version"] = toJsonValue<QSharedPointer<Version>>(m_version);
	result["AssemblyFilePath"] = toJsonValue<QString>(m_assemblyFilePath);
	result["CanUninstall"] = toJsonValue<bool>(m_canUninstall);
	result["DataFolderPath"] = toJsonValue<QString>(m_dataFolderPath);

	return result;
}

QString IPlugin::name() const { return m_name; }

void IPlugin::setName(QString newName) {
	m_name = newName;
}
QString IPlugin::description() const { return m_description; }

void IPlugin::setDescription(QString newDescription) {
	m_description = newDescription;
}
QUuid IPlugin::jellyfinId() const { return m_jellyfinId; }

void IPlugin::setJellyfinId(QUuid newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
QSharedPointer<Version> IPlugin::version() const { return m_version; }

void IPlugin::setVersion(QSharedPointer<Version> newVersion) {
	m_version = newVersion;
}
QString IPlugin::assemblyFilePath() const { return m_assemblyFilePath; }

void IPlugin::setAssemblyFilePath(QString newAssemblyFilePath) {
	m_assemblyFilePath = newAssemblyFilePath;
}
bool IPlugin::canUninstall() const { return m_canUninstall; }

void IPlugin::setCanUninstall(bool newCanUninstall) {
	m_canUninstall = newCanUninstall;
}
QString IPlugin::dataFolderPath() const { return m_dataFolderPath; }

void IPlugin::setDataFolderPath(QString newDataFolderPath) {
	m_dataFolderPath = newDataFolderPath;
}


} // NS Jellyfin
} // NS DTO
