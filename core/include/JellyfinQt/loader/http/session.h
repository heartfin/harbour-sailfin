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

#ifndef JELLYFIN_LOADER_HTTP_SESSION_H
#define JELLYFIN_LOADER_HTTP_SESSION_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/nameidpair.h"
#include "JellyfinQt/dto/nameidpair.h"
#include "JellyfinQt/dto/sessioninfo.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Get all password reset providers.
 */

class GetPasswordResetProvidersLoader : public Jellyfin::Support::HttpLoader<QList<NameIdPair>, GetPasswordResetProvidersParams> {
public:
	explicit GetPasswordResetProvidersLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetPasswordResetProvidersParams& parameters) const override;
	QUrlQuery query(const GetPasswordResetProvidersParams& parameters) const override;
	QByteArray body(const GetPasswordResetProvidersParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Get all auth providers.
 */

class GetAuthProvidersLoader : public Jellyfin::Support::HttpLoader<QList<NameIdPair>, GetAuthProvidersParams> {
public:
	explicit GetAuthProvidersLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetAuthProvidersParams& parameters) const override;
	QUrlQuery query(const GetAuthProvidersParams& parameters) const override;
	QByteArray body(const GetAuthProvidersParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets a list of sessions.
 */

class GetSessionsLoader : public Jellyfin::Support::HttpLoader<QList<SessionInfo>, GetSessionsParams> {
public:
	explicit GetSessionsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetSessionsParams& parameters) const override;
	QUrlQuery query(const GetSessionsParams& parameters) const override;
	QByteArray body(const GetSessionsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Issues a full general command to a client.
 */

class SendFullGeneralCommandLoader : public Jellyfin::Support::HttpLoader<void, SendFullGeneralCommandParams> {
public:
	explicit SendFullGeneralCommandLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SendFullGeneralCommandParams& parameters) const override;
	QUrlQuery query(const SendFullGeneralCommandParams& parameters) const override;
	QByteArray body(const SendFullGeneralCommandParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Issues a general command to a client.
 */

class SendGeneralCommandLoader : public Jellyfin::Support::HttpLoader<void, SendGeneralCommandParams> {
public:
	explicit SendGeneralCommandLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SendGeneralCommandParams& parameters) const override;
	QUrlQuery query(const SendGeneralCommandParams& parameters) const override;
	QByteArray body(const SendGeneralCommandParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Issues a command to a client to display a message to the user.
 */

class SendMessageCommandLoader : public Jellyfin::Support::HttpLoader<void, SendMessageCommandParams> {
public:
	explicit SendMessageCommandLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SendMessageCommandParams& parameters) const override;
	QUrlQuery query(const SendMessageCommandParams& parameters) const override;
	QByteArray body(const SendMessageCommandParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Instructs a session to play an item.
 */

class PlayLoader : public Jellyfin::Support::HttpLoader<void, PlayParams> {
public:
	explicit PlayLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const PlayParams& parameters) const override;
	QUrlQuery query(const PlayParams& parameters) const override;
	QByteArray body(const PlayParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Issues a playstate command to a client.
 */

class SendPlaystateCommandLoader : public Jellyfin::Support::HttpLoader<void, SendPlaystateCommandParams> {
public:
	explicit SendPlaystateCommandLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SendPlaystateCommandParams& parameters) const override;
	QUrlQuery query(const SendPlaystateCommandParams& parameters) const override;
	QByteArray body(const SendPlaystateCommandParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Issues a system command to a client.
 */

class SendSystemCommandLoader : public Jellyfin::Support::HttpLoader<void, SendSystemCommandParams> {
public:
	explicit SendSystemCommandLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SendSystemCommandParams& parameters) const override;
	QUrlQuery query(const SendSystemCommandParams& parameters) const override;
	QByteArray body(const SendSystemCommandParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Adds an additional user to a session.
 */

class AddUserToSessionLoader : public Jellyfin::Support::HttpLoader<void, AddUserToSessionParams> {
public:
	explicit AddUserToSessionLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const AddUserToSessionParams& parameters) const override;
	QUrlQuery query(const AddUserToSessionParams& parameters) const override;
	QByteArray body(const AddUserToSessionParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Removes an additional user from a session.
 */

class RemoveUserFromSessionLoader : public Jellyfin::Support::HttpLoader<void, RemoveUserFromSessionParams> {
public:
	explicit RemoveUserFromSessionLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const RemoveUserFromSessionParams& parameters) const override;
	QUrlQuery query(const RemoveUserFromSessionParams& parameters) const override;
	QByteArray body(const RemoveUserFromSessionParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Instructs a session to browse to an item or view.
 */

class DisplayContentLoader : public Jellyfin::Support::HttpLoader<void, DisplayContentParams> {
public:
	explicit DisplayContentLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const DisplayContentParams& parameters) const override;
	QUrlQuery query(const DisplayContentParams& parameters) const override;
	QByteArray body(const DisplayContentParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Updates capabilities for a device.
 */

class PostCapabilitiesLoader : public Jellyfin::Support::HttpLoader<void, PostCapabilitiesParams> {
public:
	explicit PostCapabilitiesLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const PostCapabilitiesParams& parameters) const override;
	QUrlQuery query(const PostCapabilitiesParams& parameters) const override;
	QByteArray body(const PostCapabilitiesParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Updates capabilities for a device.
 */

class PostFullCapabilitiesLoader : public Jellyfin::Support::HttpLoader<void, PostFullCapabilitiesParams> {
public:
	explicit PostFullCapabilitiesLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const PostFullCapabilitiesParams& parameters) const override;
	QUrlQuery query(const PostFullCapabilitiesParams& parameters) const override;
	QByteArray body(const PostFullCapabilitiesParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Reports that a session has ended.
 */

class ReportSessionEndedLoader : public Jellyfin::Support::HttpLoader<void, ReportSessionEndedParams> {
public:
	explicit ReportSessionEndedLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const ReportSessionEndedParams& parameters) const override;
	QUrlQuery query(const ReportSessionEndedParams& parameters) const override;
	QByteArray body(const ReportSessionEndedParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Reports that a session is viewing an item.
 */

class ReportViewingLoader : public Jellyfin::Support::HttpLoader<void, ReportViewingParams> {
public:
	explicit ReportViewingLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const ReportViewingParams& parameters) const override;
	QUrlQuery query(const ReportViewingParams& parameters) const override;
	QByteArray body(const ReportViewingParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_SESSION_H
