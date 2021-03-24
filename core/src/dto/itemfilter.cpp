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

#include <JellyfinQt/dto/itemfilter.h>

namespace Jellyfin {
namespace DTO {

ItemFilterClass::ItemFilterClass() {}


} // NS DTO

namespace Support {

using ItemFilter = Jellyfin::DTO::ItemFilter;

template <>
ItemFilter fromJsonValue<ItemFilter>(const QJsonValue &source) {
	if (!source.isString()) return ItemFilter::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("IsFolder")) {
		return ItemFilter::IsFolder;
	}
	if (str == QStringLiteral("IsNotFolder")) {
		return ItemFilter::IsNotFolder;
	}
	if (str == QStringLiteral("IsUnplayed")) {
		return ItemFilter::IsUnplayed;
	}
	if (str == QStringLiteral("IsPlayed")) {
		return ItemFilter::IsPlayed;
	}
	if (str == QStringLiteral("IsFavorite")) {
		return ItemFilter::IsFavorite;
	}
	if (str == QStringLiteral("IsResumable")) {
		return ItemFilter::IsResumable;
	}
	if (str == QStringLiteral("Likes")) {
		return ItemFilter::Likes;
	}
	if (str == QStringLiteral("Dislikes")) {
		return ItemFilter::Dislikes;
	}
	if (str == QStringLiteral("IsFavoriteOrLikes")) {
		return ItemFilter::IsFavoriteOrLikes;
	}
	
	return ItemFilter::EnumNotSet;
}

} // NS DTO
} // NS Jellyfin
