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

#include "JellyfinQt/loader/headpersonimagebyindexparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadPersonImageByIndexParams

const qint32 &HeadPersonImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void HeadPersonImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &HeadPersonImageByIndexParams::imageType() const {
	return m_imageType;
}

void HeadPersonImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadPersonImageByIndexParams::name() const {
	return m_name;
}

void HeadPersonImageByIndexParams::setName(QString newName) {
	m_name = newName;
}


const bool &HeadPersonImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadPersonImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadPersonImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadPersonImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadPersonImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadPersonImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadPersonImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadPersonImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadPersonImageByIndexParams::blur() const {
	return m_blur.value();
}

void HeadPersonImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadPersonImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadPersonImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadPersonImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadPersonImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadPersonImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadPersonImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadPersonImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadPersonImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadPersonImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadPersonImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadPersonImageByIndexParams::format() const {
	return m_format;
}

void HeadPersonImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadPersonImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadPersonImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadPersonImageByIndexParams::height() const {
	return m_height.value();
}

void HeadPersonImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadPersonImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadPersonImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadPersonImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadPersonImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadPersonImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadPersonImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadPersonImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadPersonImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadPersonImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadPersonImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadPersonImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadPersonImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadPersonImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadPersonImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadPersonImageByIndexParams::quality() const {
	return m_quality.value();
}

void HeadPersonImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadPersonImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadPersonImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadPersonImageByIndexParams::tag() const {
	return m_tag;
}

void HeadPersonImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadPersonImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadPersonImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadPersonImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadPersonImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadPersonImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadPersonImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadPersonImageByIndexParams::width() const {
	return m_width.value();
}

void HeadPersonImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadPersonImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadPersonImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
