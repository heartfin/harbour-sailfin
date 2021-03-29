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

#include "JellyfinQt/loader/getpersonimageparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetPersonImageParams

const ImageType &GetPersonImageParams::imageType() const {
	return m_imageType;
}

void GetPersonImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetPersonImageParams::name() const {
	return m_name;
}

void GetPersonImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &GetPersonImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetPersonImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetPersonImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetPersonImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetPersonImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetPersonImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetPersonImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetPersonImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetPersonImageParams::blur() const {
	return m_blur.value();
}

void GetPersonImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetPersonImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetPersonImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetPersonImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetPersonImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetPersonImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetPersonImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetPersonImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetPersonImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetPersonImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetPersonImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetPersonImageParams::format() const {
	return m_format;
}

void GetPersonImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetPersonImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetPersonImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetPersonImageParams::height() const {
	return m_height.value();
}

void GetPersonImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetPersonImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetPersonImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetPersonImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void GetPersonImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool GetPersonImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void GetPersonImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &GetPersonImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetPersonImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetPersonImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetPersonImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetPersonImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetPersonImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetPersonImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetPersonImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetPersonImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetPersonImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetPersonImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetPersonImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetPersonImageParams::quality() const {
	return m_quality.value();
}

void GetPersonImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetPersonImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetPersonImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetPersonImageParams::tag() const {
	return m_tag;
}

void GetPersonImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetPersonImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetPersonImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetPersonImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetPersonImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetPersonImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetPersonImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetPersonImageParams::width() const {
	return m_width.value();
}

void GetPersonImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetPersonImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetPersonImageParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
