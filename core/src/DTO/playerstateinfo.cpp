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

namespace Jellyfin {
namespace DTO {

PlayerStateInfo::PlayerStateInfo(QObject *parent) {}

PlayerStateInfo PlayerStateInfo::fromJson(QJsonObject source) {PlayerStateInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void PlayerStateInfo::setFromJson(QJsonObject source) {
	m_positionTicks = fromJsonValue<qint64>(source["PositionTicks"]);
	m_canSeek = fromJsonValue<bool>(source["CanSeek"]);
	m_isPaused = fromJsonValue<bool>(source["IsPaused"]);
	m_isMuted = fromJsonValue<bool>(source["IsMuted"]);
	m_volumeLevel = fromJsonValue<qint32>(source["VolumeLevel"]);
	m_audioStreamIndex = fromJsonValue<qint32>(source["AudioStreamIndex"]);
	m_subtitleStreamIndex = fromJsonValue<qint32>(source["SubtitleStreamIndex"]);
	m_mediaSourceId = fromJsonValue<QString>(source["MediaSourceId"]);
	m_playMethod = fromJsonValue<PlayMethod>(source["PlayMethod"]);
	m_repeatMode = fromJsonValue<RepeatMode>(source["RepeatMode"]);

}
	
QJsonObject PlayerStateInfo::toJson() {
	QJsonObject result;
	result["PositionTicks"] = toJsonValue<qint64>(m_positionTicks);
	result["CanSeek"] = toJsonValue<bool>(m_canSeek);
	result["IsPaused"] = toJsonValue<bool>(m_isPaused);
	result["IsMuted"] = toJsonValue<bool>(m_isMuted);
	result["VolumeLevel"] = toJsonValue<qint32>(m_volumeLevel);
	result["AudioStreamIndex"] = toJsonValue<qint32>(m_audioStreamIndex);
	result["SubtitleStreamIndex"] = toJsonValue<qint32>(m_subtitleStreamIndex);
	result["MediaSourceId"] = toJsonValue<QString>(m_mediaSourceId);
	result["PlayMethod"] = toJsonValue<PlayMethod>(m_playMethod);
	result["RepeatMode"] = toJsonValue<RepeatMode>(m_repeatMode);

	return result;
}

qint64 PlayerStateInfo::positionTicks() const { return m_positionTicks; }

void PlayerStateInfo::setPositionTicks(qint64 newPositionTicks) {
	m_positionTicks = newPositionTicks;
}
bool PlayerStateInfo::canSeek() const { return m_canSeek; }

void PlayerStateInfo::setCanSeek(bool newCanSeek) {
	m_canSeek = newCanSeek;
}
bool PlayerStateInfo::isPaused() const { return m_isPaused; }

void PlayerStateInfo::setIsPaused(bool newIsPaused) {
	m_isPaused = newIsPaused;
}
bool PlayerStateInfo::isMuted() const { return m_isMuted; }

void PlayerStateInfo::setIsMuted(bool newIsMuted) {
	m_isMuted = newIsMuted;
}
qint32 PlayerStateInfo::volumeLevel() const { return m_volumeLevel; }

void PlayerStateInfo::setVolumeLevel(qint32 newVolumeLevel) {
	m_volumeLevel = newVolumeLevel;
}
qint32 PlayerStateInfo::audioStreamIndex() const { return m_audioStreamIndex; }

void PlayerStateInfo::setAudioStreamIndex(qint32 newAudioStreamIndex) {
	m_audioStreamIndex = newAudioStreamIndex;
}
qint32 PlayerStateInfo::subtitleStreamIndex() const { return m_subtitleStreamIndex; }

void PlayerStateInfo::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex) {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}
QString PlayerStateInfo::mediaSourceId() const { return m_mediaSourceId; }

void PlayerStateInfo::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}
PlayMethod PlayerStateInfo::playMethod() const { return m_playMethod; }

void PlayerStateInfo::setPlayMethod(PlayMethod newPlayMethod) {
	m_playMethod = newPlayMethod;
}
RepeatMode PlayerStateInfo::repeatMode() const { return m_repeatMode; }

void PlayerStateInfo::setRepeatMode(RepeatMode newRepeatMode) {
	m_repeatMode = newRepeatMode;
}


} // NS Jellyfin
} // NS DTO
