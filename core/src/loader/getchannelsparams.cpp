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

#include "JellyfinQt/loader/getchannelsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetChannelsParams

const bool &GetChannelsParams::isFavorite() const {
	return m_isFavorite.value();
}

void GetChannelsParams::setIsFavorite(bool newIsFavorite)  {
	m_isFavorite = newIsFavorite;
}

bool GetChannelsParams::isFavoriteNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isFavorite.has_value();
}

void GetChannelsParams::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;
}


const qint32 &GetChannelsParams::limit() const {
	return m_limit.value();
}

void GetChannelsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetChannelsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetChannelsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const qint32 &GetChannelsParams::startIndex() const {
	return m_startIndex.value();
}

void GetChannelsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetChannelsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetChannelsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const bool &GetChannelsParams::supportsLatestItems() const {
	return m_supportsLatestItems.value();
}

void GetChannelsParams::setSupportsLatestItems(bool newSupportsLatestItems)  {
	m_supportsLatestItems = newSupportsLatestItems;
}

bool GetChannelsParams::supportsLatestItemsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_supportsLatestItems.has_value();
}

void GetChannelsParams::setSupportsLatestItemsNull() {
	m_supportsLatestItems = std::nullopt;
}


const bool &GetChannelsParams::supportsMediaDeletion() const {
	return m_supportsMediaDeletion.value();
}

void GetChannelsParams::setSupportsMediaDeletion(bool newSupportsMediaDeletion)  {
	m_supportsMediaDeletion = newSupportsMediaDeletion;
}

bool GetChannelsParams::supportsMediaDeletionNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_supportsMediaDeletion.has_value();
}

void GetChannelsParams::setSupportsMediaDeletionNull() {
	m_supportsMediaDeletion = std::nullopt;
}


const QString &GetChannelsParams::userId() const {
	return m_userId;
}

void GetChannelsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetChannelsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetChannelsParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
