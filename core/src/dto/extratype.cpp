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

#include <JellyfinQt/dto/extratype.h>

namespace Jellyfin {
namespace DTO {

ExtraTypeClass::ExtraTypeClass() {}

} // NS DTO

namespace Support {

using ExtraType = Jellyfin::DTO::ExtraType;

template <>
ExtraType fromJsonValue(const QJsonValue &source, convertType<ExtraType>) {
	if (!source.isString()) return ExtraType::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Unknown")) {
		return ExtraType::Unknown;
	}
	if (str == QStringLiteral("Clip")) {
		return ExtraType::Clip;
	}
	if (str == QStringLiteral("Trailer")) {
		return ExtraType::Trailer;
	}
	if (str == QStringLiteral("BehindTheScenes")) {
		return ExtraType::BehindTheScenes;
	}
	if (str == QStringLiteral("DeletedScene")) {
		return ExtraType::DeletedScene;
	}
	if (str == QStringLiteral("Interview")) {
		return ExtraType::Interview;
	}
	if (str == QStringLiteral("Scene")) {
		return ExtraType::Scene;
	}
	if (str == QStringLiteral("Sample")) {
		return ExtraType::Sample;
	}
	if (str == QStringLiteral("ThemeSong")) {
		return ExtraType::ThemeSong;
	}
	if (str == QStringLiteral("ThemeVideo")) {
		return ExtraType::ThemeVideo;
	}
	if (str == QStringLiteral("Featurette")) {
		return ExtraType::Featurette;
	}
	if (str == QStringLiteral("Short")) {
		return ExtraType::Short;
	}
	
	return ExtraType::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const ExtraType &source, convertType<ExtraType>) {
	switch(source) {
	case ExtraType::Unknown:
		return QStringLiteral("Unknown");
	case ExtraType::Clip:
		return QStringLiteral("Clip");
	case ExtraType::Trailer:
		return QStringLiteral("Trailer");
	case ExtraType::BehindTheScenes:
		return QStringLiteral("BehindTheScenes");
	case ExtraType::DeletedScene:
		return QStringLiteral("DeletedScene");
	case ExtraType::Interview:
		return QStringLiteral("Interview");
	case ExtraType::Scene:
		return QStringLiteral("Scene");
	case ExtraType::Sample:
		return QStringLiteral("Sample");
	case ExtraType::ThemeSong:
		return QStringLiteral("ThemeSong");
	case ExtraType::ThemeVideo:
		return QStringLiteral("ThemeVideo");
	case ExtraType::Featurette:
		return QStringLiteral("Featurette");
	case ExtraType::Short:
		return QStringLiteral("Short");

	case ExtraType::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
