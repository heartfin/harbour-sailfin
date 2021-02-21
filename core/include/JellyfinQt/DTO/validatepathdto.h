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

#ifndef JELLYFIN_DTO_VALIDATEPATHDTO_H
#define JELLYFIN_DTO_VALIDATEPATHDTO_H

#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class ValidatePathDto : public QObject {
	Q_OBJECT
public:
	explicit ValidatePathDto(QObject *parent = nullptr);
	static ValidatePathDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets a value indicating whether validate if path is writable.
	 */
	Q_PROPERTY(bool validateWritable READ validateWritable WRITE setValidateWritable NOTIFY validateWritableChanged)
	/**
	 * @brief Gets or sets the path.
	 */
	Q_PROPERTY(QString path READ path WRITE setPath NOTIFY pathChanged)
	/**
	 * @brief Gets or sets is path file.
	 */
	Q_PROPERTY(bool isFile READ isFile WRITE setIsFile NOTIFY isFileChanged)

	bool validateWritable() const;
	void setValidateWritable(bool newValidateWritable);
	
	QString path() const;
	void setPath(QString newPath);
	
	bool isFile() const;
	void setIsFile(bool newIsFile);
	
signals:
	void validateWritableChanged(bool newValidateWritable);
	void pathChanged(QString newPath);
	void isFileChanged(bool newIsFile);
protected:
	bool m_validateWritable;
	QString m_path;
	bool m_isFile;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_VALIDATEPATHDTO_H
