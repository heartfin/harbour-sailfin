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

#include "JellyfinQt/loader/headmusicgenreimagebyindexparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadMusicGenreImageByIndexParams

const qint32 &HeadMusicGenreImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void HeadMusicGenreImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &HeadMusicGenreImageByIndexParams::imageType() const {
	return m_imageType;
}

void HeadMusicGenreImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadMusicGenreImageByIndexParams::name() const {
	return m_name;
}

void HeadMusicGenreImageByIndexParams::setName(QString newName) {
	m_name = newName;
}


const bool &HeadMusicGenreImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadMusicGenreImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadMusicGenreImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadMusicGenreImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadMusicGenreImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadMusicGenreImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadMusicGenreImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadMusicGenreImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadMusicGenreImageByIndexParams::blur() const {
	return m_blur.value();
}

void HeadMusicGenreImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadMusicGenreImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadMusicGenreImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadMusicGenreImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadMusicGenreImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadMusicGenreImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadMusicGenreImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadMusicGenreImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadMusicGenreImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadMusicGenreImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadMusicGenreImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadMusicGenreImageByIndexParams::format() const {
	return m_format;
}

void HeadMusicGenreImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadMusicGenreImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadMusicGenreImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadMusicGenreImageByIndexParams::height() const {
	return m_height.value();
}

void HeadMusicGenreImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadMusicGenreImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadMusicGenreImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadMusicGenreImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadMusicGenreImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadMusicGenreImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadMusicGenreImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadMusicGenreImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadMusicGenreImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadMusicGenreImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadMusicGenreImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadMusicGenreImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadMusicGenreImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadMusicGenreImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadMusicGenreImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadMusicGenreImageByIndexParams::quality() const {
	return m_quality.value();
}

void HeadMusicGenreImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadMusicGenreImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadMusicGenreImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadMusicGenreImageByIndexParams::tag() const {
	return m_tag;
}

void HeadMusicGenreImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadMusicGenreImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadMusicGenreImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadMusicGenreImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadMusicGenreImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadMusicGenreImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadMusicGenreImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadMusicGenreImageByIndexParams::width() const {
	return m_width.value();
}

void HeadMusicGenreImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadMusicGenreImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadMusicGenreImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
