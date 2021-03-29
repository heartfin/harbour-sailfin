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

#include "JellyfinQt/loader/getsimilartrailersparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetSimilarTrailersParams

const QString &GetSimilarTrailersParams::itemId() const {
	return m_itemId;
}

void GetSimilarTrailersParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QStringList &GetSimilarTrailersParams::excludeArtistIds() const {
	return m_excludeArtistIds;
}

void GetSimilarTrailersParams::setExcludeArtistIds(QStringList newExcludeArtistIds)  {
	m_excludeArtistIds = newExcludeArtistIds;
}

bool GetSimilarTrailersParams::excludeArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeArtistIds.size() == 0;
}

void GetSimilarTrailersParams::setExcludeArtistIdsNull() {
	m_excludeArtistIds.clear();
}


const QList<ItemFields> &GetSimilarTrailersParams::fields() const {
	return m_fields;
}

void GetSimilarTrailersParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetSimilarTrailersParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetSimilarTrailersParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetSimilarTrailersParams::limit() const {
	return m_limit.value();
}

void GetSimilarTrailersParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetSimilarTrailersParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetSimilarTrailersParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetSimilarTrailersParams::userId() const {
	return m_userId;
}

void GetSimilarTrailersParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetSimilarTrailersParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetSimilarTrailersParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
