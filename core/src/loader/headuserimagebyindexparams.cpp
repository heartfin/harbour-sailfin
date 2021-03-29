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

#include "JellyfinQt/loader/headuserimagebyindexparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadUserImageByIndexParams

const qint32 &HeadUserImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void HeadUserImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &HeadUserImageByIndexParams::imageType() const {
	return m_imageType;
}

void HeadUserImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &HeadUserImageByIndexParams::userId() const {
	return m_userId;
}

void HeadUserImageByIndexParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const bool &HeadUserImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void HeadUserImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool HeadUserImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void HeadUserImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &HeadUserImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void HeadUserImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool HeadUserImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void HeadUserImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &HeadUserImageByIndexParams::blur() const {
	return m_blur.value();
}

void HeadUserImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool HeadUserImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void HeadUserImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &HeadUserImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void HeadUserImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool HeadUserImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void HeadUserImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &HeadUserImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void HeadUserImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool HeadUserImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void HeadUserImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &HeadUserImageByIndexParams::format() const {
	return m_format;
}

void HeadUserImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool HeadUserImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void HeadUserImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &HeadUserImageByIndexParams::height() const {
	return m_height.value();
}

void HeadUserImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadUserImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadUserImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &HeadUserImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void HeadUserImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool HeadUserImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void HeadUserImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &HeadUserImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void HeadUserImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool HeadUserImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void HeadUserImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &HeadUserImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void HeadUserImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool HeadUserImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void HeadUserImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &HeadUserImageByIndexParams::quality() const {
	return m_quality.value();
}

void HeadUserImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool HeadUserImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void HeadUserImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &HeadUserImageByIndexParams::tag() const {
	return m_tag;
}

void HeadUserImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadUserImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadUserImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &HeadUserImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void HeadUserImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool HeadUserImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void HeadUserImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &HeadUserImageByIndexParams::width() const {
	return m_width.value();
}

void HeadUserImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadUserImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadUserImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
