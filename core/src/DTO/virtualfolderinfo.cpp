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

#include <JellyfinQt/DTO/virtualfolderinfo.h>

namespace Jellyfin {
namespace DTO {

VirtualFolderInfo::VirtualFolderInfo() {}

VirtualFolderInfo VirtualFolderInfo::fromJson(QJsonObject source) {
	VirtualFolderInfo instance;
	instance.setFromJson(source);
	return instance;
}


void VirtualFolderInfo::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_locations = Jellyfin::Support::fromJsonValue<QStringList>(source["Locations"]);
	m_collectionType = Jellyfin::Support::fromJsonValue<QString>(source["CollectionType"]);
	m_libraryOptions = Jellyfin::Support::fromJsonValue<QSharedPointer<LibraryOptions>>(source["LibraryOptions"]);
	m_itemId = Jellyfin::Support::fromJsonValue<QString>(source["ItemId"]);
	m_primaryImageItemId = Jellyfin::Support::fromJsonValue<QString>(source["PrimaryImageItemId"]);
	m_refreshProgress = Jellyfin::Support::fromJsonValue<double>(source["RefreshProgress"]);
	m_refreshStatus = Jellyfin::Support::fromJsonValue<QString>(source["RefreshStatus"]);

}
	
QJsonObject VirtualFolderInfo::toJson() {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["Locations"] = Jellyfin::Support::toJsonValue<QStringList>(m_locations);
	result["CollectionType"] = Jellyfin::Support::toJsonValue<QString>(m_collectionType);
	result["LibraryOptions"] = Jellyfin::Support::toJsonValue<QSharedPointer<LibraryOptions>>(m_libraryOptions);
	result["ItemId"] = Jellyfin::Support::toJsonValue<QString>(m_itemId);
	result["PrimaryImageItemId"] = Jellyfin::Support::toJsonValue<QString>(m_primaryImageItemId);
	result["RefreshProgress"] = Jellyfin::Support::toJsonValue<double>(m_refreshProgress);
	result["RefreshStatus"] = Jellyfin::Support::toJsonValue<QString>(m_refreshStatus);

	return result;
}

QString VirtualFolderInfo::name() const { return m_name; }

void VirtualFolderInfo::setName(QString newName) {
	m_name = newName;
}
QStringList VirtualFolderInfo::locations() const { return m_locations; }

void VirtualFolderInfo::setLocations(QStringList newLocations) {
	m_locations = newLocations;
}
QString VirtualFolderInfo::collectionType() const { return m_collectionType; }

void VirtualFolderInfo::setCollectionType(QString newCollectionType) {
	m_collectionType = newCollectionType;
}
QSharedPointer<LibraryOptions> VirtualFolderInfo::libraryOptions() const { return m_libraryOptions; }

void VirtualFolderInfo::setLibraryOptions(QSharedPointer<LibraryOptions> newLibraryOptions) {
	m_libraryOptions = newLibraryOptions;
}
QString VirtualFolderInfo::itemId() const { return m_itemId; }

void VirtualFolderInfo::setItemId(QString newItemId) {
	m_itemId = newItemId;
}
QString VirtualFolderInfo::primaryImageItemId() const { return m_primaryImageItemId; }

void VirtualFolderInfo::setPrimaryImageItemId(QString newPrimaryImageItemId) {
	m_primaryImageItemId = newPrimaryImageItemId;
}
double VirtualFolderInfo::refreshProgress() const { return m_refreshProgress; }

void VirtualFolderInfo::setRefreshProgress(double newRefreshProgress) {
	m_refreshProgress = newRefreshProgress;
}
QString VirtualFolderInfo::refreshStatus() const { return m_refreshStatus; }

void VirtualFolderInfo::setRefreshStatus(QString newRefreshStatus) {
	m_refreshStatus = newRefreshStatus;
}

} // NS DTO

namespace Support {

using VirtualFolderInfo = Jellyfin::DTO::VirtualFolderInfo;

template <>
VirtualFolderInfo fromJsonValue<VirtualFolderInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return VirtualFolderInfo::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO
