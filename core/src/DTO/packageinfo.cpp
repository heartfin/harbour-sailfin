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

#include <JellyfinQt/DTO/packageinfo.h>

namespace Jellyfin {
namespace DTO {

PackageInfo::PackageInfo(QObject *parent) : QObject(parent) {}

PackageInfo *PackageInfo::fromJSON(QJsonObject source, QObject *parent) {
	PackageInfo *instance = new PackageInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void PackageInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject PackageInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString PackageInfo::name() const { return m_name; }
void PackageInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString PackageInfo::description() const { return m_description; }
void PackageInfo::setDescription(QString newDescription) {
	m_description = newDescription;
	emit descriptionChanged(newDescription);
}

QString PackageInfo::overview() const { return m_overview; }
void PackageInfo::setOverview(QString newOverview) {
	m_overview = newOverview;
	emit overviewChanged(newOverview);
}

QString PackageInfo::owner() const { return m_owner; }
void PackageInfo::setOwner(QString newOwner) {
	m_owner = newOwner;
	emit ownerChanged(newOwner);
}

QString PackageInfo::category() const { return m_category; }
void PackageInfo::setCategory(QString newCategory) {
	m_category = newCategory;
	emit categoryChanged(newCategory);
}

QString PackageInfo::guid() const { return m_guid; }
void PackageInfo::setGuid(QString newGuid) {
	m_guid = newGuid;
	emit guidChanged(newGuid);
}

QList<VersionInfo *> PackageInfo::versions() const { return m_versions; }
void PackageInfo::setVersions(QList<VersionInfo *> newVersions) {
	m_versions = newVersions;
	emit versionsChanged(newVersions);
}

QString PackageInfo::imageUrl() const { return m_imageUrl; }
void PackageInfo::setImageUrl(QString newImageUrl) {
	m_imageUrl = newImageUrl;
	emit imageUrlChanged(newImageUrl);
}


} // NS Jellyfin
} // NS DTO
