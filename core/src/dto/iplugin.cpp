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

#include <JellyfinQt/dto/iplugin.h>

namespace Jellyfin {
namespace DTO {

IPlugin::IPlugin() {}
IPlugin::IPlugin (
		QString jellyfinId, 
		bool canUninstall 
		) :
	m_jellyfinId(jellyfinId),
	m_canUninstall(canUninstall) { }



IPlugin::IPlugin(const IPlugin &other) :

	m_name(other.m_name),
	m_description(other.m_description),
	m_jellyfinId(other.m_jellyfinId),
	m_version(other.m_version),
	m_assemblyFilePath(other.m_assemblyFilePath),
	m_canUninstall(other.m_canUninstall),
	m_dataFolderPath(other.m_dataFolderPath){}


void IPlugin::replaceData(IPlugin &other) {
	m_name = other.m_name;
	m_description = other.m_description;
	m_jellyfinId = other.m_jellyfinId;
	m_version = other.m_version;
	m_assemblyFilePath = other.m_assemblyFilePath;
	m_canUninstall = other.m_canUninstall;
	m_dataFolderPath = other.m_dataFolderPath;
}

IPlugin IPlugin::fromJson(QJsonObject source) {
	IPlugin instance;
	instance.setFromJson(source);
	return instance;
}


void IPlugin::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_description = Jellyfin::Support::fromJsonValue<QString>(source["Description"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_version = Jellyfin::Support::fromJsonValue<QString>(source["Version"]);
	m_assemblyFilePath = Jellyfin::Support::fromJsonValue<QString>(source["AssemblyFilePath"]);
	m_canUninstall = Jellyfin::Support::fromJsonValue<bool>(source["CanUninstall"]);
	m_dataFolderPath = Jellyfin::Support::fromJsonValue<QString>(source["DataFolderPath"]);

}
	
QJsonObject IPlugin::toJson() const {
	QJsonObject result;
	
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	
	if (!(m_description.isNull())) {
		result["Description"] = Jellyfin::Support::toJsonValue<QString>(m_description);
	}
			
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);		
	
	if (!(m_version.isNull())) {
		result["Version"] = Jellyfin::Support::toJsonValue<QString>(m_version);
	}
			
	
	if (!(m_assemblyFilePath.isNull())) {
		result["AssemblyFilePath"] = Jellyfin::Support::toJsonValue<QString>(m_assemblyFilePath);
	}
			
	result["CanUninstall"] = Jellyfin::Support::toJsonValue<bool>(m_canUninstall);		
	
	if (!(m_dataFolderPath.isNull())) {
		result["DataFolderPath"] = Jellyfin::Support::toJsonValue<QString>(m_dataFolderPath);
	}
		
	return result;
}

QString IPlugin::name() const { return m_name; }

void IPlugin::setName(QString newName) {
	m_name = newName;
}
bool IPlugin::nameNull() const {
	return m_name.isNull();
}

void IPlugin::setNameNull() {
	m_name.clear();

}
QString IPlugin::description() const { return m_description; }

void IPlugin::setDescription(QString newDescription) {
	m_description = newDescription;
}
bool IPlugin::descriptionNull() const {
	return m_description.isNull();
}

void IPlugin::setDescriptionNull() {
	m_description.clear();

}
QString IPlugin::jellyfinId() const { return m_jellyfinId; }

void IPlugin::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}

QString IPlugin::version() const { return m_version; }

void IPlugin::setVersion(QString newVersion) {
	m_version = newVersion;
}
bool IPlugin::versionNull() const {
	return m_version.isNull();
}

void IPlugin::setVersionNull() {
	m_version.clear();

}
QString IPlugin::assemblyFilePath() const { return m_assemblyFilePath; }

void IPlugin::setAssemblyFilePath(QString newAssemblyFilePath) {
	m_assemblyFilePath = newAssemblyFilePath;
}
bool IPlugin::assemblyFilePathNull() const {
	return m_assemblyFilePath.isNull();
}

void IPlugin::setAssemblyFilePathNull() {
	m_assemblyFilePath.clear();

}
bool IPlugin::canUninstall() const { return m_canUninstall; }

void IPlugin::setCanUninstall(bool newCanUninstall) {
	m_canUninstall = newCanUninstall;
}

QString IPlugin::dataFolderPath() const { return m_dataFolderPath; }

void IPlugin::setDataFolderPath(QString newDataFolderPath) {
	m_dataFolderPath = newDataFolderPath;
}
bool IPlugin::dataFolderPathNull() const {
	return m_dataFolderPath.isNull();
}

void IPlugin::setDataFolderPathNull() {
	m_dataFolderPath.clear();

}

} // NS DTO

namespace Support {

using IPlugin = Jellyfin::DTO::IPlugin;

template <>
IPlugin fromJsonValue(const QJsonValue &source, convertType<IPlugin>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return IPlugin::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const IPlugin &source, convertType<IPlugin>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
