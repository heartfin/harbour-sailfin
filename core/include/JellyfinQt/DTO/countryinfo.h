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
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class CountryInfo {
public:CountryInfo();CountryInfo(const CountryInfo &other);
	
	static CountryInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);
	/**
	 * @brief Gets or sets the display name.
	 */
	QString displayName() const;
	/**
	* @brief Gets or sets the display name.
	*/
	void setDisplayName(QString newDisplayName);
	/**
	 * @brief Gets or sets the name of the two letter ISO region.
	 */
	QString twoLetterISORegionName() const;
	/**
	* @brief Gets or sets the name of the two letter ISO region.
	*/
	void setTwoLetterISORegionName(QString newTwoLetterISORegionName);
	/**
	 * @brief Gets or sets the name of the three letter ISO region.
	 */
	QString threeLetterISORegionName() const;
	/**
	* @brief Gets or sets the name of the three letter ISO region.
	*/
	void setThreeLetterISORegionName(QString newThreeLetterISORegionName);

protected:
	QString m_name;
	QString m_displayName;
	QString m_twoLetterISORegionName;
	QString m_threeLetterISORegionName;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_COUNTRYINFO_H
