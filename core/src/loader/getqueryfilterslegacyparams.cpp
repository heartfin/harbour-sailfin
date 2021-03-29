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

#include "JellyfinQt/loader/getqueryfilterslegacyparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetQueryFiltersLegacyParams

const QStringList &GetQueryFiltersLegacyParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetQueryFiltersLegacyParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetQueryFiltersLegacyParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetQueryFiltersLegacyParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const QStringList &GetQueryFiltersLegacyParams::mediaTypes() const {
	return m_mediaTypes;
}

void GetQueryFiltersLegacyParams::setMediaTypes(QStringList newMediaTypes)  {
	m_mediaTypes = newMediaTypes;
}

bool GetQueryFiltersLegacyParams::mediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaTypes.size() == 0;
}

void GetQueryFiltersLegacyParams::setMediaTypesNull() {
	m_mediaTypes.clear();
}


const QString &GetQueryFiltersLegacyParams::parentId() const {
	return m_parentId;
}

void GetQueryFiltersLegacyParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetQueryFiltersLegacyParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetQueryFiltersLegacyParams::setParentIdNull() {
	m_parentId.clear();
}


const QString &GetQueryFiltersLegacyParams::userId() const {
	return m_userId;
}

void GetQueryFiltersLegacyParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetQueryFiltersLegacyParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetQueryFiltersLegacyParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
