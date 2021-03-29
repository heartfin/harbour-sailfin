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

#include "JellyfinQt/loader/getitemimagebyindexparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetItemImageByIndexParams

const qint32 &GetItemImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void GetItemImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &GetItemImageByIndexParams::imageType() const {
	return m_imageType;
}

void GetItemImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetItemImageByIndexParams::itemId() const {
	return m_itemId;
}

void GetItemImageByIndexParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetItemImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetItemImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetItemImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetItemImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetItemImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetItemImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetItemImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetItemImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetItemImageByIndexParams::blur() const {
	return m_blur.value();
}

void GetItemImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetItemImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetItemImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetItemImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetItemImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetItemImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetItemImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetItemImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetItemImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetItemImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetItemImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetItemImageByIndexParams::format() const {
	return m_format;
}

void GetItemImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetItemImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetItemImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetItemImageByIndexParams::height() const {
	return m_height.value();
}

void GetItemImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetItemImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetItemImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetItemImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetItemImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetItemImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetItemImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetItemImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetItemImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetItemImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetItemImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetItemImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetItemImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetItemImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetItemImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetItemImageByIndexParams::quality() const {
	return m_quality.value();
}

void GetItemImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetItemImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetItemImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetItemImageByIndexParams::tag() const {
	return m_tag;
}

void GetItemImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetItemImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetItemImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetItemImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetItemImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetItemImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetItemImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetItemImageByIndexParams::width() const {
	return m_width.value();
}

void GetItemImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetItemImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetItemImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
