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

#include "JellyfinQt/loader/gettimersparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetTimersParams

const QString &GetTimersParams::channelId() const {
	return m_channelId;
}

void GetTimersParams::setChannelId(QString newChannelId)  {
	m_channelId = newChannelId;
}

bool GetTimersParams::channelIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_channelId.isNull();
}

void GetTimersParams::setChannelIdNull() {
	m_channelId.clear();
}


const bool &GetTimersParams::isActive() const {
	return m_isActive.value();
}

void GetTimersParams::setIsActive(bool newIsActive)  {
	m_isActive = newIsActive;
}

bool GetTimersParams::isActiveNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isActive.has_value();
}

void GetTimersParams::setIsActiveNull() {
	m_isActive = std::nullopt;
}


const bool &GetTimersParams::isScheduled() const {
	return m_isScheduled.value();
}

void GetTimersParams::setIsScheduled(bool newIsScheduled)  {
	m_isScheduled = newIsScheduled;
}

bool GetTimersParams::isScheduledNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isScheduled.has_value();
}

void GetTimersParams::setIsScheduledNull() {
	m_isScheduled = std::nullopt;
}


const QString &GetTimersParams::seriesTimerId() const {
	return m_seriesTimerId;
}

void GetTimersParams::setSeriesTimerId(QString newSeriesTimerId)  {
	m_seriesTimerId = newSeriesTimerId;
}

bool GetTimersParams::seriesTimerIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_seriesTimerId.isNull();
}

void GetTimersParams::setSeriesTimerIdNull() {
	m_seriesTimerId.clear();
}



} // NS Loader
} // NS Jellyfin
