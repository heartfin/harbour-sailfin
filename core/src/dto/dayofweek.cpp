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

#include <JellyfinQt/dto/dayofweek.h>

namespace Jellyfin {
namespace DTO {

DayOfWeekClass::DayOfWeekClass() {}

} // NS DTO

namespace Support {

using DayOfWeek = Jellyfin::DTO::DayOfWeek;

template <>
DayOfWeek fromJsonValue(const QJsonValue &source, convertType<DayOfWeek>) {
	if (!source.isString()) return DayOfWeek::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Sunday")) {
		return DayOfWeek::Sunday;
	}
	if (str == QStringLiteral("Monday")) {
		return DayOfWeek::Monday;
	}
	if (str == QStringLiteral("Tuesday")) {
		return DayOfWeek::Tuesday;
	}
	if (str == QStringLiteral("Wednesday")) {
		return DayOfWeek::Wednesday;
	}
	if (str == QStringLiteral("Thursday")) {
		return DayOfWeek::Thursday;
	}
	if (str == QStringLiteral("Friday")) {
		return DayOfWeek::Friday;
	}
	if (str == QStringLiteral("Saturday")) {
		return DayOfWeek::Saturday;
	}
	
	return DayOfWeek::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const DayOfWeek &source, convertType<DayOfWeek>) {
	switch(source) {
	case DayOfWeek::Sunday:
		return QStringLiteral("Sunday");
	case DayOfWeek::Monday:
		return QStringLiteral("Monday");
	case DayOfWeek::Tuesday:
		return QStringLiteral("Tuesday");
	case DayOfWeek::Wednesday:
		return QStringLiteral("Wednesday");
	case DayOfWeek::Thursday:
		return QStringLiteral("Thursday");
	case DayOfWeek::Friday:
		return QStringLiteral("Friday");
	case DayOfWeek::Saturday:
		return QStringLiteral("Saturday");

	case DayOfWeek::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
