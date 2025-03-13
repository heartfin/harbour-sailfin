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

#ifndef JELLYFIN_LOADER_HTTP_PLAYSTATE_H
#define JELLYFIN_LOADER_HTTP_PLAYSTATE_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/useritemdatadto.h"
#include "JellyfinQt/dto/useritemdatadto.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Reports that a session has begun playing an item.
 */

class OnPlaybackStartLoader : public Jellyfin::Support::HttpLoader<void, OnPlaybackStartParams> {
public:
	explicit OnPlaybackStartLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const OnPlaybackStartParams& parameters) const override;
	QUrlQuery query(const OnPlaybackStartParams& parameters) const override;
	QByteArray body(const OnPlaybackStartParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Reports that a session has stopped playing an item.
 */

class OnPlaybackStoppedLoader : public Jellyfin::Support::HttpLoader<void, OnPlaybackStoppedParams> {
public:
	explicit OnPlaybackStoppedLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const OnPlaybackStoppedParams& parameters) const override;
	QUrlQuery query(const OnPlaybackStoppedParams& parameters) const override;
	QByteArray body(const OnPlaybackStoppedParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Reports a session's playback progress.
 */

class OnPlaybackProgressLoader : public Jellyfin::Support::HttpLoader<void, OnPlaybackProgressParams> {
public:
	explicit OnPlaybackProgressLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const OnPlaybackProgressParams& parameters) const override;
	QUrlQuery query(const OnPlaybackProgressParams& parameters) const override;
	QByteArray body(const OnPlaybackProgressParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Reports playback has started within a session.
 */

class ReportPlaybackStartLoader : public Jellyfin::Support::HttpLoader<void, ReportPlaybackStartParams> {
public:
	explicit ReportPlaybackStartLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const ReportPlaybackStartParams& parameters) const override;
	QUrlQuery query(const ReportPlaybackStartParams& parameters) const override;
	QByteArray body(const ReportPlaybackStartParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Pings a playback session.
 */

class PingPlaybackSessionLoader : public Jellyfin::Support::HttpLoader<void, PingPlaybackSessionParams> {
public:
	explicit PingPlaybackSessionLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const PingPlaybackSessionParams& parameters) const override;
	QUrlQuery query(const PingPlaybackSessionParams& parameters) const override;
	QByteArray body(const PingPlaybackSessionParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Reports playback progress within a session.
 */

class ReportPlaybackProgressLoader : public Jellyfin::Support::HttpLoader<void, ReportPlaybackProgressParams> {
public:
	explicit ReportPlaybackProgressLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const ReportPlaybackProgressParams& parameters) const override;
	QUrlQuery query(const ReportPlaybackProgressParams& parameters) const override;
	QByteArray body(const ReportPlaybackProgressParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Reports playback has stopped within a session.
 */

class ReportPlaybackStoppedLoader : public Jellyfin::Support::HttpLoader<void, ReportPlaybackStoppedParams> {
public:
	explicit ReportPlaybackStoppedLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const ReportPlaybackStoppedParams& parameters) const override;
	QUrlQuery query(const ReportPlaybackStoppedParams& parameters) const override;
	QByteArray body(const ReportPlaybackStoppedParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Marks an item as played for user.
 */

class MarkPlayedItemLoader : public Jellyfin::Support::HttpLoader<UserItemDataDto, MarkPlayedItemParams> {
public:
	explicit MarkPlayedItemLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const MarkPlayedItemParams& parameters) const override;
	QUrlQuery query(const MarkPlayedItemParams& parameters) const override;
	QByteArray body(const MarkPlayedItemParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Marks an item as unplayed for user.
 */

class MarkUnplayedItemLoader : public Jellyfin::Support::HttpLoader<UserItemDataDto, MarkUnplayedItemParams> {
public:
	explicit MarkUnplayedItemLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const MarkUnplayedItemParams& parameters) const override;
	QUrlQuery query(const MarkUnplayedItemParams& parameters) const override;
	QByteArray body(const MarkUnplayedItemParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_PLAYSTATE_H
