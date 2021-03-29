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

#include "JellyfinQt/loader/getmusicgenreimageparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetMusicGenreImageParams

const ImageType &GetMusicGenreImageParams::imageType() const {
	return m_imageType;
}

void GetMusicGenreImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetMusicGenreImageParams::name() const {
	return m_name;
}

void GetMusicGenreImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &GetMusicGenreImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetMusicGenreImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetMusicGenreImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetMusicGenreImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetMusicGenreImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetMusicGenreImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetMusicGenreImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetMusicGenreImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetMusicGenreImageParams::blur() const {
	return m_blur.value();
}

void GetMusicGenreImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetMusicGenreImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetMusicGenreImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetMusicGenreImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetMusicGenreImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetMusicGenreImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetMusicGenreImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetMusicGenreImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetMusicGenreImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetMusicGenreImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetMusicGenreImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetMusicGenreImageParams::format() const {
	return m_format;
}

void GetMusicGenreImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetMusicGenreImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetMusicGenreImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetMusicGenreImageParams::height() const {
	return m_height.value();
}

void GetMusicGenreImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetMusicGenreImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetMusicGenreImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetMusicGenreImageParams::imageIndex() const {
	return m_imageIndex.value();
}

void GetMusicGenreImageParams::setImageIndex(qint32 newImageIndex)  {
	m_imageIndex = newImageIndex;
}

bool GetMusicGenreImageParams::imageIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_imageIndex.has_value();
}

void GetMusicGenreImageParams::setImageIndexNull() {
	m_imageIndex = std::nullopt;
}


const qint32 &GetMusicGenreImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetMusicGenreImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetMusicGenreImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetMusicGenreImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetMusicGenreImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetMusicGenreImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetMusicGenreImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetMusicGenreImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetMusicGenreImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetMusicGenreImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetMusicGenreImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetMusicGenreImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetMusicGenreImageParams::quality() const {
	return m_quality.value();
}

void GetMusicGenreImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetMusicGenreImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetMusicGenreImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetMusicGenreImageParams::tag() const {
	return m_tag;
}

void GetMusicGenreImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetMusicGenreImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetMusicGenreImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetMusicGenreImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetMusicGenreImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetMusicGenreImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetMusicGenreImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetMusicGenreImageParams::width() const {
	return m_width.value();
}

void GetMusicGenreImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetMusicGenreImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetMusicGenreImageParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
