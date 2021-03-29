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

#include "JellyfinQt/loader/getstudioimagebyindexparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetStudioImageByIndexParams

const qint32 &GetStudioImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void GetStudioImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &GetStudioImageByIndexParams::imageType() const {
	return m_imageType;
}

void GetStudioImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetStudioImageByIndexParams::name() const {
	return m_name;
}

void GetStudioImageByIndexParams::setName(QString newName) {
	m_name = newName;
}


const bool &GetStudioImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetStudioImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetStudioImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetStudioImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetStudioImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetStudioImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetStudioImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetStudioImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetStudioImageByIndexParams::blur() const {
	return m_blur.value();
}

void GetStudioImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetStudioImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetStudioImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetStudioImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetStudioImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetStudioImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetStudioImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetStudioImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetStudioImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetStudioImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetStudioImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetStudioImageByIndexParams::format() const {
	return m_format;
}

void GetStudioImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetStudioImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetStudioImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetStudioImageByIndexParams::height() const {
	return m_height.value();
}

void GetStudioImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetStudioImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetStudioImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetStudioImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetStudioImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetStudioImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetStudioImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetStudioImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetStudioImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetStudioImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetStudioImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetStudioImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetStudioImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetStudioImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetStudioImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetStudioImageByIndexParams::quality() const {
	return m_quality.value();
}

void GetStudioImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetStudioImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetStudioImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetStudioImageByIndexParams::tag() const {
	return m_tag;
}

void GetStudioImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetStudioImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetStudioImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetStudioImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetStudioImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetStudioImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetStudioImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetStudioImageByIndexParams::width() const {
	return m_width.value();
}

void GetStudioImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetStudioImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetStudioImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
