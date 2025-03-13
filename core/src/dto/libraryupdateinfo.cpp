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

#include <JellyfinQt/dto/libraryupdateinfo.h>

namespace Jellyfin {
namespace DTO {

LibraryUpdateInfo::LibraryUpdateInfo() {}
LibraryUpdateInfo::LibraryUpdateInfo (
		QStringList foldersAddedTo, 
		QStringList foldersRemovedFrom, 
		QStringList itemsAdded, 
		QStringList itemsRemoved, 
		QStringList itemsUpdated, 
		QStringList collectionFolders, 
		bool isEmpty 
		) :
	m_foldersAddedTo(foldersAddedTo),
	m_foldersRemovedFrom(foldersRemovedFrom),
	m_itemsAdded(itemsAdded),
	m_itemsRemoved(itemsRemoved),
	m_itemsUpdated(itemsUpdated),
	m_collectionFolders(collectionFolders),
	m_isEmpty(isEmpty) { }



LibraryUpdateInfo::LibraryUpdateInfo(const LibraryUpdateInfo &other) :

	m_foldersAddedTo(other.m_foldersAddedTo),
	m_foldersRemovedFrom(other.m_foldersRemovedFrom),
	m_itemsAdded(other.m_itemsAdded),
	m_itemsRemoved(other.m_itemsRemoved),
	m_itemsUpdated(other.m_itemsUpdated),
	m_collectionFolders(other.m_collectionFolders),
	m_isEmpty(other.m_isEmpty){}


void LibraryUpdateInfo::replaceData(LibraryUpdateInfo &other) {
	m_foldersAddedTo = other.m_foldersAddedTo;
	m_foldersRemovedFrom = other.m_foldersRemovedFrom;
	m_itemsAdded = other.m_itemsAdded;
	m_itemsRemoved = other.m_itemsRemoved;
	m_itemsUpdated = other.m_itemsUpdated;
	m_collectionFolders = other.m_collectionFolders;
	m_isEmpty = other.m_isEmpty;
}

LibraryUpdateInfo LibraryUpdateInfo::fromJson(QJsonObject source) {
	LibraryUpdateInfo instance;
	instance.setFromJson(source);
	return instance;
}


void LibraryUpdateInfo::setFromJson(QJsonObject source) {
	m_foldersAddedTo = Jellyfin::Support::fromJsonValue<QStringList>(source["FoldersAddedTo"]);
	m_foldersRemovedFrom = Jellyfin::Support::fromJsonValue<QStringList>(source["FoldersRemovedFrom"]);
	m_itemsAdded = Jellyfin::Support::fromJsonValue<QStringList>(source["ItemsAdded"]);
	m_itemsRemoved = Jellyfin::Support::fromJsonValue<QStringList>(source["ItemsRemoved"]);
	m_itemsUpdated = Jellyfin::Support::fromJsonValue<QStringList>(source["ItemsUpdated"]);
	m_collectionFolders = Jellyfin::Support::fromJsonValue<QStringList>(source["CollectionFolders"]);
	m_isEmpty = Jellyfin::Support::fromJsonValue<bool>(source["IsEmpty"]);

}
	
QJsonObject LibraryUpdateInfo::toJson() const {
	QJsonObject result;
	
	result["FoldersAddedTo"] = Jellyfin::Support::toJsonValue<QStringList>(m_foldersAddedTo);		
	result["FoldersRemovedFrom"] = Jellyfin::Support::toJsonValue<QStringList>(m_foldersRemovedFrom);		
	result["ItemsAdded"] = Jellyfin::Support::toJsonValue<QStringList>(m_itemsAdded);		
	result["ItemsRemoved"] = Jellyfin::Support::toJsonValue<QStringList>(m_itemsRemoved);		
	result["ItemsUpdated"] = Jellyfin::Support::toJsonValue<QStringList>(m_itemsUpdated);		
	result["CollectionFolders"] = Jellyfin::Support::toJsonValue<QStringList>(m_collectionFolders);		
	result["IsEmpty"] = Jellyfin::Support::toJsonValue<bool>(m_isEmpty);	
	return result;
}

QStringList LibraryUpdateInfo::foldersAddedTo() const { return m_foldersAddedTo; }

void LibraryUpdateInfo::setFoldersAddedTo(QStringList newFoldersAddedTo) {
	m_foldersAddedTo = newFoldersAddedTo;
}

QStringList LibraryUpdateInfo::foldersRemovedFrom() const { return m_foldersRemovedFrom; }

void LibraryUpdateInfo::setFoldersRemovedFrom(QStringList newFoldersRemovedFrom) {
	m_foldersRemovedFrom = newFoldersRemovedFrom;
}

QStringList LibraryUpdateInfo::itemsAdded() const { return m_itemsAdded; }

void LibraryUpdateInfo::setItemsAdded(QStringList newItemsAdded) {
	m_itemsAdded = newItemsAdded;
}

QStringList LibraryUpdateInfo::itemsRemoved() const { return m_itemsRemoved; }

void LibraryUpdateInfo::setItemsRemoved(QStringList newItemsRemoved) {
	m_itemsRemoved = newItemsRemoved;
}

QStringList LibraryUpdateInfo::itemsUpdated() const { return m_itemsUpdated; }

void LibraryUpdateInfo::setItemsUpdated(QStringList newItemsUpdated) {
	m_itemsUpdated = newItemsUpdated;
}

QStringList LibraryUpdateInfo::collectionFolders() const { return m_collectionFolders; }

void LibraryUpdateInfo::setCollectionFolders(QStringList newCollectionFolders) {
	m_collectionFolders = newCollectionFolders;
}

bool LibraryUpdateInfo::isEmpty() const { return m_isEmpty; }

void LibraryUpdateInfo::setIsEmpty(bool newIsEmpty) {
	m_isEmpty = newIsEmpty;
}


} // NS DTO

namespace Support {

using LibraryUpdateInfo = Jellyfin::DTO::LibraryUpdateInfo;

template <>
LibraryUpdateInfo fromJsonValue(const QJsonValue &source, convertType<LibraryUpdateInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return LibraryUpdateInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const LibraryUpdateInfo &source, convertType<LibraryUpdateInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
