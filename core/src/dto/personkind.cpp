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

#include <JellyfinQt/dto/personkind.h>

namespace Jellyfin {
namespace DTO {

PersonKindClass::PersonKindClass() {}

} // NS DTO

namespace Support {

using PersonKind = Jellyfin::DTO::PersonKind;

template <>
PersonKind fromJsonValue(const QJsonValue &source, convertType<PersonKind>) {
	if (!source.isString()) return PersonKind::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Unknown")) {
		return PersonKind::Unknown;
	}
	if (str == QStringLiteral("Actor")) {
		return PersonKind::Actor;
	}
	if (str == QStringLiteral("Director")) {
		return PersonKind::Director;
	}
	if (str == QStringLiteral("Composer")) {
		return PersonKind::Composer;
	}
	if (str == QStringLiteral("Writer")) {
		return PersonKind::Writer;
	}
	if (str == QStringLiteral("GuestStar")) {
		return PersonKind::GuestStar;
	}
	if (str == QStringLiteral("Producer")) {
		return PersonKind::Producer;
	}
	if (str == QStringLiteral("Conductor")) {
		return PersonKind::Conductor;
	}
	if (str == QStringLiteral("Lyricist")) {
		return PersonKind::Lyricist;
	}
	if (str == QStringLiteral("Arranger")) {
		return PersonKind::Arranger;
	}
	if (str == QStringLiteral("Engineer")) {
		return PersonKind::Engineer;
	}
	if (str == QStringLiteral("Mixer")) {
		return PersonKind::Mixer;
	}
	if (str == QStringLiteral("Remixer")) {
		return PersonKind::Remixer;
	}
	if (str == QStringLiteral("Creator")) {
		return PersonKind::Creator;
	}
	if (str == QStringLiteral("Artist")) {
		return PersonKind::Artist;
	}
	if (str == QStringLiteral("AlbumArtist")) {
		return PersonKind::AlbumArtist;
	}
	if (str == QStringLiteral("Author")) {
		return PersonKind::Author;
	}
	if (str == QStringLiteral("Illustrator")) {
		return PersonKind::Illustrator;
	}
	if (str == QStringLiteral("Penciller")) {
		return PersonKind::Penciller;
	}
	if (str == QStringLiteral("Inker")) {
		return PersonKind::Inker;
	}
	if (str == QStringLiteral("Colorist")) {
		return PersonKind::Colorist;
	}
	if (str == QStringLiteral("Letterer")) {
		return PersonKind::Letterer;
	}
	if (str == QStringLiteral("CoverArtist")) {
		return PersonKind::CoverArtist;
	}
	if (str == QStringLiteral("Editor")) {
		return PersonKind::Editor;
	}
	if (str == QStringLiteral("Translator")) {
		return PersonKind::Translator;
	}
	
	return PersonKind::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const PersonKind &source, convertType<PersonKind>) {
	switch(source) {
	case PersonKind::Unknown:
		return QStringLiteral("Unknown");
	case PersonKind::Actor:
		return QStringLiteral("Actor");
	case PersonKind::Director:
		return QStringLiteral("Director");
	case PersonKind::Composer:
		return QStringLiteral("Composer");
	case PersonKind::Writer:
		return QStringLiteral("Writer");
	case PersonKind::GuestStar:
		return QStringLiteral("GuestStar");
	case PersonKind::Producer:
		return QStringLiteral("Producer");
	case PersonKind::Conductor:
		return QStringLiteral("Conductor");
	case PersonKind::Lyricist:
		return QStringLiteral("Lyricist");
	case PersonKind::Arranger:
		return QStringLiteral("Arranger");
	case PersonKind::Engineer:
		return QStringLiteral("Engineer");
	case PersonKind::Mixer:
		return QStringLiteral("Mixer");
	case PersonKind::Remixer:
		return QStringLiteral("Remixer");
	case PersonKind::Creator:
		return QStringLiteral("Creator");
	case PersonKind::Artist:
		return QStringLiteral("Artist");
	case PersonKind::AlbumArtist:
		return QStringLiteral("AlbumArtist");
	case PersonKind::Author:
		return QStringLiteral("Author");
	case PersonKind::Illustrator:
		return QStringLiteral("Illustrator");
	case PersonKind::Penciller:
		return QStringLiteral("Penciller");
	case PersonKind::Inker:
		return QStringLiteral("Inker");
	case PersonKind::Colorist:
		return QStringLiteral("Colorist");
	case PersonKind::Letterer:
		return QStringLiteral("Letterer");
	case PersonKind::CoverArtist:
		return QStringLiteral("CoverArtist");
	case PersonKind::Editor:
		return QStringLiteral("Editor");
	case PersonKind::Translator:
		return QStringLiteral("Translator");

	case PersonKind::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
