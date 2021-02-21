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

#include <JellyfinQt/DTO/playbackstartinfo.h>

#include <JellyfinQt/DTO/playmethod.h>
#include <JellyfinQt/DTO/repeatmode.h>

namespace Jellyfin {
namespace DTO {

PlaybackStartInfo::PlaybackStartInfo(QObject *parent) : QObject(parent) {}

PlaybackStartInfo *PlaybackStartInfo::fromJSON(QJsonObject source, QObject *parent) {
	PlaybackStartInfo *instance = new PlaybackStartInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void PlaybackStartInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject PlaybackStartInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
bool PlaybackStartInfo::canSeek() const { return m_canSeek; }
void PlaybackStartInfo::setCanSeek(bool newCanSeek) {
	m_canSeek = newCanSeek;
	emit canSeekChanged(newCanSeek);
}

BaseItemDto * PlaybackStartInfo::item() const { return m_item; }
void PlaybackStartInfo::setItem(BaseItemDto * newItem) {
	m_item = newItem;
	emit itemChanged(newItem);
}

QString PlaybackStartInfo::itemId() const { return m_itemId; }
void PlaybackStartInfo::setItemId(QString newItemId) {
	m_itemId = newItemId;
	emit itemIdChanged(newItemId);
}

QString PlaybackStartInfo::sessionId() const { return m_sessionId; }
void PlaybackStartInfo::setSessionId(QString newSessionId) {
	m_sessionId = newSessionId;
	emit sessionIdChanged(newSessionId);
}

QString PlaybackStartInfo::mediaSourceId() const { return m_mediaSourceId; }
void PlaybackStartInfo::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
	emit mediaSourceIdChanged(newMediaSourceId);
}

qint32 PlaybackStartInfo::audioStreamIndex() const { return m_audioStreamIndex; }
void PlaybackStartInfo::setAudioStreamIndex(qint32 newAudioStreamIndex) {
	m_audioStreamIndex = newAudioStreamIndex;
	emit audioStreamIndexChanged(newAudioStreamIndex);
}

qint32 PlaybackStartInfo::subtitleStreamIndex() const { return m_subtitleStreamIndex; }
void PlaybackStartInfo::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex) {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
	emit subtitleStreamIndexChanged(newSubtitleStreamIndex);
}

bool PlaybackStartInfo::isPaused() const { return m_isPaused; }
void PlaybackStartInfo::setIsPaused(bool newIsPaused) {
	m_isPaused = newIsPaused;
	emit isPausedChanged(newIsPaused);
}

bool PlaybackStartInfo::isMuted() const { return m_isMuted; }
void PlaybackStartInfo::setIsMuted(bool newIsMuted) {
	m_isMuted = newIsMuted;
	emit isMutedChanged(newIsMuted);
}

qint64 PlaybackStartInfo::positionTicks() const { return m_positionTicks; }
void PlaybackStartInfo::setPositionTicks(qint64 newPositionTicks) {
	m_positionTicks = newPositionTicks;
	emit positionTicksChanged(newPositionTicks);
}

qint64 PlaybackStartInfo::playbackStartTimeTicks() const { return m_playbackStartTimeTicks; }
void PlaybackStartInfo::setPlaybackStartTimeTicks(qint64 newPlaybackStartTimeTicks) {
	m_playbackStartTimeTicks = newPlaybackStartTimeTicks;
	emit playbackStartTimeTicksChanged(newPlaybackStartTimeTicks);
}

qint32 PlaybackStartInfo::volumeLevel() const { return m_volumeLevel; }
void PlaybackStartInfo::setVolumeLevel(qint32 newVolumeLevel) {
	m_volumeLevel = newVolumeLevel;
	emit volumeLevelChanged(newVolumeLevel);
}

qint32 PlaybackStartInfo::brightness() const { return m_brightness; }
void PlaybackStartInfo::setBrightness(qint32 newBrightness) {
	m_brightness = newBrightness;
	emit brightnessChanged(newBrightness);
}

QString PlaybackStartInfo::aspectRatio() const { return m_aspectRatio; }
void PlaybackStartInfo::setAspectRatio(QString newAspectRatio) {
	m_aspectRatio = newAspectRatio;
	emit aspectRatioChanged(newAspectRatio);
}

PlayMethod PlaybackStartInfo::playMethod() const { return m_playMethod; }
void PlaybackStartInfo::setPlayMethod(PlayMethod newPlayMethod) {
	m_playMethod = newPlayMethod;
	emit playMethodChanged(newPlayMethod);
}

QString PlaybackStartInfo::liveStreamId() const { return m_liveStreamId; }
void PlaybackStartInfo::setLiveStreamId(QString newLiveStreamId) {
	m_liveStreamId = newLiveStreamId;
	emit liveStreamIdChanged(newLiveStreamId);
}

QString PlaybackStartInfo::playSessionId() const { return m_playSessionId; }
void PlaybackStartInfo::setPlaySessionId(QString newPlaySessionId) {
	m_playSessionId = newPlaySessionId;
	emit playSessionIdChanged(newPlaySessionId);
}

RepeatMode PlaybackStartInfo::repeatMode() const { return m_repeatMode; }
void PlaybackStartInfo::setRepeatMode(RepeatMode newRepeatMode) {
	m_repeatMode = newRepeatMode;
	emit repeatModeChanged(newRepeatMode);
}

QList<QueueItem *> PlaybackStartInfo::nowPlayingQueue() const { return m_nowPlayingQueue; }
void PlaybackStartInfo::setNowPlayingQueue(QList<QueueItem *> newNowPlayingQueue) {
	m_nowPlayingQueue = newNowPlayingQueue;
	emit nowPlayingQueueChanged(newNowPlayingQueue);
}

QString PlaybackStartInfo::playlistItemId() const { return m_playlistItemId; }
void PlaybackStartInfo::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
	emit playlistItemIdChanged(newPlaylistItemId);
}


} // NS Jellyfin
} // NS DTO
