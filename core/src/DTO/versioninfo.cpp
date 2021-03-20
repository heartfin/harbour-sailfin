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

#include <JellyfinQt/DTO/versioninfo.h>

namespace Jellyfin {
namespace DTO {

VersionInfo::VersionInfo(QObject *parent) {}

VersionInfo VersionInfo::fromJson(QJsonObject source) {VersionInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void VersionInfo::setFromJson(QJsonObject source) {
	m_version = fromJsonValue<QString>(source["version"]);
	m_versionNumber = fromJsonValue<QSharedPointer<Version>>(source["VersionNumber"]);
	m_changelog = fromJsonValue<QString>(source["changelog"]);
	m_targetAbi = fromJsonValue<QString>(source["targetAbi"]);
	m_sourceUrl = fromJsonValue<QString>(source["sourceUrl"]);
	m_checksum = fromJsonValue<QString>(source["checksum"]);
	m_timestamp = fromJsonValue<QString>(source["timestamp"]);
	m_repositoryName = fromJsonValue<QString>(source["repositoryName"]);
	m_repositoryUrl = fromJsonValue<QString>(source["repositoryUrl"]);

}
	
QJsonObject VersionInfo::toJson() {
	QJsonObject result;
	result["version"] = toJsonValue<QString>(m_version);
	result["VersionNumber"] = toJsonValue<QSharedPointer<Version>>(m_versionNumber);
	result["changelog"] = toJsonValue<QString>(m_changelog);
	result["targetAbi"] = toJsonValue<QString>(m_targetAbi);
	result["sourceUrl"] = toJsonValue<QString>(m_sourceUrl);
	result["checksum"] = toJsonValue<QString>(m_checksum);
	result["timestamp"] = toJsonValue<QString>(m_timestamp);
	result["repositoryName"] = toJsonValue<QString>(m_repositoryName);
	result["repositoryUrl"] = toJsonValue<QString>(m_repositoryUrl);

	return result;
}

QString VersionInfo::version() const { return m_version; }

void VersionInfo::setVersion(QString newVersion) {
	m_version = newVersion;
}
QSharedPointer<Version> VersionInfo::versionNumber() const { return m_versionNumber; }

void VersionInfo::setVersionNumber(QSharedPointer<Version> newVersionNumber) {
	m_versionNumber = newVersionNumber;
}
QString VersionInfo::changelog() const { return m_changelog; }

void VersionInfo::setChangelog(QString newChangelog) {
	m_changelog = newChangelog;
}
QString VersionInfo::targetAbi() const { return m_targetAbi; }

void VersionInfo::setTargetAbi(QString newTargetAbi) {
	m_targetAbi = newTargetAbi;
}
QString VersionInfo::sourceUrl() const { return m_sourceUrl; }

void VersionInfo::setSourceUrl(QString newSourceUrl) {
	m_sourceUrl = newSourceUrl;
}
QString VersionInfo::checksum() const { return m_checksum; }

void VersionInfo::setChecksum(QString newChecksum) {
	m_checksum = newChecksum;
}
QString VersionInfo::timestamp() const { return m_timestamp; }

void VersionInfo::setTimestamp(QString newTimestamp) {
	m_timestamp = newTimestamp;
}
QString VersionInfo::repositoryName() const { return m_repositoryName; }

void VersionInfo::setRepositoryName(QString newRepositoryName) {
	m_repositoryName = newRepositoryName;
}
QString VersionInfo::repositoryUrl() const { return m_repositoryUrl; }

void VersionInfo::setRepositoryUrl(QString newRepositoryUrl) {
	m_repositoryUrl = newRepositoryUrl;
}


} // NS Jellyfin
} // NS DTO
