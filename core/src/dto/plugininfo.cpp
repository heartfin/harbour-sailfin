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

#include <JellyfinQt/dto/plugininfo.h>

namespace Jellyfin {
namespace DTO {

PluginInfo::PluginInfo() {}

PluginInfo::PluginInfo(const PluginInfo &other) :

	m_name(other.m_name),
	m_version(other.m_version),
	m_configurationFileName(other.m_configurationFileName),
	m_description(other.m_description),
	m_jellyfinId(other.m_jellyfinId),
	m_canUninstall(other.m_canUninstall),
	m_hasImage(other.m_hasImage),
	m_status(other.m_status){}


void PluginInfo::replaceData(PluginInfo &other) {
	m_name = other.m_name;
	m_version = other.m_version;
	m_configurationFileName = other.m_configurationFileName;
	m_description = other.m_description;
	m_jellyfinId = other.m_jellyfinId;
	m_canUninstall = other.m_canUninstall;
	m_hasImage = other.m_hasImage;
	m_status = other.m_status;
}

PluginInfo PluginInfo::fromJson(QJsonObject source) {
	PluginInfo instance;
	instance.setFromJson(source);
	return instance;
}


void PluginInfo::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_version = Jellyfin::Support::fromJsonValue<QSharedPointer<Version>>(source["Version"]);
	m_configurationFileName = Jellyfin::Support::fromJsonValue<QString>(source["ConfigurationFileName"]);
	m_description = Jellyfin::Support::fromJsonValue<QString>(source["Description"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_canUninstall = Jellyfin::Support::fromJsonValue<bool>(source["CanUninstall"]);
	m_hasImage = Jellyfin::Support::fromJsonValue<bool>(source["HasImage"]);
	m_status = Jellyfin::Support::fromJsonValue<PluginStatus>(source["Status"]);

}
	
QJsonObject PluginInfo::toJson() {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["Version"] = Jellyfin::Support::toJsonValue<QSharedPointer<Version>>(m_version);
	result["ConfigurationFileName"] = Jellyfin::Support::toJsonValue<QString>(m_configurationFileName);
	result["Description"] = Jellyfin::Support::toJsonValue<QString>(m_description);
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	result["CanUninstall"] = Jellyfin::Support::toJsonValue<bool>(m_canUninstall);
	result["HasImage"] = Jellyfin::Support::toJsonValue<bool>(m_hasImage);
	result["Status"] = Jellyfin::Support::toJsonValue<PluginStatus>(m_status);

	return result;
}

QString PluginInfo::name() const { return m_name; }

void PluginInfo::setName(QString newName) {
	m_name = newName;
}
bool PluginInfo::nameNull() const {
	return m_name.isNull();
}

void PluginInfo::setNameNull() {
	m_name.clear();

}
QSharedPointer<Version> PluginInfo::version() const { return m_version; }

void PluginInfo::setVersion(QSharedPointer<Version> newVersion) {
	m_version = newVersion;
}

QString PluginInfo::configurationFileName() const { return m_configurationFileName; }

void PluginInfo::setConfigurationFileName(QString newConfigurationFileName) {
	m_configurationFileName = newConfigurationFileName;
}
bool PluginInfo::configurationFileNameNull() const {
	return m_configurationFileName.isNull();
}

void PluginInfo::setConfigurationFileNameNull() {
	m_configurationFileName.clear();

}
QString PluginInfo::description() const { return m_description; }

void PluginInfo::setDescription(QString newDescription) {
	m_description = newDescription;
}
bool PluginInfo::descriptionNull() const {
	return m_description.isNull();
}

void PluginInfo::setDescriptionNull() {
	m_description.clear();

}
QString PluginInfo::jellyfinId() const { return m_jellyfinId; }

void PluginInfo::setJellyfinId(QString newJellyfinId) {
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


} // NS DTO

namespace Support {

using PluginInfo = Jellyfin::DTO::PluginInfo;

template <>
PluginInfo fromJsonValue<PluginInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return PluginInfo::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
