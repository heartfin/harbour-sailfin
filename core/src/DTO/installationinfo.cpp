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

#include <JellyfinQt/DTO/installationinfo.h>

namespace Jellyfin {
namespace DTO {

InstallationInfo::InstallationInfo(QObject *parent) : QObject(parent) {}

InstallationInfo *InstallationInfo::fromJSON(QJsonObject source, QObject *parent) {
	InstallationInfo *instance = new InstallationInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void InstallationInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject InstallationInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString InstallationInfo::guid() const { return m_guid; }
void InstallationInfo::setGuid(QString newGuid) {
	m_guid = newGuid;
	emit guidChanged(newGuid);
}

QString InstallationInfo::name() const { return m_name; }
void InstallationInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

Version * InstallationInfo::version() const { return m_version; }
void InstallationInfo::setVersion(Version * newVersion) {
	m_version = newVersion;
	emit versionChanged(newVersion);
}

QString InstallationInfo::changelog() const { return m_changelog; }
void InstallationInfo::setChangelog(QString newChangelog) {
	m_changelog = newChangelog;
	emit changelogChanged(newChangelog);
}

QString InstallationInfo::sourceUrl() const { return m_sourceUrl; }
void InstallationInfo::setSourceUrl(QString newSourceUrl) {
	m_sourceUrl = newSourceUrl;
	emit sourceUrlChanged(newSourceUrl);
}

QString InstallationInfo::checksum() const { return m_checksum; }
void InstallationInfo::setChecksum(QString newChecksum) {
	m_checksum = newChecksum;
	emit checksumChanged(newChecksum);
}


} // NS Jellyfin
} // NS DTO
