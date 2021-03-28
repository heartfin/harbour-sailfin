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

#include <JellyfinQt/dto/channelmediacontenttype.h>

namespace Jellyfin {
namespace DTO {

ChannelMediaContentTypeClass::ChannelMediaContentTypeClass() {}

} // NS DTO

namespace Support {

using ChannelMediaContentType = Jellyfin::DTO::ChannelMediaContentType;

template <>
ChannelMediaContentType fromJsonValue(const QJsonValue &source, convertType<ChannelMediaContentType>) {
	if (!source.isString()) return ChannelMediaContentType::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Clip")) {
		return ChannelMediaContentType::Clip;
	}
	if (str == QStringLiteral("Podcast")) {
		return ChannelMediaContentType::Podcast;
	}
	if (str == QStringLiteral("Trailer")) {
		return ChannelMediaContentType::Trailer;
	}
	if (str == QStringLiteral("Movie")) {
		return ChannelMediaContentType::Movie;
	}
	if (str == QStringLiteral("Episode")) {
		return ChannelMediaContentType::Episode;
	}
	if (str == QStringLiteral("Song")) {
		return ChannelMediaContentType::Song;
	}
	if (str == QStringLiteral("MovieExtra")) {
		return ChannelMediaContentType::MovieExtra;
	}
	if (str == QStringLiteral("TvExtra")) {
		return ChannelMediaContentType::TvExtra;
	}
	
	return ChannelMediaContentType::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const ChannelMediaContentType &source, convertType<ChannelMediaContentType>) {
	switch(source) {
	case ChannelMediaContentType::Clip:
		return QStringLiteral("Clip");
	case ChannelMediaContentType::Podcast:
		return QStringLiteral("Podcast");
	case ChannelMediaContentType::Trailer:
		return QStringLiteral("Trailer");
	case ChannelMediaContentType::Movie:
		return QStringLiteral("Movie");
	case ChannelMediaContentType::Episode:
		return QStringLiteral("Episode");
	case ChannelMediaContentType::Song:
		return QStringLiteral("Song");
	case ChannelMediaContentType::MovieExtra:
		return QStringLiteral("MovieExtra");
	case ChannelMediaContentType::TvExtra:
		return QStringLiteral("TvExtra");

	case ChannelMediaContentType::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
