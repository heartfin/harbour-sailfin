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

#include <JellyfinQt/DTO/imageinfo.h>

#include <JellyfinQt/DTO/imagetype.h>

namespace Jellyfin {
namespace DTO {

ImageInfo::ImageInfo(QObject *parent) : QObject(parent) {}

ImageInfo *ImageInfo::fromJSON(QJsonObject source, QObject *parent) {
	ImageInfo *instance = new ImageInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void ImageInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject ImageInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
ImageType ImageInfo::imageType() const { return m_imageType; }
void ImageInfo::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
	emit imageTypeChanged(newImageType);
}

qint32 ImageInfo::imageIndex() const { return m_imageIndex; }
void ImageInfo::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
	emit imageIndexChanged(newImageIndex);
}

QString ImageInfo::imageTag() const { return m_imageTag; }
void ImageInfo::setImageTag(QString newImageTag) {
	m_imageTag = newImageTag;
	emit imageTagChanged(newImageTag);
}

QString ImageInfo::path() const { return m_path; }
void ImageInfo::setPath(QString newPath) {
	m_path = newPath;
	emit pathChanged(newPath);
}

QString ImageInfo::blurHash() const { return m_blurHash; }
void ImageInfo::setBlurHash(QString newBlurHash) {
	m_blurHash = newBlurHash;
	emit blurHashChanged(newBlurHash);
}

qint32 ImageInfo::height() const { return m_height; }
void ImageInfo::setHeight(qint32 newHeight) {
	m_height = newHeight;
	emit heightChanged(newHeight);
}

qint32 ImageInfo::width() const { return m_width; }
void ImageInfo::setWidth(qint32 newWidth) {
	m_width = newWidth;
	emit widthChanged(newWidth);
}

qint64 ImageInfo::size() const { return m_size; }
void ImageInfo::setSize(qint64 newSize) {
	m_size = newSize;
	emit sizeChanged(newSize);
}


} // NS Jellyfin
} // NS DTO
