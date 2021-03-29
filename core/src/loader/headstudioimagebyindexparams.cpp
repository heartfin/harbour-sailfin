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

#include "JellyfinQt/loader/headstudioimagebyindexparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadStudioImageByIndexParams

const qint32 &HeadStudioImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void HeadStudioImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &HeadStudioImageByIndexParams::imageType() const {
	return m_imageType;
}

void HeadStudioImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadStudioImageByIndexParams::name() const {
	return m_name;
}

void HeadStudioImageByIndexParams::setName(QString newName) {
	m_name = newName;
}


const bool &HeadStudioImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadStudioImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadStudioImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadStudioImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadStudioImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadStudioImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadStudioImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadStudioImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadStudioImageByIndexParams::blur() const {
	return m_blur.value();
}

void HeadStudioImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadStudioImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadStudioImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadStudioImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadStudioImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadStudioImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadStudioImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadStudioImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadStudioImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadStudioImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadStudioImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadStudioImageByIndexParams::format() const {
	return m_format;
}

void HeadStudioImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadStudioImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadStudioImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadStudioImageByIndexParams::height() const {
	return m_height.value();
}

void HeadStudioImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadStudioImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadStudioImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadStudioImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadStudioImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadStudioImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadStudioImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadStudioImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadStudioImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadStudioImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadStudioImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadStudioImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadStudioImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadStudioImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadStudioImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadStudioImageByIndexParams::quality() const {
	return m_quality.value();
}

void HeadStudioImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadStudioImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadStudioImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadStudioImageByIndexParams::tag() const {
	return m_tag;
}

void HeadStudioImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadStudioImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadStudioImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadStudioImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadStudioImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadStudioImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadStudioImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadStudioImageByIndexParams::width() const {
	return m_width.value();
}

void HeadStudioImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadStudioImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadStudioImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
