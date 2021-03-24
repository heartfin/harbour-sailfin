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

#include <JellyfinQt/dto/imageinfo.h>

namespace Jellyfin {
namespace DTO {

ImageInfo::ImageInfo() {}

ImageInfo::ImageInfo(const ImageInfo &other) :

	m_imageType(other.m_imageType),
	m_imageIndex(other.m_imageIndex),
	m_imageTag(other.m_imageTag),
	m_path(other.m_path),
	m_blurHash(other.m_blurHash),
	m_height(other.m_height),
	m_width(other.m_width),
	m_size(other.m_size){}


void ImageInfo::replaceData(ImageInfo &other) {
	m_imageType = other.m_imageType;
	m_imageIndex = other.m_imageIndex;
	m_imageTag = other.m_imageTag;
	m_path = other.m_path;
	m_blurHash = other.m_blurHash;
	m_height = other.m_height;
	m_width = other.m_width;
	m_size = other.m_size;
}

ImageInfo ImageInfo::fromJson(QJsonObject source) {
	ImageInfo instance;
	instance.setFromJson(source);
	return instance;
}


void ImageInfo::setFromJson(QJsonObject source) {
	m_imageType = Jellyfin::Support::fromJsonValue<ImageType>(source["ImageType"]);
	m_imageIndex = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["ImageIndex"]);
	m_imageTag = Jellyfin::Support::fromJsonValue<QString>(source["ImageTag"]);
	m_path = Jellyfin::Support::fromJsonValue<QString>(source["Path"]);
	m_blurHash = Jellyfin::Support::fromJsonValue<QString>(source["BlurHash"]);
	m_height = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Height"]);
	m_width = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Width"]);
	m_size = Jellyfin::Support::fromJsonValue<qint64>(source["Size"]);

}
	
QJsonObject ImageInfo::toJson() {
	QJsonObject result;
	result["ImageType"] = Jellyfin::Support::toJsonValue<ImageType>(m_imageType);
	result["ImageIndex"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_imageIndex);
	result["ImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_imageTag);
	result["Path"] = Jellyfin::Support::toJsonValue<QString>(m_path);
	result["BlurHash"] = Jellyfin::Support::toJsonValue<QString>(m_blurHash);
	result["Height"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_height);
	result["Width"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_width);
	result["Size"] = Jellyfin::Support::toJsonValue<qint64>(m_size);

	return result;
}

ImageType ImageInfo::imageType() const { return m_imageType; }

void ImageInfo::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}

std::optional<qint32> ImageInfo::imageIndex() const { return m_imageIndex; }

void ImageInfo::setImageIndex(std::optional<qint32> newImageIndex) {
	m_imageIndex = newImageIndex;
}
bool ImageInfo::imageIndexNull() const {
	return !m_imageIndex.has_value();
}

void ImageInfo::setImageIndexNull() {
	m_imageIndex = std::nullopt;

}
QString ImageInfo::imageTag() const { return m_imageTag; }

void ImageInfo::setImageTag(QString newImageTag) {
	m_imageTag = newImageTag;
}
bool ImageInfo::imageTagNull() const {
	return m_imageTag.isNull();
}

void ImageInfo::setImageTagNull() {
	m_imageTag.clear();

}
QString ImageInfo::path() const { return m_path; }

void ImageInfo::setPath(QString newPath) {
	m_path = newPath;
}
bool ImageInfo::pathNull() const {
	return m_path.isNull();
}

void ImageInfo::setPathNull() {
	m_path.clear();

}
QString ImageInfo::blurHash() const { return m_blurHash; }

void ImageInfo::setBlurHash(QString newBlurHash) {
	m_blurHash = newBlurHash;
}
bool ImageInfo::blurHashNull() const {
	return m_blurHash.isNull();
}

void ImageInfo::setBlurHashNull() {
	m_blurHash.clear();

}
std::optional<qint32> ImageInfo::height() const { return m_height; }

void ImageInfo::setHeight(std::optional<qint32> newHeight) {
	m_height = newHeight;
}
bool ImageInfo::heightNull() const {
	return !m_height.has_value();
}

void ImageInfo::setHeightNull() {
	m_height = std::nullopt;

}
std::optional<qint32> ImageInfo::width() const { return m_width; }

void ImageInfo::setWidth(std::optional<qint32> newWidth) {
	m_width = newWidth;
}
bool ImageInfo::widthNull() const {
	return !m_width.has_value();
}

void ImageInfo::setWidthNull() {
	m_width = std::nullopt;

}
qint64 ImageInfo::size() const { return m_size; }

void ImageInfo::setSize(qint64 newSize) {
	m_size = newSize;
}


} // NS DTO

namespace Support {

using ImageInfo = Jellyfin::DTO::ImageInfo;

template <>
ImageInfo fromJsonValue<ImageInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return ImageInfo::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
