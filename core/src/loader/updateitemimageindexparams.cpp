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

#include "JellyfinQt/loader/updateitemimageindexparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// UpdateItemImageIndexParams

const qint32 &UpdateItemImageIndexParams::imageIndex() const {
	return m_imageIndex;
}

void UpdateItemImageIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &UpdateItemImageIndexParams::imageType() const {
	return m_imageType;
}

void UpdateItemImageIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &UpdateItemImageIndexParams::itemId() const {
	return m_itemId;
}

void UpdateItemImageIndexParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const qint32 &UpdateItemImageIndexParams::newIndex() const {
	return m_newIndex.value();
}

void UpdateItemImageIndexParams::setNewIndex(qint32 newNewIndex)  {
	m_newIndex = newNewIndex;
}

bool UpdateItemImageIndexParams::newIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_newIndex.has_value();
}

void UpdateItemImageIndexParams::setNewIndexNull() {
	m_newIndex = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
