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

#include "JellyfinQt/loader/headstudioimageparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadStudioImageParams

const ImageType &HeadStudioImageParams::imageType() const {
	return m_imageType;
}

void HeadStudioImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadStudioImageParams::name() const {
	return m_name;
}

void HeadStudioImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &HeadStudioImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadStudioImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadStudioImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadStudioImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadStudioImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadStudioImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadStudioImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadStudioImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadStudioImageParams::blur() const {
	return m_blur.value();
}

void HeadStudioImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadStudioImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadStudioImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadStudioImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadStudioImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadStudioImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadStudioImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadStudioImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadStudioImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadStudioImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadStudioImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadStudioImageParams::format() const {
	return m_format;
}

void HeadStudioImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadStudioImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadStudioImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadStudioImageParams::height() const {
	return m_height.value();
}

void HeadStudioImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadStudioImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadStudioImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadStudioImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void HeadStudioImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool HeadStudioImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void HeadStudioImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &HeadStudioImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadStudioImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadStudioImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadStudioImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadStudioImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadStudioImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadStudioImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadStudioImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadStudioImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadStudioImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadStudioImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadStudioImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadStudioImageParams::quality() const {
	return m_quality.value();
}

void HeadStudioImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadStudioImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadStudioImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadStudioImageParams::tag() const {
	return m_tag;
}

void HeadStudioImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadStudioImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadStudioImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadStudioImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadStudioImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadStudioImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadStudioImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadStudioImageParams::width() const {
	return m_width.value();
}

void HeadStudioImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadStudioImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadStudioImageParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
