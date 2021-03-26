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

#include <JellyfinQt/dto/packageinfo.h>

namespace Jellyfin {
namespace DTO {

PackageInfo::PackageInfo() {}

PackageInfo::PackageInfo(const PackageInfo &other) :

	m_name(other.m_name),
	m_description(other.m_description),
	m_overview(other.m_overview),
	m_owner(other.m_owner),
	m_category(other.m_category),
	m_guid(other.m_guid),
	m_versions(other.m_versions),
	m_imageUrl(other.m_imageUrl){}


void PackageInfo::replaceData(PackageInfo &other) {
	m_name = other.m_name;
	m_description = other.m_description;
	m_overview = other.m_overview;
	m_owner = other.m_owner;
	m_category = other.m_category;
	m_guid = other.m_guid;
	m_versions = other.m_versions;
	m_imageUrl = other.m_imageUrl;
}

PackageInfo PackageInfo::fromJson(QJsonObject source) {
	PackageInfo instance;
	instance.setFromJson(source);
	return instance;
}


void PackageInfo::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["name"]);
	m_description = Jellyfin::Support::fromJsonValue<QString>(source["description"]);
	m_overview = Jellyfin::Support::fromJsonValue<QString>(source["overview"]);
	m_owner = Jellyfin::Support::fromJsonValue<QString>(source["owner"]);
	m_category = Jellyfin::Support::fromJsonValue<QString>(source["category"]);
	m_guid = Jellyfin::Support::fromJsonValue<QString>(source["guid"]);
	m_versions = Jellyfin::Support::fromJsonValue<QList<VersionInfo>>(source["versions"]);
	m_imageUrl = Jellyfin::Support::fromJsonValue<QString>(source["imageUrl"]);

}
	
QJsonObject PackageInfo::toJson() {
	QJsonObject result;
	result["name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["description"] = Jellyfin::Support::toJsonValue<QString>(m_description);
	result["overview"] = Jellyfin::Support::toJsonValue<QString>(m_overview);
	result["owner"] = Jellyfin::Support::toJsonValue<QString>(m_owner);
	result["category"] = Jellyfin::Support::toJsonValue<QString>(m_category);
	result["guid"] = Jellyfin::Support::toJsonValue<QString>(m_guid);
	result["versions"] = Jellyfin::Support::toJsonValue<QList<VersionInfo>>(m_versions);
	result["imageUrl"] = Jellyfin::Support::toJsonValue<QString>(m_imageUrl);

	return result;
}

QString PackageInfo::name() const { return m_name; }

void PackageInfo::setName(QString newName) {
	m_name = newName;
}
bool PackageInfo::nameNull() const {
	return m_name.isNull();
}

void PackageInfo::setNameNull() {
	m_name.clear();

}
QString PackageInfo::description() const { return m_description; }

void PackageInfo::setDescription(QString newDescription) {
	m_description = newDescription;
}
bool PackageInfo::descriptionNull() const {
	return m_description.isNull();
}

void PackageInfo::setDescriptionNull() {
	m_description.clear();

}
QString PackageInfo::overview() const { return m_overview; }

void PackageInfo::setOverview(QString newOverview) {
	m_overview = newOverview;
}
bool PackageInfo::overviewNull() const {
	return m_overview.isNull();
}

void PackageInfo::setOverviewNull() {
	m_overview.clear();

}
QString PackageInfo::owner() const { return m_owner; }

void PackageInfo::setOwner(QString newOwner) {
	m_owner = newOwner;
}
bool PackageInfo::ownerNull() const {
	return m_owner.isNull();
}

void PackageInfo::setOwnerNull() {
	m_owner.clear();

}
QString PackageInfo::category() const { return m_category; }

void PackageInfo::setCategory(QString newCategory) {
	m_category = newCategory;
}
bool PackageInfo::categoryNull() const {
	return m_category.isNull();
}

void PackageInfo::setCategoryNull() {
	m_category.clear();

}
QString PackageInfo::guid() const { return m_guid; }

void PackageInfo::setGuid(QString newGuid) {
	m_guid = newGuid;
}
bool PackageInfo::guidNull() const {
	return m_guid.isNull();
}

void PackageInfo::setGuidNull() {
	m_guid.clear();

}
QList<VersionInfo> PackageInfo::versions() const { return m_versions; }

void PackageInfo::setVersions(QList<VersionInfo> newVersions) {
	m_versions = newVersions;
}
bool PackageInfo::versionsNull() const {
	return m_versions.size() == 0;
}

void PackageInfo::setVersionsNull() {
	m_versions.clear();

}
QString PackageInfo::imageUrl() const { return m_imageUrl; }

void PackageInfo::setImageUrl(QString newImageUrl) {
	m_imageUrl = newImageUrl;
}
bool PackageInfo::imageUrlNull() const {
	return m_imageUrl.isNull();
}

void PackageInfo::setImageUrlNull() {
	m_imageUrl.clear();

}

} // NS DTO

namespace Support {

using PackageInfo = Jellyfin::DTO::PackageInfo;

template <>
PackageInfo fromJsonValue<PackageInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return PackageInfo::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
