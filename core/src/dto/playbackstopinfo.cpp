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

#include <JellyfinQt/dto/playbackstopinfo.h>

namespace Jellyfin {
namespace DTO {

PlaybackStopInfo::PlaybackStopInfo() {}

PlaybackStopInfo::PlaybackStopInfo(const PlaybackStopInfo &other) :

	m_item(other.m_item),
	m_itemId(other.m_itemId),
	m_sessionId(other.m_sessionId),
	m_mediaSourceId(other.m_mediaSourceId),
	m_positionTicks(other.m_positionTicks),
	m_liveStreamId(other.m_liveStreamId),
	m_playSessionId(other.m_playSessionId),
	m_failed(other.m_failed),
	m_nextMediaType(other.m_nextMediaType),
	m_playlistItemId(other.m_playlistItemId),
	m_nowPlayingQueue(other.m_nowPlayingQueue){}


void PlaybackStopInfo::replaceData(PlaybackStopInfo &other) {
	m_item = other.m_item;
	m_itemId = other.m_itemId;
	m_sessionId = other.m_sessionId;
	m_mediaSourceId = other.m_mediaSourceId;
	m_positionTicks = other.m_positionTicks;
	m_liveStreamId = other.m_liveStreamId;
	m_playSessionId = other.m_playSessionId;
	m_failed = other.m_failed;
	m_nextMediaType = other.m_nextMediaType;
	m_playlistItemId = other.m_playlistItemId;
	m_nowPlayingQueue = other.m_nowPlayingQueue;
}

PlaybackStopInfo PlaybackStopInfo::fromJson(QJsonObject source) {
	PlaybackStopInfo instance;
	instance.setFromJson(source);
	return instance;
}


void PlaybackStopInfo::setFromJson(QJsonObject source) {
	m_item = Jellyfin::Support::fromJsonValue<QSharedPointer<BaseItemDto>>(source["Item"]);
	m_itemId = Jellyfin::Support::fromJsonValue<QString>(source["ItemId"]);
	m_sessionId = Jellyfin::Support::fromJsonValue<QString>(source["SessionId"]);
	m_mediaSourceId = Jellyfin::Support::fromJsonValue<QString>(source["MediaSourceId"]);
	m_positionTicks = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["PositionTicks"]);
	m_liveStreamId = Jellyfin::Support::fromJsonValue<QString>(source["LiveStreamId"]);
	m_playSessionId = Jellyfin::Support::fromJsonValue<QString>(source["PlaySessionId"]);
	m_failed = Jellyfin::Support::fromJsonValue<bool>(source["Failed"]);
	m_nextMediaType = Jellyfin::Support::fromJsonValue<QString>(source["NextMediaType"]);
	m_playlistItemId = Jellyfin::Support::fromJsonValue<QString>(source["PlaylistItemId"]);
	m_nowPlayingQueue = Jellyfin::Support::fromJsonValue<QList<QueueItem>>(source["NowPlayingQueue"]);

}
	
QJsonObject PlaybackStopInfo::toJson() const {
	QJsonObject result;
	
	result["Item"] = Jellyfin::Support::toJsonValue<QSharedPointer<BaseItemDto>>(m_item);		
	result["ItemId"] = Jellyfin::Support::toJsonValue<QString>(m_itemId);		
	
	if (!(m_sessionId.isNull())) {
		result["SessionId"] = Jellyfin::Support::toJsonValue<QString>(m_sessionId);
	}
			
	
	if (!(m_mediaSourceId.isNull())) {
		result["MediaSourceId"] = Jellyfin::Support::toJsonValue<QString>(m_mediaSourceId);
	}
			
	
	if (!(!m_positionTicks.has_value())) {
		result["PositionTicks"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_positionTicks);
	}
			
	
	if (!(m_liveStreamId.isNull())) {
		result["LiveStreamId"] = Jellyfin::Support::toJsonValue<QString>(m_liveStreamId);
	}
			
	
	if (!(m_playSessionId.isNull())) {
		result["PlaySessionId"] = Jellyfin::Support::toJsonValue<QString>(m_playSessionId);
	}
			
	result["Failed"] = Jellyfin::Support::toJsonValue<bool>(m_failed);		
	
	if (!(m_nextMediaType.isNull())) {
		result["NextMediaType"] = Jellyfin::Support::toJsonValue<QString>(m_nextMediaType);
	}
			
	
	if (!(m_playlistItemId.isNull())) {
		result["PlaylistItemId"] = Jellyfin::Support::toJsonValue<QString>(m_playlistItemId);
	}
			
	
	if (!(m_nowPlayingQueue.size() == 0)) {
		result["NowPlayingQueue"] = Jellyfin::Support::toJsonValue<QList<QueueItem>>(m_nowPlayingQueue);
	}
		
	return result;
}

QSharedPointer<BaseItemDto> PlaybackStopInfo::item() const { return m_item; }

void PlaybackStopInfo::setItem(QSharedPointer<BaseItemDto> newItem) {
	m_item = newItem;
}

QString PlaybackStopInfo::itemId() const { return m_itemId; }

void PlaybackStopInfo::setItemId(QString newItemId) {
	m_itemId = newItemId;
}

QString PlaybackStopInfo::sessionId() const { return m_sessionId; }

void PlaybackStopInfo::setSessionId(QString newSessionId) {
	m_sessionId = newSessionId;
}
bool PlaybackStopInfo::sessionIdNull() const {
	return m_sessionId.isNull();
}

void PlaybackStopInfo::setSessionIdNull() {
	m_sessionId.clear();

}
QString PlaybackStopInfo::mediaSourceId() const { return m_mediaSourceId; }

void PlaybackStopInfo::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}
bool PlaybackStopInfo::mediaSourceIdNull() const {
	return m_mediaSourceId.isNull();
}

