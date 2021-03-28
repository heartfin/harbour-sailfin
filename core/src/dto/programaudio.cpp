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

#include <JellyfinQt/dto/programaudio.h>

namespace Jellyfin {
namespace DTO {

ProgramAudioClass::ProgramAudioClass() {}

} // NS DTO

namespace Support {

using ProgramAudio = Jellyfin::DTO::ProgramAudio;

template <>
ProgramAudio fromJsonValue(const QJsonValue &source, convertType<ProgramAudio>) {
	if (!source.isString()) return ProgramAudio::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Mono")) {
		return ProgramAudio::Mono;
	}
	if (str == QStringLiteral("Stereo")) {
		return ProgramAudio::Stereo;
	}
	if (str == QStringLiteral("Dolby")) {
		return ProgramAudio::Dolby;
	}
	if (str == QStringLiteral("DolbyDigital")) {
		return ProgramAudio::DolbyDigital;
	}
	if (str == QStringLiteral("Thx")) {
		return ProgramAudio::Thx;
	}
	if (str == QStringLiteral("Atmos")) {
		return ProgramAudio::Atmos;
	}
	
	return ProgramAudio::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const ProgramAudio &source, convertType<ProgramAudio>) {
	switch(source) {
	case ProgramAudio::Mono:
		return QStringLiteral("Mono");
	case ProgramAudio::Stereo:
		return QStringLiteral("Stereo");
	case ProgramAudio::Dolby:
		return QStringLiteral("Dolby");
	case ProgramAudio::DolbyDigital:
		return QStringLiteral("DolbyDigital");
	case ProgramAudio::Thx:
		return QStringLiteral("Thx");
	case ProgramAudio::Atmos:
		return QStringLiteral("Atmos");

	case ProgramAudio::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
