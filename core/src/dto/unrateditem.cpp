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

#include <JellyfinQt/dto/unrateditem.h>

namespace Jellyfin {
namespace DTO {

UnratedItemClass::UnratedItemClass() {}

} // NS DTO

namespace Support {

using UnratedItem = Jellyfin::DTO::UnratedItem;

template <>
UnratedItem fromJsonValue(const QJsonValue &source, convertType<UnratedItem>) {
	if (!source.isString()) return UnratedItem::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Movie")) {
		return UnratedItem::Movie;
	}
	if (str == QStringLiteral("Trailer")) {
		return UnratedItem::Trailer;
	}
	if (str == QStringLiteral("Series")) {
		return UnratedItem::Series;
	}
	if (str == QStringLiteral("Music")) {
		return UnratedItem::Music;
	}
	if (str == QStringLiteral("Book")) {
		return UnratedItem::Book;
	}
	if (str == QStringLiteral("LiveTvChannel")) {
		return UnratedItem::LiveTvChannel;
	}
	if (str == QStringLiteral("LiveTvProgram")) {
		return UnratedItem::LiveTvProgram;
	}
	if (str == QStringLiteral("ChannelContent")) {
		return UnratedItem::ChannelContent;
	}
	if (str == QStringLiteral("Other")) {
		return UnratedItem::Other;
	}
	
	return UnratedItem::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const UnratedItem &source, convertType<UnratedItem>) {
	switch(source) {
	case UnratedItem::Movie:
		return QStringLiteral("Movie");
	case UnratedItem::Trailer:
		return QStringLiteral("Trailer");
	case UnratedItem::Series:
		return QStringLiteral("Series");
	case UnratedItem::Music:
		return QStringLiteral("Music");
	case UnratedItem::Book:
		return QStringLiteral("Book");
	case UnratedItem::LiveTvChannel:
		return QStringLiteral("LiveTvChannel");
	case UnratedItem::LiveTvProgram:
		return QStringLiteral("LiveTvProgram");
	case UnratedItem::ChannelContent:
		return QStringLiteral("ChannelContent");
	case UnratedItem::Other:
		return QStringLiteral("Other");

	case UnratedItem::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
