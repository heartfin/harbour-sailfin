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

#include "JellyfinQt/loader/getsubtitlewithticksparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetSubtitleWithTicksParams

const QString &GetSubtitleWithTicksParams::format() const {
	return m_format;
}

void GetSubtitleWithTicksParams::setFormat(QString newFormat) {
	m_format = newFormat;
}


const qint32 &GetSubtitleWithTicksParams::index() const {
	return m_index;
}

void GetSubtitleWithTicksParams::setIndex(qint32 newIndex) {
	m_index = newIndex;
}


const QString &GetSubtitleWithTicksParams::itemId() const {
	return m_itemId;
}

void GetSubtitleWithTicksParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetSubtitleWithTicksParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetSubtitleWithTicksParams::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}


const qint64 &GetSubtitleWithTicksParams::startPositionTicks() const {
	return m_startPositionTicks;
}

void GetSubtitleWithTicksParams::setStartPositionTicks(qint64 newStartPositionTicks) {
	m_startPositionTicks = newStartPositionTicks;
}


const bool &GetSubtitleWithTicksParams::addVttTimeMap() const {
	return m_addVttTimeMap.value();
}

void GetSubtitleWithTicksParams::setAddVttTimeMap(bool newAddVttTimeMap)  {
	m_addVttTimeMap = newAddVttTimeMap;
}

bool GetSubtitleWithTicksParams::addVttTimeMapNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_addVttTimeMap.has_value();
}

void GetSubtitleWithTicksParams::setAddVttTimeMapNull() {
	m_addVttTimeMap = std::nullopt;
}


const bool &GetSubtitleWithTicksParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetSubtitleWithTicksParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetSubtitleWithTicksParams::copyTimestampsNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetSubtitleWithTicksParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint64 &GetSubtitleWithTicksParams::endPositionTicks() const {
	return m_endPositionTicks.value();
}

void GetSubtitleWithTicksParams::setEndPositionTicks(qint64 newEndPositionTicks)  {
	m_endPositionTicks = newEndPositionTicks;
}

bool GetSubtitleWithTicksParams::endPositionTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_endPositionTicks.has_value();
}

void GetSubtitleWithTicksParams::setEndPositionTicksNull() {
	m_endPositionTicks = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
