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

#include "JellyfinQt/loader/headitemimageparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadItemImageParams

const ImageType &HeadItemImageParams::imageType() const {
	return m_imageType;
}

void HeadItemImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadItemImageParams::itemId() const {
	return m_itemId;
}

void HeadItemImageParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &HeadItemImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadItemImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadItemImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadItemImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadItemImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadItemImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadItemImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadItemImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadItemImageParams::blur() const {
	return m_blur.value();
}

void HeadItemImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadItemImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadItemImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadItemImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadItemImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadItemImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadItemImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadItemImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadItemImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadItemImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadItemImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadItemImageParams::format() const {
	return m_format;
}

void HeadItemImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadItemImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadItemImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadItemImageParams::height() const {
	return m_height.value();
}

void HeadItemImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadItemImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadItemImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadItemImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void HeadItemImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool HeadItemImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void HeadItemImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &HeadItemImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadItemImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadItemImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadItemImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadItemImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadItemImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadItemImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadItemImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadItemImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadItemImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadItemImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadItemImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadItemImageParams::quality() const {
	return m_quality.value();
}

void HeadItemImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadItemImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadItemImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadItemImageParams::tag() const {
	return m_tag;
}

void HeadItemImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadItemImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadItemImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadItemImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadItemImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadItemImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadItemImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadItemImageParams::width() const {
	return m_width.value();
}

void HeadItemImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadItemImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadItemImageParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
