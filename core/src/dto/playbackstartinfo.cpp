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

#include <JellyfinQt/dto/playbackstartinfo.h>

namespace Jellyfin {
namespace DTO {

PlaybackStartInfo::PlaybackStartInfo() {}
PlaybackStartInfo::PlaybackStartInfo (
		bool canSeek, 
		QSharedPointer<BaseItemDto> item, 
		QString itemId, 
		bool isPaused, 
		bool isMuted, 
		PlayMethod playMethod, 
		RepeatMode repeatMode, 
		PlaybackOrder playbackOrder 
		) :
	m_canSeek(canSeek),
	m_item(item),
	m_itemId(itemId),
	m_isPaused(isPaused),
	m_isMuted(isMuted),
	m_playMethod(playMethod),
	m_repeatMode(repeatMode),
	m_playbackOrder(playbackOrder) { }



PlaybackStartInfo::PlaybackStartInfo(const PlaybackStartInfo &other) :

	m_canSeek(other.m_canSeek),
	m_item(other.m_item),
	m_itemId(other.m_itemId),
	m_sessionId(other.m_sessionId),
	m_mediaSourceId(other.m_mediaSourceId),
	m_audioStreamIndex(other.m_audioStreamIndex),
	m_subtitleStreamIndex(other.m_subtitleStreamIndex),
	m_isPaused(other.m_isPaused),
	m_isMuted(other.m_isMuted),
	m_positionTicks(other.m_positionTicks),
	m_playbackStartTimeTicks(other.m_playbackStartTimeTicks),
	m_volumeLevel(other.m_volumeLevel),
	m_brightness(other.m_brightness),
	m_aspectRatio(other.m_aspectRatio),
	m_playMethod(other.m_playMethod),
	m_liveStreamId(other.m_liveStreamId),
	m_playSessionId(other.m_playSessionId),
	m_repeatMode(other.m_repeatMode),
	m_playbackOrder(other.m_playbackOrder),
	m_nowPlayingQueue(other.m_nowPlayingQueue),
	m_playlistItemId(other.m_playlistItemId){}


void PlaybackStartInfo::replaceData(PlaybackStartInfo &other) {
	m_canSeek = other.m_canSeek;
	m_item = other.m_item;
	m_itemId = other.m_itemId;
	m_sessionId = other.m_sessionId;
	m_mediaSourceId = other.m_mediaSourceId;
	m_audioStreamIndex = other.m_audioStreamIndex;
	m_subtitleStreamIndex = other.m_subtitleStreamIndex;
	m_isPaused = other.m_isPaused;
	m_isMuted = other.m_isMuted;
	m_positionTicks = other.m_positionTicks;
	m_playbackStartTimeTicks = other.m_playbackStartTimeTicks;
	m_volumeLevel = other.m_volumeLevel;
	m_brightness = other.m_brightness;
	m_aspectRatio = other.m_aspectRatio;
	m_playMethod = other.m_playMethod;
	m_liveStreamId = other.m_liveStreamId;
	m_playSessionId = other.m_playSessionId;
	m_repeatMode = other.m_repeatMode;
	m_playbackOrder = other.m_playbackOrder;
	m_nowPlayingQueue = other.m_nowPlayingQueue;
	m_playlistItemId = other.m_playlistItemId;
}

PlaybackStartInfo PlaybackStartInfo::fromJson(QJsonObject source) {
	PlaybackStartInfo instance;
	instance.setFromJson(source);
	return instance;
}


void PlaybackStartInfo::setFromJson(QJsonObject source) {
	m_canSeek = Jellyfin::Support::fromJsonValue<bool>(source["CanSeek"]);
	m_item = Jellyfin::Support::fromJsonValue<QSharedPointer<BaseItemDto>>(source["Item"]);
	m_itemId = Jellyfin::Support::fromJsonValue<QString>(source["ItemId"]);
	m_sessionId = Jellyfin::Support::fromJsonValue<QString>(source["SessionId"]);
	m_mediaSourceId = Jellyfin::Support::fromJsonValue<QString>(source["MediaSourceId"]);
	m_audioStreamIndex = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["AudioStreamIndex"]);
	m_subtitleStreamIndex = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["SubtitleStreamIndex"]);
	m_isPaused = Jellyfin::Support::fromJsonValue<bool>(source["IsPaused"]);
	m_isMuted = Jellyfin::Support::fromJsonValue<bool>(source["IsMuted"]);
	m_positionTicks = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["PositionTicks"]);
	m_playbackStartTimeTicks = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["PlaybackStartTimeTicks"]);
	m_volumeLevel = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["VolumeLevel"]);
	m_brightness = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Brightness"]);
	m_aspectRatio = Jellyfin::Support::fromJsonValue<QString>(source["AspectRatio"]);
	m_playMethod = Jellyfin::Support::fromJsonValue<PlayMethod>(source["PlayMethod"]);
	m_liveStreamId = Jellyfin::Support::fromJsonValue<QString>(source["LiveStreamId"]);
	m_playSessionId = Jellyfin::Support::fromJsonValue<QString>(source["PlaySessionId"]);
	m_repeatMode = Jellyfin::Support::fromJsonValue<RepeatMode>(source["RepeatMode"]);
	m_playbackOrder = Jellyfin::Support::fromJsonValue<PlaybackOrder>(source["PlaybackOrder"]);
	m_nowPlayingQueue = Jellyfin::Support::fromJsonValue<QList<QueueItem>>(source["NowPlayingQueue"]);
	m_playlistItemId = Jellyfin::Support::fromJsonValue<QString>(source["PlaylistItemId"]);

}
	
