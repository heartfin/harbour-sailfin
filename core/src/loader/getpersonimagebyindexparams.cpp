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

#include "JellyfinQt/loader/getpersonimagebyindexparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetPersonImageByIndexParams

const qint32 &GetPersonImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void GetPersonImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &GetPersonImageByIndexParams::imageType() const {
	return m_imageType;
}

void GetPersonImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetPersonImageByIndexParams::name() const {
	return m_name;
}

void GetPersonImageByIndexParams::setName(QString newName) {
	m_name = newName;
}


const bool &GetPersonImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetPersonImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetPersonImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetPersonImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetPersonImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetPersonImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetPersonImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetPersonImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetPersonImageByIndexParams::blur() const {
	return m_blur.value();
}

void GetPersonImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetPersonImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetPersonImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetPersonImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetPersonImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetPersonImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetPersonImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetPersonImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetPersonImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetPersonImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetPersonImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetPersonImageByIndexParams::format() const {
	return m_format;
}

void GetPersonImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetPersonImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetPersonImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetPersonImageByIndexParams::height() const {
	return m_height.value();
}

void GetPersonImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetPersonImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetPersonImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetPersonImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetPersonImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetPersonImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetPersonImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetPersonImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetPersonImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetPersonImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetPersonImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetPersonImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetPersonImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetPersonImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetPersonImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetPersonImageByIndexParams::quality() const {
	return m_quality.value();
}

void GetPersonImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetPersonImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetPersonImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetPersonImageByIndexParams::tag() const {
	return m_tag;
}

void GetPersonImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetPersonImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetPersonImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetPersonImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetPersonImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetPersonImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetPersonImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetPersonImageByIndexParams::width() const {
	return m_width.value();
}

void GetPersonImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetPersonImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetPersonImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
