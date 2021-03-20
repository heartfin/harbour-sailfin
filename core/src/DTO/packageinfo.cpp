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

PackageInfo::PackageInfo(QObject *parent) {}

PackageInfo PackageInfo::fromJson(QJsonObject source) {PackageInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void PackageInfo::setFromJson(QJsonObject source) {
	m_name = fromJsonValue<QString>(source["name"]);
	m_description = fromJsonValue<QString>(source["description"]);
	m_overview = fromJsonValue<QString>(source["overview"]);
	m_owner = fromJsonValue<QString>(source["owner"]);
	m_category = fromJsonValue<QString>(source["category"]);
	m_guid = fromJsonValue<QString>(source["guid"]);
	m_versions = fromJsonValue<QList<QSharedPointer<VersionInfo>>>(source["versions"]);
	m_imageUrl = fromJsonValue<QString>(source["imageUrl"]);

}
	
QJsonObject PackageInfo::toJson() {
	QJsonObject result;
	result["name"] = toJsonValue<QString>(m_name);
	result["description"] = toJsonValue<QString>(m_description);
	result["overview"] = toJsonValue<QString>(m_overview);
	result["owner"] = toJsonValue<QString>(m_owner);
	result["category"] = toJsonValue<QString>(m_category);
	result["guid"] = toJsonValue<QString>(m_guid);
	result["versions"] = toJsonValue<QList<QSharedPointer<VersionInfo>>>(m_versions);
	result["imageUrl"] = toJsonValue<QString>(m_imageUrl);

	return result;
}

QString PackageInfo::name() const { return m_name; }

void PackageInfo::setName(QString newName) {
	m_name = newName;
}
QString PackageInfo::description() const { return m_description; }

void PackageInfo::setDescription(QString newDescription) {
	m_description = newDescription;
}
QString PackageInfo::overview() const { return m_overview; }

void PackageInfo::setOverview(QString newOverview) {
	m_overview = newOverview;
}
QString PackageInfo::owner() const { return m_owner; }

void PackageInfo::setOwner(QString newOwner) {
	m_owner = newOwner;
}
QString PackageInfo::category() const { return m_category; }

void PackageInfo::setCategory(QString newCategory) {
	m_category = newCategory;
}
QString PackageInfo::guid() const { return m_guid; }

void PackageInfo::setGuid(QString newGuid) {
	m_guid = newGuid;
}
QList<QSharedPointer<VersionInfo>> PackageInfo::versions() const { return m_versions; }

void PackageInfo::setVersions(QList<QSharedPointer<VersionInfo>> newVersions) {
	m_versions = newVersions;
}
QString PackageInfo::imageUrl() const { return m_imageUrl; }

void PackageInfo::setImageUrl(QString newImageUrl) {
	m_imageUrl = newImageUrl;
}


} // NS Jellyfin
} // NS DTO
