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

#include "JellyfinQt/loader/getdirectorycontentsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetDirectoryContentsParams

const QString &GetDirectoryContentsParams::path() const {
	return m_path;
}

void GetDirectoryContentsParams::setPath(QString newPath) {
	m_path = newPath;
}


const bool &GetDirectoryContentsParams::includeDirectories() const {
	return m_includeDirectories.value();
}

void GetDirectoryContentsParams::setIncludeDirectories(bool newIncludeDirectories)  {
	m_includeDirectories = newIncludeDirectories;
}

bool GetDirectoryContentsParams::includeDirectoriesNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_includeDirectories.has_value();
}

void GetDirectoryContentsParams::setIncludeDirectoriesNull() {
	m_includeDirectories = std::nullopt;
}


const bool &GetDirectoryContentsParams::includeFiles() const {
	return m_includeFiles.value();
}

void GetDirectoryContentsParams::setIncludeFiles(bool newIncludeFiles)  {
	m_includeFiles = newIncludeFiles;
}

bool GetDirectoryContentsParams::includeFilesNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_includeFiles.has_value();
}

void GetDirectoryContentsParams::setIncludeFilesNull() {
	m_includeFiles = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
