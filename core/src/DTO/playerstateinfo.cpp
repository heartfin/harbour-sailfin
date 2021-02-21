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

#include <JellyfinQt/DTO/playerstateinfo.h>

#include <JellyfinQt/DTO/playmethod.h>
#include <JellyfinQt/DTO/repeatmode.h>

namespace Jellyfin {
namespace DTO {

PlayerStateInfo::PlayerStateInfo(QObject *parent) : QObject(parent) {}

PlayerStateInfo *PlayerStateInfo::fromJSON(QJsonObject source, QObject *parent) {
	PlayerStateInfo *instance = new PlayerStateInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void PlayerStateInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject PlayerStateInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
qint64 PlayerStateInfo::positionTicks() const { return m_positionTicks; }
void PlayerStateInfo::setPositionTicks(qint64 newPositionTicks) {
	m_positionTicks = newPositionTicks;
	emit positionTicksChanged(newPositionTicks);
}

bool PlayerStateInfo::canSeek() const { return m_canSeek; }
void PlayerStateInfo::setCanSeek(bool newCanSeek) {
	m_canSeek = newCanSeek;
	emit canSeekChanged(newCanSeek);
}

bool PlayerStateInfo::isPaused() const { return m_isPaused; }
void PlayerStateInfo::setIsPaused(bool newIsPaused) {
	m_isPaused = newIsPaused;
	emit isPausedChanged(newIsPaused);
}

bool PlayerStateInfo::isMuted() const { return m_isMuted; }
void PlayerStateInfo::setIsMuted(bool newIsMuted) {
	m_isMuted = newIsMuted;
	emit isMutedChanged(newIsMuted);
}

qint32 PlayerStateInfo::volumeLevel() const { return m_volumeLevel; }
void PlayerStateInfo::setVolumeLevel(qint32 newVolumeLevel) {
	m_volumeLevel = newVolumeLevel;
	emit volumeLevelChanged(newVolumeLevel);
}

qint32 PlayerStateInfo::audioStreamIndex() const { return m_audioStreamIndex; }
void PlayerStateInfo::setAudioStreamIndex(qint32 newAudioStreamIndex) {
	m_audioStreamIndex = newAudioStreamIndex;
	emit audioStreamIndexChanged(newAudioStreamIndex);
}

qint32 PlayerStateInfo::subtitleStreamIndex() const { return m_subtitleStreamIndex; }
void PlayerStateInfo::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex) {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
	emit subtitleStreamIndexChanged(newSubtitleStreamIndex);
}

QString PlayerStateInfo::mediaSourceId() const { return m_mediaSourceId; }
void PlayerStateInfo::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
	emit mediaSourceIdChanged(newMediaSourceId);
}

PlayMethod PlayerStateInfo::playMethod() const { return m_playMethod; }
void PlayerStateInfo::setPlayMethod(PlayMethod newPlayMethod) {
	m_playMethod = newPlayMethod;
	emit playMethodChanged(newPlayMethod);
}

RepeatMode PlayerStateInfo::repeatMode() const { return m_repeatMode; }
void PlayerStateInfo::setRepeatMode(RepeatMode newRepeatMode) {
	m_repeatMode = newRepeatMode;
	emit repeatModeChanged(newRepeatMode);
}


} // NS Jellyfin
} // NS DTO
