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

#include "JellyfinQt/loader/getsubtitleparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetSubtitleParams

const QString &GetSubtitleParams::format() const {
	return m_format;
}

void GetSubtitleParams::setFormat(QString newFormat) {
	m_format = newFormat;
}


const qint32 &GetSubtitleParams::index() const {
	return m_index;
}

void GetSubtitleParams::setIndex(qint32 newIndex) {
	m_index = newIndex;
}


const QString &GetSubtitleParams::itemId() const {
	return m_itemId;
}

void GetSubtitleParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetSubtitleParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetSubtitleParams::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}


const bool &GetSubtitleParams::addVttTimeMap() const {
	return m_addVttTimeMap.value();
}

void GetSubtitleParams::setAddVttTimeMap(bool newAddVttTimeMap)  {
	m_addVttTimeMap = newAddVttTimeMap;
}

bool GetSubtitleParams::addVttTimeMapNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_addVttTimeMap.has_value();
}

void GetSubtitleParams::setAddVttTimeMapNull() {
	m_addVttTimeMap = std::nullopt;
}


const bool &GetSubtitleParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetSubtitleParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetSubtitleParams::copyTimestampsNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetSubtitleParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint64 &GetSubtitleParams::endPositionTicks() const {
	return m_endPositionTicks.value();
}

void GetSubtitleParams::setEndPositionTicks(qint64 newEndPositionTicks)  {
	m_endPositionTicks = newEndPositionTicks;
}

bool GetSubtitleParams::endPositionTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_endPositionTicks.has_value();
}

void GetSubtitleParams::setEndPositionTicksNull() {
	m_endPositionTicks = std::nullopt;
}


const qint64 &GetSubtitleParams::startPositionTicks() const {
	return m_startPositionTicks.value();
}

void GetSubtitleParams::setStartPositionTicks(qint64 newStartPositionTicks)  {
	m_startPositionTicks = newStartPositionTicks;
}

bool GetSubtitleParams::startPositionTicksNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_startPositionTicks.has_value();
}

void GetSubtitleParams::setStartPositionTicksNull() {
	m_startPositionTicks = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