QJsonObject PlaybackStartInfo::toJson() const {
	QJsonObject result;
	
	result["CanSeek"] = Jellyfin::Support::toJsonValue<bool>(m_canSeek);		
	result["Item"] = Jellyfin::Support::toJsonValue<QSharedPointer<BaseItemDto>>(m_item);		
	result["ItemId"] = Jellyfin::Support::toJsonValue<QString>(m_itemId);		
	
	if (!(m_sessionId.isNull())) {
		result["SessionId"] = Jellyfin::Support::toJsonValue<QString>(m_sessionId);
	}
			
	
	if (!(m_mediaSourceId.isNull())) {
		result["MediaSourceId"] = Jellyfin::Support::toJsonValue<QString>(m_mediaSourceId);
	}
			
	
	if (!(!m_audioStreamIndex.has_value())) {
		result["AudioStreamIndex"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_audioStreamIndex);
	}
			
	
	if (!(!m_subtitleStreamIndex.has_value())) {
		result["SubtitleStreamIndex"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_subtitleStreamIndex);
	}
			
	result["IsPaused"] = Jellyfin::Support::toJsonValue<bool>(m_isPaused);		
	result["IsMuted"] = Jellyfin::Support::toJsonValue<bool>(m_isMuted);		
	
	if (!(!m_positionTicks.has_value())) {
		result["PositionTicks"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_positionTicks);
	}
			
	
	if (!(!m_playbackStartTimeTicks.has_value())) {
		result["PlaybackStartTimeTicks"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_playbackStartTimeTicks);
	}
			
	
	if (!(!m_volumeLevel.has_value())) {
		result["VolumeLevel"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_volumeLevel);
	}
			
	
	if (!(!m_brightness.has_value())) {
		result["Brightness"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_brightness);
	}
			
	
	if (!(m_aspectRatio.isNull())) {
		result["AspectRatio"] = Jellyfin::Support::toJsonValue<QString>(m_aspectRatio);
	}
			
	result["PlayMethod"] = Jellyfin::Support::toJsonValue<PlayMethod>(m_playMethod);		
	
	if (!(m_liveStreamId.isNull())) {
		result["LiveStreamId"] = Jellyfin::Support::toJsonValue<QString>(m_liveStreamId);
	}
			
	
	if (!(m_playSessionId.isNull())) {
		result["PlaySessionId"] = Jellyfin::Support::toJsonValue<QString>(m_playSessionId);
	}
			
	result["RepeatMode"] = Jellyfin::Support::toJsonValue<RepeatMode>(m_repeatMode);		
	result["PlaybackOrder"] = Jellyfin::Support::toJsonValue<PlaybackOrder>(m_playbackOrder);		
	
	if (!(m_nowPlayingQueue.size() == 0)) {
		result["NowPlayingQueue"] = Jellyfin::Support::toJsonValue<QList<QueueItem>>(m_nowPlayingQueue);
	}
			
	
	if (!(m_playlistItemId.isNull())) {
		result["PlaylistItemId"] = Jellyfin::Support::toJsonValue<QString>(m_playlistItemId);
	}
		
	return result;
}

