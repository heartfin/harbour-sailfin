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

#include <JellyfinQt/DTO/localizationoption.h>

namespace Jellyfin {
namespace DTO {

LocalizationOption::LocalizationOption() {}

LocalizationOption LocalizationOption::fromJson(QJsonObject source) {
	LocalizationOption instance;
	instance.setFromJson(source);
	return instance;
}


void LocalizationOption::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_value = Jellyfin::Support::fromJsonValue<QString>(source["Value"]);

}
	
QJsonObject LocalizationOption::toJson() {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["Value"] = Jellyfin::Support::toJsonValue<QString>(m_value);

	return result;
}

QString LocalizationOption::name() const { return m_name; }

void LocalizationOption::setName(QString newName) {
	m_name = newName;
}
QString LocalizationOption::value() const { return m_value; }

void LocalizationOption::setValue(QString newValue) {
	m_value = newValue;
}

} // NS DTO

namespace Support {

using LocalizationOption = Jellyfin::DTO::LocalizationOption;

template <>
LocalizationOption fromJsonValue<LocalizationOption>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return LocalizationOption::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO
