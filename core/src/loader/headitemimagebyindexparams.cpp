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

#include "JellyfinQt/loader/headitemimagebyindexparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadItemImageByIndexParams

const qint32 &HeadItemImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void HeadItemImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &HeadItemImageByIndexParams::imageType() const {
	return m_imageType;
}

void HeadItemImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadItemImageByIndexParams::itemId() const {
	return m_itemId;
}

void HeadItemImageByIndexParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &HeadItemImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadItemImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadItemImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadItemImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadItemImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadItemImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadItemImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadItemImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadItemImageByIndexParams::blur() const {
	return m_blur.value();
}

void HeadItemImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadItemImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadItemImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadItemImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadItemImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadItemImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadItemImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadItemImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadItemImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadItemImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadItemImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadItemImageByIndexParams::format() const {
	return m_format;
}

void HeadItemImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadItemImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadItemImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadItemImageByIndexParams::height() const {
	return m_height.value();
}

void HeadItemImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadItemImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadItemImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadItemImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadItemImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadItemImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadItemImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadItemImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadItemImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadItemImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadItemImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadItemImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadItemImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadItemImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadItemImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadItemImageByIndexParams::quality() const {
	return m_quality.value();
}

void HeadItemImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadItemImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadItemImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadItemImageByIndexParams::tag() const {
	return m_tag;
}

void HeadItemImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadItemImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadItemImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadItemImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadItemImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadItemImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadItemImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadItemImageByIndexParams::width() const {
	return m_width.value();
}

void HeadItemImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadItemImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadItemImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
