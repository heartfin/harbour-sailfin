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

#include <JellyfinQt/dto/subtitledeliverymethod.h>

namespace Jellyfin {
namespace DTO {

SubtitleDeliveryMethodClass::SubtitleDeliveryMethodClass() {}

} // NS DTO

namespace Support {

using SubtitleDeliveryMethod = Jellyfin::DTO::SubtitleDeliveryMethod;

template <>
SubtitleDeliveryMethod fromJsonValue(const QJsonValue &source, convertType<SubtitleDeliveryMethod>) {
	if (!source.isString()) return SubtitleDeliveryMethod::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Encode")) {
		return SubtitleDeliveryMethod::Encode;
	}
	if (str == QStringLiteral("Embed")) {
		return SubtitleDeliveryMethod::Embed;
	}
	if (str == QStringLiteral("External")) {
		return SubtitleDeliveryMethod::External;
	}
	if (str == QStringLiteral("Hls")) {
		return SubtitleDeliveryMethod::Hls;
	}
	if (str == QStringLiteral("Drop")) {
		return SubtitleDeliveryMethod::Drop;
	}
	
	return SubtitleDeliveryMethod::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const SubtitleDeliveryMethod &source, convertType<SubtitleDeliveryMethod>) {
	switch(source) {
	case SubtitleDeliveryMethod::Encode:
		return QStringLiteral("Encode");
	case SubtitleDeliveryMethod::Embed:
		return QStringLiteral("Embed");
	case SubtitleDeliveryMethod::External:
		return QStringLiteral("External");
	case SubtitleDeliveryMethod::Hls:
		return QStringLiteral("Hls");
	case SubtitleDeliveryMethod::Drop:
		return QStringLiteral("Drop");

	case SubtitleDeliveryMethod::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
