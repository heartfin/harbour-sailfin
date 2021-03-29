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

#include "JellyfinQt/loader/onplaybackprogressparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// OnPlaybackProgressParams

const QString &OnPlaybackProgressParams::itemId() const {
	return m_itemId;
}

void OnPlaybackProgressParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &OnPlaybackProgressParams::userId() const {
	return m_userId;
}

void OnPlaybackProgressParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const qint32 &OnPlaybackProgressParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void OnPlaybackProgressParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool OnPlaybackProgressParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void OnPlaybackProgressParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &OnPlaybackProgressParams::isMuted() const {
	return m_isMuted.value();
}

void OnPlaybackProgressParams::setIsMuted(bool newIsMuted)  {
	m_isMuted = newIsMuted;
}

bool OnPlaybackProgressParams::isMutedNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_isMuted.has_value();
}

void OnPlaybackProgressParams::setIsMutedNull() {
	m_isMuted = std::nullopt;
}


const bool &OnPlaybackProgressParams::isPaused() const {
	return m_isPaused.value();
}

void OnPlaybackProgressParams::setIsPaused(bool newIsPaused)  {
	m_isPaused = newIsPaused;
}

bool OnPlaybackProgressParams::isPausedNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_isPaused.has_value();
}

void OnPlaybackProgressParams::setIsPausedNull() {
	m_isPaused = std::nullopt;
}


const QString &OnPlaybackProgressParams::liveStreamId() const {
	return m_liveStreamId;
}

void OnPlaybackProgressParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool OnPlaybackProgressParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void OnPlaybackProgressParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const QString &OnPlaybackProgressParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void OnPlaybackProgressParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool OnPlaybackProgressParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void OnPlaybackProgressParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const PlayMethod &OnPlaybackProgressParams::playMethod() const {
	return m_playMethod;
}

void OnPlaybackProgressParams::setPlayMethod(PlayMethod newPlayMethod)  {
	m_playMethod = newPlayMethod;
}

bool OnPlaybackProgressParams::playMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playMethod== PlayMethod::EnumNotSet;
}

void OnPlaybackProgressParams::setPlayMethodNull() {
	m_playMethod= PlayMethod::EnumNotSet;
}


const QString &OnPlaybackProgressParams::playSessionId() const {
	return m_playSessionId;
}

void OnPlaybackProgressParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool OnPlaybackProgressParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void OnPlaybackProgressParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const qint64 &OnPlaybackProgressParams::positionTicks() const {
	return m_positionTicks.value();
}

void OnPlaybackProgressParams::setPositionTicks(qint64 newPositionTicks)  {
	m_positionTicks = newPositionTicks;
}

bool OnPlaybackProgressParams::positionTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_positionTicks.has_value();
}

void OnPlaybackProgressParams::setPositionTicksNull() {
	m_positionTicks = std::nullopt;
}


const RepeatMode &OnPlaybackProgressParams::repeatMode() const {
	return m_repeatMode;
}

void OnPlaybackProgressParams::setRepeatMode(RepeatMode newRepeatMode)  {
	m_repeatMode = newRepeatMode;
}

bool OnPlaybackProgressParams::repeatModeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_repeatMode== RepeatMode::EnumNotSet;
}

void OnPlaybackProgressParams::setRepeatModeNull() {
	m_repeatMode= RepeatMode::EnumNotSet;
}


const qint32 &OnPlaybackProgressParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void OnPlaybackProgressParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool OnPlaybackProgressParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void OnPlaybackProgressParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const qint32 &OnPlaybackProgressParams::volumeLevel() const {
	return m_volumeLevel.value();
}

void OnPlaybackProgressParams::setVolumeLevel(qint32 newVolumeLevel)  {
	m_volumeLevel = newVolumeLevel;
}

bool OnPlaybackProgressParams::volumeLevelNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_volumeLevel.has_value();
}

void OnPlaybackProgressParams::setVolumeLevelNull() {
	m_volumeLevel = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
