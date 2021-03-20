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

#ifndef JELLYFIN_DTO_PLAYCOMMAND_H
#define JELLYFIN_DTO_PLAYCOMMAND_H

#include <QJsonValue>
#include <QObject>
#include <QString>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {

class PlayCommandClass {
	Q_GADGET
public:
	enum Value {
		EnumNotSet,
		PlayNow,
		PlayNext,
		PlayLast,
		PlayInstantMix,
		PlayShuffle,
	};
	Q_ENUM(Value)
private:
	explicit PlayCommandClass();
};

typedef PlayCommandClass::Value PlayCommand;

} // NS DTO

namespace Support {

using PlayCommand = Jellyfin::DTO::PlayCommand;
using PlayCommandClass = Jellyfin::DTO::PlayCommandClass;

template <>
PlayCommand fromJsonValue<PlayCommand>(const QJsonValue &source) {
	if (!source.isString()) return PlayCommandClass::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("PlayNow")) {
		return PlayCommandClass::PlayNow;
	}
	if (str == QStringLiteral("PlayNext")) {
		return PlayCommandClass::PlayNext;
	}
	if (str == QStringLiteral("PlayLast")) {
		return PlayCommandClass::PlayLast;
	}
	if (str == QStringLiteral("PlayInstantMix")) {
		return PlayCommandClass::PlayInstantMix;
	}
	if (str == QStringLiteral("PlayShuffle")) {
		return PlayCommandClass::PlayShuffle;
	}
	
	return PlayCommandClass::EnumNotSet;
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PLAYCOMMAND_H
