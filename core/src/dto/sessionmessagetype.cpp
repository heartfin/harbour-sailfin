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

#include <JellyfinQt/dto/sessionmessagetype.h>

namespace Jellyfin {
namespace DTO {

SessionMessageTypeClass::SessionMessageTypeClass() {}

} // NS DTO

namespace Support {

using SessionMessageType = Jellyfin::DTO::SessionMessageType;

template <>
SessionMessageType fromJsonValue(const QJsonValue &source, convertType<SessionMessageType>) {
	if (!source.isString()) return SessionMessageType::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("ForceKeepAlive")) {
		return SessionMessageType::ForceKeepAlive;
	}
	if (str == QStringLiteral("GeneralCommand")) {
		return SessionMessageType::GeneralCommand;
	}
	if (str == QStringLiteral("UserDataChanged")) {
		return SessionMessageType::UserDataChanged;
	}
	if (str == QStringLiteral("Sessions")) {
		return SessionMessageType::Sessions;
	}
	if (str == QStringLiteral("Play")) {
		return SessionMessageType::Play;
	}
	if (str == QStringLiteral("SyncPlayCommand")) {
		return SessionMessageType::SyncPlayCommand;
	}
	if (str == QStringLiteral("SyncPlayGroupUpdate")) {
		return SessionMessageType::SyncPlayGroupUpdate;
	}
	if (str == QStringLiteral("Playstate")) {
		return SessionMessageType::Playstate;
	}
	if (str == QStringLiteral("RestartRequired")) {
		return SessionMessageType::RestartRequired;
	}
	if (str == QStringLiteral("ServerShuttingDown")) {
		return SessionMessageType::ServerShuttingDown;
	}
	if (str == QStringLiteral("ServerRestarting")) {
		return SessionMessageType::ServerRestarting;
	}
	if (str == QStringLiteral("LibraryChanged")) {
		return SessionMessageType::LibraryChanged;
	}
	if (str == QStringLiteral("UserDeleted")) {
		return SessionMessageType::UserDeleted;
	}
	if (str == QStringLiteral("UserUpdated")) {
		return SessionMessageType::UserUpdated;
	}
	if (str == QStringLiteral("SeriesTimerCreated")) {
		return SessionMessageType::SeriesTimerCreated;
	}
	if (str == QStringLiteral("TimerCreated")) {
		return SessionMessageType::TimerCreated;
	}
	if (str == QStringLiteral("SeriesTimerCancelled")) {
		return SessionMessageType::SeriesTimerCancelled;
	}
	if (str == QStringLiteral("TimerCancelled")) {
		return SessionMessageType::TimerCancelled;
	}
	if (str == QStringLiteral("RefreshProgress")) {
		return SessionMessageType::RefreshProgress;
	}
	if (str == QStringLiteral("ScheduledTaskEnded")) {
		return SessionMessageType::ScheduledTaskEnded;
	}
	if (str == QStringLiteral("PackageInstallationCancelled")) {
		return SessionMessageType::PackageInstallationCancelled;
	}
	if (str == QStringLiteral("PackageInstallationFailed")) {
		return SessionMessageType::PackageInstallationFailed;
	}
	if (str == QStringLiteral("PackageInstallationCompleted")) {
		return SessionMessageType::PackageInstallationCompleted;
	}
	if (str == QStringLiteral("PackageInstalling")) {
		return SessionMessageType::PackageInstalling;
	}
	if (str == QStringLiteral("PackageUninstalled")) {
		return SessionMessageType::PackageUninstalled;
	}
	if (str == QStringLiteral("ActivityLogEntry")) {
		return SessionMessageType::ActivityLogEntry;
	}
	if (str == QStringLiteral("ScheduledTasksInfo")) {
		return SessionMessageType::ScheduledTasksInfo;
	}
	if (str == QStringLiteral("ActivityLogEntryStart")) {
		return SessionMessageType::ActivityLogEntryStart;
	}
	if (str == QStringLiteral("ActivityLogEntryStop")) {
		return SessionMessageType::ActivityLogEntryStop;
	}
	if (str == QStringLiteral("SessionsStart")) {
		return SessionMessageType::SessionsStart;
	}
	if (str == QStringLiteral("SessionsStop")) {
		return SessionMessageType::SessionsStop;
	}
	if (str == QStringLiteral("ScheduledTasksInfoStart")) {
		return SessionMessageType::ScheduledTasksInfoStart;
	}
	if (str == QStringLiteral("ScheduledTasksInfoStop")) {
		return SessionMessageType::ScheduledTasksInfoStop;
	}
	if (str == QStringLiteral("KeepAlive")) {
		return SessionMessageType::KeepAlive;
	}
	
