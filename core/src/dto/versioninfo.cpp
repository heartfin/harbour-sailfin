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

#include <JellyfinQt/dto/versioninfo.h>

namespace Jellyfin {
namespace DTO {

VersionInfo::VersionInfo() {}

VersionInfo::VersionInfo(const VersionInfo &other) :

	m_version(other.m_version),
	m_versionNumber(other.m_versionNumber),
	m_changelog(other.m_changelog),
	m_targetAbi(other.m_targetAbi),
	m_sourceUrl(other.m_sourceUrl),
	m_checksum(other.m_checksum),
	m_timestamp(other.m_timestamp),
	m_repositoryName(other.m_repositoryName),
	m_repositoryUrl(other.m_repositoryUrl){}


void VersionInfo::replaceData(VersionInfo &other) {
	m_version = other.m_version;
	m_versionNumber = other.m_versionNumber;
	m_changelog = other.m_changelog;
	m_targetAbi = other.m_targetAbi;
	m_sourceUrl = other.m_sourceUrl;
	m_checksum = other.m_checksum;
	m_timestamp = other.m_timestamp;
	m_repositoryName = other.m_repositoryName;
	m_repositoryUrl = other.m_repositoryUrl;
}

VersionInfo VersionInfo::fromJson(QJsonObject source) {
	VersionInfo instance;
	instance.setFromJson(source);
	return instance;
}


void VersionInfo::setFromJson(QJsonObject source) {
	m_version = Jellyfin::Support::fromJsonValue<QString>(source["version"]);
	m_versionNumber = Jellyfin::Support::fromJsonValue<QSharedPointer<Version>>(source["VersionNumber"]);
	m_changelog = Jellyfin::Support::fromJsonValue<QString>(source["changelog"]);
	m_targetAbi = Jellyfin::Support::fromJsonValue<QString>(source["targetAbi"]);
	m_sourceUrl = Jellyfin::Support::fromJsonValue<QString>(source["sourceUrl"]);
	m_checksum = Jellyfin::Support::fromJsonValue<QString>(source["checksum"]);
	m_timestamp = Jellyfin::Support::fromJsonValue<QString>(source["timestamp"]);
	m_repositoryName = Jellyfin::Support::fromJsonValue<QString>(source["repositoryName"]);
	m_repositoryUrl = Jellyfin::Support::fromJsonValue<QString>(source["repositoryUrl"]);

}
	
QJsonObject VersionInfo::toJson() {
	QJsonObject result;
	result["version"] = Jellyfin::Support::toJsonValue<QString>(m_version);
	result["VersionNumber"] = Jellyfin::Support::toJsonValue<QSharedPointer<Version>>(m_versionNumber);
	result["changelog"] = Jellyfin::Support::toJsonValue<QString>(m_changelog);
	result["targetAbi"] = Jellyfin::Support::toJsonValue<QString>(m_targetAbi);
	result["sourceUrl"] = Jellyfin::Support::toJsonValue<QString>(m_sourceUrl);
	result["checksum"] = Jellyfin::Support::toJsonValue<QString>(m_checksum);
	result["timestamp"] = Jellyfin::Support::toJsonValue<QString>(m_timestamp);
	result["repositoryName"] = Jellyfin::Support::toJsonValue<QString>(m_repositoryName);
	result["repositoryUrl"] = Jellyfin::Support::toJsonValue<QString>(m_repositoryUrl);

	return result;
}

QString VersionInfo::version() const { return m_version; }

void VersionInfo::setVersion(QString newVersion) {
	m_version = newVersion;
}
bool VersionInfo::versionNull() const {
	return m_version.isNull();
}

void VersionInfo::setVersionNull() {
	m_version.clear();

}
QSharedPointer<Version> VersionInfo::versionNumber() const { return m_versionNumber; }

void VersionInfo::setVersionNumber(QSharedPointer<Version> newVersionNumber) {
	m_versionNumber = newVersionNumber;
}

QString VersionInfo::changelog() const { return m_changelog; }

void VersionInfo::setChangelog(QString newChangelog) {
	m_changelog = newChangelog;
}
bool VersionInfo::changelogNull() const {
	return m_changelog.isNull();
}

void VersionInfo::setChangelogNull() {
	m_changelog.clear();

}
QString VersionInfo::targetAbi() const { return m_targetAbi; }

void VersionInfo::setTargetAbi(QString newTargetAbi) {
	m_targetAbi = newTargetAbi;
}
bool VersionInfo::targetAbiNull() const {
	return m_targetAbi.isNull();
}

void VersionInfo::setTargetAbiNull() {
	m_targetAbi.clear();

}
QString VersionInfo::sourceUrl() const { return m_sourceUrl; }

void VersionInfo::setSourceUrl(QString newSourceUrl) {
	m_sourceUrl = newSourceUrl;
}
bool VersionInfo::sourceUrlNull() const {
	return m_sourceUrl.isNull();
}

void VersionInfo::setSourceUrlNull() {
	m_sourceUrl.clear();

}
QString VersionInfo::checksum() const { return m_checksum; }

void VersionInfo::setChecksum(QString newChecksum) {
	m_checksum = newChecksum;
}
bool VersionInfo::checksumNull() const {
	return m_checksum.isNull();
}

void VersionInfo::setChecksumNull() {
	m_checksum.clear();

}
QString VersionInfo::timestamp() const { return m_timestamp; }

void VersionInfo::setTimestamp(QString newTimestamp) {
	m_timestamp = newTimestamp;
}
bool VersionInfo::timestampNull() const {
	return m_timestamp.isNull();
}

void VersionInfo::setTimestampNull() {
	m_timestamp.clear();

}
QString VersionInfo::repositoryName() const { return m_repositoryName; }

void VersionInfo::setRepositoryName(QString newRepositoryName) {
	m_repositoryName = newRepositoryName;
}
bool VersionInfo::repositoryNameNull() const {
	return m_repositoryName.isNull();
}

void VersionInfo::setRepositoryNameNull() {
	m_repositoryName.clear();

}
QString VersionInfo::repositoryUrl() const { return m_repositoryUrl; }

void VersionInfo::setRepositoryUrl(QString newRepositoryUrl) {
	m_repositoryUrl = newRepositoryUrl;
}
bool VersionInfo::repositoryUrlNull() const {
	return m_repositoryUrl.isNull();
}

void VersionInfo::setRepositoryUrlNull() {
	m_repositoryUrl.clear();

}

} // NS DTO

namespace Support {

using VersionInfo = Jellyfin::DTO::VersionInfo;

template <>
VersionInfo fromJsonValue<VersionInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return VersionInfo::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
