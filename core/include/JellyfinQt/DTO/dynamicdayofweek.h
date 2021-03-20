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

#ifndef JELLYFIN_DTO_DYNAMICDAYOFWEEK_H
#define JELLYFIN_DTO_DYNAMICDAYOFWEEK_H

#include <QJsonValue>
#include <QObject>
#include <QString>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {

class DynamicDayOfWeekClass {
	Q_GADGET
public:
	enum Value {
		EnumNotSet,
		Sunday,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday,
		Everyday,
		Weekday,
		Weekend,
	};
	Q_ENUM(Value)
private:
	explicit DynamicDayOfWeekClass();
};

typedef DynamicDayOfWeekClass::Value DynamicDayOfWeek;

} // NS DTO

namespace Support {

using DynamicDayOfWeek = Jellyfin::DTO::DynamicDayOfWeek;
using DynamicDayOfWeekClass = Jellyfin::DTO::DynamicDayOfWeekClass;

template <>
DynamicDayOfWeek fromJsonValue<DynamicDayOfWeek>(const QJsonValue &source) {
	if (!source.isString()) return DynamicDayOfWeekClass::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Sunday")) {
		return DynamicDayOfWeekClass::Sunday;
	}
	if (str == QStringLiteral("Monday")) {
		return DynamicDayOfWeekClass::Monday;
	}
	if (str == QStringLiteral("Tuesday")) {
		return DynamicDayOfWeekClass::Tuesday;
	}
	if (str == QStringLiteral("Wednesday")) {
		return DynamicDayOfWeekClass::Wednesday;
	}
	if (str == QStringLiteral("Thursday")) {
		return DynamicDayOfWeekClass::Thursday;
	}
	if (str == QStringLiteral("Friday")) {
		return DynamicDayOfWeekClass::Friday;
	}
	if (str == QStringLiteral("Saturday")) {
		return DynamicDayOfWeekClass::Saturday;
	}
	if (str == QStringLiteral("Everyday")) {
		return DynamicDayOfWeekClass::Everyday;
	}
	if (str == QStringLiteral("Weekday")) {
		return DynamicDayOfWeekClass::Weekday;
	}
	if (str == QStringLiteral("Weekend")) {
		return DynamicDayOfWeekClass::Weekend;
	}
	
	return DynamicDayOfWeekClass::EnumNotSet;
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_DYNAMICDAYOFWEEK_H
