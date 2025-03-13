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

#include <JellyfinQt/dto/mediasegmenttype.h>

namespace Jellyfin {
namespace DTO {

MediaSegmentTypeClass::MediaSegmentTypeClass() {}

} // NS DTO

namespace Support {

using MediaSegmentType = Jellyfin::DTO::MediaSegmentType;

template <>
MediaSegmentType fromJsonValue(const QJsonValue &source, convertType<MediaSegmentType>) {
	if (!source.isString()) return MediaSegmentType::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Unknown")) {
		return MediaSegmentType::Unknown;
	}
	if (str == QStringLiteral("Commercial")) {
		return MediaSegmentType::Commercial;
	}
	if (str == QStringLiteral("Preview")) {
		return MediaSegmentType::Preview;
	}
	if (str == QStringLiteral("Recap")) {
		return MediaSegmentType::Recap;
	}
	if (str == QStringLiteral("Outro")) {
		return MediaSegmentType::Outro;
	}
	if (str == QStringLiteral("Intro")) {
		return MediaSegmentType::Intro;
	}
	
	return MediaSegmentType::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const MediaSegmentType &source, convertType<MediaSegmentType>) {
	switch(source) {
	case MediaSegmentType::Unknown:
		return QStringLiteral("Unknown");
	case MediaSegmentType::Commercial:
		return QStringLiteral("Commercial");
	case MediaSegmentType::Preview:
		return QStringLiteral("Preview");
	case MediaSegmentType::Recap:
		return QStringLiteral("Recap");
	case MediaSegmentType::Outro:
		return QStringLiteral("Outro");
	case MediaSegmentType::Intro:
		return QStringLiteral("Intro");

	case MediaSegmentType::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
