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

CountryInfo::CountryInfo(QObject *parent) : QObject(parent) {}

CountryInfo *CountryInfo::fromJSON(QJsonObject source, QObject *parent) {
	CountryInfo *instance = new CountryInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void CountryInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject CountryInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString CountryInfo::name() const { return m_name; }
void CountryInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString CountryInfo::displayName() const { return m_displayName; }
void CountryInfo::setDisplayName(QString newDisplayName) {
	m_displayName = newDisplayName;
	emit displayNameChanged(newDisplayName);
}

QString CountryInfo::twoLetterISORegionName() const { return m_twoLetterISORegionName; }
void CountryInfo::setTwoLetterISORegionName(QString newTwoLetterISORegionName) {
	m_twoLetterISORegionName = newTwoLetterISORegionName;
	emit twoLetterISORegionNameChanged(newTwoLetterISORegionName);
}

QString CountryInfo::threeLetterISORegionName() const { return m_threeLetterISORegionName; }
void CountryInfo::setThreeLetterISORegionName(QString newThreeLetterISORegionName) {
	m_threeLetterISORegionName = newThreeLetterISORegionName;
	emit threeLetterISORegionNameChanged(newThreeLetterISORegionName);
}


} // NS Jellyfin
} // NS DTO
