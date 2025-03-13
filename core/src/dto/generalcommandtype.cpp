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

#include <JellyfinQt/dto/generalcommandtype.h>

namespace Jellyfin {
namespace DTO {

GeneralCommandTypeClass::GeneralCommandTypeClass() {}

} // NS DTO

namespace Support {

using GeneralCommandType = Jellyfin::DTO::GeneralCommandType;

template <>
GeneralCommandType fromJsonValue(const QJsonValue &source, convertType<GeneralCommandType>) {
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
	if (str == QStringLiteral("SetMaxStreamingBitrate")) {
		return GeneralCommandType::SetMaxStreamingBitrate;
	}
	if (str == QStringLiteral("SetPlaybackOrder")) {
		return GeneralCommandType::SetPlaybackOrder;
	}
	
	return GeneralCommandType::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const GeneralCommandType &source, convertType<GeneralCommandType>) {
	switch(source) {
	case GeneralCommandType::MoveUp:
		return QStringLiteral("MoveUp");
	case GeneralCommandType::MoveDown:
		return QStringLiteral("MoveDown");
	case GeneralCommandType::MoveLeft:
		return QStringLiteral("MoveLeft");
	case GeneralCommandType::MoveRight:
		return QStringLiteral("MoveRight");
	case GeneralCommandType::PageUp:
		return QStringLiteral("PageUp");
	case GeneralCommandType::PageDown:
		return QStringLiteral("PageDown");
	case GeneralCommandType::PreviousLetter:
		return QStringLiteral("PreviousLetter");
	case GeneralCommandType::NextLetter:
		return QStringLiteral("NextLetter");
	case GeneralCommandType::ToggleOsd:
		return QStringLiteral("ToggleOsd");
	case GeneralCommandType::ToggleContextMenu:
		return QStringLiteral("ToggleContextMenu");
	case GeneralCommandType::Select:
		return QStringLiteral("Select");
	case GeneralCommandType::Back:
		return QStringLiteral("Back");
	case GeneralCommandType::TakeScreenshot:
		return QStringLiteral("TakeScreenshot");
	case GeneralCommandType::SendKey:
		return QStringLiteral("SendKey");
	case GeneralCommandType::SendString:
		return QStringLiteral("SendString");
	case GeneralCommandType::GoHome:
		return QStringLiteral("GoHome");
	case GeneralCommandType::GoToSettings:
		return QStringLiteral("GoToSettings");
	case GeneralCommandType::VolumeUp:
		return QStringLiteral("VolumeUp");
	case GeneralCommandType::VolumeDown:
		return QStringLiteral("VolumeDown");
	case GeneralCommandType::Mute:
		return QStringLiteral("Mute");
	case GeneralCommandType::Unmute:
		return QStringLiteral("Unmute");
	case GeneralCommandType::ToggleMute:
		return QStringLiteral("ToggleMute");
	case GeneralCommandType::SetVolume:
		return QStringLiteral("SetVolume");
	case GeneralCommandType::SetAudioStreamIndex:
		return QStringLiteral("SetAudioStreamIndex");
	case GeneralCommandType::SetSubtitleStreamIndex:
		return QStringLiteral("SetSubtitleStreamIndex");
	case GeneralCommandType::ToggleFullscreen:
		return QStringLiteral("ToggleFullscreen");
	case GeneralCommandType::DisplayContent:
		return QStringLiteral("DisplayContent");
	case GeneralCommandType::GoToSearch:
		return QStringLiteral("GoToSearch");
	case GeneralCommandType::DisplayMessage:
		return QStringLiteral("DisplayMessage");
	case GeneralCommandType::SetRepeatMode:
		return QStringLiteral("SetRepeatMode");
	case GeneralCommandType::ChannelUp:
		return QStringLiteral("ChannelUp");
	case GeneralCommandType::ChannelDown:
		return QStringLiteral("ChannelDown");
	case GeneralCommandType::Guide:
		return QStringLiteral("Guide");
	case GeneralCommandType::ToggleStats:
		return QStringLiteral("ToggleStats");
	case GeneralCommandType::PlayMediaSource:
		return QStringLiteral("PlayMediaSource");
	case GeneralCommandType::PlayTrailers:
		return QStringLiteral("PlayTrailers");
	case GeneralCommandType::SetShuffleQueue:
		return QStringLiteral("SetShuffleQueue");
	case GeneralCommandType::PlayState:
		return QStringLiteral("PlayState");
	case GeneralCommandType::PlayNext:
		return QStringLiteral("PlayNext");
	case GeneralCommandType::ToggleOsdMenu:
		return QStringLiteral("ToggleOsdMenu");
	case GeneralCommandType::Play:
		return QStringLiteral("Play");
	case GeneralCommandType::SetMaxStreamingBitrate:
		return QStringLiteral("SetMaxStreamingBitrate");
	case GeneralCommandType::SetPlaybackOrder:
		return QStringLiteral("SetPlaybackOrder");

	case GeneralCommandType::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
