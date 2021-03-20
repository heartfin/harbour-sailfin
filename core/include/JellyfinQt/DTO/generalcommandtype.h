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

#ifndef JELLYFIN_DTO_GENERALCOMMANDTYPE_H
#define JELLYFIN_DTO_GENERALCOMMANDTYPE_H

#include <QJsonValue>
#include <QObject>
#include <QString>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {

class GeneralCommandTypeClass {
	Q_GADGET
public:
	enum Value {
		EnumNotSet,
		MoveUp,
		MoveDown,
		MoveLeft,
		MoveRight,
		PageUp,
		PageDown,
		PreviousLetter,
		NextLetter,
		ToggleOsd,
		ToggleContextMenu,
		Select,
		Back,
		TakeScreenshot,
		SendKey,
		SendString,
		GoHome,
		GoToSettings,
		VolumeUp,
		VolumeDown,
		Mute,
		Unmute,
		ToggleMute,
		SetVolume,
		SetAudioStreamIndex,
		SetSubtitleStreamIndex,
		ToggleFullscreen,
		DisplayContent,
		GoToSearch,
		DisplayMessage,
		SetRepeatMode,
		ChannelUp,
		ChannelDown,
		Guide,
		ToggleStats,
		PlayMediaSource,
		PlayTrailers,
		SetShuffleQueue,
		PlayState,
		PlayNext,
		ToggleOsdMenu,
		Play,
	};
	Q_ENUM(Value)
private:
	explicit GeneralCommandTypeClass();
};

typedef GeneralCommandTypeClass::Value GeneralCommandType;

} // NS DTO

namespace Support {

using GeneralCommandType = Jellyfin::DTO::GeneralCommandType;
using GeneralCommandTypeClass = Jellyfin::DTO::GeneralCommandTypeClass;

template <>
GeneralCommandType fromJsonValue<GeneralCommandType>(const QJsonValue &source) {
	if (!source.isString()) return GeneralCommandTypeClass::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("MoveUp")) {
		return GeneralCommandTypeClass::MoveUp;
	}
	if (str == QStringLiteral("MoveDown")) {
		return GeneralCommandTypeClass::MoveDown;
	}
	if (str == QStringLiteral("MoveLeft")) {
		return GeneralCommandTypeClass::MoveLeft;
	}
	if (str == QStringLiteral("MoveRight")) {
		return GeneralCommandTypeClass::MoveRight;
	}
	if (str == QStringLiteral("PageUp")) {
		return GeneralCommandTypeClass::PageUp;
	}
	if (str == QStringLiteral("PageDown")) {
		return GeneralCommandTypeClass::PageDown;
	}
	if (str == QStringLiteral("PreviousLetter")) {
		return GeneralCommandTypeClass::PreviousLetter;
	}
	if (str == QStringLiteral("NextLetter")) {
		return GeneralCommandTypeClass::NextLetter;
	}
	if (str == QStringLiteral("ToggleOsd")) {
		return GeneralCommandTypeClass::ToggleOsd;
	}
	if (str == QStringLiteral("ToggleContextMenu")) {
		return GeneralCommandTypeClass::ToggleContextMenu;
	}
	if (str == QStringLiteral("Select")) {
		return GeneralCommandTypeClass::Select;
	}
	if (str == QStringLiteral("Back")) {
		return GeneralCommandTypeClass::Back;
	}
	if (str == QStringLiteral("TakeScreenshot")) {
		return GeneralCommandTypeClass::TakeScreenshot;
	}
	if (str == QStringLiteral("SendKey")) {
		return GeneralCommandTypeClass::SendKey;
	}
	if (str == QStringLiteral("SendString")) {
		return GeneralCommandTypeClass::SendString;
	}
	if (str == QStringLiteral("GoHome")) {
		return GeneralCommandTypeClass::GoHome;
	}
	if (str == QStringLiteral("GoToSettings")) {
		return GeneralCommandTypeClass::GoToSettings;
	}
	if (str == QStringLiteral("VolumeUp")) {
		return GeneralCommandTypeClass::VolumeUp;
	}
	if (str == QStringLiteral("VolumeDown")) {
		return GeneralCommandTypeClass::VolumeDown;
	}
	if (str == QStringLiteral("Mute")) {
		return GeneralCommandTypeClass::Mute;
	}
	if (str == QStringLiteral("Unmute")) {
		return GeneralCommandTypeClass::Unmute;
	}
	if (str == QStringLiteral("ToggleMute")) {
		return GeneralCommandTypeClass::ToggleMute;
	}
	if (str == QStringLiteral("SetVolume")) {
		return GeneralCommandTypeClass::SetVolume;
	}
	if (str == QStringLiteral("SetAudioStreamIndex")) {
		return GeneralCommandTypeClass::SetAudioStreamIndex;
	}
	if (str == QStringLiteral("SetSubtitleStreamIndex")) {
		return GeneralCommandTypeClass::SetSubtitleStreamIndex;
	}
	if (str == QStringLiteral("ToggleFullscreen")) {
		return GeneralCommandTypeClass::ToggleFullscreen;
	}
	if (str == QStringLiteral("DisplayContent")) {
		return GeneralCommandTypeClass::DisplayContent;
	}
	if (str == QStringLiteral("GoToSearch")) {
		return GeneralCommandTypeClass::GoToSearch;
	}
	if (str == QStringLiteral("DisplayMessage")) {
		return GeneralCommandTypeClass::DisplayMessage;
	}
	if (str == QStringLiteral("SetRepeatMode")) {
		return GeneralCommandTypeClass::SetRepeatMode;
	}
	if (str == QStringLiteral("ChannelUp")) {
		return GeneralCommandTypeClass::ChannelUp;
	}
	if (str == QStringLiteral("ChannelDown")) {
		return GeneralCommandTypeClass::ChannelDown;
	}
	if (str == QStringLiteral("Guide")) {
		return GeneralCommandTypeClass::Guide;
	}
	if (str == QStringLiteral("ToggleStats")) {
		return GeneralCommandTypeClass::ToggleStats;
	}
	if (str == QStringLiteral("PlayMediaSource")) {
		return GeneralCommandTypeClass::PlayMediaSource;
	}
	if (str == QStringLiteral("PlayTrailers")) {
		return GeneralCommandTypeClass::PlayTrailers;
	}
	if (str == QStringLiteral("SetShuffleQueue")) {
		return GeneralCommandTypeClass::SetShuffleQueue;
	}
	if (str == QStringLiteral("PlayState")) {
		return GeneralCommandTypeClass::PlayState;
	}
	if (str == QStringLiteral("PlayNext")) {
		return GeneralCommandTypeClass::PlayNext;
	}
	if (str == QStringLiteral("ToggleOsdMenu")) {
		return GeneralCommandTypeClass::ToggleOsdMenu;
	}
	if (str == QStringLiteral("Play")) {
		return GeneralCommandTypeClass::Play;
	}
	
	return GeneralCommandTypeClass::EnumNotSet;
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_GENERALCOMMANDTYPE_H
