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

#include "JellyfinQt/loader/createcollectionparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// CreateCollectionParams

const QStringList &CreateCollectionParams::ids() const {
	return m_ids;
}

void CreateCollectionParams::setIds(QStringList newIds)  {
	m_ids = newIds;
}

bool CreateCollectionParams::idsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_ids.size() == 0;
}

void CreateCollectionParams::setIdsNull() {
	m_ids.clear();
}


const bool &CreateCollectionParams::isLocked() const {
	return m_isLocked.value();
}

void CreateCollectionParams::setIsLocked(bool newIsLocked)  {
	m_isLocked = newIsLocked;
}

bool CreateCollectionParams::isLockedNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_isLocked.has_value();
}

void CreateCollectionParams::setIsLockedNull() {
	m_isLocked = std::nullopt;
}


const QString &CreateCollectionParams::name() const {
	return m_name;
}

void CreateCollectionParams::setName(QString newName)  {
	m_name = newName;
}

bool CreateCollectionParams::nameNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_name.isNull();
}

void CreateCollectionParams::setNameNull() {
	m_name.clear();
}


const QString &CreateCollectionParams::parentId() const {
	return m_parentId;
}

void CreateCollectionParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool CreateCollectionParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void CreateCollectionParams::setParentIdNull() {
	m_parentId.clear();
}



} // NS Loader
} // NS Jellyfin
