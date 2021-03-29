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

#include "JellyfinQt/loader/getmusicgenreimagebyindexparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetMusicGenreImageByIndexParams

const qint32 &GetMusicGenreImageByIndexParams::imageIndex() const {
	return m_imageIndex;
}

void GetMusicGenreImageByIndexParams::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}


const ImageType &GetMusicGenreImageByIndexParams::imageType() const {
	return m_imageType;
}

void GetMusicGenreImageByIndexParams::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}


const QString &GetMusicGenreImageByIndexParams::name() const {
	return m_name;
}

void GetMusicGenreImageByIndexParams::setName(QString newName) {
	m_name = newName;
}


const bool &GetMusicGenreImageByIndexParams::addPlayedIndicator() const {
	return m_addPlayedIndicator.value();
}

void GetMusicGenreImageByIndexParams::setAddPlayedIndicator(bool newAddPlayedIndicator)  {
	m_addPlayedIndicator = newAddPlayedIndicator;
}

bool GetMusicGenreImageByIndexParams::addPlayedIndicatorNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_addPlayedIndicator.has_value();
}

void GetMusicGenreImageByIndexParams::setAddPlayedIndicatorNull() {
	m_addPlayedIndicator = std::nullopt;
}


const QString &GetMusicGenreImageByIndexParams::backgroundColor() const {
	return m_backgroundColor;
}

void GetMusicGenreImageByIndexParams::setBackgroundColor(QString newBackgroundColor)  {
	m_backgroundColor = newBackgroundColor;
}

bool GetMusicGenreImageByIndexParams::backgroundColorNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_backgroundColor.isNull();
}

void GetMusicGenreImageByIndexParams::setBackgroundColorNull() {
	m_backgroundColor.clear();
}


const qint32 &GetMusicGenreImageByIndexParams::blur() const {
	return m_blur.value();
}

void GetMusicGenreImageByIndexParams::setBlur(qint32 newBlur)  {
	m_blur = newBlur;
}

bool GetMusicGenreImageByIndexParams::blurNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_blur.has_value();
}

void GetMusicGenreImageByIndexParams::setBlurNull() {
	m_blur = std::nullopt;
}


const bool &GetMusicGenreImageByIndexParams::cropWhitespace() const {
	return m_cropWhitespace.value();
}

void GetMusicGenreImageByIndexParams::setCropWhitespace(bool newCropWhitespace)  {
	m_cropWhitespace = newCropWhitespace;
}

bool GetMusicGenreImageByIndexParams::cropWhitespaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cropWhitespace.has_value();
}

void GetMusicGenreImageByIndexParams::setCropWhitespaceNull() {
	m_cropWhitespace = std::nullopt;
}


const QString &GetMusicGenreImageByIndexParams::foregroundLayer() const {
	return m_foregroundLayer;
}

void GetMusicGenreImageByIndexParams::setForegroundLayer(QString newForegroundLayer)  {
	m_foregroundLayer = newForegroundLayer;
}

bool GetMusicGenreImageByIndexParams::foregroundLayerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_foregroundLayer.isNull();
}

void GetMusicGenreImageByIndexParams::setForegroundLayerNull() {
	m_foregroundLayer.clear();
}


const ImageFormat &GetMusicGenreImageByIndexParams::format() const {
	return m_format;
}

void GetMusicGenreImageByIndexParams::setFormat(ImageFormat newFormat)  {
	m_format = newFormat;
}

bool GetMusicGenreImageByIndexParams::formatNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_format== ImageFormat::EnumNotSet;
}

void GetMusicGenreImageByIndexParams::setFormatNull() {
	m_format= ImageFormat::EnumNotSet;
}


const qint32 &GetMusicGenreImageByIndexParams::height() const {
	return m_height.value();
}

void GetMusicGenreImageByIndexParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetMusicGenreImageByIndexParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetMusicGenreImageByIndexParams::setHeightNull() {
	m_height = std::nullopt;
}


const qint32 &GetMusicGenreImageByIndexParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetMusicGenreImageByIndexParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetMusicGenreImageByIndexParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetMusicGenreImageByIndexParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetMusicGenreImageByIndexParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetMusicGenreImageByIndexParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetMusicGenreImageByIndexParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetMusicGenreImageByIndexParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const double &GetMusicGenreImageByIndexParams::percentPlayed() const {
	return m_percentPlayed.value();
}

void GetMusicGenreImageByIndexParams::setPercentPlayed(double newPercentPlayed)  {
	m_percentPlayed = newPercentPlayed;
}

bool GetMusicGenreImageByIndexParams::percentPlayedNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_percentPlayed.has_value();
}

void GetMusicGenreImageByIndexParams::setPercentPlayedNull() {
	m_percentPlayed = std::nullopt;
}


const qint32 &GetMusicGenreImageByIndexParams::quality() const {
	return m_quality.value();
}

void GetMusicGenreImageByIndexParams::setQuality(qint32 newQuality)  {
	m_quality = newQuality;
}

bool GetMusicGenreImageByIndexParams::qualityNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_quality.has_value();
}

void GetMusicGenreImageByIndexParams::setQualityNull() {
	m_quality = std::nullopt;
}


const QString &GetMusicGenreImageByIndexParams::tag() const {
	return m_tag;
}

void GetMusicGenreImageByIndexParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetMusicGenreImageByIndexParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetMusicGenreImageByIndexParams::setTagNull() {
	m_tag.clear();
}


const qint32 &GetMusicGenreImageByIndexParams::unplayedCount() const {
	return m_unplayedCount.value();
}

void GetMusicGenreImageByIndexParams::setUnplayedCount(qint32 newUnplayedCount)  {
	m_unplayedCount = newUnplayedCount;
}

bool GetMusicGenreImageByIndexParams::unplayedCountNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_unplayedCount.has_value();
}

void GetMusicGenreImageByIndexParams::setUnplayedCountNull() {
	m_unplayedCount = std::nullopt;
}


const qint32 &GetMusicGenreImageByIndexParams::width() const {
	return m_width.value();
}

void GetMusicGenreImageByIndexParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetMusicGenreImageByIndexParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetMusicGenreImageByIndexParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
