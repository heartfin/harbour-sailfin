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

#ifndef JELLYFIN_DTO_IMAGEINFO_H
#define JELLYFIN_DTO_IMAGEINFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/DTO/imagetype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class ImageInfo {
public:
	explicit ImageInfo();
	static ImageInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties

	ImageType imageType() const;

	void setImageType(ImageType newImageType);
	/**
	 * @brief Gets or sets the index of the image.
	 */
	qint32 imageIndex() const;
	/**
	* @brief Gets or sets the index of the image.
	*/
	void setImageIndex(qint32 newImageIndex);
	/**
	 * @brief Gets or sets the image tag.
	 */
	QString imageTag() const;
	/**
	* @brief Gets or sets the image tag.
	*/
	void setImageTag(QString newImageTag);
	/**
	 * @brief Gets or sets the path.
	 */
	QString path() const;
	/**
	* @brief Gets or sets the path.
	*/
	void setPath(QString newPath);
	/**
	 * @brief Gets or sets the blurhash.
	 */
	QString blurHash() const;
	/**
	* @brief Gets or sets the blurhash.
	*/
	void setBlurHash(QString newBlurHash);
	/**
	 * @brief Gets or sets the height.
	 */
	qint32 height() const;
	/**
	* @brief Gets or sets the height.
	*/
	void setHeight(qint32 newHeight);
	/**
	 * @brief Gets or sets the width.
	 */
	qint32 width() const;
	/**
	* @brief Gets or sets the width.
	*/
	void setWidth(qint32 newWidth);
	/**
	 * @brief Gets or sets the size.
	 */
	qint64 size() const;
	/**
	* @brief Gets or sets the size.
	*/
	void setSize(qint64 newSize);

protected:
	ImageType m_imageType;
	qint32 m_imageIndex;
	QString m_imageTag;
	QString m_path;
	QString m_blurHash;
	qint32 m_height;
	qint32 m_width;
	qint64 m_size;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_IMAGEINFO_H
