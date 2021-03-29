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

#include "JellyfinQt/loader/headgenreimageparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadGenreImageParams

const ImageType &HeadGenreImageParams::imageType() const {
	return m_imageType;
}

void HeadGenreImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadGenreImageParams::name() const {
	return m_name;
}

void HeadGenreImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &HeadGenreImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadGenreImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadGenreImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadGenreImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadGenreImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadGenreImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadGenreImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadGenreImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadGenreImageParams::blur() const {
	return m_blur.value();
}

void HeadGenreImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadGenreImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadGenreImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadGenreImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadGenreImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadGenreImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadGenreImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadGenreImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadGenreImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadGenreImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadGenreImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadGenreImageParams::format() const {
	return m_format;
}

void HeadGenreImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadGenreImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadGenreImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadGenreImageParams::height() const {
	return m_height.value();
}

void HeadGenreImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadGenreImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadGenreImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadGenreImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void HeadGenreImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool HeadGenreImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void HeadGenreImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &HeadGenreImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadGenreImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadGenreImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadGenreImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadGenreImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadGenreImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadGenreImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadGenreImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadGenreImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadGenreImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadGenreImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadGenreImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadGenreImageParams::quality() const {
	return m_quality.value();
}

void HeadGenreImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadGenreImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadGenreImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadGenreImageParams::tag() const {
	return m_tag;
}

void HeadGenreImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadGenreImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadGenreImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadGenreImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadGenreImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadGenreImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadGenreImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadGenreImageParams::width() const {
	return m_width.value();
}

void HeadGenreImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadGenreImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadGenreImageParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
