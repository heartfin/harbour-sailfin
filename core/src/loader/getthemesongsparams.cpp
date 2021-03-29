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

#include "JellyfinQt/loader/getthemesongsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetThemeSongsParams

const QString &GetThemeSongsParams::itemId() const {
	return m_itemId;
}

void GetThemeSongsParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetThemeSongsParams::inheritFromParent() const {
	return m_inheritFromParent.value();
}

void GetThemeSongsParams::setInheritFromParent(bool newInheritFromParent)  {
	m_inheritFromParent = newInheritFromParent;
}

bool GetThemeSongsParams::inheritFromParentNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_inheritFromParent.has_value();
}

void GetThemeSongsParams::setInheritFromParentNull() {
	m_inheritFromParent = std::nullopt;
}


const QString &GetThemeSongsParams::userId() const {
	return m_userId;
}

void GetThemeSongsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetThemeSongsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetThemeSongsParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
