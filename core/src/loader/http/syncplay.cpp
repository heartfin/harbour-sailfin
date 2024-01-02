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

#include <JellyfinQt/loader/http/syncplay.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

SyncPlayBufferingLoader::SyncPlayBufferingLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlayBufferingParams>(apiClient) {}

QString SyncPlayBufferingLoader::path(const SyncPlayBufferingParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/Buffering");
}

QUrlQuery SyncPlayBufferingLoader::query(const SyncPlayBufferingParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlayBufferingLoader::body(const SyncPlayBufferingParams &params) const {
	return Support::toString<QSharedPointer<BufferRequestDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SyncPlayBufferingLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlayJoinGroupLoader::SyncPlayJoinGroupLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlayJoinGroupParams>(apiClient) {}

QString SyncPlayJoinGroupLoader::path(const SyncPlayJoinGroupParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/Join");
}

QUrlQuery SyncPlayJoinGroupLoader::query(const SyncPlayJoinGroupParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlayJoinGroupLoader::body(const SyncPlayJoinGroupParams &params) const {
	return Support::toString<QSharedPointer<JoinGroupRequestDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SyncPlayJoinGroupLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlayLeaveGroupLoader::SyncPlayLeaveGroupLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlayLeaveGroupParams>(apiClient) {}

QString SyncPlayLeaveGroupLoader::path(const SyncPlayLeaveGroupParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/Leave");
}

QUrlQuery SyncPlayLeaveGroupLoader::query(const SyncPlayLeaveGroupParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlayLeaveGroupLoader::body(const SyncPlayLeaveGroupParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation SyncPlayLeaveGroupLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlayGetGroupsLoader::SyncPlayGetGroupsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<GroupInfoDto>, SyncPlayGetGroupsParams>(apiClient) {}

QString SyncPlayGetGroupsLoader::path(const SyncPlayGetGroupsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/List");
}

QUrlQuery SyncPlayGetGroupsLoader::query(const SyncPlayGetGroupsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlayGetGroupsLoader::body(const SyncPlayGetGroupsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation SyncPlayGetGroupsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

SyncPlayMovePlaylistItemLoader::SyncPlayMovePlaylistItemLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlayMovePlaylistItemParams>(apiClient) {}

QString SyncPlayMovePlaylistItemLoader::path(const SyncPlayMovePlaylistItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/MovePlaylistItem");
}

QUrlQuery SyncPlayMovePlaylistItemLoader::query(const SyncPlayMovePlaylistItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlayMovePlaylistItemLoader::body(const SyncPlayMovePlaylistItemParams &params) const {
	return Support::toString<QSharedPointer<MovePlaylistItemRequestDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SyncPlayMovePlaylistItemLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlayCreateGroupLoader::SyncPlayCreateGroupLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlayCreateGroupParams>(apiClient) {}

QString SyncPlayCreateGroupLoader::path(const SyncPlayCreateGroupParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/New");
}

QUrlQuery SyncPlayCreateGroupLoader::query(const SyncPlayCreateGroupParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlayCreateGroupLoader::body(const SyncPlayCreateGroupParams &params) const {
	return Support::toString<QSharedPointer<NewGroupRequestDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SyncPlayCreateGroupLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlayNextItemLoader::SyncPlayNextItemLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlayNextItemParams>(apiClient) {}

QString SyncPlayNextItemLoader::path(const SyncPlayNextItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/NextItem");
}

QUrlQuery SyncPlayNextItemLoader::query(const SyncPlayNextItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlayNextItemLoader::body(const SyncPlayNextItemParams &params) const {
	return Support::toString<QSharedPointer<NextItemRequestDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SyncPlayNextItemLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlayPauseLoader::SyncPlayPauseLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlayPauseParams>(apiClient) {}

QString SyncPlayPauseLoader::path(const SyncPlayPauseParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/Pause");
}

QUrlQuery SyncPlayPauseLoader::query(const SyncPlayPauseParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlayPauseLoader::body(const SyncPlayPauseParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation SyncPlayPauseLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlayPingLoader::SyncPlayPingLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlayPingParams>(apiClient) {}

QString SyncPlayPingLoader::path(const SyncPlayPingParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/Ping");
}

QUrlQuery SyncPlayPingLoader::query(const SyncPlayPingParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlayPingLoader::body(const SyncPlayPingParams &params) const {
	return Support::toString<QSharedPointer<PingRequestDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SyncPlayPingLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlayPreviousItemLoader::SyncPlayPreviousItemLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlayPreviousItemParams>(apiClient) {}

QString SyncPlayPreviousItemLoader::path(const SyncPlayPreviousItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/PreviousItem");
}

QUrlQuery SyncPlayPreviousItemLoader::query(const SyncPlayPreviousItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlayPreviousItemLoader::body(const SyncPlayPreviousItemParams &params) const {
	return Support::toString<QSharedPointer<PreviousItemRequestDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SyncPlayPreviousItemLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlayQueueLoader::SyncPlayQueueLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlayQueueParams>(apiClient) {}

QString SyncPlayQueueLoader::path(const SyncPlayQueueParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/Queue");
}

QUrlQuery SyncPlayQueueLoader::query(const SyncPlayQueueParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlayQueueLoader::body(const SyncPlayQueueParams &params) const {
	return Support::toString<QSharedPointer<QueueRequestDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SyncPlayQueueLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlayReadyLoader::SyncPlayReadyLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlayReadyParams>(apiClient) {}

QString SyncPlayReadyLoader::path(const SyncPlayReadyParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/Ready");
}

QUrlQuery SyncPlayReadyLoader::query(const SyncPlayReadyParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlayReadyLoader::body(const SyncPlayReadyParams &params) const {
	return Support::toString<QSharedPointer<ReadyRequestDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SyncPlayReadyLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlayRemoveFromPlaylistLoader::SyncPlayRemoveFromPlaylistLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlayRemoveFromPlaylistParams>(apiClient) {}

QString SyncPlayRemoveFromPlaylistLoader::path(const SyncPlayRemoveFromPlaylistParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/RemoveFromPlaylist");
}

QUrlQuery SyncPlayRemoveFromPlaylistLoader::query(const SyncPlayRemoveFromPlaylistParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlayRemoveFromPlaylistLoader::body(const SyncPlayRemoveFromPlaylistParams &params) const {
	return Support::toString<QSharedPointer<RemoveFromPlaylistRequestDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SyncPlayRemoveFromPlaylistLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlaySeekLoader::SyncPlaySeekLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlaySeekParams>(apiClient) {}

QString SyncPlaySeekLoader::path(const SyncPlaySeekParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/Seek");
}

QUrlQuery SyncPlaySeekLoader::query(const SyncPlaySeekParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlaySeekLoader::body(const SyncPlaySeekParams &params) const {
	return Support::toString<QSharedPointer<SeekRequestDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SyncPlaySeekLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlaySetIgnoreWaitLoader::SyncPlaySetIgnoreWaitLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlaySetIgnoreWaitParams>(apiClient) {}

QString SyncPlaySetIgnoreWaitLoader::path(const SyncPlaySetIgnoreWaitParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/SetIgnoreWait");
}

QUrlQuery SyncPlaySetIgnoreWaitLoader::query(const SyncPlaySetIgnoreWaitParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlaySetIgnoreWaitLoader::body(const SyncPlaySetIgnoreWaitParams &params) const {
	return Support::toString<QSharedPointer<IgnoreWaitRequestDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SyncPlaySetIgnoreWaitLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlaySetNewQueueLoader::SyncPlaySetNewQueueLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlaySetNewQueueParams>(apiClient) {}

QString SyncPlaySetNewQueueLoader::path(const SyncPlaySetNewQueueParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/SetNewQueue");
}

QUrlQuery SyncPlaySetNewQueueLoader::query(const SyncPlaySetNewQueueParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlaySetNewQueueLoader::body(const SyncPlaySetNewQueueParams &params) const {
	return Support::toString<QSharedPointer<PlayRequestDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SyncPlaySetNewQueueLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlaySetPlaylistItemLoader::SyncPlaySetPlaylistItemLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlaySetPlaylistItemParams>(apiClient) {}

QString SyncPlaySetPlaylistItemLoader::path(const SyncPlaySetPlaylistItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/SetPlaylistItem");
}

QUrlQuery SyncPlaySetPlaylistItemLoader::query(const SyncPlaySetPlaylistItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlaySetPlaylistItemLoader::body(const SyncPlaySetPlaylistItemParams &params) const {
	return Support::toString<QSharedPointer<SetPlaylistItemRequestDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SyncPlaySetPlaylistItemLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlaySetRepeatModeLoader::SyncPlaySetRepeatModeLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlaySetRepeatModeParams>(apiClient) {}

QString SyncPlaySetRepeatModeLoader::path(const SyncPlaySetRepeatModeParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/SetRepeatMode");
}

QUrlQuery SyncPlaySetRepeatModeLoader::query(const SyncPlaySetRepeatModeParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlaySetRepeatModeLoader::body(const SyncPlaySetRepeatModeParams &params) const {
	return Support::toString<QSharedPointer<SetRepeatModeRequestDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SyncPlaySetRepeatModeLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlaySetShuffleModeLoader::SyncPlaySetShuffleModeLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlaySetShuffleModeParams>(apiClient) {}

QString SyncPlaySetShuffleModeLoader::path(const SyncPlaySetShuffleModeParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/SetShuffleMode");
}

QUrlQuery SyncPlaySetShuffleModeLoader::query(const SyncPlaySetShuffleModeParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlaySetShuffleModeLoader::body(const SyncPlaySetShuffleModeParams &params) const {
	return Support::toString<QSharedPointer<SetShuffleModeRequestDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SyncPlaySetShuffleModeLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlayStopLoader::SyncPlayStopLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlayStopParams>(apiClient) {}

QString SyncPlayStopLoader::path(const SyncPlayStopParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/Stop");
}

QUrlQuery SyncPlayStopLoader::query(const SyncPlayStopParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlayStopLoader::body(const SyncPlayStopParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation SyncPlayStopLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SyncPlayUnpauseLoader::SyncPlayUnpauseLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SyncPlayUnpauseParams>(apiClient) {}

QString SyncPlayUnpauseLoader::path(const SyncPlayUnpauseParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/SyncPlay/Unpause");
}

QUrlQuery SyncPlayUnpauseLoader::query(const SyncPlayUnpauseParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SyncPlayUnpauseLoader::body(const SyncPlayUnpauseParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation SyncPlayUnpauseLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
