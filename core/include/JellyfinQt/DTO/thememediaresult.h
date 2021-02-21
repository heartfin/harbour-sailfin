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

#ifndef JELLYFIN_DTO_THEMEMEDIARESULT_H
#define JELLYFIN_DTO_THEMEMEDIARESULT_H

#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class BaseItemDto;

class ThemeMediaResult : public QObject {
	Q_OBJECT
public:
	explicit ThemeMediaResult(QObject *parent = nullptr);
	static ThemeMediaResult *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the items.
	 */
	Q_PROPERTY(QList<BaseItemDto *> items READ items WRITE setItems NOTIFY itemsChanged)
	/**
	 * @brief The total number of records available.
	 */
	Q_PROPERTY(qint32 totalRecordCount READ totalRecordCount WRITE setTotalRecordCount NOTIFY totalRecordCountChanged)
	/**
	 * @brief The index of the first record in Items.
	 */
	Q_PROPERTY(qint32 startIndex READ startIndex WRITE setStartIndex NOTIFY startIndexChanged)
	/**
	 * @brief Gets or sets the owner id.
	 */
	Q_PROPERTY(QString ownerId READ ownerId WRITE setOwnerId NOTIFY ownerIdChanged)

	QList<BaseItemDto *> items() const;
	void setItems(QList<BaseItemDto *> newItems);
	
	qint32 totalRecordCount() const;
	void setTotalRecordCount(qint32 newTotalRecordCount);
	
	qint32 startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	
	QString ownerId() const;
	void setOwnerId(QString newOwnerId);
	
signals:
	void itemsChanged(QList<BaseItemDto *> newItems);
	void totalRecordCountChanged(qint32 newTotalRecordCount);
	void startIndexChanged(qint32 newStartIndex);
	void ownerIdChanged(QString newOwnerId);
protected:
	QList<BaseItemDto *> m_items;
	qint32 m_totalRecordCount;
	qint32 m_startIndex;
	QString m_ownerId;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_THEMEMEDIARESULT_H
