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

#ifndef JELLYFIN_DTO_PROGRAMAUDIO_H
#define JELLYFIN_DTO_PROGRAMAUDIO_H

#include <QJsonValue>
#include <QObject>
#include <QString>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {

class ProgramAudioClass {
	Q_GADGET
public:
	enum Value {
		EnumNotSet,
		Mono,
		Stereo,
		Dolby,
		DolbyDigital,
		Thx,
		Atmos,
	};
	Q_ENUM(Value)
private:
	explicit ProgramAudioClass();
};

typedef ProgramAudioClass::Value ProgramAudio;

} // NS DTO

namespace Support {

using ProgramAudio = Jellyfin::DTO::ProgramAudio;
using ProgramAudioClass = Jellyfin::DTO::ProgramAudioClass;

template <>
ProgramAudio fromJsonValue<ProgramAudio>(const QJsonValue &source) {
	if (!source.isString()) return ProgramAudioClass::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Mono")) {
		return ProgramAudioClass::Mono;
	}
	if (str == QStringLiteral("Stereo")) {
		return ProgramAudioClass::Stereo;
	}
	if (str == QStringLiteral("Dolby")) {
		return ProgramAudioClass::Dolby;
	}
	if (str == QStringLiteral("DolbyDigital")) {
		return ProgramAudioClass::DolbyDigital;
	}
	if (str == QStringLiteral("Thx")) {
		return ProgramAudioClass::Thx;
	}
	if (str == QStringLiteral("Atmos")) {
		return ProgramAudioClass::Atmos;
	}
	
	return ProgramAudioClass::EnumNotSet;
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PROGRAMAUDIO_H
