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

#include <JellyfinQt/dto/tonemappingalgorithm.h>

namespace Jellyfin {
namespace DTO {

TonemappingAlgorithmClass::TonemappingAlgorithmClass() {}

} // NS DTO

namespace Support {

using TonemappingAlgorithm = Jellyfin::DTO::TonemappingAlgorithm;

template <>
TonemappingAlgorithm fromJsonValue(const QJsonValue &source, convertType<TonemappingAlgorithm>) {
	if (!source.isString()) return TonemappingAlgorithm::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("none")) {
		return TonemappingAlgorithm::None;
	}
	if (str == QStringLiteral("clip")) {
		return TonemappingAlgorithm::Clip;
	}
	if (str == QStringLiteral("linear")) {
		return TonemappingAlgorithm::Linear;
	}
	if (str == QStringLiteral("gamma")) {
		return TonemappingAlgorithm::Gamma;
	}
	if (str == QStringLiteral("reinhard")) {
		return TonemappingAlgorithm::Reinhard;
	}
	if (str == QStringLiteral("hable")) {
		return TonemappingAlgorithm::Hable;
	}
	if (str == QStringLiteral("mobius")) {
		return TonemappingAlgorithm::Mobius;
	}
	if (str == QStringLiteral("bt2390")) {
		return TonemappingAlgorithm::Bt2390;
	}
	
	return TonemappingAlgorithm::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const TonemappingAlgorithm &source, convertType<TonemappingAlgorithm>) {
	switch(source) {
	case TonemappingAlgorithm::None:
		return QStringLiteral("none");
	case TonemappingAlgorithm::Clip:
		return QStringLiteral("clip");
	case TonemappingAlgorithm::Linear:
		return QStringLiteral("linear");
	case TonemappingAlgorithm::Gamma:
		return QStringLiteral("gamma");
	case TonemappingAlgorithm::Reinhard:
		return QStringLiteral("reinhard");
	case TonemappingAlgorithm::Hable:
		return QStringLiteral("hable");
	case TonemappingAlgorithm::Mobius:
		return QStringLiteral("mobius");
	case TonemappingAlgorithm::Bt2390:
		return QStringLiteral("bt2390");

	case TonemappingAlgorithm::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
