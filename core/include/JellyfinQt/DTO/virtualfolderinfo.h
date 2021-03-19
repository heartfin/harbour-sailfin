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

#ifndef JELLYFIN_DTO_VIRTUALFOLDERINFO_H
#define JELLYFIN_DTO_VIRTUALFOLDERINFO_H

#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class LibraryOptions;

class VirtualFolderInfo : public QObject {
	Q_OBJECT
public:
	explicit VirtualFolderInfo(QObject *parent = nullptr);
	static VirtualFolderInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the locations.
	 */
	Q_PROPERTY(QStringList locations READ locations WRITE setLocations NOTIFY locationsChanged)
	/**
	 * @brief Gets or sets the type of the collection.
	 */
	Q_PROPERTY(QString collectionType READ collectionType WRITE setCollectionType NOTIFY collectionTypeChanged)
	Q_PROPERTY(LibraryOptions * libraryOptions READ libraryOptions WRITE setLibraryOptions NOTIFY libraryOptionsChanged)
	/**
	 * @brief Gets or sets the item identifier.
	 */
	Q_PROPERTY(QString itemId READ itemId WRITE setItemId NOTIFY itemIdChanged)
	/**
	 * @brief Gets or sets the primary image item identifier.
	 */
	Q_PROPERTY(QString primaryImageItemId READ primaryImageItemId WRITE setPrimaryImageItemId NOTIFY primaryImageItemIdChanged)
	Q_PROPERTY(double refreshProgress READ refreshProgress WRITE setRefreshProgress NOTIFY refreshProgressChanged)
	Q_PROPERTY(QString refreshStatus READ refreshStatus WRITE setRefreshStatus NOTIFY refreshStatusChanged)

	QString name() const;
	void setName(QString newName);
	
	QStringList locations() const;
	void setLocations(QStringList newLocations);
	
	QString collectionType() const;
	void setCollectionType(QString newCollectionType);
	
	LibraryOptions * libraryOptions() const;
	void setLibraryOptions(LibraryOptions * newLibraryOptions);
	
	QString itemId() const;
	void setItemId(QString newItemId);
	
	QString primaryImageItemId() const;
	void setPrimaryImageItemId(QString newPrimaryImageItemId);
	
	double refreshProgress() const;
	void setRefreshProgress(double newRefreshProgress);
	
	QString refreshStatus() const;
	void setRefreshStatus(QString newRefreshStatus);
	
signals:
	void nameChanged(QString newName);
	void locationsChanged(QStringList newLocations);
	void collectionTypeChanged(QString newCollectionType);
	void libraryOptionsChanged(LibraryOptions * newLibraryOptions);
	void itemIdChanged(QString newItemId);
	void primaryImageItemIdChanged(QString newPrimaryImageItemId);
	void refreshProgressChanged(double newRefreshProgress);
	void refreshStatusChanged(QString newRefreshStatus);
protected:
	QString m_name;
	QStringList m_locations;
	QString m_collectionType;
	LibraryOptions * m_libraryOptions = nullptr;
	QString m_itemId;
	QString m_primaryImageItemId;
	double m_refreshProgress;
	QString m_refreshStatus;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_VIRTUALFOLDERINFO_H
