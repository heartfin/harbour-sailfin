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

#include <JellyfinQt/loader/http/scheduledtasks.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetTasksLoader::GetTasksLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<TaskInfo>, GetTasksParams>(apiClient) {}

QString GetTasksLoader::path(const GetTasksParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/ScheduledTasks");
}

QUrlQuery GetTasksLoader::query(const GetTasksParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.isHiddenNull()) {
		result.addQueryItem("isHidden", Support::toString<std::optional<bool>>(params.isHidden()));
	}
	if (!params.isEnabledNull()) {
		result.addQueryItem("isEnabled", Support::toString<std::optional<bool>>(params.isEnabled()));
	}
	
	return result;
}

QByteArray GetTasksLoader::body(const GetTasksParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetTasksLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetTaskLoader::GetTaskLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<TaskInfo, GetTaskParams>(apiClient) {}

QString GetTaskLoader::path(const GetTaskParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/ScheduledTasks/") + Support::toString< QString>(params.taskId()) ;
}

QUrlQuery GetTaskLoader::query(const GetTaskParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetTaskLoader::body(const GetTaskParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetTaskLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

UpdateTaskLoader::UpdateTaskLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UpdateTaskParams>(apiClient) {}

QString UpdateTaskLoader::path(const UpdateTaskParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/ScheduledTasks/") + Support::toString< QString>(params.taskId()) + QStringLiteral("/Triggers");
}

QUrlQuery UpdateTaskLoader::query(const UpdateTaskParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray UpdateTaskLoader::body(const UpdateTaskParams &params) const {
	return Support::toString<QList<TaskTriggerInfo>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation UpdateTaskLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

StartTaskLoader::StartTaskLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, StartTaskParams>(apiClient) {}

QString StartTaskLoader::path(const StartTaskParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/ScheduledTasks/Running/") + Support::toString< QString>(params.taskId()) ;
}

QUrlQuery StartTaskLoader::query(const StartTaskParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray StartTaskLoader::body(const StartTaskParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation StartTaskLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

StopTaskLoader::StopTaskLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, StopTaskParams>(apiClient) {}

QString StopTaskLoader::path(const StopTaskParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/ScheduledTasks/Running/") + Support::toString< QString>(params.taskId()) ;
}

QUrlQuery StopTaskLoader::query(const StopTaskParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray StopTaskLoader::body(const StopTaskParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation StopTaskLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
