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

#include "JellyfinQt/loader/getremoteimagesparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetRemoteImagesParams

const QString &GetRemoteImagesParams::itemId() const {
	return m_itemId;
}

void GetRemoteImagesParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetRemoteImagesParams::includeAllLanguages() const {
	return m_includeAllLanguages.value();
}

void GetRemoteImagesParams::setIncludeAllLanguages(bool newIncludeAllLanguages)  {
	m_includeAllLanguages = newIncludeAllLanguages;
}

bool GetRemoteImagesParams::includeAllLanguagesNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_includeAllLanguages.has_value();
}

void GetRemoteImagesParams::setIncludeAllLanguagesNull() {
	m_includeAllLanguages = std::nullopt;
}


const qint32 &GetRemoteImagesParams::limit() const {
	return m_limit.value();
}

void GetRemoteImagesParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetRemoteImagesParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetRemoteImagesParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QString &GetRemoteImagesParams::providerName() const {
	return m_providerName;
}

void GetRemoteImagesParams::setProviderName(QString newProviderName)  {
	m_providerName = newProviderName;
}

bool GetRemoteImagesParams::providerNameNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_providerName.isNull();
}

void GetRemoteImagesParams::setProviderNameNull() {
	m_providerName.clear();
}


const qint32 &GetRemoteImagesParams::startIndex() const {
	return m_startIndex.value();
}

void GetRemoteImagesParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetRemoteImagesParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetRemoteImagesParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const ImageType &GetRemoteImagesParams::type() const {
	return m_type;
}

void GetRemoteImagesParams::setType(ImageType newType)  {
	m_type = newType;
}

bool GetRemoteImagesParams::typeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_type== ImageType::EnumNotSet;
}

void GetRemoteImagesParams::setTypeNull() {
	m_type= ImageType::EnumNotSet;
}



} // NS Loader
} // NS Jellyfin
