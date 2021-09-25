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

#include <JellyfinQt/dto/virtualfolderinfo.h>

namespace Jellyfin {
namespace DTO {

VirtualFolderInfo::VirtualFolderInfo() {}
VirtualFolderInfo::VirtualFolderInfo (
		QSharedPointer<LibraryOptions> libraryOptions 
		) :
	m_libraryOptions(libraryOptions) { }



VirtualFolderInfo::VirtualFolderInfo(const VirtualFolderInfo &other) :

	m_name(other.m_name),
	m_locations(other.m_locations),
	m_collectionType(other.m_collectionType),
	m_libraryOptions(other.m_libraryOptions),
	m_itemId(other.m_itemId),
	m_primaryImageItemId(other.m_primaryImageItemId),
	m_refreshProgress(other.m_refreshProgress),
	m_refreshStatus(other.m_refreshStatus){}


void VirtualFolderInfo::replaceData(VirtualFolderInfo &other) {
	m_name = other.m_name;
	m_locations = other.m_locations;
	m_collectionType = other.m_collectionType;
	m_libraryOptions = other.m_libraryOptions;
	m_itemId = other.m_itemId;
	m_primaryImageItemId = other.m_primaryImageItemId;
	m_refreshProgress = other.m_refreshProgress;
	m_refreshStatus = other.m_refreshStatus;
}

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
	m_refreshProgress = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["RefreshProgress"]);
	m_refreshStatus = Jellyfin::Support::fromJsonValue<QString>(source["RefreshStatus"]);

}
	
QJsonObject VirtualFolderInfo::toJson() const {
	QJsonObject result;
	
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	
	if (!(m_locations.size() == 0)) {
		result["Locations"] = Jellyfin::Support::toJsonValue<QStringList>(m_locations);
	}
			
	
	if (!(m_collectionType.isNull())) {
		result["CollectionType"] = Jellyfin::Support::toJsonValue<QString>(m_collectionType);
	}
			
	result["LibraryOptions"] = Jellyfin::Support::toJsonValue<QSharedPointer<LibraryOptions>>(m_libraryOptions);		
	
	if (!(m_itemId.isNull())) {
		result["ItemId"] = Jellyfin::Support::toJsonValue<QString>(m_itemId);
	}
			
	
	if (!(m_primaryImageItemId.isNull())) {
		result["PrimaryImageItemId"] = Jellyfin::Support::toJsonValue<QString>(m_primaryImageItemId);
	}
			
	
	if (!(!m_refreshProgress.has_value())) {
		result["RefreshProgress"] = Jellyfin::Support::toJsonValue<std::optional<double>>(m_refreshProgress);
	}
			
	
	if (!(m_refreshStatus.isNull())) {
		result["RefreshStatus"] = Jellyfin::Support::toJsonValue<QString>(m_refreshStatus);
	}
		
	return result;
}

QString VirtualFolderInfo::name() const { return m_name; }

void VirtualFolderInfo::setName(QString newName) {
	m_name = newName;
}
bool VirtualFolderInfo::nameNull() const {
	return m_name.isNull();
}

void VirtualFolderInfo::setNameNull() {
	m_name.clear();

}
QStringList VirtualFolderInfo::locations() const { return m_locations; }

void VirtualFolderInfo::setLocations(QStringList newLocations) {
	m_locations = newLocations;
}
bool VirtualFolderInfo::locationsNull() const {
	return m_locations.size() == 0;
}

void VirtualFolderInfo::setLocationsNull() {
	m_locations.clear();

}
QString VirtualFolderInfo::collectionType() const { return m_collectionType; }

void VirtualFolderInfo::setCollectionType(QString newCollectionType) {
	m_collectionType = newCollectionType;
}
bool VirtualFolderInfo::collectionTypeNull() const {
	return m_collectionType.isNull();
}

void VirtualFolderInfo::setCollectionTypeNull() {
	m_collectionType.clear();

}
QSharedPointer<LibraryOptions> VirtualFolderInfo::libraryOptions() const { return m_libraryOptions; }

void VirtualFolderInfo::setLibraryOptions(QSharedPointer<LibraryOptions> newLibraryOptions) {
	m_libraryOptions = newLibraryOptions;
}

QString VirtualFolderInfo::itemId() const { return m_itemId; }

void VirtualFolderInfo::setItemId(QString newItemId) {
	m_itemId = newItemId;
}
bool VirtualFolderInfo::itemIdNull() const {
	return m_itemId.isNull();
}

void VirtualFolderInfo::setItemIdNull() {
	m_itemId.clear();

}
QString VirtualFolderInfo::primaryImageItemId() const { return m_primaryImageItemId; }

void VirtualFolderInfo::setPrimaryImageItemId(QString newPrimaryImageItemId) {
	m_primaryImageItemId = newPrimaryImageItemId;
}
bool VirtualFolderInfo::primaryImageItemIdNull() const {
	return m_primaryImageItemId.isNull();
}

void VirtualFolderInfo::setPrimaryImageItemIdNull() {
	m_primaryImageItemId.clear();

}
std::optional<double> VirtualFolderInfo::refreshProgress() const { return m_refreshProgress; }

void VirtualFolderInfo::setRefreshProgress(std::optional<double> newRefreshProgress) {
	m_refreshProgress = newRefreshProgress;
}
bool VirtualFolderInfo::refreshProgressNull() const {
	return !m_refreshProgress.has_value();
}

void VirtualFolderInfo::setRefreshProgressNull() {
	m_refreshProgress = std::nullopt;

}
QString VirtualFolderInfo::refreshStatus() const { return m_refreshStatus; }

void VirtualFolderInfo::setRefreshStatus(QString newRefreshStatus) {
	m_refreshStatus = newRefreshStatus;
}
bool VirtualFolderInfo::refreshStatusNull() const {
	return m_refreshStatus.isNull();
}

void VirtualFolderInfo::setRefreshStatusNull() {
	m_refreshStatus.clear();

}

} // NS DTO

namespace Support {

using VirtualFolderInfo = Jellyfin::DTO::VirtualFolderInfo;

template <>
VirtualFolderInfo fromJsonValue(const QJsonValue &source, convertType<VirtualFolderInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return VirtualFolderInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const VirtualFolderInfo &source, convertType<VirtualFolderInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
