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

#include <JellyfinQt/DTO/generalcommandtype.h>

namespace Jellyfin {
namespace DTO {

GeneralCommandTypeClass::GeneralCommandTypeClass() {}


} // NS DTO

namespace Support {

using GeneralCommandType = Jellyfin::DTO::GeneralCommandType;

template <>
GeneralCommandType fromJsonValue<GeneralCommandType>(const QJsonValue &source) {
	if (!source.isString()) return GeneralCommandType::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("MoveUp")) {
		return GeneralCommandType::MoveUp;
	}
	if (str == QStringLiteral("MoveDown")) {
		return GeneralCommandType::MoveDown;
	}
	if (str == QStringLiteral("MoveLeft")) {
		return GeneralCommandType::MoveLeft;
	}
	if (str == QStringLiteral("MoveRight")) {
		return GeneralCommandType::MoveRight;
	}
	if (str == QStringLiteral("PageUp")) {
		return GeneralCommandType::PageUp;
	}
	if (str == QStringLiteral("PageDown")) {
		return GeneralCommandType::PageDown;
	}
	if (str == QStringLiteral("PreviousLetter")) {
		return GeneralCommandType::PreviousLetter;
	}
	if (str == QStringLiteral("NextLetter")) {
		return GeneralCommandType::NextLetter;
	}
	if (str == QStringLiteral("ToggleOsd")) {
		return GeneralCommandType::ToggleOsd;
	}
	if (str == QStringLiteral("ToggleContextMenu")) {
		return GeneralCommandType::ToggleContextMenu;
	}
	if (str == QStringLiteral("Select")) {
		return GeneralCommandType::Select;
	}
	if (str == QStringLiteral("Back")) {
		return GeneralCommandType::Back;
	}
	if (str == QStringLiteral("TakeScreenshot")) {
		return GeneralCommandType::TakeScreenshot;
	}
	if (str == QStringLiteral("SendKey")) {
		return GeneralCommandType::SendKey;
	}
	if (str == QStringLiteral("SendString")) {
		return GeneralCommandType::SendString;
	}
	if (str == QStringLiteral("GoHome")) {
		return GeneralCommandType::GoHome;
	}
	if (str == QStringLiteral("GoToSettings")) {
		return GeneralCommandType::GoToSettings;
	}
	if (str == QStringLiteral("VolumeUp")) {
		return GeneralCommandType::VolumeUp;
	}
	if (str == QStringLiteral("VolumeDown")) {
		return GeneralCommandType::VolumeDown;
	}
	if (str == QStringLiteral("Mute")) {
		return GeneralCommandType::Mute;
	}
	if (str == QStringLiteral("Unmute")) {
		return GeneralCommandType::Unmute;
	}
	if (str == QStringLiteral("ToggleMute")) {
		return GeneralCommandType::ToggleMute;
	}
	if (str == QStringLiteral("SetVolume")) {
		return GeneralCommandType::SetVolume;
	}
	if (str == QStringLiteral("SetAudioStreamIndex")) {
		return GeneralCommandType::SetAudioStreamIndex;
	}
	if (str == QStringLiteral("SetSubtitleStreamIndex")) {
		return GeneralCommandType::SetSubtitleStreamIndex;
	}
	if (str == QStringLiteral("ToggleFullscreen")) {
		return GeneralCommandType::ToggleFullscreen;
	}
	if (str == QStringLiteral("DisplayContent")) {
		return GeneralCommandType::DisplayContent;
	}
	if (str == QStringLiteral("GoToSearch")) {
		return GeneralCommandType::GoToSearch;
	}
	if (str == QStringLiteral("DisplayMessage")) {
		return GeneralCommandType::DisplayMessage;
	}
	if (str == QStringLiteral("SetRepeatMode")) {
		return GeneralCommandType::SetRepeatMode;
	}
	if (str == QStringLiteral("ChannelUp")) {
		return GeneralCommandType::ChannelUp;
	}
	if (str == QStringLiteral("ChannelDown")) {
		return GeneralCommandType::ChannelDown;
	}
	if (str == QStringLiteral("Guide")) {
		return GeneralCommandType::Guide;
	}
	if (str == QStringLiteral("ToggleStats")) {
		return GeneralCommandType::ToggleStats;
	}
	if (str == QStringLiteral("PlayMediaSource")) {
		return GeneralCommandType::PlayMediaSource;
	}
	if (str == QStringLiteral("PlayTrailers")) {
		return GeneralCommandType::PlayTrailers;
	}
	if (str == QStringLiteral("SetShuffleQueue")) {
		return GeneralCommandType::SetShuffleQueue;
	}
	if (str == QStringLiteral("PlayState")) {
		return GeneralCommandType::PlayState;
	}
	if (str == QStringLiteral("PlayNext")) {
		return GeneralCommandType::PlayNext;
	}
	if (str == QStringLiteral("ToggleOsdMenu")) {
		return GeneralCommandType::ToggleOsdMenu;
	}
	if (str == QStringLiteral("Play")) {
		return GeneralCommandType::Play;
	}
	
	return GeneralCommandType::EnumNotSet;
}

} // NS Jellyfin
} // NS DTO
