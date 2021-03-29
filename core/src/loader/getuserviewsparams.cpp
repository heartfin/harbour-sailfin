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

#include "JellyfinQt/loader/getuserviewsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetUserViewsParams

const QString &GetUserViewsParams::userId() const {
	return m_userId;
}

void GetUserViewsParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const bool &GetUserViewsParams::includeExternalContent() const {
	return m_includeExternalContent.value();
}

void GetUserViewsParams::setIncludeExternalContent(bool newIncludeExternalContent)  {
	m_includeExternalContent = newIncludeExternalContent;
}

bool GetUserViewsParams::includeExternalContentNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_includeExternalContent.has_value();
}

void GetUserViewsParams::setIncludeExternalContentNull() {
	m_includeExternalContent = std::nullopt;
}


const bool &GetUserViewsParams::includeHidden() const {
	return m_includeHidden.value();
}

void GetUserViewsParams::setIncludeHidden(bool newIncludeHidden)  {
	m_includeHidden = newIncludeHidden;
}

bool GetUserViewsParams::includeHiddenNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_includeHidden.has_value();
}

void GetUserViewsParams::setIncludeHiddenNull() {
	m_includeHidden = std::nullopt;
}


const QStringList &GetUserViewsParams::presetViews() const {
	return m_presetViews;
}

void GetUserViewsParams::setPresetViews(QStringList newPresetViews)  {
	m_presetViews = newPresetViews;
}

bool GetUserViewsParams::presetViewsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_presetViews.size() == 0;
}

void GetUserViewsParams::setPresetViewsNull() {
	m_presetViews.clear();
}



} // NS Loader
} // NS Jellyfin
