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

#include <JellyfinQt/dto/videorangetype.h>

namespace Jellyfin {
namespace DTO {

VideoRangeTypeClass::VideoRangeTypeClass() {}

} // NS DTO

namespace Support {

using VideoRangeType = Jellyfin::DTO::VideoRangeType;

template <>
VideoRangeType fromJsonValue(const QJsonValue &source, convertType<VideoRangeType>) {
	if (!source.isString()) return VideoRangeType::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Unknown")) {
		return VideoRangeType::Unknown;
	}
	if (str == QStringLiteral("SDR")) {
		return VideoRangeType::SDR;
	}
	if (str == QStringLiteral("HDR10")) {
		return VideoRangeType::HDR10;
	}
	if (str == QStringLiteral("HLG")) {
		return VideoRangeType::HLG;
	}
	if (str == QStringLiteral("DOVI")) {
		return VideoRangeType::DOVI;
	}
	if (str == QStringLiteral("DOVIWithHDR10")) {
		return VideoRangeType::DOVIWithHDR10;
	}
	if (str == QStringLiteral("DOVIWithHLG")) {
		return VideoRangeType::DOVIWithHLG;
	}
	if (str == QStringLiteral("DOVIWithSDR")) {
		return VideoRangeType::DOVIWithSDR;
	}
	if (str == QStringLiteral("HDR10Plus")) {
		return VideoRangeType::HDR10Plus;
	}
	
	return VideoRangeType::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const VideoRangeType &source, convertType<VideoRangeType>) {
	switch(source) {
	case VideoRangeType::Unknown:
		return QStringLiteral("Unknown");
	case VideoRangeType::SDR:
		return QStringLiteral("SDR");
	case VideoRangeType::HDR10:
		return QStringLiteral("HDR10");
	case VideoRangeType::HLG:
		return QStringLiteral("HLG");
	case VideoRangeType::DOVI:
		return QStringLiteral("DOVI");
	case VideoRangeType::DOVIWithHDR10:
		return QStringLiteral("DOVIWithHDR10");
	case VideoRangeType::DOVIWithHLG:
		return QStringLiteral("DOVIWithHLG");
	case VideoRangeType::DOVIWithSDR:
		return QStringLiteral("DOVIWithSDR");
	case VideoRangeType::HDR10Plus:
		return QStringLiteral("HDR10Plus");

	case VideoRangeType::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
