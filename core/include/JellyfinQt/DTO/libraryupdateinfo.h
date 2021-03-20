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

#ifndef JELLYFIN_DTO_LIBRARYUPDATEINFO_H
#define JELLYFIN_DTO_LIBRARYUPDATEINFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class LibraryUpdateInfo {
public:
	explicit LibraryUpdateInfo();
	static LibraryUpdateInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the folders added to.
	 */
	QStringList foldersAddedTo() const;
	/**
	* @brief Gets or sets the folders added to.
	*/
	void setFoldersAddedTo(QStringList newFoldersAddedTo);
	/**
	 * @brief Gets or sets the folders removed from.
	 */
	QStringList foldersRemovedFrom() const;
	/**
	* @brief Gets or sets the folders removed from.
	*/
	void setFoldersRemovedFrom(QStringList newFoldersRemovedFrom);
	/**
	 * @brief Gets or sets the items added.
	 */
	QStringList itemsAdded() const;
	/**
	* @brief Gets or sets the items added.
	*/
	void setItemsAdded(QStringList newItemsAdded);
	/**
	 * @brief Gets or sets the items removed.
	 */
	QStringList itemsRemoved() const;
	/**
	* @brief Gets or sets the items removed.
	*/
	void setItemsRemoved(QStringList newItemsRemoved);
	/**
	 * @brief Gets or sets the items updated.
	 */
	QStringList itemsUpdated() const;
	/**
	* @brief Gets or sets the items updated.
	*/
	void setItemsUpdated(QStringList newItemsUpdated);

	QStringList collectionFolders() const;

	void setCollectionFolders(QStringList newCollectionFolders);

	bool isEmpty() const;

	void setIsEmpty(bool newIsEmpty);

protected:
	QStringList m_foldersAddedTo;
	QStringList m_foldersRemovedFrom;
	QStringList m_itemsAdded;
	QStringList m_itemsRemoved;
	QStringList m_itemsUpdated;
	QStringList m_collectionFolders;
	bool m_isEmpty;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_LIBRARYUPDATEINFO_H
