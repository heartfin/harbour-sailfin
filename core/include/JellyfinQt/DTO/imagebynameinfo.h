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

#ifndef JELLYFIN_DTO_IMAGEBYNAMEINFO_H
#define JELLYFIN_DTO_IMAGEBYNAMEINFO_H

#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class ImageByNameInfo : public QObject {
	Q_OBJECT
public:
	explicit ImageByNameInfo(QObject *parent = nullptr);
	static ImageByNameInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the theme.
	 */
	Q_PROPERTY(QString theme READ theme WRITE setTheme NOTIFY themeChanged)
	/**
	 * @brief Gets or sets the context.
	 */
	Q_PROPERTY(QString context READ context WRITE setContext NOTIFY contextChanged)
	/**
	 * @brief Gets or sets the length of the file.
	 */
	Q_PROPERTY(qint64 fileLength READ fileLength WRITE setFileLength NOTIFY fileLengthChanged)
	/**
	 * @brief Gets or sets the format.
	 */
	Q_PROPERTY(QString format READ format WRITE setFormat NOTIFY formatChanged)

	QString name() const;
	void setName(QString newName);
	
	QString theme() const;
	void setTheme(QString newTheme);
	
	QString context() const;
	void setContext(QString newContext);
	
	qint64 fileLength() const;
	void setFileLength(qint64 newFileLength);
	
	QString format() const;
	void setFormat(QString newFormat);
	
signals:
	void nameChanged(QString newName);
	void themeChanged(QString newTheme);
	void contextChanged(QString newContext);
	void fileLengthChanged(qint64 newFileLength);
	void formatChanged(QString newFormat);
protected:
	QString m_name;
	QString m_theme;
	QString m_context;
	qint64 m_fileLength;
	QString m_format;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_IMAGEBYNAMEINFO_H
