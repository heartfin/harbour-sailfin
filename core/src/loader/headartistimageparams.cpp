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

#include "JellyfinQt/loader/headartistimageparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadArtistImageParams

const qint32 &HeadArtistImageParams::imageIndex() const {
	return m_imageIndex;
}

void HeadArtistImageParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &HeadArtistImageParams::imageType() const {
	return m_imageType;
}

void HeadArtistImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadArtistImageParams::name() const {
	return m_name;
}

void HeadArtistImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &HeadArtistImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadArtistImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadArtistImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadArtistImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadArtistImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadArtistImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadArtistImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadArtistImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadArtistImageParams::blur() const {
	return m_blur.value();
}

void HeadArtistImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadArtistImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadArtistImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadArtistImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadArtistImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadArtistImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadArtistImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadArtistImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadArtistImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadArtistImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadArtistImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadArtistImageParams::format() const {
	return m_format;
}

void HeadArtistImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadArtistImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadArtistImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadArtistImageParams::height() const {
	return m_height.value();
}

void HeadArtistImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadArtistImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadArtistImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadArtistImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadArtistImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadArtistImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadArtistImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadArtistImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadArtistImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadArtistImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadArtistImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadArtistImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadArtistImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadArtistImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadArtistImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadArtistImageParams::quality() const {
	return m_quality.value();
}

void HeadArtistImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadArtistImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadArtistImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadArtistImageParams::tag() const {
	return m_tag;
}

void HeadArtistImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadArtistImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadArtistImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadArtistImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadArtistImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadArtistImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadArtistImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadArtistImageParams::width() const {
	return m_width.value();
}

void HeadArtistImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadArtistImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadArtistImageParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
