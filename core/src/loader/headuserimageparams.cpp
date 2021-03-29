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

#include "JellyfinQt/loader/headuserimageparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadUserImageParams

const ImageType &HeadUserImageParams::imageType() const {
	return m_imageType;
}

void HeadUserImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadUserImageParams::userId() const {
	return m_userId;
}

void HeadUserImageParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const bool &HeadUserImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadUserImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadUserImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadUserImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadUserImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadUserImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadUserImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadUserImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadUserImageParams::blur() const {
	return m_blur.value();
}

void HeadUserImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadUserImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadUserImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadUserImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadUserImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadUserImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadUserImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadUserImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadUserImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadUserImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadUserImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadUserImageParams::format() const {
	return m_format;
}

void HeadUserImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadUserImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadUserImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadUserImageParams::height() const {
	return m_height.value();
}

void HeadUserImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadUserImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadUserImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadUserImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void HeadUserImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool HeadUserImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void HeadUserImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &HeadUserImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadUserImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadUserImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadUserImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadUserImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadUserImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadUserImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadUserImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadUserImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadUserImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadUserImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadUserImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadUserImageParams::quality() const {
	return m_quality.value();
}

void HeadUserImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadUserImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadUserImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadUserImageParams::tag() const {
	return m_tag;
}

void HeadUserImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadUserImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadUserImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadUserImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadUserImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadUserImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadUserImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadUserImageParams::width() const {
	return m_width.value();
}

void HeadUserImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadUserImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadUserImageParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
