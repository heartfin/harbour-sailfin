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

#include "JellyfinQt/loader/getuserimagebyindexparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetUserImageByIndexParams

const qint32 &GetUserImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void GetUserImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &GetUserImageByIndexParams::imageType() const {
	return m_imageType;
}

void GetUserImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetUserImageByIndexParams::userId() const {
	return m_userId;
}

void GetUserImageByIndexParams::setUserId(QString newUserId) {
	m_userId = newUserId;
}


const bool &GetUserImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetUserImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetUserImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetUserImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetUserImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetUserImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetUserImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetUserImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetUserImageByIndexParams::blur() const {
	return m_blur.value();
}

void GetUserImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetUserImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetUserImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetUserImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetUserImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetUserImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetUserImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetUserImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetUserImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetUserImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetUserImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetUserImageByIndexParams::format() const {
	return m_format;
}

void GetUserImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetUserImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetUserImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetUserImageByIndexParams::height() const {
	return m_height.value();
}

void GetUserImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetUserImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetUserImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetUserImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetUserImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetUserImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetUserImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetUserImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetUserImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetUserImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetUserImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetUserImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetUserImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetUserImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetUserImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetUserImageByIndexParams::quality() const {
	return m_quality.value();
}

void GetUserImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetUserImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetUserImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetUserImageByIndexParams::tag() const {
	return m_tag;
}

void GetUserImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetUserImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetUserImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetUserImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetUserImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetUserImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetUserImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetUserImageByIndexParams::width() const {
	return m_width.value();
}

void GetUserImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetUserImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetUserImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
