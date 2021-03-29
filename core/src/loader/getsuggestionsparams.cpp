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

#include "JellyfinQt/loader/getsuggestionsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetSuggestionsParams

const QString &GetSuggestionsParams::userId() const {
	return m_userId;
}

void GetSuggestionsParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const bool &GetSuggestionsParams::enableTotalRecordCount() const {
	return m_enableTotalRecordCount.value();
}

void GetSuggestionsParams::setEnableTotalRecordCount(bool newEnableTotalRecordCount)  {
	m_enableTotalRecordCount = newEnableTotalRecordCount;
}

bool GetSuggestionsParams::enableTotalRecordCountNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableTotalRecordCount.has_value();
}

void GetSuggestionsParams::setEnableTotalRecordCountNull() {
	m_enableTotalRecordCount = std::nullopt;
}


const qint32 &GetSuggestionsParams::limit() const {
	return m_limit.value();
}

void GetSuggestionsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetSuggestionsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetSuggestionsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QStringList &GetSuggestionsParams::mediaType() const {
	return m_mediaType;
}

void GetSuggestionsParams::setMediaType(QStringList newMediaType)  {
	m_mediaType = newMediaType;
}

bool GetSuggestionsParams::mediaTypeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaType.size() == 0;
}

void GetSuggestionsParams::setMediaTypeNull() {
	m_mediaType.clear();
}


const qint32 &GetSuggestionsParams::startIndex() const {
	return m_startIndex.value();
}

void GetSuggestionsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetSuggestionsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetSuggestionsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QStringList &GetSuggestionsParams::type() const {
	return m_type;
}

void GetSuggestionsParams::setType(QStringList newType)  {
	m_type = newType;
}

bool GetSuggestionsParams::typeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_type.size() == 0;
}

void GetSuggestionsParams::setTypeNull() {
	m_type.clear();
}



} // NS Loader
} // NS Jellyfin
