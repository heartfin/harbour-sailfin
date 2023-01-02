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

#ifndef JELLYFIN_LOADER_HTTP_SYNCPLAY_H
#define JELLYFIN_LOADER_HTTP_SYNCPLAY_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/groupinfodto.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Notify SyncPlay group that member is buffering.
 */

class SyncPlayBufferingLoader : public Jellyfin::Support::HttpLoader<void, SyncPlayBufferingParams> {
public:
	explicit SyncPlayBufferingLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlayBufferingParams& parameters) const override;
	QUrlQuery query(const SyncPlayBufferingParams& parameters) const override;
	QByteArray body(const SyncPlayBufferingParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Join an existing SyncPlay group.
 */

class SyncPlayJoinGroupLoader : public Jellyfin::Support::HttpLoader<void, SyncPlayJoinGroupParams> {
public:
	explicit SyncPlayJoinGroupLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlayJoinGroupParams& parameters) const override;
	QUrlQuery query(const SyncPlayJoinGroupParams& parameters) const override;
	QByteArray body(const SyncPlayJoinGroupParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Leave the joined SyncPlay group.
 */

class SyncPlayLeaveGroupLoader : public Jellyfin::Support::HttpLoader<void, SyncPlayLeaveGroupParams> {
public:
	explicit SyncPlayLeaveGroupLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlayLeaveGroupParams& parameters) const override;
	QUrlQuery query(const SyncPlayLeaveGroupParams& parameters) const override;
	QByteArray body(const SyncPlayLeaveGroupParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets all SyncPlay groups.
 */

class SyncPlayGetGroupsLoader : public Jellyfin::Support::HttpLoader<QList<GroupInfoDto>, SyncPlayGetGroupsParams> {
public:
	explicit SyncPlayGetGroupsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlayGetGroupsParams& parameters) const override;
	QUrlQuery query(const SyncPlayGetGroupsParams& parameters) const override;
	QByteArray body(const SyncPlayGetGroupsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Request to move an item in the playlist in SyncPlay group.
 */

class SyncPlayMovePlaylistItemLoader : public Jellyfin::Support::HttpLoader<void, SyncPlayMovePlaylistItemParams> {
public:
	explicit SyncPlayMovePlaylistItemLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlayMovePlaylistItemParams& parameters) const override;
	QUrlQuery query(const SyncPlayMovePlaylistItemParams& parameters) const override;
	QByteArray body(const SyncPlayMovePlaylistItemParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Create a new SyncPlay group.
 */

class SyncPlayCreateGroupLoader : public Jellyfin::Support::HttpLoader<void, SyncPlayCreateGroupParams> {
public:
	explicit SyncPlayCreateGroupLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlayCreateGroupParams& parameters) const override;
	QUrlQuery query(const SyncPlayCreateGroupParams& parameters) const override;
	QByteArray body(const SyncPlayCreateGroupParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Request next item in SyncPlay group.
 */

class SyncPlayNextItemLoader : public Jellyfin::Support::HttpLoader<void, SyncPlayNextItemParams> {
public:
	explicit SyncPlayNextItemLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlayNextItemParams& parameters) const override;
	QUrlQuery query(const SyncPlayNextItemParams& parameters) const override;
	QByteArray body(const SyncPlayNextItemParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Request pause in SyncPlay group.
 */

class SyncPlayPauseLoader : public Jellyfin::Support::HttpLoader<void, SyncPlayPauseParams> {
public:
	explicit SyncPlayPauseLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlayPauseParams& parameters) const override;
	QUrlQuery query(const SyncPlayPauseParams& parameters) const override;
	QByteArray body(const SyncPlayPauseParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Update session ping.
 */

class SyncPlayPingLoader : public Jellyfin::Support::HttpLoader<void, SyncPlayPingParams> {
public:
	explicit SyncPlayPingLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlayPingParams& parameters) const override;
	QUrlQuery query(const SyncPlayPingParams& parameters) const override;
	QByteArray body(const SyncPlayPingParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Request previous item in SyncPlay group.
 */

class SyncPlayPreviousItemLoader : public Jellyfin::Support::HttpLoader<void, SyncPlayPreviousItemParams> {
public:
	explicit SyncPlayPreviousItemLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlayPreviousItemParams& parameters) const override;
	QUrlQuery query(const SyncPlayPreviousItemParams& parameters) const override;
	QByteArray body(const SyncPlayPreviousItemParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Request to queue items to the playlist of a SyncPlay group.
 */

class SyncPlayQueueLoader : public Jellyfin::Support::HttpLoader<void, SyncPlayQueueParams> {
public:
	explicit SyncPlayQueueLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlayQueueParams& parameters) const override;
	QUrlQuery query(const SyncPlayQueueParams& parameters) const override;
	QByteArray body(const SyncPlayQueueParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Notify SyncPlay group that member is ready for playback.
 */

class SyncPlayReadyLoader : public Jellyfin::Support::HttpLoader<void, SyncPlayReadyParams> {
public:
	explicit SyncPlayReadyLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlayReadyParams& parameters) const override;
	QUrlQuery query(const SyncPlayReadyParams& parameters) const override;
	QByteArray body(const SyncPlayReadyParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Request to remove items from the playlist in SyncPlay group.
 */

class SyncPlayRemoveFromPlaylistLoader : public Jellyfin::Support::HttpLoader<void, SyncPlayRemoveFromPlaylistParams> {
public:
	explicit SyncPlayRemoveFromPlaylistLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlayRemoveFromPlaylistParams& parameters) const override;
	QUrlQuery query(const SyncPlayRemoveFromPlaylistParams& parameters) const override;
	QByteArray body(const SyncPlayRemoveFromPlaylistParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Request seek in SyncPlay group.
 */

class SyncPlaySeekLoader : public Jellyfin::Support::HttpLoader<void, SyncPlaySeekParams> {
public:
	explicit SyncPlaySeekLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlaySeekParams& parameters) const override;
	QUrlQuery query(const SyncPlaySeekParams& parameters) const override;
	QByteArray body(const SyncPlaySeekParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Request SyncPlay group to ignore member during group-wait.
 */

class SyncPlaySetIgnoreWaitLoader : public Jellyfin::Support::HttpLoader<void, SyncPlaySetIgnoreWaitParams> {
public:
	explicit SyncPlaySetIgnoreWaitLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlaySetIgnoreWaitParams& parameters) const override;
	QUrlQuery query(const SyncPlaySetIgnoreWaitParams& parameters) const override;
	QByteArray body(const SyncPlaySetIgnoreWaitParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Request to set new playlist in SyncPlay group.
 */

class SyncPlaySetNewQueueLoader : public Jellyfin::Support::HttpLoader<void, SyncPlaySetNewQueueParams> {
public:
	explicit SyncPlaySetNewQueueLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlaySetNewQueueParams& parameters) const override;
	QUrlQuery query(const SyncPlaySetNewQueueParams& parameters) const override;
	QByteArray body(const SyncPlaySetNewQueueParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Request to change playlist item in SyncPlay group.
 */

class SyncPlaySetPlaylistItemLoader : public Jellyfin::Support::HttpLoader<void, SyncPlaySetPlaylistItemParams> {
public:
	explicit SyncPlaySetPlaylistItemLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlaySetPlaylistItemParams& parameters) const override;
	QUrlQuery query(const SyncPlaySetPlaylistItemParams& parameters) const override;
	QByteArray body(const SyncPlaySetPlaylistItemParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Request to set repeat mode in SyncPlay group.
 */

class SyncPlaySetRepeatModeLoader : public Jellyfin::Support::HttpLoader<void, SyncPlaySetRepeatModeParams> {
public:
	explicit SyncPlaySetRepeatModeLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlaySetRepeatModeParams& parameters) const override;
	QUrlQuery query(const SyncPlaySetRepeatModeParams& parameters) const override;
	QByteArray body(const SyncPlaySetRepeatModeParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Request to set shuffle mode in SyncPlay group.
 */

class SyncPlaySetShuffleModeLoader : public Jellyfin::Support::HttpLoader<void, SyncPlaySetShuffleModeParams> {
public:
	explicit SyncPlaySetShuffleModeLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlaySetShuffleModeParams& parameters) const override;
	QUrlQuery query(const SyncPlaySetShuffleModeParams& parameters) const override;
	QByteArray body(const SyncPlaySetShuffleModeParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Request stop in SyncPlay group.
 */

class SyncPlayStopLoader : public Jellyfin::Support::HttpLoader<void, SyncPlayStopParams> {
public:
	explicit SyncPlayStopLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlayStopParams& parameters) const override;
	QUrlQuery query(const SyncPlayStopParams& parameters) const override;
	QByteArray body(const SyncPlayStopParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Request unpause in SyncPlay group.
 */

class SyncPlayUnpauseLoader : public Jellyfin::Support::HttpLoader<void, SyncPlayUnpauseParams> {
public:
	explicit SyncPlayUnpauseLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SyncPlayUnpauseParams& parameters) const override;
	QUrlQuery query(const SyncPlayUnpauseParams& parameters) const override;
	QByteArray body(const SyncPlayUnpauseParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_SYNCPLAY_H
