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

#include "JellyfinQt/loader/getsimilaritemsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetSimilarItemsParams

const QString &GetSimilarItemsParams::itemId() const {
	return m_itemId;
}

void GetSimilarItemsParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QStringList &GetSimilarItemsParams::excludeArtistIds() const {
	return m_excludeArtistIds;
}

void GetSimilarItemsParams::setExcludeArtistIds(QStringList newExcludeArtistIds)  {
	m_excludeArtistIds = newExcludeArtistIds;
}

bool GetSimilarItemsParams::excludeArtistIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeArtistIds.size() == 0;
}

void GetSimilarItemsParams::setExcludeArtistIdsNull() {
	m_excludeArtistIds.clear();
}


const QList<ItemFields> &GetSimilarItemsParams::fields() const {
	return m_fields;
}

void GetSimilarItemsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetSimilarItemsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetSimilarItemsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetSimilarItemsParams::limit() const {
	return m_limit.value();
}

void GetSimilarItemsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetSimilarItemsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetSimilarItemsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetSimilarItemsParams::userId() const {
	return m_userId;
}

void GetSimilarItemsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetSimilarItemsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetSimilarItemsParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
