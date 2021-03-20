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

#ifndef JELLYFIN_DTO_IMAGETYPE_H
#define JELLYFIN_DTO_IMAGETYPE_H

#include <QJsonValue>
#include <QObject>
#include <QString>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {

class ImageTypeClass {
	Q_GADGET
public:
	enum Value {
		EnumNotSet,
		Primary,
		Art,
		Backdrop,
		Banner,
		Logo,
		Thumb,
		Disc,
		Box,
		Screenshot,
		Menu,
		Chapter,
		BoxRear,
		Profile,
	};
	Q_ENUM(Value)
private:
	explicit ImageTypeClass();
};

typedef ImageTypeClass::Value ImageType;

} // NS DTO

namespace Support {

using ImageType = Jellyfin::DTO::ImageType;
using ImageTypeClass = Jellyfin::DTO::ImageTypeClass;

template <>
ImageType fromJsonValue<ImageType>(const QJsonValue &source) {
	if (!source.isString()) return ImageTypeClass::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Primary")) {
		return ImageTypeClass::Primary;
	}
	if (str == QStringLiteral("Art")) {
		return ImageTypeClass::Art;
	}
	if (str == QStringLiteral("Backdrop")) {
		return ImageTypeClass::Backdrop;
	}
	if (str == QStringLiteral("Banner")) {
		return ImageTypeClass::Banner;
	}
	if (str == QStringLiteral("Logo")) {
		return ImageTypeClass::Logo;
	}
	if (str == QStringLiteral("Thumb")) {
		return ImageTypeClass::Thumb;
	}
	if (str == QStringLiteral("Disc")) {
		return ImageTypeClass::Disc;
	}
	if (str == QStringLiteral("Box")) {
		return ImageTypeClass::Box;
	}
	if (str == QStringLiteral("Screenshot")) {
		return ImageTypeClass::Screenshot;
	}
	if (str == QStringLiteral("Menu")) {
		return ImageTypeClass::Menu;
	}
	if (str == QStringLiteral("Chapter")) {
		return ImageTypeClass::Chapter;
	}
	if (str == QStringLiteral("BoxRear")) {
		return ImageTypeClass::BoxRear;
	}
	if (str == QStringLiteral("Profile")) {
		return ImageTypeClass::Profile;
	}
	
	return ImageTypeClass::EnumNotSet;
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_IMAGETYPE_H
