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

#include <JellyfinQt/dto/installationinfo.h>

namespace Jellyfin {
namespace DTO {

InstallationInfo::InstallationInfo() {}

InstallationInfo::InstallationInfo(const InstallationInfo &other) :

	m_guid(other.m_guid),
	m_name(other.m_name),
	m_version(other.m_version),
	m_changelog(other.m_changelog),
	m_sourceUrl(other.m_sourceUrl),
	m_checksum(other.m_checksum){}


void InstallationInfo::replaceData(InstallationInfo &other) {
	m_guid = other.m_guid;
	m_name = other.m_name;
	m_version = other.m_version;
	m_changelog = other.m_changelog;
	m_sourceUrl = other.m_sourceUrl;
	m_checksum = other.m_checksum;
}

InstallationInfo InstallationInfo::fromJson(QJsonObject source) {
	InstallationInfo instance;
	instance.setFromJson(source);
	return instance;
}


void InstallationInfo::setFromJson(QJsonObject source) {
	m_guid = Jellyfin::Support::fromJsonValue<QString>(source["Guid"]);
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_version = Jellyfin::Support::fromJsonValue<QSharedPointer<Version>>(source["Version"]);
	m_changelog = Jellyfin::Support::fromJsonValue<QString>(source["Changelog"]);
	m_sourceUrl = Jellyfin::Support::fromJsonValue<QString>(source["SourceUrl"]);
	m_checksum = Jellyfin::Support::fromJsonValue<QString>(source["Checksum"]);

}
	
QJsonObject InstallationInfo::toJson() const {
	QJsonObject result;
	
	result["Guid"] = Jellyfin::Support::toJsonValue<QString>(m_guid);		
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	result["Version"] = Jellyfin::Support::toJsonValue<QSharedPointer<Version>>(m_version);		
	
	if (!(m_changelog.isNull())) {
		result["Changelog"] = Jellyfin::Support::toJsonValue<QString>(m_changelog);
	}
			
	
	if (!(m_sourceUrl.isNull())) {
		result["SourceUrl"] = Jellyfin::Support::toJsonValue<QString>(m_sourceUrl);
	}
			
	
	if (!(m_checksum.isNull())) {
		result["Checksum"] = Jellyfin::Support::toJsonValue<QString>(m_checksum);
	}
		
	return result;
}

QString InstallationInfo::guid() const { return m_guid; }

void InstallationInfo::setGuid(QString newGuid) {
	m_guid = newGuid;
}

QString InstallationInfo::name() const { return m_name; }

void InstallationInfo::setName(QString newName) {
	m_name = newName;
}
bool InstallationInfo::nameNull() const {
	return m_name.isNull();
}

void InstallationInfo::setNameNull() {
	m_name.clear();

}
QSharedPointer<Version> InstallationInfo::version() const { return m_version; }

void InstallationInfo::setVersion(QSharedPointer<Version> newVersion) {
	m_version = newVersion;
}

QString InstallationInfo::changelog() const { return m_changelog; }

void InstallationInfo::setChangelog(QString newChangelog) {
	m_changelog = newChangelog;
}
bool InstallationInfo::changelogNull() const {
	return m_changelog.isNull();
}

void InstallationInfo::setChangelogNull() {
	m_changelog.clear();

}
QString InstallationInfo::sourceUrl() const { return m_sourceUrl; }

void InstallationInfo::setSourceUrl(QString newSourceUrl) {
	m_sourceUrl = newSourceUrl;
}
bool InstallationInfo::sourceUrlNull() const {
	return m_sourceUrl.isNull();
}

void InstallationInfo::setSourceUrlNull() {
	m_sourceUrl.clear();

}
QString InstallationInfo::checksum() const { return m_checksum; }

void InstallationInfo::setChecksum(QString newChecksum) {
	m_checksum = newChecksum;
}
bool InstallationInfo::checksumNull() const {
	return m_checksum.isNull();
}

void InstallationInfo::setChecksumNull() {
	m_checksum.clear();

}

} // NS DTO

namespace Support {

using InstallationInfo = Jellyfin::DTO::InstallationInfo;

template <>
InstallationInfo fromJsonValue(const QJsonValue &source, convertType<InstallationInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return InstallationInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const InstallationInfo &source, convertType<InstallationInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
