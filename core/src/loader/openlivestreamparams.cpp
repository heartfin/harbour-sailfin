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

#include "JellyfinQt/loader/openlivestreamparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// OpenLiveStreamParams

const qint32 &OpenLiveStreamParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void OpenLiveStreamParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool OpenLiveStreamParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void OpenLiveStreamParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &OpenLiveStreamParams::enableDirectPlay() const {
	return m_enableDirectPlay.value();
}

void OpenLiveStreamParams::setEnableDirectPlay(bool newEnableDirectPlay)  {
	m_enableDirectPlay = newEnableDirectPlay;
}

bool OpenLiveStreamParams::enableDirectPlayNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableDirectPlay.has_value();
}

void OpenLiveStreamParams::setEnableDirectPlayNull() {
	m_enableDirectPlay = std::nullopt;
}


const bool &OpenLiveStreamParams::enableDirectStream() const {
	return m_enableDirectStream.value();
}

void OpenLiveStreamParams::setEnableDirectStream(bool newEnableDirectStream)  {
	m_enableDirectStream = newEnableDirectStream;
}

bool OpenLiveStreamParams::enableDirectStreamNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableDirectStream.has_value();
}

void OpenLiveStreamParams::setEnableDirectStreamNull() {
	m_enableDirectStream = std::nullopt;
}


const QString &OpenLiveStreamParams::itemId() const {
	return m_itemId;
}

void OpenLiveStreamParams::setItemId(QString newItemId)  {
	m_itemId = newItemId;
}

bool OpenLiveStreamParams::itemIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_itemId.isNull();
}

void OpenLiveStreamParams::setItemIdNull() {
	m_itemId.clear();
}


const qint32 &OpenLiveStreamParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void OpenLiveStreamParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool OpenLiveStreamParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void OpenLiveStreamParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const qint32 &OpenLiveStreamParams::maxStreamingBitrate() const {
	return m_maxStreamingBitrate.value();
}

void OpenLiveStreamParams::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate)  {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}

bool OpenLiveStreamParams::maxStreamingBitrateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxStreamingBitrate.has_value();
}

void OpenLiveStreamParams::setMaxStreamingBitrateNull() {
	m_maxStreamingBitrate = std::nullopt;
}


const QString &OpenLiveStreamParams::openToken() const {
	return m_openToken;
}

void OpenLiveStreamParams::setOpenToken(QString newOpenToken)  {
	m_openToken = newOpenToken;
}

bool OpenLiveStreamParams::openTokenNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_openToken.isNull();
}

void OpenLiveStreamParams::setOpenTokenNull() {
	m_openToken.clear();
}


const QString &OpenLiveStreamParams::playSessionId() const {
	return m_playSessionId;
}

void OpenLiveStreamParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool OpenLiveStreamParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void OpenLiveStreamParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const qint64 &OpenLiveStreamParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void OpenLiveStreamParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool OpenLiveStreamParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void OpenLiveStreamParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const qint32 &OpenLiveStreamParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void OpenLiveStreamParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool OpenLiveStreamParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void OpenLiveStreamParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &OpenLiveStreamParams::userId() const {
	return m_userId;
}

void OpenLiveStreamParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool OpenLiveStreamParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void OpenLiveStreamParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
