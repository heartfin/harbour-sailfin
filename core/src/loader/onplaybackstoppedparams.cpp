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

#include "JellyfinQt/loader/onplaybackstoppedparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// OnPlaybackStoppedParams

const QString &OnPlaybackStoppedParams::itemId() const {
	return m_itemId;
}

void OnPlaybackStoppedParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &OnPlaybackStoppedParams::userId() const {
	return m_userId;
}

void OnPlaybackStoppedParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const QString &OnPlaybackStoppedParams::liveStreamId() const {
	return m_liveStreamId;
}

void OnPlaybackStoppedParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool OnPlaybackStoppedParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void OnPlaybackStoppedParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const QString &OnPlaybackStoppedParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void OnPlaybackStoppedParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool OnPlaybackStoppedParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void OnPlaybackStoppedParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const QString &OnPlaybackStoppedParams::nextMediaType() const {
	return m_nextMediaType;
}

void OnPlaybackStoppedParams::setNextMediaType(QString newNextMediaType)  {
	m_nextMediaType = newNextMediaType;
}

bool OnPlaybackStoppedParams::nextMediaTypeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_nextMediaType.isNull();
}

void OnPlaybackStoppedParams::setNextMediaTypeNull() {
	m_nextMediaType.clear();
}


const QString &OnPlaybackStoppedParams::playSessionId() const {
	return m_playSessionId;
}

void OnPlaybackStoppedParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool OnPlaybackStoppedParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void OnPlaybackStoppedParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const qint64 &OnPlaybackStoppedParams::positionTicks() const {
	return m_positionTicks.value();
}

void OnPlaybackStoppedParams::setPositionTicks(qint64 newPositionTicks)  {
	m_positionTicks = newPositionTicks;
}

bool OnPlaybackStoppedParams::positionTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_positionTicks.has_value();
}

void OnPlaybackStoppedParams::setPositionTicksNull() {
	m_positionTicks = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
