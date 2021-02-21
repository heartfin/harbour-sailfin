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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class LibraryUpdateInfo : public QObject {
	Q_OBJECT
public:
	explicit LibraryUpdateInfo(QObject *parent = nullptr);
	static LibraryUpdateInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the folders added to.
	 */
	Q_PROPERTY(QStringList foldersAddedTo READ foldersAddedTo WRITE setFoldersAddedTo NOTIFY foldersAddedToChanged)
	/**
	 * @brief Gets or sets the folders removed from.
	 */
	Q_PROPERTY(QStringList foldersRemovedFrom READ foldersRemovedFrom WRITE setFoldersRemovedFrom NOTIFY foldersRemovedFromChanged)
	/**
	 * @brief Gets or sets the items added.
	 */
	Q_PROPERTY(QStringList itemsAdded READ itemsAdded WRITE setItemsAdded NOTIFY itemsAddedChanged)
	/**
	 * @brief Gets or sets the items removed.
	 */
	Q_PROPERTY(QStringList itemsRemoved READ itemsRemoved WRITE setItemsRemoved NOTIFY itemsRemovedChanged)
	/**
	 * @brief Gets or sets the items updated.
	 */
	Q_PROPERTY(QStringList itemsUpdated READ itemsUpdated WRITE setItemsUpdated NOTIFY itemsUpdatedChanged)
	Q_PROPERTY(QStringList collectionFolders READ collectionFolders WRITE setCollectionFolders NOTIFY collectionFoldersChanged)
	Q_PROPERTY(bool isEmpty READ isEmpty WRITE setIsEmpty NOTIFY isEmptyChanged)

	QStringList foldersAddedTo() const;
	void setFoldersAddedTo(QStringList newFoldersAddedTo);
	
	QStringList foldersRemovedFrom() const;
	void setFoldersRemovedFrom(QStringList newFoldersRemovedFrom);
	
	QStringList itemsAdded() const;
	void setItemsAdded(QStringList newItemsAdded);
	
	QStringList itemsRemoved() const;
	void setItemsRemoved(QStringList newItemsRemoved);
	
	QStringList itemsUpdated() const;
	void setItemsUpdated(QStringList newItemsUpdated);
	
	QStringList collectionFolders() const;
	void setCollectionFolders(QStringList newCollectionFolders);
	
	bool isEmpty() const;
	void setIsEmpty(bool newIsEmpty);
	
signals:
	void foldersAddedToChanged(QStringList newFoldersAddedTo);
	void foldersRemovedFromChanged(QStringList newFoldersRemovedFrom);
	void itemsAddedChanged(QStringList newItemsAdded);
	void itemsRemovedChanged(QStringList newItemsRemoved);
	void itemsUpdatedChanged(QStringList newItemsUpdated);
	void collectionFoldersChanged(QStringList newCollectionFolders);
	void isEmptyChanged(bool newIsEmpty);
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
