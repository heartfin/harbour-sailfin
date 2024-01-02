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

#ifndef JELLYFIN_LOADER_HTTP_SCHEDULEDTASKS_H
#define JELLYFIN_LOADER_HTTP_SCHEDULEDTASKS_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/taskinfo.h"
#include "JellyfinQt/dto/taskinfo.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Get tasks.
 */

class GetTasksLoader : public Jellyfin::Support::HttpLoader<QList<TaskInfo>, GetTasksParams> {
public:
	explicit GetTasksLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetTasksParams& parameters) const override;
	QUrlQuery query(const GetTasksParams& parameters) const override;
	QByteArray body(const GetTasksParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Get task by id.
 */

class GetTaskLoader : public Jellyfin::Support::HttpLoader<TaskInfo, GetTaskParams> {
public:
	explicit GetTaskLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetTaskParams& parameters) const override;
	QUrlQuery query(const GetTaskParams& parameters) const override;
	QByteArray body(const GetTaskParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Update specified task triggers.
 */

class UpdateTaskLoader : public Jellyfin::Support::HttpLoader<void, UpdateTaskParams> {
public:
	explicit UpdateTaskLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const UpdateTaskParams& parameters) const override;
	QUrlQuery query(const UpdateTaskParams& parameters) const override;
	QByteArray body(const UpdateTaskParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Start specified task.
 */

class StartTaskLoader : public Jellyfin::Support::HttpLoader<void, StartTaskParams> {
public:
	explicit StartTaskLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const StartTaskParams& parameters) const override;
	QUrlQuery query(const StartTaskParams& parameters) const override;
	QByteArray body(const StartTaskParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Stop specified task.
 */

class StopTaskLoader : public Jellyfin::Support::HttpLoader<void, StopTaskParams> {
public:
	explicit StopTaskLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const StopTaskParams& parameters) const override;
	QUrlQuery query(const StopTaskParams& parameters) const override;
	QByteArray body(const StopTaskParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_SCHEDULEDTASKS_H