bool PlaybackStartInfo::canSeek() const { return m_canSeek; }

void PlaybackStartInfo::setCanSeek(bool newCanSeek) {
	m_canSeek = newCanSeek;
}

QSharedPointer<BaseItemDto> PlaybackStartInfo::item() const { return m_item; }

void PlaybackStartInfo::setItem(QSharedPointer<BaseItemDto> newItem) {
	m_item = newItem;
}

QString PlaybackStartInfo::itemId() const { return m_itemId; }

void PlaybackStartInfo::setItemId(QString newItemId) {
	m_itemId = newItemId;
}

QString PlaybackStartInfo::sessionId() const { return m_sessionId; }

void PlaybackStartInfo::setSessionId(QString newSessionId) {
	m_sessionId = newSessionId;
}
bool PlaybackStartInfo::sessionIdNull() const {
	return m_sessionId.isNull();
}

void PlaybackStartInfo::setSessionIdNull() {
	m_sessionId.clear();

}
QString PlaybackStartInfo::mediaSourceId() const { return m_mediaSourceId; }

void PlaybackStartInfo::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}
bool PlaybackStartInfo::mediaSourceIdNull() const {
	return m_mediaSourceId.isNull();
}

void PlaybackStartInfo::setMediaSourceIdNull() {
	m_mediaSourceId.clear();

}
std::optional<qint32> PlaybackStartInfo::audioStreamIndex() const { return m_audioStreamIndex; }

void PlaybackStartInfo::setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) {
	m_audioStreamIndex = newAudioStreamIndex;
}
bool PlaybackStartInfo::audioStreamIndexNull() const {
	return !m_audioStreamIndex.has_value();
}

void PlaybackStartInfo::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;

}
std::optional<qint32> PlaybackStartInfo::subtitleStreamIndex() const { return m_subtitleStreamIndex; }

void PlaybackStartInfo::setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}
bool PlaybackStartInfo::subtitleStreamIndexNull() const {
	return !m_subtitleStreamIndex.has_value();
}

void PlaybackStartInfo::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;

}
bool PlaybackStartInfo::isPaused() const { return m_isPaused; }

void PlaybackStartInfo::setIsPaused(bool newIsPaused) {
	m_isPaused = newIsPaused;
}

bool PlaybackStartInfo::isMuted() const { return m_isMuted; }

void PlaybackStartInfo::setIsMuted(bool newIsMuted) {
	m_isMuted = newIsMuted;
}

std::optional<qint64> PlaybackStartInfo::positionTicks() const { return m_positionTicks; }

void PlaybackStartInfo::setPositionTicks(std::optional<qint64> newPositionTicks) {
	m_positionTicks = newPositionTicks;
}
bool PlaybackStartInfo::positionTicksNull() const {
	return !m_positionTicks.has_value();
}

void PlaybackStartInfo::setPositionTicksNull() {
	m_positionTicks = std::nullopt;

}
std::optional<qint64> PlaybackStartInfo::playbackStartTimeTicks() const { return m_playbackStartTimeTicks; }

void PlaybackStartInfo::setPlaybackStartTimeTicks(std::optional<qint64> newPlaybackStartTimeTicks) {
	m_playbackStartTimeTicks = newPlaybackStartTimeTicks;
}
bool PlaybackStartInfo::playbackStartTimeTicksNull() const {
	return !m_playbackStartTimeTicks.has_value();
}

void PlaybackStartInfo::setPlaybackStartTimeTicksNull() {
	m_playbackStartTimeTicks = std::nullopt;

}
std::optional<qint32> PlaybackStartInfo::volumeLevel() const { return m_volumeLevel; }

