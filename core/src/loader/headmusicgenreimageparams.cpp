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

#include "JellyfinQt/loader/headmusicgenreimageparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadMusicGenreImageParams

const ImageType &HeadMusicGenreImageParams::imageType() const {
	return m_imageType;
}

void HeadMusicGenreImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadMusicGenreImageParams::name() const {
	return m_name;
}

void HeadMusicGenreImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &HeadMusicGenreImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadMusicGenreImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadMusicGenreImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadMusicGenreImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadMusicGenreImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadMusicGenreImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadMusicGenreImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadMusicGenreImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadMusicGenreImageParams::blur() const {
	return m_blur.value();
}

void HeadMusicGenreImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadMusicGenreImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadMusicGenreImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadMusicGenreImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadMusicGenreImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadMusicGenreImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadMusicGenreImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadMusicGenreImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadMusicGenreImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadMusicGenreImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadMusicGenreImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadMusicGenreImageParams::format() const {
	return m_format;
}

void HeadMusicGenreImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadMusicGenreImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadMusicGenreImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadMusicGenreImageParams::height() const {
	return m_height.value();
}

void HeadMusicGenreImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadMusicGenreImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadMusicGenreImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadMusicGenreImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void HeadMusicGenreImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool HeadMusicGenreImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void HeadMusicGenreImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &HeadMusicGenreImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadMusicGenreImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadMusicGenreImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadMusicGenreImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadMusicGenreImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadMusicGenreImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadMusicGenreImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadMusicGenreImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadMusicGenreImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadMusicGenreImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadMusicGenreImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadMusicGenreImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadMusicGenreImageParams::quality() const {
	return m_quality.value();
}

void HeadMusicGenreImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadMusicGenreImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadMusicGenreImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadMusicGenreImageParams::tag() const {
	return m_tag;
}

void HeadMusicGenreImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadMusicGenreImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadMusicGenreImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadMusicGenreImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadMusicGenreImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadMusicGenreImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadMusicGenreImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadMusicGenreImageParams::width() const {
	return m_width.value();
}

void HeadMusicGenreImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadMusicGenreImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadMusicGenreImageParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
