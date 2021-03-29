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

#include "JellyfinQt/loader/getitemimage2params.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetItemImage2Params

const ImageFormat &GetItemImage2Params::format() const {
	return m_format;
}

void GetItemImage2Params::setFormat(ImageFormat newFormat) {
	m_format = newFormat;
}


const qint32 &GetItemImage2Params::imageIndex() const {
	return m_imageIndex;
}

void GetItemImage2Params::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &GetItemImage2Params::imageType() const {
	return m_imageType;
}

void GetItemImage2Params::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetItemImage2Params::itemId() const {
	return m_itemId;
}

void GetItemImage2Params::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const qint32 &GetItemImage2Params::maxHeight() const {
	return m_maxHeight;
}

void GetItemImage2Params::setMaxHeight(qint32 newMaxHeight) {
	m_maxHeight = newMaxHeight;
}


const qint32 &GetItemImage2Params::maxWidth() const {
	return m_maxWidth;
}

void GetItemImage2Params::setMaxWidth(qint32 newMaxWidth) {
	m_maxWidth = newMaxWidth;
}


const double &GetItemImage2Params::percentPlayed() const {
	return m_percentPlayed;
}

void GetItemImage2Params::setPercentPlayed(double newPercentPlayed) {
	m_percentPlayed = newPercentPlayed;
}


const QString &GetItemImage2Params::tag() const {
	return m_tag;
}

void GetItemImage2Params::setTag(QString newTag) {
	m_tag = newTag;
}


const qint32 &GetItemImage2Params::unplayedCount() const {
	return m_unplayedCount;
}

void GetItemImage2Params::setUnplayedCount(qint32 newUnplayedCount) {
	m_unplayedCount = newUnplayedCount;
}


const bool &GetItemImage2Params::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetItemImage2Params::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetItemImage2Params::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetItemImage2Params::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetItemImage2Params::backgroundColor() const {
	return m_backgroundColor;
}

void GetItemImage2Params::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetItemImage2Params::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetItemImage2Params::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetItemImage2Params::blur() const {
	return m_blur.value();
}

void GetItemImage2Params::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetItemImage2Params::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetItemImage2Params::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetItemImage2Params::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetItemImage2Params::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetItemImage2Params::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetItemImage2Params::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetItemImage2Params::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetItemImage2Params::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetItemImage2Params::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetItemImage2Params::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const qint32 &GetItemImage2Params::height() const {
	return m_height.value();
}

void GetItemImage2Params::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetItemImage2Params::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetItemImage2Params::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetItemImage2Params::quality() const {
	return m_quality.value();
}

void GetItemImage2Params::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetItemImage2Params::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetItemImage2Params::setQualityNull() {
	m_quality = std::nullopt;
}


const qint32 &GetItemImage2Params::width() const {
	return m_width.value();
}

void GetItemImage2Params::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetItemImage2Params::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetItemImage2Params::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
