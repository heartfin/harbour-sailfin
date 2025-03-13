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

#include <JellyfinQt/dto/downmixstereoalgorithms.h>

namespace Jellyfin {
namespace DTO {

DownMixStereoAlgorithmsClass::DownMixStereoAlgorithmsClass() {}

} // NS DTO

namespace Support {

using DownMixStereoAlgorithms = Jellyfin::DTO::DownMixStereoAlgorithms;

template <>
DownMixStereoAlgorithms fromJsonValue(const QJsonValue &source, convertType<DownMixStereoAlgorithms>) {
	if (!source.isString()) return DownMixStereoAlgorithms::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("None")) {
		return DownMixStereoAlgorithms::None;
	}
	if (str == QStringLiteral("Dave750")) {
		return DownMixStereoAlgorithms::Dave750;
	}
	if (str == QStringLiteral("NightmodeDialogue")) {
		return DownMixStereoAlgorithms::NightmodeDialogue;
	}
	if (str == QStringLiteral("Rfc7845")) {
		return DownMixStereoAlgorithms::Rfc7845;
	}
	if (str == QStringLiteral("Ac4")) {
		return DownMixStereoAlgorithms::Ac4;
	}
	
	return DownMixStereoAlgorithms::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const DownMixStereoAlgorithms &source, convertType<DownMixStereoAlgorithms>) {
	switch(source) {
	case DownMixStereoAlgorithms::None:
		return QStringLiteral("None");
	case DownMixStereoAlgorithms::Dave750:
		return QStringLiteral("Dave750");
	case DownMixStereoAlgorithms::NightmodeDialogue:
		return QStringLiteral("NightmodeDialogue");
	case DownMixStereoAlgorithms::Rfc7845:
		return QStringLiteral("Rfc7845");
	case DownMixStereoAlgorithms::Ac4:
		return QStringLiteral("Ac4");

	case DownMixStereoAlgorithms::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
