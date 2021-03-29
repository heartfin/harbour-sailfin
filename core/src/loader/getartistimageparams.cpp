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

#include "JellyfinQt/loader/getartistimageparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetArtistImageParams

const qint32 &GetArtistImageParams::imageIndex() const {
	return m_imageIndex;
}

void GetArtistImageParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &GetArtistImageParams::imageType() const {
	return m_imageType;
}

void GetArtistImageParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetArtistImageParams::name() const {
	return m_name;
}

void GetArtistImageParams::setName(QString newName) {
	m_name = newName;
}


const bool &GetArtistImageParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetArtistImageParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetArtistImageParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetArtistImageParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetArtistImageParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetArtistImageParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetArtistImageParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetArtistImageParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetArtistImageParams::blur() const {
	return m_blur.value();
}

void GetArtistImageParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetArtistImageParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetArtistImageParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetArtistImageParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetArtistImageParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetArtistImageParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetArtistImageParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetArtistImageParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetArtistImageParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetArtistImageParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetArtistImageParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetArtistImageParams::format() const {
	return m_format;
}

void GetArtistImageParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetArtistImageParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetArtistImageParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetArtistImageParams::height() const {
	return m_height.value();
}

void GetArtistImageParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetArtistImageParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetArtistImageParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetArtistImageParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetArtistImageParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetArtistImageParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetArtistImageParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetArtistImageParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetArtistImageParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetArtistImageParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetArtistImageParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetArtistImageParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetArtistImageParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetArtistImageParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetArtistImageParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetArtistImageParams::quality() const {
	return m_quality.value();
}

void GetArtistImageParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetArtistImageParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetArtistImageParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetArtistImageParams::tag() const {
	return m_tag;
}

void GetArtistImageParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetArtistImageParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetArtistImageParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetArtistImageParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetArtistImageParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetArtistImageParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetArtistImageParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetArtistImageParams::width() const {
	return m_width.value();
}

void GetArtistImageParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetArtistImageParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetArtistImageParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
