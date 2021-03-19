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

VersionInfo::VersionInfo(QObject *parent) : QObject(parent) {}

VersionInfo *VersionInfo::fromJSON(QJsonObject source, QObject *parent) {
	VersionInfo *instance = new VersionInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void VersionInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject VersionInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString VersionInfo::version() const { return m_version; }
void VersionInfo::setVersion(QString newVersion) {
	m_version = newVersion;
	emit versionChanged(newVersion);
}

Version * VersionInfo::versionNumber() const { return m_versionNumber; }
void VersionInfo::setVersionNumber(Version * newVersionNumber) {
	m_versionNumber = newVersionNumber;
	emit versionNumberChanged(newVersionNumber);
}

QString VersionInfo::changelog() const { return m_changelog; }
void VersionInfo::setChangelog(QString newChangelog) {
	m_changelog = newChangelog;
	emit changelogChanged(newChangelog);
}

QString VersionInfo::targetAbi() const { return m_targetAbi; }
void VersionInfo::setTargetAbi(QString newTargetAbi) {
	m_targetAbi = newTargetAbi;
	emit targetAbiChanged(newTargetAbi);
}

QString VersionInfo::sourceUrl() const { return m_sourceUrl; }
void VersionInfo::setSourceUrl(QString newSourceUrl) {
	m_sourceUrl = newSourceUrl;
	emit sourceUrlChanged(newSourceUrl);
}

QString VersionInfo::checksum() const { return m_checksum; }
void VersionInfo::setChecksum(QString newChecksum) {
	m_checksum = newChecksum;
	emit checksumChanged(newChecksum);
}

QString VersionInfo::timestamp() const { return m_timestamp; }
void VersionInfo::setTimestamp(QString newTimestamp) {
	m_timestamp = newTimestamp;
	emit timestampChanged(newTimestamp);
}

QString VersionInfo::repositoryName() const { return m_repositoryName; }
void VersionInfo::setRepositoryName(QString newRepositoryName) {
	m_repositoryName = newRepositoryName;
	emit repositoryNameChanged(newRepositoryName);
}

QString VersionInfo::repositoryUrl() const { return m_repositoryUrl; }
void VersionInfo::setRepositoryUrl(QString newRepositoryUrl) {
	m_repositoryUrl = newRepositoryUrl;
	emit repositoryUrlChanged(newRepositoryUrl);
}


} // NS Jellyfin
} // NS DTO
