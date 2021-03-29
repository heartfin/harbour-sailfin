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

#include "JellyfinQt/loader/createplaylistparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// CreatePlaylistParams

const QStringList &CreatePlaylistParams::ids() const {
	return m_ids;
}

void CreatePlaylistParams::setIds(QStringList newIds)  {
	m_ids = newIds;
}

bool CreatePlaylistParams::idsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_ids.size() == 0;
}

void CreatePlaylistParams::setIdsNull() {
	m_ids.clear();
}


const QString &CreatePlaylistParams::mediaType() const {
	return m_mediaType;
}

void CreatePlaylistParams::setMediaType(QString newMediaType)  {
	m_mediaType = newMediaType;
}

bool CreatePlaylistParams::mediaTypeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaType.isNull();
}

void CreatePlaylistParams::setMediaTypeNull() {
	m_mediaType.clear();
}


const QString &CreatePlaylistParams::name() const {
	return m_name;
}

void CreatePlaylistParams::setName(QString newName)  {
	m_name = newName;
}

bool CreatePlaylistParams::nameNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_name.isNull();
}

void CreatePlaylistParams::setNameNull() {
	m_name.clear();
}


const QString &CreatePlaylistParams::userId() const {
	return m_userId;
}

void CreatePlaylistParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool CreatePlaylistParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void CreatePlaylistParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
