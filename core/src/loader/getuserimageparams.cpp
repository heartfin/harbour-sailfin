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

#include "JellyfinQt/loader/getuserimageparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetUserImageParams

const ImageType &GetUserImageParams::imageType() const {
	return m_imageType;
}

void GetUserImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetUserImageParams::userId() const {
	return m_userId;
}

void GetUserImageParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const bool &GetUserImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetUserImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetUserImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetUserImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetUserImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetUserImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetUserImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetUserImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetUserImageParams::blur() const {
	return m_blur.value();
}

void GetUserImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetUserImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetUserImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetUserImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetUserImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetUserImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetUserImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetUserImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetUserImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetUserImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetUserImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetUserImageParams::format() const {
	return m_format;
}

void GetUserImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetUserImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetUserImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetUserImageParams::height() const {
	return m_height.value();
}

void GetUserImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetUserImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetUserImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetUserImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void GetUserImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool GetUserImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void GetUserImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &GetUserImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetUserImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetUserImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetUserImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetUserImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetUserImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetUserImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetUserImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetUserImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetUserImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetUserImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetUserImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetUserImageParams::quality() const {
	return m_quality.value();
}

void GetUserImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetUserImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetUserImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetUserImageParams::tag() const {
	return m_tag;
}

void GetUserImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetUserImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetUserImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetUserImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetUserImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetUserImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetUserImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetUserImageParams::width() const {
	return m_width.value();
}

void GetUserImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetUserImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetUserImageParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
