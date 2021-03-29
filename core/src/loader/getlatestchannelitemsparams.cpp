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

#include "JellyfinQt/loader/getlatestchannelitemsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetLatestChannelItemsParams

const QStringList &GetLatestChannelItemsParams::channelIds() const {
	return m_channelIds;
}

void GetLatestChannelItemsParams::setChannelIds(QStringList newChannelIds)  {
	m_channelIds = newChannelIds;
}

bool GetLatestChannelItemsParams::channelIdsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_channelIds.size() == 0;
}

void GetLatestChannelItemsParams::setChannelIdsNull() {
	m_channelIds.clear();
}


const QList<ItemFields> &GetLatestChannelItemsParams::fields() const {
	return m_fields;
}

void GetLatestChannelItemsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetLatestChannelItemsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetLatestChannelItemsParams::setFieldsNull() {
	m_fields.clear();
}


const QList<ItemFilter> &GetLatestChannelItemsParams::filters() const {
	return m_filters;
}

void GetLatestChannelItemsParams::setFilters(QList<ItemFilter> newFilters)  {
	m_filters = newFilters;
}

bool GetLatestChannelItemsParams::filtersNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_filters.size() == 0;
}

void GetLatestChannelItemsParams::setFiltersNull() {
	m_filters.clear();
}


const qint32 &GetLatestChannelItemsParams::limit() const {
	return m_limit.value();
}

void GetLatestChannelItemsParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetLatestChannelItemsParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetLatestChannelItemsParams::setLimitNull() {
	m_limit = std::nullopt;
}


const qint32 &GetLatestChannelItemsParams::startIndex() const {
	return m_startIndex.value();
}

void GetLatestChannelItemsParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetLatestChannelItemsParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetLatestChannelItemsParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetLatestChannelItemsParams::userId() const {
	return m_userId;
}

void GetLatestChannelItemsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetLatestChannelItemsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetLatestChannelItemsParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
