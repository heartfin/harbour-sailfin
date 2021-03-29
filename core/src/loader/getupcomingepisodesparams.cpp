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

#include "JellyfinQt/loader/getupcomingepisodesparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetUpcomingEpisodesParams

const QList<ImageType> &GetUpcomingEpisodesParams::enableImageTypes() const {
	return m_enableImageTypes;
}

void GetUpcomingEpisodesParams::setEnableImageTypes(QList<ImageType> newEnableImageTypes)  {
	m_enableImageTypes = newEnableImageTypes;
}

bool GetUpcomingEpisodesParams::enableImageTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_enableImageTypes.size() == 0;
}

void GetUpcomingEpisodesParams::setEnableImageTypesNull() {
	m_enableImageTypes.clear();
}


const bool &GetUpcomingEpisodesParams::enableImges() const {
	return m_enableImges.value();
}

void GetUpcomingEpisodesParams::setEnableImges(bool newEnableImges)  {
	m_enableImges = newEnableImges;
}

bool GetUpcomingEpisodesParams::enableImgesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableImges.has_value();
}

void GetUpcomingEpisodesParams::setEnableImgesNull() {
	m_enableImges = std::nullopt;
}


const bool &GetUpcomingEpisodesParams::enableUserData() const {
	return m_enableUserData.value();
}

void GetUpcomingEpisodesParams::setEnableUserData(bool newEnableUserData)  {
	m_enableUserData = newEnableUserData;
}

bool GetUpcomingEpisodesParams::enableUserDataNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableUserData.has_value();
}

void GetUpcomingEpisodesParams::setEnableUserDataNull() {
	m_enableUserData = std::nullopt;
}


const QList<ItemFields> &GetUpcomingEpisodesParams::fields() const {
	return m_fields;
}

void GetUpcomingEpisodesParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetUpcomingEpisodesParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetUpcomingEpisodesParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetUpcomingEpisodesParams::imageTypeLimit() const {
	return m_imageTypeLimit.value();
}

void GetUpcomingEpisodesParams::setImageTypeLimit(qint32 newImageTypeLimit)  {
	m_imageTypeLimit = newImageTypeLimit;
}

bool GetUpcomingEpisodesParams::imageTypeLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageTypeLimit.has_value();
}

void GetUpcomingEpisodesParams::setImageTypeLimitNull() {
	m_imageTypeLimit = std::nullopt;
}


const qint32 &GetUpcomingEpisodesParams::limit() const {
	return m_limit.value();
}

void GetUpcomingEpisodesParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetUpcomingEpisodesParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetUpcomingEpisodesParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetUpcomingEpisodesParams::parentId() const {
	return m_parentId;
}

void GetUpcomingEpisodesParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetUpcomingEpisodesParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetUpcomingEpisodesParams::setParentIdNull() {
	m_parentId.clear();
}


const qint32 &GetUpcomingEpisodesParams::startIndex() const {
	return m_startIndex.value();
}

void GetUpcomingEpisodesParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetUpcomingEpisodesParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetUpcomingEpisodesParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetUpcomingEpisodesParams::userId() const {
	return m_userId;
}

void GetUpcomingEpisodesParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetUpcomingEpisodesParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetUpcomingEpisodesParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
