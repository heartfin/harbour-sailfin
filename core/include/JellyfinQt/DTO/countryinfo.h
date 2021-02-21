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

#ifndef JELLYFIN_DTO_COUNTRYINFO_H
#define JELLYFIN_DTO_COUNTRYINFO_H

#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class CountryInfo : public QObject {
	Q_OBJECT
public:
	explicit CountryInfo(QObject *parent = nullptr);
	static CountryInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the display name.
	 */
	Q_PROPERTY(QString displayName READ displayName WRITE setDisplayName NOTIFY displayNameChanged)
	/**
	 * @brief Gets or sets the name of the two letter ISO region.
	 */
	Q_PROPERTY(QString twoLetterISORegionName READ twoLetterISORegionName WRITE setTwoLetterISORegionName NOTIFY twoLetterISORegionNameChanged)
	/**
	 * @brief Gets or sets the name of the three letter ISO region.
	 */
	Q_PROPERTY(QString threeLetterISORegionName READ threeLetterISORegionName WRITE setThreeLetterISORegionName NOTIFY threeLetterISORegionNameChanged)

	QString name() const;
	void setName(QString newName);
	
	QString displayName() const;
	void setDisplayName(QString newDisplayName);
	
	QString twoLetterISORegionName() const;
	void setTwoLetterISORegionName(QString newTwoLetterISORegionName);
	
	QString threeLetterISORegionName() const;
	void setThreeLetterISORegionName(QString newThreeLetterISORegionName);
	
signals:
	void nameChanged(QString newName);
	void displayNameChanged(QString newDisplayName);
	void twoLetterISORegionNameChanged(QString newTwoLetterISORegionName);
	void threeLetterISORegionNameChanged(QString newThreeLetterISORegionName);
protected:
	QString m_name;
	QString m_displayName;
	QString m_twoLetterISORegionName;
	QString m_threeLetterISORegionName;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_COUNTRYINFO_H
