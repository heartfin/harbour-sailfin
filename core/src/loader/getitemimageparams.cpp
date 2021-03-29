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

#include "JellyfinQt/loader/getitemimageparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetItemImageParams

const ImageType &GetItemImageParams::imageType() const {
	return m_imageType;
}

void GetItemImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetItemImageParams::itemId() const {
	return m_itemId;
}

void GetItemImageParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetItemImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetItemImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetItemImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetItemImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetItemImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetItemImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetItemImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetItemImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetItemImageParams::blur() const {
	return m_blur.value();
}

void GetItemImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetItemImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetItemImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetItemImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetItemImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetItemImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetItemImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetItemImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetItemImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetItemImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetItemImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetItemImageParams::format() const {
	return m_format;
}

void GetItemImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetItemImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetItemImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetItemImageParams::height() const {
	return m_height.value();
}

void GetItemImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetItemImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetItemImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetItemImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void GetItemImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool GetItemImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void GetItemImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &GetItemImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetItemImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetItemImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetItemImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetItemImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetItemImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetItemImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetItemImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetItemImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetItemImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetItemImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetItemImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetItemImageParams::quality() const {
	return m_quality.value();
}

void GetItemImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetItemImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetItemImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetItemImageParams::tag() const {
	return m_tag;
}

void GetItemImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetItemImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetItemImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetItemImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetItemImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetItemImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetItemImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetItemImageParams::width() const {
	return m_width.value();
}

void GetItemImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetItemImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetItemImageParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
