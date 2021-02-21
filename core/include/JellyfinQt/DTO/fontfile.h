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

#ifndef JELLYFIN_DTO_FONTFILE_H
#define JELLYFIN_DTO_FONTFILE_H

#include <QDateTime>
#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class FontFile : public QObject {
	Q_OBJECT
public:
	explicit FontFile(QObject *parent = nullptr);
	static FontFile *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the size.
	 */
	Q_PROPERTY(qint64 size READ size WRITE setSize NOTIFY sizeChanged)
	/**
	 * @brief Gets or sets the date created.
	 */
	Q_PROPERTY(QDateTime dateCreated READ dateCreated WRITE setDateCreated NOTIFY dateCreatedChanged)
	/**
	 * @brief Gets or sets the date modified.
	 */
	Q_PROPERTY(QDateTime dateModified READ dateModified WRITE setDateModified NOTIFY dateModifiedChanged)

	QString name() const;
	void setName(QString newName);
	
	qint64 size() const;
	void setSize(qint64 newSize);
	
	QDateTime dateCreated() const;
	void setDateCreated(QDateTime newDateCreated);
	
	QDateTime dateModified() const;
	void setDateModified(QDateTime newDateModified);
	
signals:
	void nameChanged(QString newName);
	void sizeChanged(qint64 newSize);
	void dateCreatedChanged(QDateTime newDateCreated);
	void dateModifiedChanged(QDateTime newDateModified);
protected:
	QString m_name;
	qint64 m_size;
	QDateTime m_dateCreated;
	QDateTime m_dateModified;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_FONTFILE_H
