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

#include <JellyfinQt/dto/playbackrequesttype.h>

namespace Jellyfin {
namespace DTO {

PlaybackRequestTypeClass::PlaybackRequestTypeClass() {}

} // NS DTO

namespace Support {

using PlaybackRequestType = Jellyfin::DTO::PlaybackRequestType;

template <>
PlaybackRequestType fromJsonValue(const QJsonValue &source, convertType<PlaybackRequestType>) {
	if (!source.isString()) return PlaybackRequestType::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Play")) {
		return PlaybackRequestType::Play;
	}
	if (str == QStringLiteral("SetPlaylistItem")) {
		return PlaybackRequestType::SetPlaylistItem;
	}
	if (str == QStringLiteral("RemoveFromPlaylist")) {
		return PlaybackRequestType::RemoveFromPlaylist;
	}
	if (str == QStringLiteral("MovePlaylistItem")) {
		return PlaybackRequestType::MovePlaylistItem;
	}
	if (str == QStringLiteral("Queue")) {
		return PlaybackRequestType::Queue;
	}
	if (str == QStringLiteral("Unpause")) {
		return PlaybackRequestType::Unpause;
	}
	if (str == QStringLiteral("Pause")) {
		return PlaybackRequestType::Pause;
	}
	if (str == QStringLiteral("Stop")) {
		return PlaybackRequestType::Stop;
	}
	if (str == QStringLiteral("Seek")) {
		return PlaybackRequestType::Seek;
	}
	if (str == QStringLiteral("Buffer")) {
		return PlaybackRequestType::Buffer;
	}
	if (str == QStringLiteral("Ready")) {
		return PlaybackRequestType::Ready;
	}
	if (str == QStringLiteral("NextItem")) {
		return PlaybackRequestType::NextItem;
	}
	if (str == QStringLiteral("PreviousItem")) {
		return PlaybackRequestType::PreviousItem;
	}
	if (str == QStringLiteral("SetRepeatMode")) {
		return PlaybackRequestType::SetRepeatMode;
	}
	if (str == QStringLiteral("SetShuffleMode")) {
		return PlaybackRequestType::SetShuffleMode;
	}
	if (str == QStringLiteral("Ping")) {
		return PlaybackRequestType::Ping;
	}
	if (str == QStringLiteral("IgnoreWait")) {
		return PlaybackRequestType::IgnoreWait;
	}
	
	return PlaybackRequestType::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const PlaybackRequestType &source, convertType<PlaybackRequestType>) {
	switch(source) {
	case PlaybackRequestType::Play:
		return QStringLiteral("Play");
	case PlaybackRequestType::SetPlaylistItem:
		return QStringLiteral("SetPlaylistItem");
	case PlaybackRequestType::RemoveFromPlaylist:
		return QStringLiteral("RemoveFromPlaylist");
	case PlaybackRequestType::MovePlaylistItem:
		return QStringLiteral("MovePlaylistItem");
	case PlaybackRequestType::Queue:
		return QStringLiteral("Queue");
	case PlaybackRequestType::Unpause:
		return QStringLiteral("Unpause");
	case PlaybackRequestType::Pause:
		return QStringLiteral("Pause");
	case PlaybackRequestType::Stop:
		return QStringLiteral("Stop");
	case PlaybackRequestType::Seek:
		return QStringLiteral("Seek");
	case PlaybackRequestType::Buffer:
		return QStringLiteral("Buffer");
	case PlaybackRequestType::Ready:
		return QStringLiteral("Ready");
	case PlaybackRequestType::NextItem:
		return QStringLiteral("NextItem");
	case PlaybackRequestType::PreviousItem:
		return QStringLiteral("PreviousItem");
	case PlaybackRequestType::SetRepeatMode:
		return QStringLiteral("SetRepeatMode");
	case PlaybackRequestType::SetShuffleMode:
		return QStringLiteral("SetShuffleMode");
	case PlaybackRequestType::Ping:
		return QStringLiteral("Ping");
	case PlaybackRequestType::IgnoreWait:
		return QStringLiteral("IgnoreWait");

	case PlaybackRequestType::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
