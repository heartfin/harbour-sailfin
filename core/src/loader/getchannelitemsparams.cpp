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

#include "JellyfinQt/loader/getchannelitemsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetChannelItemsParams

const QString &GetChannelItemsParams::channelId() const {
	return m_channelId;
}

void GetChannelItemsParams::setChannelId(QString newChannelId) {
	m_channelId = newChannelId;
}


const QList<ItemFields> &GetChannelItemsParams::fields() const {
	return m_fields;
}

void GetChannelItemsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetChannelItemsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetChannelItemsParams::setFieldsNull() {
	m_fields.clear();
}


const QList<ItemFilter> &GetChannelItemsParams::filters() const {
	return m_filters;
}

void GetChannelItemsParams::setFilters(QList<ItemFilter> newFilters)  {
	m_filters = newFilters;
}

bool GetChannelItemsParams::filtersNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_filters.size() == 0;
}

void GetChannelItemsParams::setFiltersNull() {
	m_filters.clear();
}


const QString &GetChannelItemsParams::folderId() const {
	return m_folderId;
}

void GetChannelItemsParams::setFolderId(QString newFolderId)  {
	m_folderId = newFolderId;
}

bool GetChannelItemsParams::folderIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_folderId.isNull();
}

void GetChannelItemsParams::setFolderIdNull() {
	m_folderId.clear();
}


const qint32 &GetChannelItemsParams::limit() const {
	return m_limit.value();
}

void GetChannelItemsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetChannelItemsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetChannelItemsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetChannelItemsParams::sortBy() const {
	return m_sortBy;
}

void GetChannelItemsParams::setSortBy(QString newSortBy)  {
	m_sortBy = newSortBy;
}

bool GetChannelItemsParams::sortByNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortBy.isNull();
}

void GetChannelItemsParams::setSortByNull() {
	m_sortBy.clear();
}


const QString &GetChannelItemsParams::sortOrder() const {
	return m_sortOrder;
}

void GetChannelItemsParams::setSortOrder(QString newSortOrder)  {
	m_sortOrder = newSortOrder;
}

bool GetChannelItemsParams::sortOrderNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_sortOrder.isNull();
}

void GetChannelItemsParams::setSortOrderNull() {
	m_sortOrder.clear();
}


const qint32 &GetChannelItemsParams::startIndex() const {
	return m_startIndex.value();
}

void GetChannelItemsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetChannelItemsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetChannelItemsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetChannelItemsParams::userId() const {
	return m_userId;
}

void GetChannelItemsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetChannelItemsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetChannelItemsParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
