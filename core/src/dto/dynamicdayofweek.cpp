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

#include <JellyfinQt/dto/dynamicdayofweek.h>

namespace Jellyfin {
namespace DTO {

DynamicDayOfWeekClass::DynamicDayOfWeekClass() {}

} // NS DTO

namespace Support {

using DynamicDayOfWeek = Jellyfin::DTO::DynamicDayOfWeek;

template <>
DynamicDayOfWeek fromJsonValue(const QJsonValue &source, convertType<DynamicDayOfWeek>) {
	if (!source.isString()) return DynamicDayOfWeek::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Sunday")) {
		return DynamicDayOfWeek::Sunday;
	}
	if (str == QStringLiteral("Monday")) {
		return DynamicDayOfWeek::Monday;
	}
	if (str == QStringLiteral("Tuesday")) {
		return DynamicDayOfWeek::Tuesday;
	}
	if (str == QStringLiteral("Wednesday")) {
		return DynamicDayOfWeek::Wednesday;
	}
	if (str == QStringLiteral("Thursday")) {
		return DynamicDayOfWeek::Thursday;
	}
	if (str == QStringLiteral("Friday")) {
		return DynamicDayOfWeek::Friday;
	}
	if (str == QStringLiteral("Saturday")) {
		return DynamicDayOfWeek::Saturday;
	}
	if (str == QStringLiteral("Everyday")) {
		return DynamicDayOfWeek::Everyday;
	}
	if (str == QStringLiteral("Weekday")) {
		return DynamicDayOfWeek::Weekday;
	}
	if (str == QStringLiteral("Weekend")) {
		return DynamicDayOfWeek::Weekend;
	}
	
	return DynamicDayOfWeek::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const DynamicDayOfWeek &source, convertType<DynamicDayOfWeek>) {
	switch(source) {
	case DynamicDayOfWeek::Sunday:
		return QStringLiteral("Sunday");
	case DynamicDayOfWeek::Monday:
		return QStringLiteral("Monday");
	case DynamicDayOfWeek::Tuesday:
		return QStringLiteral("Tuesday");
	case DynamicDayOfWeek::Wednesday:
		return QStringLiteral("Wednesday");
	case DynamicDayOfWeek::Thursday:
		return QStringLiteral("Thursday");
	case DynamicDayOfWeek::Friday:
		return QStringLiteral("Friday");
	case DynamicDayOfWeek::Saturday:
		return QStringLiteral("Saturday");
	case DynamicDayOfWeek::Everyday:
		return QStringLiteral("Everyday");
	case DynamicDayOfWeek::Weekday:
		return QStringLiteral("Weekday");
	case DynamicDayOfWeek::Weekend:
		return QStringLiteral("Weekend");

	case DynamicDayOfWeek::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
