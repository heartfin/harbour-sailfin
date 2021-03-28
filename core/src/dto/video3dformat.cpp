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

#include <JellyfinQt/dto/video3dformat.h>

namespace Jellyfin {
namespace DTO {

Video3DFormatClass::Video3DFormatClass() {}

} // NS DTO

namespace Support {

using Video3DFormat = Jellyfin::DTO::Video3DFormat;

template <>
Video3DFormat fromJsonValue(const QJsonValue &source, convertType<Video3DFormat>) {
	if (!source.isString()) return Video3DFormat::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("HalfSideBySide")) {
		return Video3DFormat::HalfSideBySide;
	}
	if (str == QStringLiteral("FullSideBySide")) {
		return Video3DFormat::FullSideBySide;
	}
	if (str == QStringLiteral("FullTopAndBottom")) {
		return Video3DFormat::FullTopAndBottom;
	}
	if (str == QStringLiteral("HalfTopAndBottom")) {
		return Video3DFormat::HalfTopAndBottom;
	}
	if (str == QStringLiteral("MVC")) {
		return Video3DFormat::MVC;
	}
	
	return Video3DFormat::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const Video3DFormat &source, convertType<Video3DFormat>) {
	switch(source) {
	case Video3DFormat::HalfSideBySide:
		return QStringLiteral("HalfSideBySide");
	case Video3DFormat::FullSideBySide:
		return QStringLiteral("FullSideBySide");
	case Video3DFormat::FullTopAndBottom:
		return QStringLiteral("FullTopAndBottom");
	case Video3DFormat::HalfTopAndBottom:
		return QStringLiteral("HalfTopAndBottom");
	case Video3DFormat::MVC:
		return QStringLiteral("MVC");

	case Video3DFormat::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