void PlaybackStartInfo::setVolumeLevel(std::optional<qint32> newVolumeLevel) {
	m_volumeLevel = newVolumeLevel;
}
bool PlaybackStartInfo::volumeLevelNull() const {
	return !m_volumeLevel.has_value();
}

void PlaybackStartInfo::setVolumeLevelNull() {
	m_volumeLevel = std::nullopt;

}
std::optional<qint32> PlaybackStartInfo::brightness() const { return m_brightness; }

void PlaybackStartInfo::setBrightness(std::optional<qint32> newBrightness) {
	m_brightness = newBrightness;
}
bool PlaybackStartInfo::brightnessNull() const {
	return !m_brightness.has_value();
}

void PlaybackStartInfo::setBrightnessNull() {
	m_brightness = std::nullopt;

}
QString PlaybackStartInfo::aspectRatio() const { return m_aspectRatio; }

void PlaybackStartInfo::setAspectRatio(QString newAspectRatio) {
	m_aspectRatio = newAspectRatio;
}
bool PlaybackStartInfo::aspectRatioNull() const {
	return m_aspectRatio.isNull();
}

void PlaybackStartInfo::setAspectRatioNull() {
	m_aspectRatio.clear();

}
PlayMethod PlaybackStartInfo::playMethod() const { return m_playMethod; }

void PlaybackStartInfo::setPlayMethod(PlayMethod newPlayMethod) {
	m_playMethod = newPlayMethod;
}

QString PlaybackStartInfo::liveStreamId() const { return m_liveStreamId; }

void PlaybackStartInfo::setLiveStreamId(QString newLiveStreamId) {
	m_liveStreamId = newLiveStreamId;
}
bool PlaybackStartInfo::liveStreamIdNull() const {
	return m_liveStreamId.isNull();
}

void PlaybackStartInfo::setLiveStreamIdNull() {
	m_liveStreamId.clear();

}
QString PlaybackStartInfo::playSessionId() const { return m_playSessionId; }

void PlaybackStartInfo::setPlaySessionId(QString newPlaySessionId) {
	m_playSessionId = newPlaySessionId;
}
bool PlaybackStartInfo::playSessionIdNull() const {
	return m_playSessionId.isNull();
}

void PlaybackStartInfo::setPlaySessionIdNull() {
	m_playSessionId.clear();

}
RepeatMode PlaybackStartInfo::repeatMode() const { return m_repeatMode; }

void PlaybackStartInfo::setRepeatMode(RepeatMode newRepeatMode) {
	m_repeatMode = newRepeatMode;
}

PlaybackOrder PlaybackStartInfo::playbackOrder() const { return m_playbackOrder; }

void PlaybackStartInfo::setPlaybackOrder(PlaybackOrder newPlaybackOrder) {
	m_playbackOrder = newPlaybackOrder;
}

QList<QueueItem> PlaybackStartInfo::nowPlayingQueue() const { return m_nowPlayingQueue; }

void PlaybackStartInfo::setNowPlayingQueue(QList<QueueItem> newNowPlayingQueue) {
	m_nowPlayingQueue = newNowPlayingQueue;
}
bool PlaybackStartInfo::nowPlayingQueueNull() const {
	return m_nowPlayingQueue.size() == 0;
}

void PlaybackStartInfo::setNowPlayingQueueNull() {
	m_nowPlayingQueue.clear();

}
QString PlaybackStartInfo::playlistItemId() const { return m_playlistItemId; }

void PlaybackStartInfo::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
}
bool PlaybackStartInfo::playlistItemIdNull() const {
	return m_playlistItemId.isNull();
}

void PlaybackStartInfo::setPlaylistItemIdNull() {
	m_playlistItemId.clear();

}

} // NS DTO

namespace Support {

using PlaybackStartInfo = Jellyfin::DTO::PlaybackStartInfo;

template <>
PlaybackStartInfo fromJsonValue(const QJsonValue &source, convertType<PlaybackStartInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return PlaybackStartInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const PlaybackStartInfo &source, convertType<PlaybackStartInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
