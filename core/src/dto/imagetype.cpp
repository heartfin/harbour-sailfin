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

#include <JellyfinQt/dto/imagetype.h>

namespace Jellyfin {
namespace DTO {

ImageTypeClass::ImageTypeClass() {}


} // NS DTO

namespace Support {

using ImageType = Jellyfin::DTO::ImageType;

template <>
ImageType fromJsonValue<ImageType>(const QJsonValue &source) {
	if (!source.isString()) return ImageType::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Primary")) {
		return ImageType::Primary;
	}
	if (str == QStringLiteral("Art")) {
		return ImageType::Art;
	}
	if (str == QStringLiteral("Backdrop")) {
		return ImageType::Backdrop;
	}
	if (str == QStringLiteral("Banner")) {
		return ImageType::Banner;
	}
	if (str == QStringLiteral("Logo")) {
		return ImageType::Logo;
	}
	if (str == QStringLiteral("Thumb")) {
		return ImageType::Thumb;
	}
	if (str == QStringLiteral("Disc")) {
		return ImageType::Disc;
	}
	if (str == QStringLiteral("Box")) {
		return ImageType::Box;
	}
	if (str == QStringLiteral("Screenshot")) {
		return ImageType::Screenshot;
	}
	if (str == QStringLiteral("Menu")) {
		return ImageType::Menu;
	}
	if (str == QStringLiteral("Chapter")) {
		return ImageType::Chapter;
	}
	if (str == QStringLiteral("BoxRear")) {
		return ImageType::BoxRear;
	}
	if (str == QStringLiteral("Profile")) {
		return ImageType::Profile;
	}
	
	return ImageType::EnumNotSet;
}

} // NS DTO
} // NS Jellyfin
