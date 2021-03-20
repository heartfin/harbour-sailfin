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

namespace Jellyfin {
namespace DTO {

PluginInfo::PluginInfo(QObject *parent) {}

PluginInfo PluginInfo::fromJson(QJsonObject source) {PluginInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void PluginInfo::setFromJson(QJsonObject source) {
	m_name = fromJsonValue<QString>(source["Name"]);
	m_version = fromJsonValue<QSharedPointer<Version>>(source["Version"]);
	m_configurationFileName = fromJsonValue<QString>(source["ConfigurationFileName"]);
	m_description = fromJsonValue<QString>(source["Description"]);
	m_jellyfinId = fromJsonValue<QUuid>(source["Id"]);
	m_canUninstall = fromJsonValue<bool>(source["CanUninstall"]);
	m_hasImage = fromJsonValue<bool>(source["HasImage"]);
	m_status = fromJsonValue<PluginStatus>(source["Status"]);

}
	
QJsonObject PluginInfo::toJson() {
	QJsonObject result;
	result["Name"] = toJsonValue<QString>(m_name);
	result["Version"] = toJsonValue<QSharedPointer<Version>>(m_version);
	result["ConfigurationFileName"] = toJsonValue<QString>(m_configurationFileName);
	result["Description"] = toJsonValue<QString>(m_description);
	result["Id"] = toJsonValue<QUuid>(m_jellyfinId);
	result["CanUninstall"] = toJsonValue<bool>(m_canUninstall);
	result["HasImage"] = toJsonValue<bool>(m_hasImage);
	result["Status"] = toJsonValue<PluginStatus>(m_status);

	return result;
}

QString PluginInfo::name() const { return m_name; }

void PluginInfo::setName(QString newName) {
	m_name = newName;
}
QSharedPointer<Version> PluginInfo::version() const { return m_version; }

void PluginInfo::setVersion(QSharedPointer<Version> newVersion) {
	m_version = newVersion;
}
QString PluginInfo::configurationFileName() const { return m_configurationFileName; }

void PluginInfo::setConfigurationFileName(QString newConfigurationFileName) {
	m_configurationFileName = newConfigurationFileName;
}
QString PluginInfo::description() const { return m_description; }

void PluginInfo::setDescription(QString newDescription) {
	m_description = newDescription;
}
QUuid PluginInfo::jellyfinId() const { return m_jellyfinId; }

void PluginInfo::setJellyfinId(QUuid newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool PluginInfo::canUninstall() const { return m_canUninstall; }

void PluginInfo::setCanUninstall(bool newCanUninstall) {
	m_canUninstall = newCanUninstall;
}
bool PluginInfo::hasImage() const { return m_hasImage; }

void PluginInfo::setHasImage(bool newHasImage) {
	m_hasImage = newHasImage;
}
PluginStatus PluginInfo::status() const { return m_status; }

void PluginInfo::setStatus(PluginStatus newStatus) {
	m_status = newStatus;
}


} // NS Jellyfin
} // NS DTO
