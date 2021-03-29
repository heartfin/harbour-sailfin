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

#include "JellyfinQt/loader/headpersonimageparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadPersonImageParams

const ImageType &HeadPersonImageParams::imageType() const {
	return m_imageType;
}

void HeadPersonImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadPersonImageParams::name() const {
	return m_name;
}

void HeadPersonImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &HeadPersonImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadPersonImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadPersonImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadPersonImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadPersonImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadPersonImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadPersonImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadPersonImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadPersonImageParams::blur() const {
	return m_blur.value();
}

void HeadPersonImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadPersonImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadPersonImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadPersonImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadPersonImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadPersonImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadPersonImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadPersonImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadPersonImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadPersonImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadPersonImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadPersonImageParams::format() const {
	return m_format;
}

void HeadPersonImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadPersonImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadPersonImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadPersonImageParams::height() const {
	return m_height.value();
}

void HeadPersonImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadPersonImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadPersonImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadPersonImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void HeadPersonImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool HeadPersonImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void HeadPersonImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &HeadPersonImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadPersonImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadPersonImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadPersonImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadPersonImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadPersonImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadPersonImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadPersonImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadPersonImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadPersonImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadPersonImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadPersonImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadPersonImageParams::quality() const {
	return m_quality.value();
}

void HeadPersonImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadPersonImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadPersonImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadPersonImageParams::tag() const {
	return m_tag;
}

void HeadPersonImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadPersonImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadPersonImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadPersonImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadPersonImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadPersonImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadPersonImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadPersonImageParams::width() const {
	return m_width.value();
}

void HeadPersonImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadPersonImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadPersonImageParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
