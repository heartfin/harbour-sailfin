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

#include "JellyfinQt/loader/getgenreimagebyindexparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetGenreImageByIndexParams

const qint32 &GetGenreImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void GetGenreImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &GetGenreImageByIndexParams::imageType() const {
	return m_imageType;
}

void GetGenreImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetGenreImageByIndexParams::name() const {
	return m_name;
}

void GetGenreImageByIndexParams::setName(QString newName) {
	m_name = newName;
}


const bool &GetGenreImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetGenreImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetGenreImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetGenreImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetGenreImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetGenreImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetGenreImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetGenreImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetGenreImageByIndexParams::blur() const {
	return m_blur.value();
}

void GetGenreImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetGenreImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetGenreImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetGenreImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetGenreImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetGenreImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetGenreImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetGenreImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetGenreImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetGenreImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetGenreImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetGenreImageByIndexParams::format() const {
	return m_format;
}

void GetGenreImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetGenreImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetGenreImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetGenreImageByIndexParams::height() const {
	return m_height.value();
}

void GetGenreImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetGenreImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetGenreImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetGenreImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetGenreImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetGenreImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetGenreImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetGenreImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetGenreImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetGenreImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetGenreImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetGenreImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetGenreImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetGenreImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetGenreImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetGenreImageByIndexParams::quality() const {
	return m_quality.value();
}

void GetGenreImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetGenreImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetGenreImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetGenreImageByIndexParams::tag() const {
	return m_tag;
}

void GetGenreImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetGenreImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetGenreImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetGenreImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetGenreImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetGenreImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetGenreImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetGenreImageByIndexParams::width() const {
	return m_width.value();
}

void GetGenreImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetGenreImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetGenreImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
