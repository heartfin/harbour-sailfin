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

#include <JellyfinQt/dto/groupupdatetype.h>

namespace Jellyfin {
namespace DTO {

GroupUpdateTypeClass::GroupUpdateTypeClass() {}

} // NS DTO

namespace Support {

using GroupUpdateType = Jellyfin::DTO::GroupUpdateType;

template <>
GroupUpdateType fromJsonValue(const QJsonValue &source, convertType<GroupUpdateType>) {
	if (!source.isString()) return GroupUpdateType::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("UserJoined")) {
		return GroupUpdateType::UserJoined;
	}
	if (str == QStringLiteral("UserLeft")) {
		return GroupUpdateType::UserLeft;
	}
	if (str == QStringLiteral("GroupJoined")) {
		return GroupUpdateType::GroupJoined;
	}
	if (str == QStringLiteral("GroupLeft")) {
		return GroupUpdateType::GroupLeft;
	}
	if (str == QStringLiteral("StateUpdate")) {
		return GroupUpdateType::StateUpdate;
	}
	if (str == QStringLiteral("PlayQueue")) {
		return GroupUpdateType::PlayQueue;
	}
	if (str == QStringLiteral("NotInGroup")) {
		return GroupUpdateType::NotInGroup;
	}
	if (str == QStringLiteral("GroupDoesNotExist")) {
		return GroupUpdateType::GroupDoesNotExist;
	}
	if (str == QStringLiteral("CreateGroupDenied")) {
		return GroupUpdateType::CreateGroupDenied;
	}
	if (str == QStringLiteral("JoinGroupDenied")) {
		return GroupUpdateType::JoinGroupDenied;
	}
	if (str == QStringLiteral("LibraryAccessDenied")) {
		return GroupUpdateType::LibraryAccessDenied;
	}
	
	return GroupUpdateType::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const GroupUpdateType &source, convertType<GroupUpdateType>) {
	switch(source) {
	case GroupUpdateType::UserJoined:
		return QStringLiteral("UserJoined");
	case GroupUpdateType::UserLeft:
		return QStringLiteral("UserLeft");
	case GroupUpdateType::GroupJoined:
		return QStringLiteral("GroupJoined");
	case GroupUpdateType::GroupLeft:
		return QStringLiteral("GroupLeft");
	case GroupUpdateType::StateUpdate:
		return QStringLiteral("StateUpdate");
	case GroupUpdateType::PlayQueue:
		return QStringLiteral("PlayQueue");
	case GroupUpdateType::NotInGroup:
		return QStringLiteral("NotInGroup");
	case GroupUpdateType::GroupDoesNotExist:
		return QStringLiteral("GroupDoesNotExist");
	case GroupUpdateType::CreateGroupDenied:
		return QStringLiteral("CreateGroupDenied");
	case GroupUpdateType::JoinGroupDenied:
		return QStringLiteral("JoinGroupDenied");
	case GroupUpdateType::LibraryAccessDenied:
		return QStringLiteral("LibraryAccessDenied");

	case GroupUpdateType::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
