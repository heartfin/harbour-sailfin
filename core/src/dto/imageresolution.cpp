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

#include <JellyfinQt/dto/imageresolution.h>

namespace Jellyfin {
namespace DTO {

ImageResolutionClass::ImageResolutionClass() {}

} // NS DTO

namespace Support {

using ImageResolution = Jellyfin::DTO::ImageResolution;

template <>
ImageResolution fromJsonValue(const QJsonValue &source, convertType<ImageResolution>) {
	if (!source.isString()) return ImageResolution::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("MatchSource")) {
		return ImageResolution::MatchSource;
	}
	if (str == QStringLiteral("P144")) {
		return ImageResolution::P144;
	}
	if (str == QStringLiteral("P240")) {
		return ImageResolution::P240;
	}
	if (str == QStringLiteral("P360")) {
		return ImageResolution::P360;
	}
	if (str == QStringLiteral("P480")) {
		return ImageResolution::P480;
	}
	if (str == QStringLiteral("P720")) {
		return ImageResolution::P720;
	}
	if (str == QStringLiteral("P1080")) {
		return ImageResolution::P1080;
	}
	if (str == QStringLiteral("P1440")) {
		return ImageResolution::P1440;
	}
	if (str == QStringLiteral("P2160")) {
		return ImageResolution::P2160;
	}
	
	return ImageResolution::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const ImageResolution &source, convertType<ImageResolution>) {
	switch(source) {
	case ImageResolution::MatchSource:
		return QStringLiteral("MatchSource");
	case ImageResolution::P144:
		return QStringLiteral("P144");
	case ImageResolution::P240:
		return QStringLiteral("P240");
	case ImageResolution::P360:
		return QStringLiteral("P360");
	case ImageResolution::P480:
		return QStringLiteral("P480");
	case ImageResolution::P720:
		return QStringLiteral("P720");
	case ImageResolution::P1080:
		return QStringLiteral("P1080");
	case ImageResolution::P1440:
		return QStringLiteral("P1440");
	case ImageResolution::P2160:
		return QStringLiteral("P2160");

	case ImageResolution::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
