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

#include <JellyfinQt/dto/hardwareaccelerationtype.h>

namespace Jellyfin {
namespace DTO {

HardwareAccelerationTypeClass::HardwareAccelerationTypeClass() {}

} // NS DTO

namespace Support {

using HardwareAccelerationType = Jellyfin::DTO::HardwareAccelerationType;

template <>
HardwareAccelerationType fromJsonValue(const QJsonValue &source, convertType<HardwareAccelerationType>) {
	if (!source.isString()) return HardwareAccelerationType::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("none")) {
		return HardwareAccelerationType::None;
	}
	if (str == QStringLiteral("amf")) {
		return HardwareAccelerationType::Amf;
	}
	if (str == QStringLiteral("qsv")) {
		return HardwareAccelerationType::Qsv;
	}
	if (str == QStringLiteral("nvenc")) {
		return HardwareAccelerationType::Nvenc;
	}
	if (str == QStringLiteral("v4l2m2m")) {
		return HardwareAccelerationType::V4l2m2m;
	}
	if (str == QStringLiteral("vaapi")) {
		return HardwareAccelerationType::Vaapi;
	}
	if (str == QStringLiteral("videotoolbox")) {
		return HardwareAccelerationType::Videotoolbox;
	}
	if (str == QStringLiteral("rkmpp")) {
		return HardwareAccelerationType::Rkmpp;
	}
	
	return HardwareAccelerationType::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const HardwareAccelerationType &source, convertType<HardwareAccelerationType>) {
	switch(source) {
	case HardwareAccelerationType::None:
		return QStringLiteral("none");
	case HardwareAccelerationType::Amf:
		return QStringLiteral("amf");
	case HardwareAccelerationType::Qsv:
		return QStringLiteral("qsv");
	case HardwareAccelerationType::Nvenc:
		return QStringLiteral("nvenc");
	case HardwareAccelerationType::V4l2m2m:
		return QStringLiteral("v4l2m2m");
	case HardwareAccelerationType::Vaapi:
		return QStringLiteral("vaapi");
	case HardwareAccelerationType::Videotoolbox:
		return QStringLiteral("videotoolbox");
	case HardwareAccelerationType::Rkmpp:
		return QStringLiteral("rkmpp");

	case HardwareAccelerationType::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
