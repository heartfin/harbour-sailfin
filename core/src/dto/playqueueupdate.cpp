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

#include <JellyfinQt/dto/playqueueupdate.h>

namespace Jellyfin {
namespace DTO {

PlayQueueUpdate::PlayQueueUpdate() {}
PlayQueueUpdate::PlayQueueUpdate (
		PlayQueueUpdateReason reason, 
		QDateTime lastUpdate, 
		QList<SyncPlayQueueItem> playlist, 
		qint32 playingItemIndex, 
		qint64 startPositionTicks, 
		bool isPlaying, 
		GroupShuffleMode shuffleMode, 
		GroupRepeatMode repeatMode 
		) :
	m_reason(reason),
	m_lastUpdate(lastUpdate),
	m_playlist(playlist),
	m_playingItemIndex(playingItemIndex),
	m_startPositionTicks(startPositionTicks),
	m_isPlaying(isPlaying),
	m_shuffleMode(shuffleMode),
	m_repeatMode(repeatMode) { }



PlayQueueUpdate::PlayQueueUpdate(const PlayQueueUpdate &other) :

	m_reason(other.m_reason),
	m_lastUpdate(other.m_lastUpdate),
	m_playlist(other.m_playlist),
	m_playingItemIndex(other.m_playingItemIndex),
	m_startPositionTicks(other.m_startPositionTicks),
	m_isPlaying(other.m_isPlaying),
	m_shuffleMode(other.m_shuffleMode),
	m_repeatMode(other.m_repeatMode){}


void PlayQueueUpdate::replaceData(PlayQueueUpdate &other) {
	m_reason = other.m_reason;
	m_lastUpdate = other.m_lastUpdate;
	m_playlist = other.m_playlist;
	m_playingItemIndex = other.m_playingItemIndex;
	m_startPositionTicks = other.m_startPositionTicks;
	m_isPlaying = other.m_isPlaying;
	m_shuffleMode = other.m_shuffleMode;
	m_repeatMode = other.m_repeatMode;
}

PlayQueueUpdate PlayQueueUpdate::fromJson(QJsonObject source) {
	PlayQueueUpdate instance;
	instance.setFromJson(source);
	return instance;
}


void PlayQueueUpdate::setFromJson(QJsonObject source) {
	m_reason = Jellyfin::Support::fromJsonValue<PlayQueueUpdateReason>(source["Reason"]);
	m_lastUpdate = Jellyfin::Support::fromJsonValue<QDateTime>(source["LastUpdate"]);
	m_playlist = Jellyfin::Support::fromJsonValue<QList<SyncPlayQueueItem>>(source["Playlist"]);
	m_playingItemIndex = Jellyfin::Support::fromJsonValue<qint32>(source["PlayingItemIndex"]);
	m_startPositionTicks = Jellyfin::Support::fromJsonValue<qint64>(source["StartPositionTicks"]);
	m_isPlaying = Jellyfin::Support::fromJsonValue<bool>(source["IsPlaying"]);
	m_shuffleMode = Jellyfin::Support::fromJsonValue<GroupShuffleMode>(source["ShuffleMode"]);
	m_repeatMode = Jellyfin::Support::fromJsonValue<GroupRepeatMode>(source["RepeatMode"]);

}
	
QJsonObject PlayQueueUpdate::toJson() const {
	QJsonObject result;
	
	result["Reason"] = Jellyfin::Support::toJsonValue<PlayQueueUpdateReason>(m_reason);		
	result["LastUpdate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_lastUpdate);		
	result["Playlist"] = Jellyfin::Support::toJsonValue<QList<SyncPlayQueueItem>>(m_playlist);		
	result["PlayingItemIndex"] = Jellyfin::Support::toJsonValue<qint32>(m_playingItemIndex);		
	result["StartPositionTicks"] = Jellyfin::Support::toJsonValue<qint64>(m_startPositionTicks);		
	result["IsPlaying"] = Jellyfin::Support::toJsonValue<bool>(m_isPlaying);		
	result["ShuffleMode"] = Jellyfin::Support::toJsonValue<GroupShuffleMode>(m_shuffleMode);		
	result["RepeatMode"] = Jellyfin::Support::toJsonValue<GroupRepeatMode>(m_repeatMode);	
	return result;
}

PlayQueueUpdateReason PlayQueueUpdate::reason() const { return m_reason; }

void PlayQueueUpdate::setReason(PlayQueueUpdateReason newReason) {
	m_reason = newReason;
}

QDateTime PlayQueueUpdate::lastUpdate() const { return m_lastUpdate; }

void PlayQueueUpdate::setLastUpdate(QDateTime newLastUpdate) {
	m_lastUpdate = newLastUpdate;
}

QList<SyncPlayQueueItem> PlayQueueUpdate::playlist() const { return m_playlist; }

void PlayQueueUpdate::setPlaylist(QList<SyncPlayQueueItem> newPlaylist) {
	m_playlist = newPlaylist;
}

qint32 PlayQueueUpdate::playingItemIndex() const { return m_playingItemIndex; }

void PlayQueueUpdate::setPlayingItemIndex(qint32 newPlayingItemIndex) {
	m_playingItemIndex = newPlayingItemIndex;
}

qint64 PlayQueueUpdate::startPositionTicks() const { return m_startPositionTicks; }

void PlayQueueUpdate::setStartPositionTicks(qint64 newStartPositionTicks) {
	m_startPositionTicks = newStartPositionTicks;
}

bool PlayQueueUpdate::isPlaying() const { return m_isPlaying; }

void PlayQueueUpdate::setIsPlaying(bool newIsPlaying) {
	m_isPlaying = newIsPlaying;
}

GroupShuffleMode PlayQueueUpdate::shuffleMode() const { return m_shuffleMode; }

void PlayQueueUpdate::setShuffleMode(GroupShuffleMode newShuffleMode) {
	m_shuffleMode = newShuffleMode;
}

GroupRepeatMode PlayQueueUpdate::repeatMode() const { return m_repeatMode; }

void PlayQueueUpdate::setRepeatMode(GroupRepeatMode newRepeatMode) {
	m_repeatMode = newRepeatMode;
}


} // NS DTO

namespace Support {

using PlayQueueUpdate = Jellyfin::DTO::PlayQueueUpdate;

template <>
PlayQueueUpdate fromJsonValue(const QJsonValue &source, convertType<PlayQueueUpdate>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return PlayQueueUpdate::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const PlayQueueUpdate &source, convertType<PlayQueueUpdate>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