	return SessionMessageType::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const SessionMessageType &source, convertType<SessionMessageType>) {
	switch(source) {
	case SessionMessageType::ForceKeepAlive:
		return QStringLiteral("ForceKeepAlive");
	case SessionMessageType::GeneralCommand:
		return QStringLiteral("GeneralCommand");
	case SessionMessageType::UserDataChanged:
		return QStringLiteral("UserDataChanged");
	case SessionMessageType::Sessions:
		return QStringLiteral("Sessions");
	case SessionMessageType::Play:
		return QStringLiteral("Play");
	case SessionMessageType::SyncPlayCommand:
		return QStringLiteral("SyncPlayCommand");
	case SessionMessageType::SyncPlayGroupUpdate:
		return QStringLiteral("SyncPlayGroupUpdate");
	case SessionMessageType::Playstate:
		return QStringLiteral("Playstate");
	case SessionMessageType::RestartRequired:
		return QStringLiteral("RestartRequired");
	case SessionMessageType::ServerShuttingDown:
		return QStringLiteral("ServerShuttingDown");
	case SessionMessageType::ServerRestarting:
		return QStringLiteral("ServerRestarting");
	case SessionMessageType::LibraryChanged:
		return QStringLiteral("LibraryChanged");
	case SessionMessageType::UserDeleted:
		return QStringLiteral("UserDeleted");
	case SessionMessageType::UserUpdated:
		return QStringLiteral("UserUpdated");
	case SessionMessageType::SeriesTimerCreated:
		return QStringLiteral("SeriesTimerCreated");
	case SessionMessageType::TimerCreated:
		return QStringLiteral("TimerCreated");
	case SessionMessageType::SeriesTimerCancelled:
		return QStringLiteral("SeriesTimerCancelled");
	case SessionMessageType::TimerCancelled:
		return QStringLiteral("TimerCancelled");
	case SessionMessageType::RefreshProgress:
		return QStringLiteral("RefreshProgress");
	case SessionMessageType::ScheduledTaskEnded:
		return QStringLiteral("ScheduledTaskEnded");
	case SessionMessageType::PackageInstallationCancelled:
		return QStringLiteral("PackageInstallationCancelled");
	case SessionMessageType::PackageInstallationFailed:
		return QStringLiteral("PackageInstallationFailed");
	case SessionMessageType::PackageInstallationCompleted:
		return QStringLiteral("PackageInstallationCompleted");
	case SessionMessageType::PackageInstalling:
		return QStringLiteral("PackageInstalling");
	case SessionMessageType::PackageUninstalled:
		return QStringLiteral("PackageUninstalled");
	case SessionMessageType::ActivityLogEntry:
		return QStringLiteral("ActivityLogEntry");
	case SessionMessageType::ScheduledTasksInfo:
		return QStringLiteral("ScheduledTasksInfo");
	case SessionMessageType::ActivityLogEntryStart:
		return QStringLiteral("ActivityLogEntryStart");
	case SessionMessageType::ActivityLogEntryStop:
		return QStringLiteral("ActivityLogEntryStop");
	case SessionMessageType::SessionsStart:
		return QStringLiteral("SessionsStart");
	case SessionMessageType::SessionsStop:
		return QStringLiteral("SessionsStop");
	case SessionMessageType::ScheduledTasksInfoStart:
		return QStringLiteral("ScheduledTasksInfoStart");
	case SessionMessageType::ScheduledTasksInfoStop:
		return QStringLiteral("ScheduledTasksInfoStop");
	case SessionMessageType::KeepAlive:
		return QStringLiteral("KeepAlive");

	case SessionMessageType::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
