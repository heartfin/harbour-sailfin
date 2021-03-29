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

#include "JellyfinQt/loader/getgenreimageparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetGenreImageParams

const ImageType &GetGenreImageParams::imageType() const {
	return m_imageType;
}

void GetGenreImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetGenreImageParams::name() const {
	return m_name;
}

void GetGenreImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &GetGenreImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetGenreImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetGenreImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetGenreImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetGenreImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetGenreImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetGenreImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetGenreImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetGenreImageParams::blur() const {
	return m_blur.value();
}

void GetGenreImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetGenreImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetGenreImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetGenreImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetGenreImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetGenreImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetGenreImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetGenreImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetGenreImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetGenreImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetGenreImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetGenreImageParams::format() const {
	return m_format;
}

void GetGenreImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetGenreImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetGenreImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetGenreImageParams::height() const {
	return m_height.value();
}

void GetGenreImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetGenreImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetGenreImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetGenreImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void GetGenreImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool GetGenreImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void GetGenreImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &GetGenreImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetGenreImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetGenreImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetGenreImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetGenreImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetGenreImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetGenreImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetGenreImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetGenreImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetGenreImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetGenreImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetGenreImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetGenreImageParams::quality() const {
	return m_quality.value();
}

void GetGenreImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetGenreImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetGenreImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetGenreImageParams::tag() const {
	return m_tag;
}

void GetGenreImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetGenreImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetGenreImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetGenreImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetGenreImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetGenreImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetGenreImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetGenreImageParams::width() const {
	return m_width.value();
}

void GetGenreImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetGenreImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetGenreImageParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
