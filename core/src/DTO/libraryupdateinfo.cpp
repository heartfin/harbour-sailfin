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

#include <JellyfinQt/DTO/libraryupdateinfo.h>

namespace Jellyfin {
namespace DTO {

LibraryUpdateInfo::LibraryUpdateInfo(QObject *parent) : QObject(parent) {}

LibraryUpdateInfo *LibraryUpdateInfo::fromJSON(QJsonObject source, QObject *parent) {
	LibraryUpdateInfo *instance = new LibraryUpdateInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void LibraryUpdateInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject LibraryUpdateInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QStringList LibraryUpdateInfo::foldersAddedTo() const { return m_foldersAddedTo; }
void LibraryUpdateInfo::setFoldersAddedTo(QStringList newFoldersAddedTo) {
	m_foldersAddedTo = newFoldersAddedTo;
	emit foldersAddedToChanged(newFoldersAddedTo);
}

QStringList LibraryUpdateInfo::foldersRemovedFrom() const { return m_foldersRemovedFrom; }
void LibraryUpdateInfo::setFoldersRemovedFrom(QStringList newFoldersRemovedFrom) {
	m_foldersRemovedFrom = newFoldersRemovedFrom;
	emit foldersRemovedFromChanged(newFoldersRemovedFrom);
}

QStringList LibraryUpdateInfo::itemsAdded() const { return m_itemsAdded; }
void LibraryUpdateInfo::setItemsAdded(QStringList newItemsAdded) {
	m_itemsAdded = newItemsAdded;
	emit itemsAddedChanged(newItemsAdded);
}

QStringList LibraryUpdateInfo::itemsRemoved() const { return m_itemsRemoved; }
void LibraryUpdateInfo::setItemsRemoved(QStringList newItemsRemoved) {
	m_itemsRemoved = newItemsRemoved;
	emit itemsRemovedChanged(newItemsRemoved);
}

QStringList LibraryUpdateInfo::itemsUpdated() const { return m_itemsUpdated; }
void LibraryUpdateInfo::setItemsUpdated(QStringList newItemsUpdated) {
	m_itemsUpdated = newItemsUpdated;
	emit itemsUpdatedChanged(newItemsUpdated);
}

QStringList LibraryUpdateInfo::collectionFolders() const { return m_collectionFolders; }
void LibraryUpdateInfo::setCollectionFolders(QStringList newCollectionFolders) {
	m_collectionFolders = newCollectionFolders;
	emit collectionFoldersChanged(newCollectionFolders);
}

bool LibraryUpdateInfo::isEmpty() const { return m_isEmpty; }
void LibraryUpdateInfo::setIsEmpty(bool newIsEmpty) {
	m_isEmpty = newIsEmpty;
	emit isEmptyChanged(newIsEmpty);
}


} // NS Jellyfin
} // NS DTO
