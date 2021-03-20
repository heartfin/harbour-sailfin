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

#include <JellyfinQt/DTO/countryinfo.h>

namespace Jellyfin {
namespace DTO {

CountryInfo::CountryInfo() {}

CountryInfo CountryInfo::fromJson(QJsonObject source) {
	CountryInfo instance;
	instance.setFromJson(source);
	return instance;
}


void CountryInfo::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_displayName = Jellyfin::Support::fromJsonValue<QString>(source["DisplayName"]);
	m_twoLetterISORegionName = Jellyfin::Support::fromJsonValue<QString>(source["TwoLetterISORegionName"]);
	m_threeLetterISORegionName = Jellyfin::Support::fromJsonValue<QString>(source["ThreeLetterISORegionName"]);

}
	
QJsonObject CountryInfo::toJson() {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["DisplayName"] = Jellyfin::Support::toJsonValue<QString>(m_displayName);
	result["TwoLetterISORegionName"] = Jellyfin::Support::toJsonValue<QString>(m_twoLetterISORegionName);
	result["ThreeLetterISORegionName"] = Jellyfin::Support::toJsonValue<QString>(m_threeLetterISORegionName);

	return result;
}

QString CountryInfo::name() const { return m_name; }

void CountryInfo::setName(QString newName) {
	m_name = newName;
}
QString CountryInfo::displayName() const { return m_displayName; }

void CountryInfo::setDisplayName(QString newDisplayName) {
	m_displayName = newDisplayName;
}
QString CountryInfo::twoLetterISORegionName() const { return m_twoLetterISORegionName; }

void CountryInfo::setTwoLetterISORegionName(QString newTwoLetterISORegionName) {
	m_twoLetterISORegionName = newTwoLetterISORegionName;
}
QString CountryInfo::threeLetterISORegionName() const { return m_threeLetterISORegionName; }

void CountryInfo::setThreeLetterISORegionName(QString newThreeLetterISORegionName) {
	m_threeLetterISORegionName = newThreeLetterISORegionName;
}

} // NS DTO

namespace Support {

using CountryInfo = Jellyfin::DTO::CountryInfo;

template <>
CountryInfo fromJsonValue<CountryInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return CountryInfo::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO
