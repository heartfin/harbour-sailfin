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

#include <JellyfinQt/dto/encoderpreset.h>

namespace Jellyfin {
namespace DTO {

EncoderPresetClass::EncoderPresetClass() {}

} // NS DTO

namespace Support {

using EncoderPreset = Jellyfin::DTO::EncoderPreset;

template <>
EncoderPreset fromJsonValue(const QJsonValue &source, convertType<EncoderPreset>) {
	if (!source.isString()) return EncoderPreset::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("auto")) {
		return EncoderPreset::Automatic;
	}
	if (str == QStringLiteral("placebo")) {
		return EncoderPreset::Placebo;
	}
	if (str == QStringLiteral("veryslow")) {
		return EncoderPreset::Veryslow;
	}
	if (str == QStringLiteral("slower")) {
		return EncoderPreset::Slower;
	}
	if (str == QStringLiteral("slow")) {
		return EncoderPreset::Slow;
	}
	if (str == QStringLiteral("medium")) {
		return EncoderPreset::Medium;
	}
	if (str == QStringLiteral("fast")) {
		return EncoderPreset::Fast;
	}
	if (str == QStringLiteral("faster")) {
		return EncoderPreset::Faster;
	}
	if (str == QStringLiteral("veryfast")) {
		return EncoderPreset::Veryfast;
	}
	if (str == QStringLiteral("superfast")) {
		return EncoderPreset::Superfast;
	}
	if (str == QStringLiteral("ultrafast")) {
		return EncoderPreset::Ultrafast;
	}
	
	return EncoderPreset::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const EncoderPreset &source, convertType<EncoderPreset>) {
	switch(source) {
	case EncoderPreset::Automatic:
		return QStringLiteral("auto");
	case EncoderPreset::Placebo:
		return QStringLiteral("placebo");
	case EncoderPreset::Veryslow:
		return QStringLiteral("veryslow");
	case EncoderPreset::Slower:
		return QStringLiteral("slower");
	case EncoderPreset::Slow:
		return QStringLiteral("slow");
	case EncoderPreset::Medium:
		return QStringLiteral("medium");
	case EncoderPreset::Fast:
		return QStringLiteral("fast");
	case EncoderPreset::Faster:
		return QStringLiteral("faster");
	case EncoderPreset::Veryfast:
		return QStringLiteral("veryfast");
	case EncoderPreset::Superfast:
		return QStringLiteral("superfast");
	case EncoderPreset::Ultrafast:
		return QStringLiteral("ultrafast");

	case EncoderPreset::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
