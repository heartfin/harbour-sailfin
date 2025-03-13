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

#include <JellyfinQt/dto/seriesstatus.h>

namespace Jellyfin {
namespace DTO {

SeriesStatusClass::SeriesStatusClass() {}

} // NS DTO

namespace Support {

using SeriesStatus = Jellyfin::DTO::SeriesStatus;

template <>
SeriesStatus fromJsonValue(const QJsonValue &source, convertType<SeriesStatus>) {
	if (!source.isString()) return SeriesStatus::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Continuing")) {
		return SeriesStatus::Continuing;
	}
	if (str == QStringLiteral("Ended")) {
		return SeriesStatus::Ended;
	}
	if (str == QStringLiteral("Unreleased")) {
		return SeriesStatus::Unreleased;
	}
	
	return SeriesStatus::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const SeriesStatus &source, convertType<SeriesStatus>) {
	switch(source) {
	case SeriesStatus::Continuing:
		return QStringLiteral("Continuing");
	case SeriesStatus::Ended:
		return QStringLiteral("Ended");
	case SeriesStatus::Unreleased:
		return QStringLiteral("Unreleased");

	case SeriesStatus::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
