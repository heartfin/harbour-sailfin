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

#include "JellyfinQt/loader/postparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// PostParams

const QString &PostParams::itemId() const {
	return m_itemId;
}

void PostParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const MetadataRefreshMode &PostParams::imageRefreshMode() const {
	return m_imageRefreshMode;
}

void PostParams::setImageRefreshMode(MetadataRefreshMode newImageRefreshMode)  {
	m_imageRefreshMode = newImageRefreshMode;
}

bool PostParams::imageRefreshModeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_imageRefreshMode== MetadataRefreshMode::EnumNotSet;
}

void PostParams::setImageRefreshModeNull() {
	m_imageRefreshMode= MetadataRefreshMode::EnumNotSet;
}


const MetadataRefreshMode &PostParams::metadataRefreshMode() const {
	return m_metadataRefreshMode;
}

void PostParams::setMetadataRefreshMode(MetadataRefreshMode newMetadataRefreshMode)  {
	m_metadataRefreshMode = newMetadataRefreshMode;
}

bool PostParams::metadataRefreshModeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_metadataRefreshMode== MetadataRefreshMode::EnumNotSet;
}

void PostParams::setMetadataRefreshModeNull() {
	m_metadataRefreshMode= MetadataRefreshMode::EnumNotSet;
}


const bool &PostParams::replaceAllImages() const {
	return m_replaceAllImages.value();
}

void PostParams::setReplaceAllImages(bool newReplaceAllImages)  {
	m_replaceAllImages = newReplaceAllImages;
}

bool PostParams::replaceAllImagesNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_replaceAllImages.has_value();
}

void PostParams::setReplaceAllImagesNull() {
	m_replaceAllImages = std::nullopt;
}


const bool &PostParams::replaceAllMetadata() const {
	return m_replaceAllMetadata.value();
}

void PostParams::setReplaceAllMetadata(bool newReplaceAllMetadata)  {
	m_replaceAllMetadata = newReplaceAllMetadata;
}

bool PostParams::replaceAllMetadataNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_replaceAllMetadata.has_value();
}

void PostParams::setReplaceAllMetadataNull() {
	m_replaceAllMetadata = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
