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

#include "JellyfinQt/loader/addvirtualfolderparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// AddVirtualFolderParams

const QString &AddVirtualFolderParams::collectionType() const {
	return m_collectionType;
}

void AddVirtualFolderParams::setCollectionType(QString newCollectionType)  {
	m_collectionType = newCollectionType;
}

bool AddVirtualFolderParams::collectionTypeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_collectionType.isNull();
}

void AddVirtualFolderParams::setCollectionTypeNull() {
	m_collectionType.clear();
}


const QString &AddVirtualFolderParams::name() const {
	return m_name;
}

void AddVirtualFolderParams::setName(QString newName)  {
	m_name = newName;
}

bool AddVirtualFolderParams::nameNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_name.isNull();
}

void AddVirtualFolderParams::setNameNull() {
	m_name.clear();
}


const QStringList &AddVirtualFolderParams::paths() const {
	return m_paths;
}

void AddVirtualFolderParams::setPaths(QStringList newPaths)  {
	m_paths = newPaths;
}

bool AddVirtualFolderParams::pathsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_paths.size() == 0;
}

void AddVirtualFolderParams::setPathsNull() {
	m_paths.clear();
}


const bool &AddVirtualFolderParams::refreshLibrary() const {
	return m_refreshLibrary.value();
}

void AddVirtualFolderParams::setRefreshLibrary(bool newRefreshLibrary)  {
	m_refreshLibrary = newRefreshLibrary;
}

bool AddVirtualFolderParams::refreshLibraryNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_refreshLibrary.has_value();
}

void AddVirtualFolderParams::setRefreshLibraryNull() {
	m_refreshLibrary = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
