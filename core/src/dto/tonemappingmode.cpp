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

#include <JellyfinQt/dto/tonemappingmode.h>

namespace Jellyfin {
namespace DTO {

TonemappingModeClass::TonemappingModeClass() {}

} // NS DTO

namespace Support {

using TonemappingMode = Jellyfin::DTO::TonemappingMode;

template <>
TonemappingMode fromJsonValue(const QJsonValue &source, convertType<TonemappingMode>) {
	if (!source.isString()) return TonemappingMode::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("auto")) {
		return TonemappingMode::Automatic;
	}
	if (str == QStringLiteral("max")) {
		return TonemappingMode::Max;
	}
	if (str == QStringLiteral("rgb")) {
		return TonemappingMode::Rgb;
	}
	if (str == QStringLiteral("lum")) {
		return TonemappingMode::Lum;
	}
	if (str == QStringLiteral("itp")) {
		return TonemappingMode::Itp;
	}
	
	return TonemappingMode::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const TonemappingMode &source, convertType<TonemappingMode>) {
	switch(source) {
	case TonemappingMode::Automatic:
		return QStringLiteral("auto");
	case TonemappingMode::Max:
		return QStringLiteral("max");
	case TonemappingMode::Rgb:
		return QStringLiteral("rgb");
	case TonemappingMode::Lum:
		return QStringLiteral("lum");
	case TonemappingMode::Itp:
		return QStringLiteral("itp");

	case TonemappingMode::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
