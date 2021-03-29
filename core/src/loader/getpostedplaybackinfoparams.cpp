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

#include "JellyfinQt/loader/getpostedplaybackinfoparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetPostedPlaybackInfoParams

const QString &GetPostedPlaybackInfoParams::itemId() const {
	return m_itemId;
}

void GetPostedPlaybackInfoParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetPostedPlaybackInfoParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetPostedPlaybackInfoParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetPostedPlaybackInfoParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetPostedPlaybackInfoParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetPostedPlaybackInfoParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetPostedPlaybackInfoParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetPostedPlaybackInfoParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetPostedPlaybackInfoParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetPostedPlaybackInfoParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetPostedPlaybackInfoParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetPostedPlaybackInfoParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetPostedPlaybackInfoParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetPostedPlaybackInfoParams::autoOpenLiveStream() const {
	return m_autoOpenLiveStream.value();
}

void GetPostedPlaybackInfoParams::setAutoOpenLiveStream(bool newAutoOpenLiveStream)  {
	m_autoOpenLiveStream = newAutoOpenLiveStream;
}

bool GetPostedPlaybackInfoParams::autoOpenLiveStreamNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_autoOpenLiveStream.has_value();
}

void GetPostedPlaybackInfoParams::setAutoOpenLiveStreamNull() {
	m_autoOpenLiveStream = std::nullopt;
}


const bool &GetPostedPlaybackInfoParams::enableDirectPlay() const {
	return m_enableDirectPlay.value();
}

void GetPostedPlaybackInfoParams::setEnableDirectPlay(bool newEnableDirectPlay)  {
	m_enableDirectPlay = newEnableDirectPlay;
}

bool GetPostedPlaybackInfoParams::enableDirectPlayNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableDirectPlay.has_value();
}

void GetPostedPlaybackInfoParams::setEnableDirectPlayNull() {
	m_enableDirectPlay = std::nullopt;
}


const bool &GetPostedPlaybackInfoParams::enableDirectStream() const {
	return m_enableDirectStream.value();
}

void GetPostedPlaybackInfoParams::setEnableDirectStream(bool newEnableDirectStream)  {
	m_enableDirectStream = newEnableDirectStream;
}

bool GetPostedPlaybackInfoParams::enableDirectStreamNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableDirectStream.has_value();
}

void GetPostedPlaybackInfoParams::setEnableDirectStreamNull() {
	m_enableDirectStream = std::nullopt;
}


const bool &GetPostedPlaybackInfoParams::enableTranscoding() const {
	return m_enableTranscoding.value();
}

void GetPostedPlaybackInfoParams::setEnableTranscoding(bool newEnableTranscoding)  {
	m_enableTranscoding = newEnableTranscoding;
}

bool GetPostedPlaybackInfoParams::enableTranscodingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableTranscoding.has_value();
}

void GetPostedPlaybackInfoParams::setEnableTranscodingNull() {
	m_enableTranscoding = std::nullopt;
}


const QString &GetPostedPlaybackInfoParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetPostedPlaybackInfoParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetPostedPlaybackInfoParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetPostedPlaybackInfoParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetPostedPlaybackInfoParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetPostedPlaybackInfoParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetPostedPlaybackInfoParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetPostedPlaybackInfoParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const qint32 &GetPostedPlaybackInfoParams::maxStreamingBitrate() const {
	return m_maxStreamingBitrate.value();
}

void GetPostedPlaybackInfoParams::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate)  {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}

bool GetPostedPlaybackInfoParams::maxStreamingBitrateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxStreamingBitrate.has_value();
}

void GetPostedPlaybackInfoParams::setMaxStreamingBitrateNull() {
	m_maxStreamingBitrate = std::nullopt;
}


const QString &GetPostedPlaybackInfoParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetPostedPlaybackInfoParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetPostedPlaybackInfoParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetPostedPlaybackInfoParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint64 &GetPostedPlaybackInfoParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetPostedPlaybackInfoParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetPostedPlaybackInfoParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetPostedPlaybackInfoParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const qint32 &GetPostedPlaybackInfoParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetPostedPlaybackInfoParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetPostedPlaybackInfoParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetPostedPlaybackInfoParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetPostedPlaybackInfoParams::userId() const {
	return m_userId;
}

void GetPostedPlaybackInfoParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetPostedPlaybackInfoParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetPostedPlaybackInfoParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
