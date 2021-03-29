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

#include "JellyfinQt/loader/headitemimage2params.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadItemImage2Params

const ImageFormat &HeadItemImage2Params::format() const {
	return m_format;
}

void HeadItemImage2Params::setFormat(ImageFormat newFormat) {
	m_format = newFormat;
}


const qint32 &HeadItemImage2Params::imageIndex() const {
	return m_imageIndex;
}

void HeadItemImage2Params::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &HeadItemImage2Params::imageType() const {
	return m_imageType;
}

void HeadItemImage2Params::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadItemImage2Params::itemId() const {
	return m_itemId;
}

void HeadItemImage2Params::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const qint32 &HeadItemImage2Params::maxHeight() const {
	return m_maxHeight;
}

void HeadItemImage2Params::setMaxHeight(qint32 newMaxHeight) {
	m_maxHeight = newMaxHeight;
}


const qint32 &HeadItemImage2Params::maxWidth() const {
	return m_maxWidth;
}

void HeadItemImage2Params::setMaxWidth(qint32 newMaxWidth) {
	m_maxWidth = newMaxWidth;
}


const double &HeadItemImage2Params::percentPlayed() const {
	return m_percentPlayed;
}

void HeadItemImage2Params::setPercentPlayed(double newPercentPlayed) {
	m_percentPlayed = newPercentPlayed;
}


const QString &HeadItemImage2Params::tag() const {
	return m_tag;
}

void HeadItemImage2Params::setTag(QString newTag) {
	m_tag = newTag;
}


const qint32 &HeadItemImage2Params::unplayedCount() const {
	return m_unplayedCount;
}

void HeadItemImage2Params::setUnplayedCount(qint32 newUnplayedCount) {
	m_unplayedCount = newUnplayedCount;
}


const bool &HeadItemImage2Params::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadItemImage2Params::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadItemImage2Params::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadItemImage2Params::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadItemImage2Params::backgroundColor() const {
	return m_backgroundColor;
}

void HeadItemImage2Params::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadItemImage2Params::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadItemImage2Params::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadItemImage2Params::blur() const {
	return m_blur.value();
}

void HeadItemImage2Params::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadItemImage2Params::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadItemImage2Params::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadItemImage2Params::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadItemImage2Params::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadItemImage2Params::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadItemImage2Params::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadItemImage2Params::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadItemImage2Params::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadItemImage2Params::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadItemImage2Params::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const qint32 &HeadItemImage2Params::height() const {
	return m_height.value();
}

void HeadItemImage2Params::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadItemImage2Params::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadItemImage2Params::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadItemImage2Params::quality() const {
	return m_quality.value();
}

void HeadItemImage2Params::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadItemImage2Params::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadItemImage2Params::setQualityNull() {
	m_quality = std::nullopt;
}


const qint32 &HeadItemImage2Params::width() const {
	return m_width.value();
}

void HeadItemImage2Params::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadItemImage2Params::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadItemImage2Params::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
