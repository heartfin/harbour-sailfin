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

#include <JellyfinQt/DTO/playbackprogressinfo.h>

#include <JellyfinQt/DTO/playmethod.h>
#include <JellyfinQt/DTO/repeatmode.h>

namespace Jellyfin {
namespace DTO {

PlaybackProgressInfo::PlaybackProgressInfo(QObject *parent) : QObject(parent) {}

PlaybackProgressInfo *PlaybackProgressInfo::fromJSON(QJsonObject source, QObject *parent) {
	PlaybackProgressInfo *instance = new PlaybackProgressInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void PlaybackProgressInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject PlaybackProgressInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
bool PlaybackProgressInfo::canSeek() const { return m_canSeek; }
void PlaybackProgressInfo::setCanSeek(bool newCanSeek) {
	m_canSeek = newCanSeek;
	emit canSeekChanged(newCanSeek);
}

BaseItemDto * PlaybackProgressInfo::item() const { return m_item; }
void PlaybackProgressInfo::setItem(BaseItemDto * newItem) {
	m_item = newItem;
	emit itemChanged(newItem);
}

QString PlaybackProgressInfo::itemId() const { return m_itemId; }
void PlaybackProgressInfo::setItemId(QString newItemId) {
	m_itemId = newItemId;
	emit itemIdChanged(newItemId);
}

QString PlaybackProgressInfo::sessionId() const { return m_sessionId; }
void PlaybackProgressInfo::setSessionId(QString newSessionId) {
	m_sessionId = newSessionId;
	emit sessionIdChanged(newSessionId);
}

QString PlaybackProgressInfo::mediaSourceId() const { return m_mediaSourceId; }
void PlaybackProgressInfo::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
	emit mediaSourceIdChanged(newMediaSourceId);
}

qint32 PlaybackProgressInfo::audioStreamIndex() const { return m_audioStreamIndex; }
void PlaybackProgressInfo::setAudioStreamIndex(qint32 newAudioStreamIndex) {
	m_audioStreamIndex = newAudioStreamIndex;
	emit audioStreamIndexChanged(newAudioStreamIndex);
}

qint32 PlaybackProgressInfo::subtitleStreamIndex() const { return m_subtitleStreamIndex; }
void PlaybackProgressInfo::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex) {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
	emit subtitleStreamIndexChanged(newSubtitleStreamIndex);
}

bool PlaybackProgressInfo::isPaused() const { return m_isPaused; }
void PlaybackProgressInfo::setIsPaused(bool newIsPaused) {
	m_isPaused = newIsPaused;
	emit isPausedChanged(newIsPaused);
}

bool PlaybackProgressInfo::isMuted() const { return m_isMuted; }
void PlaybackProgressInfo::setIsMuted(bool newIsMuted) {
	m_isMuted = newIsMuted;
	emit isMutedChanged(newIsMuted);
}

qint64 PlaybackProgressInfo::positionTicks() const { return m_positionTicks; }
void PlaybackProgressInfo::setPositionTicks(qint64 newPositionTicks) {
	m_positionTicks = newPositionTicks;
	emit positionTicksChanged(newPositionTicks);
}

qint64 PlaybackProgressInfo::playbackStartTimeTicks() const { return m_playbackStartTimeTicks; }
void PlaybackProgressInfo::setPlaybackStartTimeTicks(qint64 newPlaybackStartTimeTicks) {
	m_playbackStartTimeTicks = newPlaybackStartTimeTicks;
	emit playbackStartTimeTicksChanged(newPlaybackStartTimeTicks);
}

qint32 PlaybackProgressInfo::volumeLevel() const { return m_volumeLevel; }
void PlaybackProgressInfo::setVolumeLevel(qint32 newVolumeLevel) {
	m_volumeLevel = newVolumeLevel;
	emit volumeLevelChanged(newVolumeLevel);
}

qint32 PlaybackProgressInfo::brightness() const { return m_brightness; }
void PlaybackProgressInfo::setBrightness(qint32 newBrightness) {
	m_brightness = newBrightness;
	emit brightnessChanged(newBrightness);
}

QString PlaybackProgressInfo::aspectRatio() const { return m_aspectRatio; }
void PlaybackProgressInfo::setAspectRatio(QString newAspectRatio) {
	m_aspectRatio = newAspectRatio;
	emit aspectRatioChanged(newAspectRatio);
}

PlayMethod PlaybackProgressInfo::playMethod() const { return m_playMethod; }
void PlaybackProgressInfo::setPlayMethod(PlayMethod newPlayMethod) {
	m_playMethod = newPlayMethod;
	emit playMethodChanged(newPlayMethod);
}

QString PlaybackProgressInfo::liveStreamId() const { return m_liveStreamId; }
void PlaybackProgressInfo::setLiveStreamId(QString newLiveStreamId) {
	m_liveStreamId = newLiveStreamId;
	emit liveStreamIdChanged(newLiveStreamId);
}

QString PlaybackProgressInfo::playSessionId() const { return m_playSessionId; }
void PlaybackProgressInfo::setPlaySessionId(QString newPlaySessionId) {
	m_playSessionId = newPlaySessionId;
	emit playSessionIdChanged(newPlaySessionId);
}

RepeatMode PlaybackProgressInfo::repeatMode() const { return m_repeatMode; }
void PlaybackProgressInfo::setRepeatMode(RepeatMode newRepeatMode) {
	m_repeatMode = newRepeatMode;
	emit repeatModeChanged(newRepeatMode);
}

QList<QueueItem *> PlaybackProgressInfo::nowPlayingQueue() const { return m_nowPlayingQueue; }
void PlaybackProgressInfo::setNowPlayingQueue(QList<QueueItem *> newNowPlayingQueue) {
	m_nowPlayingQueue = newNowPlayingQueue;
	emit nowPlayingQueueChanged(newNowPlayingQueue);
}

QString PlaybackProgressInfo::playlistItemId() const { return m_playlistItemId; }
void PlaybackProgressInfo::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
	emit playlistItemIdChanged(newPlaylistItemId);
}


} // NS Jellyfin
} // NS DTO
