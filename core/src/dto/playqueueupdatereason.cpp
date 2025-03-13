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

#include <JellyfinQt/dto/playqueueupdatereason.h>

namespace Jellyfin {
namespace DTO {

PlayQueueUpdateReasonClass::PlayQueueUpdateReasonClass() {}

} // NS DTO

namespace Support {

using PlayQueueUpdateReason = Jellyfin::DTO::PlayQueueUpdateReason;

template <>
PlayQueueUpdateReason fromJsonValue(const QJsonValue &source, convertType<PlayQueueUpdateReason>) {
	if (!source.isString()) return PlayQueueUpdateReason::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("NewPlaylist")) {
		return PlayQueueUpdateReason::NewPlaylist;
	}
	if (str == QStringLiteral("SetCurrentItem")) {
		return PlayQueueUpdateReason::SetCurrentItem;
	}
	if (str == QStringLiteral("RemoveItems")) {
		return PlayQueueUpdateReason::RemoveItems;
	}
	if (str == QStringLiteral("MoveItem")) {
		return PlayQueueUpdateReason::MoveItem;
	}
	if (str == QStringLiteral("Queue")) {
		return PlayQueueUpdateReason::Queue;
	}
	if (str == QStringLiteral("QueueNext")) {
		return PlayQueueUpdateReason::QueueNext;
	}
	if (str == QStringLiteral("NextItem")) {
		return PlayQueueUpdateReason::NextItem;
	}
	if (str == QStringLiteral("PreviousItem")) {
		return PlayQueueUpdateReason::PreviousItem;
	}
	if (str == QStringLiteral("RepeatMode")) {
		return PlayQueueUpdateReason::RepeatMode;
	}
	if (str == QStringLiteral("ShuffleMode")) {
		return PlayQueueUpdateReason::ShuffleMode;
	}
	
	return PlayQueueUpdateReason::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const PlayQueueUpdateReason &source, convertType<PlayQueueUpdateReason>) {
	switch(source) {
	case PlayQueueUpdateReason::NewPlaylist:
		return QStringLiteral("NewPlaylist");
	case PlayQueueUpdateReason::SetCurrentItem:
		return QStringLiteral("SetCurrentItem");
	case PlayQueueUpdateReason::RemoveItems:
		return QStringLiteral("RemoveItems");
	case PlayQueueUpdateReason::MoveItem:
		return QStringLiteral("MoveItem");
	case PlayQueueUpdateReason::Queue:
		return QStringLiteral("Queue");
	case PlayQueueUpdateReason::QueueNext:
		return QStringLiteral("QueueNext");
	case PlayQueueUpdateReason::NextItem:
		return QStringLiteral("NextItem");
	case PlayQueueUpdateReason::PreviousItem:
		return QStringLiteral("PreviousItem");
	case PlayQueueUpdateReason::RepeatMode:
		return QStringLiteral("RepeatMode");
	case PlayQueueUpdateReason::ShuffleMode:
		return QStringLiteral("ShuffleMode");

	case PlayQueueUpdateReason::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
