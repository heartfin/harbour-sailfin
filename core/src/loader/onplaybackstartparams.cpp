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

#include "JellyfinQt/loader/onplaybackstartparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// OnPlaybackStartParams

const QString &OnPlaybackStartParams::itemId() const {
	return m_itemId;
}

void OnPlaybackStartParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &OnPlaybackStartParams::userId() const {
	return m_userId;
}

void OnPlaybackStartParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const qint32 &OnPlaybackStartParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void OnPlaybackStartParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool OnPlaybackStartParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void OnPlaybackStartParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &OnPlaybackStartParams::canSeek() const {
	return m_canSeek.value();
}

void OnPlaybackStartParams::setCanSeek(bool newCanSeek)  {
	m_canSeek = newCanSeek;
}

bool OnPlaybackStartParams::canSeekNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_canSeek.has_value();
}

void OnPlaybackStartParams::setCanSeekNull() {
	m_canSeek = std::nullopt;
}


const QString &OnPlaybackStartParams::liveStreamId() const {
	return m_liveStreamId;
}

void OnPlaybackStartParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool OnPlaybackStartParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void OnPlaybackStartParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const QString &OnPlaybackStartParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void OnPlaybackStartParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool OnPlaybackStartParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void OnPlaybackStartParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const PlayMethod &OnPlaybackStartParams::playMethod() const {
	return m_playMethod;
}

void OnPlaybackStartParams::setPlayMethod(PlayMethod newPlayMethod)  {
	m_playMethod = newPlayMethod;
}

bool OnPlaybackStartParams::playMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playMethod== PlayMethod::EnumNotSet;
}

void OnPlaybackStartParams::setPlayMethodNull() {
	m_playMethod= PlayMethod::EnumNotSet;
}


const QString &OnPlaybackStartParams::playSessionId() const {
	return m_playSessionId;
}

void OnPlaybackStartParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool OnPlaybackStartParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void OnPlaybackStartParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const qint32 &OnPlaybackStartParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void OnPlaybackStartParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool OnPlaybackStartParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void OnPlaybackStartParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