void PlaybackStopInfo::setMediaSourceIdNull() {
	m_mediaSourceId.clear();

}
std::optional<qint64> PlaybackStopInfo::positionTicks() const { return m_positionTicks; }

void PlaybackStopInfo::setPositionTicks(std::optional<qint64> newPositionTicks) {
	m_positionTicks = newPositionTicks;
}
bool PlaybackStopInfo::positionTicksNull() const {
	return !m_positionTicks.has_value();
}

void PlaybackStopInfo::setPositionTicksNull() {
	m_positionTicks = std::nullopt;

}
QString PlaybackStopInfo::liveStreamId() const { return m_liveStreamId; }

void PlaybackStopInfo::setLiveStreamId(QString newLiveStreamId) {
	m_liveStreamId = newLiveStreamId;
}
bool PlaybackStopInfo::liveStreamIdNull() const {
	return m_liveStreamId.isNull();
}

void PlaybackStopInfo::setLiveStreamIdNull() {
	m_liveStreamId.clear();

}
QString PlaybackStopInfo::playSessionId() const { return m_playSessionId; }

void PlaybackStopInfo::setPlaySessionId(QString newPlaySessionId) {
	m_playSessionId = newPlaySessionId;
}
bool PlaybackStopInfo::playSessionIdNull() const {
	return m_playSessionId.isNull();
}

void PlaybackStopInfo::setPlaySessionIdNull() {
	m_playSessionId.clear();

}
bool PlaybackStopInfo::failed() const { return m_failed; }

void PlaybackStopInfo::setFailed(bool newFailed) {
	m_failed = newFailed;
}

QString PlaybackStopInfo::nextMediaType() const { return m_nextMediaType; }

void PlaybackStopInfo::setNextMediaType(QString newNextMediaType) {
	m_nextMediaType = newNextMediaType;
}
bool PlaybackStopInfo::nextMediaTypeNull() const {
	return m_nextMediaType.isNull();
}

void PlaybackStopInfo::setNextMediaTypeNull() {
	m_nextMediaType.clear();

}
QString PlaybackStopInfo::playlistItemId() const { return m_playlistItemId; }

void PlaybackStopInfo::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
}
bool PlaybackStopInfo::playlistItemIdNull() const {
	return m_playlistItemId.isNull();
}

void PlaybackStopInfo::setPlaylistItemIdNull() {
	m_playlistItemId.clear();

}
QList<QueueItem> PlaybackStopInfo::nowPlayingQueue() const { return m_nowPlayingQueue; }

void PlaybackStopInfo::setNowPlayingQueue(QList<QueueItem> newNowPlayingQueue) {
	m_nowPlayingQueue = newNowPlayingQueue;
}
bool PlaybackStopInfo::nowPlayingQueueNull() const {
	return m_nowPlayingQueue.size() == 0;
}

void PlaybackStopInfo::setNowPlayingQueueNull() {
	m_nowPlayingQueue.clear();

}

} // NS DTO

namespace Support {

using PlaybackStopInfo = Jellyfin::DTO::PlaybackStopInfo;

template <>
PlaybackStopInfo fromJsonValue(const QJsonValue &source, convertType<PlaybackStopInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return PlaybackStopInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const PlaybackStopInfo &source, convertType<PlaybackStopInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
