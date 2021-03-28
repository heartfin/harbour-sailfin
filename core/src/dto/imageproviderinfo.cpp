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

#include <JellyfinQt/dto/imageproviderinfo.h>

namespace Jellyfin {
namespace DTO {

ImageProviderInfo::ImageProviderInfo() {}

ImageProviderInfo::ImageProviderInfo(const ImageProviderInfo &other) :

	m_name(other.m_name),
	m_supportedImages(other.m_supportedImages){}


void ImageProviderInfo::replaceData(ImageProviderInfo &other) {
	m_name = other.m_name;
	m_supportedImages = other.m_supportedImages;
}

ImageProviderInfo ImageProviderInfo::fromJson(QJsonObject source) {
	ImageProviderInfo instance;
	instance.setFromJson(source);
	return instance;
}


void ImageProviderInfo::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_supportedImages = Jellyfin::Support::fromJsonValue<QList<ImageType>>(source["SupportedImages"]);

}
	
QJsonObject ImageProviderInfo::toJson() const {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["SupportedImages"] = Jellyfin::Support::toJsonValue<QList<ImageType>>(m_supportedImages);

	return result;
}

QString ImageProviderInfo::name() const { return m_name; }

void ImageProviderInfo::setName(QString newName) {
	m_name = newName;
}
bool ImageProviderInfo::nameNull() const {
	return m_name.isNull();
}

void ImageProviderInfo::setNameNull() {
	m_name.clear();

}
QList<ImageType> ImageProviderInfo::supportedImages() const { return m_supportedImages; }

void ImageProviderInfo::setSupportedImages(QList<ImageType> newSupportedImages) {
	m_supportedImages = newSupportedImages;
}
bool ImageProviderInfo::supportedImagesNull() const {
	return m_supportedImages.size() == 0;
}

void ImageProviderInfo::setSupportedImagesNull() {
	m_supportedImages.clear();

}

} // NS DTO

namespace Support {

using ImageProviderInfo = Jellyfin::DTO::ImageProviderInfo;

template <>
ImageProviderInfo fromJsonValue(const QJsonValue &source, convertType<ImageProviderInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ImageProviderInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ImageProviderInfo &source, convertType<ImageProviderInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
