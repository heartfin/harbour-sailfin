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

#include <JellyfinQt/loader/http/playstate.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

ReportPlaybackStartLoader::ReportPlaybackStartLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, ReportPlaybackStartParams>(apiClient) {}

QString ReportPlaybackStartLoader::path(const ReportPlaybackStartParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Sessions/Playing");
}

QUrlQuery ReportPlaybackStartLoader::query(const ReportPlaybackStartParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray ReportPlaybackStartLoader::body(const ReportPlaybackStartParams &params) const {
	return Support::toString<QSharedPointer<PlaybackStartInfo>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation ReportPlaybackStartLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

PingPlaybackSessionLoader::PingPlaybackSessionLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, PingPlaybackSessionParams>(apiClient) {}

QString PingPlaybackSessionLoader::path(const PingPlaybackSessionParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Sessions/Playing/Ping");
}

QUrlQuery PingPlaybackSessionLoader::query(const PingPlaybackSessionParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.playSessionIdNull()) {
		result.addQueryItem("playSessionId", Support::toString<QString>(params.playSessionId()));
	}
	
	return result;
}

QByteArray PingPlaybackSessionLoader::body(const PingPlaybackSessionParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation PingPlaybackSessionLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

ReportPlaybackProgressLoader::ReportPlaybackProgressLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, ReportPlaybackProgressParams>(apiClient) {}

QString ReportPlaybackProgressLoader::path(const ReportPlaybackProgressParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Sessions/Playing/Progress");
}

QUrlQuery ReportPlaybackProgressLoader::query(const ReportPlaybackProgressParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray ReportPlaybackProgressLoader::body(const ReportPlaybackProgressParams &params) const {
	return Support::toString<QSharedPointer<PlaybackProgressInfo>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation ReportPlaybackProgressLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

ReportPlaybackStoppedLoader::ReportPlaybackStoppedLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, ReportPlaybackStoppedParams>(apiClient) {}

QString ReportPlaybackStoppedLoader::path(const ReportPlaybackStoppedParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Sessions/Playing/Stopped");
}

QUrlQuery ReportPlaybackStoppedLoader::query(const ReportPlaybackStoppedParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray ReportPlaybackStoppedLoader::body(const ReportPlaybackStoppedParams &params) const {
	return Support::toString<QSharedPointer<PlaybackStopInfo>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation ReportPlaybackStoppedLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

MarkPlayedItemLoader::MarkPlayedItemLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<UserItemDataDto, MarkPlayedItemParams>(apiClient) {}

QString MarkPlayedItemLoader::path(const MarkPlayedItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/PlayedItems/") + Support::toString< QString>(params.itemId()) ;
}

QUrlQuery MarkPlayedItemLoader::query(const MarkPlayedItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.datePlayedNull()) {
		result.addQueryItem("datePlayed", Support::toString<QDateTime>(params.datePlayed()));
	}
	
	return result;
}

QByteArray MarkPlayedItemLoader::body(const MarkPlayedItemParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation MarkPlayedItemLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

MarkUnplayedItemLoader::MarkUnplayedItemLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<UserItemDataDto, MarkUnplayedItemParams>(apiClient) {}

QString MarkUnplayedItemLoader::path(const MarkUnplayedItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/PlayedItems/") + Support::toString< QString>(params.itemId()) ;
}

QUrlQuery MarkUnplayedItemLoader::query(const MarkUnplayedItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray MarkUnplayedItemLoader::body(const MarkUnplayedItemParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation MarkUnplayedItemLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

OnPlaybackStartLoader::OnPlaybackStartLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, OnPlaybackStartParams>(apiClient) {}

QString OnPlaybackStartLoader::path(const OnPlaybackStartParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/PlayingItems/") + Support::toString< QString>(params.itemId()) ;
}

QUrlQuery OnPlaybackStartLoader::query(const OnPlaybackStartParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.mediaSourceIdNull()) {
		result.addQueryItem("mediaSourceId", Support::toString<QString>(params.mediaSourceId()));
	}
	if (!params.audioStreamIndexNull()) {
		result.addQueryItem("audioStreamIndex", Support::toString<std::optional<qint32>>(params.audioStreamIndex()));
	}
	if (!params.subtitleStreamIndexNull()) {
		result.addQueryItem("subtitleStreamIndex", Support::toString<std::optional<qint32>>(params.subtitleStreamIndex()));
	}
	if (!params.playMethodNull()) {
		result.addQueryItem("playMethod", Support::toString<PlayMethod>(params.playMethod()));
	}
	if (!params.liveStreamIdNull()) {
		result.addQueryItem("liveStreamId", Support::toString<QString>(params.liveStreamId()));
	}
	if (!params.playSessionIdNull()) {
		result.addQueryItem("playSessionId", Support::toString<QString>(params.playSessionId()));
	}
	if (!params.canSeekNull()) {
		result.addQueryItem("canSeek", Support::toString<std::optional<bool>>(params.canSeek()));
	}
	
	return result;
}

QByteArray OnPlaybackStartLoader::body(const OnPlaybackStartParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation OnPlaybackStartLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

OnPlaybackStoppedLoader::OnPlaybackStoppedLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, OnPlaybackStoppedParams>(apiClient) {}

QString OnPlaybackStoppedLoader::path(const OnPlaybackStoppedParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/PlayingItems/") + Support::toString< QString>(params.itemId()) ;
}

QUrlQuery OnPlaybackStoppedLoader::query(const OnPlaybackStoppedParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.mediaSourceIdNull()) {
		result.addQueryItem("mediaSourceId", Support::toString<QString>(params.mediaSourceId()));
	}
	if (!params.nextMediaTypeNull()) {
		result.addQueryItem("nextMediaType", Support::toString<QString>(params.nextMediaType()));
	}
	if (!params.positionTicksNull()) {
		result.addQueryItem("positionTicks", Support::toString<std::optional<qint64>>(params.positionTicks()));
	}
	if (!params.liveStreamIdNull()) {
		result.addQueryItem("liveStreamId", Support::toString<QString>(params.liveStreamId()));
	}
	if (!params.playSessionIdNull()) {
		result.addQueryItem("playSessionId", Support::toString<QString>(params.playSessionId()));
	}
	
	return result;
}

QByteArray OnPlaybackStoppedLoader::body(const OnPlaybackStoppedParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation OnPlaybackStoppedLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

OnPlaybackProgressLoader::OnPlaybackProgressLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, OnPlaybackProgressParams>(apiClient) {}

QString OnPlaybackProgressLoader::path(const OnPlaybackProgressParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/PlayingItems/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Progress");
}

QUrlQuery OnPlaybackProgressLoader::query(const OnPlaybackProgressParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.mediaSourceIdNull()) {
		result.addQueryItem("mediaSourceId", Support::toString<QString>(params.mediaSourceId()));
	}
	if (!params.positionTicksNull()) {
		result.addQueryItem("positionTicks", Support::toString<std::optional<qint64>>(params.positionTicks()));
	}
	if (!params.audioStreamIndexNull()) {
		result.addQueryItem("audioStreamIndex", Support::toString<std::optional<qint32>>(params.audioStreamIndex()));
	}
	if (!params.subtitleStreamIndexNull()) {
		result.addQueryItem("subtitleStreamIndex", Support::toString<std::optional<qint32>>(params.subtitleStreamIndex()));
	}
	if (!params.volumeLevelNull()) {
		result.addQueryItem("volumeLevel", Support::toString<std::optional<qint32>>(params.volumeLevel()));
	}
	if (!params.playMethodNull()) {
		result.addQueryItem("playMethod", Support::toString<PlayMethod>(params.playMethod()));
	}
	if (!params.liveStreamIdNull()) {
		result.addQueryItem("liveStreamId", Support::toString<QString>(params.liveStreamId()));
	}
	if (!params.playSessionIdNull()) {
		result.addQueryItem("playSessionId", Support::toString<QString>(params.playSessionId()));
	}
	if (!params.repeatModeNull()) {
		result.addQueryItem("repeatMode", Support::toString<RepeatMode>(params.repeatMode()));
	}
	if (!params.isPausedNull()) {
		result.addQueryItem("isPaused", Support::toString<std::optional<bool>>(params.isPaused()));
	}
	if (!params.isMutedNull()) {
		result.addQueryItem("isMuted", Support::toString<std::optional<bool>>(params.isMuted()));
	}
	
	return result;
}

QByteArray OnPlaybackProgressLoader::body(const OnPlaybackProgressParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation OnPlaybackProgressLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin
