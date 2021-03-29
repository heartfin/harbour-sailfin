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

#include "JellyfinQt/loader/getlogentriesparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetLogEntriesParams

const bool &GetLogEntriesParams::hasUserId() const {
	return m_hasUserId.value();
}

void GetLogEntriesParams::setHasUserId(bool newHasUserId)  {
	m_hasUserId = newHasUserId;
}

bool GetLogEntriesParams::hasUserIdNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_hasUserId.has_value();
}

void GetLogEntriesParams::setHasUserIdNull() {
	m_hasUserId = std::nullopt;
}


const qint32 &GetLogEntriesParams::limit() const {
	return m_limit.value();
}

void GetLogEntriesParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetLogEntriesParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetLogEntriesParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QDateTime &GetLogEntriesParams::minDate() const {
	return m_minDate;
}

void GetLogEntriesParams::setMinDate(QDateTime newMinDate)  {
	m_minDate = newMinDate;
}

bool GetLogEntriesParams::minDateNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_minDate.isNull();
}

void GetLogEntriesParams::setMinDateNull() {
	m_minDate= QDateTime();
}


const qint32 &GetLogEntriesParams::startIndex() const {
	return m_startIndex.value();
}

void GetLogEntriesParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetLogEntriesParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetLogEntriesParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
