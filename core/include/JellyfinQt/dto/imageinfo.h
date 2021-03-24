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

#include "JellyfinQt/dto/imagetype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class ImageInfo {
public:
	ImageInfo();
	ImageInfo(const ImageInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(ImageInfo &other);
	
	static ImageInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties

	ImageType imageType() const;

	void setImageType(ImageType newImageType);

	/**
	 * @brief Gets or sets the index of the image.
	 */
	std::optional<qint32> imageIndex() const;
	/**
	* @brief Gets or sets the index of the image.
	*/
	void setImageIndex(std::optional<qint32> newImageIndex);
	bool imageIndexNull() const;
	void setImageIndexNull();

	/**
	 * @brief Gets or sets the image tag.
	 */
	QString imageTag() const;
	/**
	* @brief Gets or sets the image tag.
	*/
	void setImageTag(QString newImageTag);
	bool imageTagNull() const;
	void setImageTagNull();

	/**
	 * @brief Gets or sets the path.
	 */
	QString path() const;
	/**
	* @brief Gets or sets the path.
	*/
	void setPath(QString newPath);
	bool pathNull() const;
	void setPathNull();

	/**
	 * @brief Gets or sets the blurhash.
	 */
	QString blurHash() const;
	/**
	* @brief Gets or sets the blurhash.
	*/
	void setBlurHash(QString newBlurHash);
	bool blurHashNull() const;
	void setBlurHashNull();

	/**
	 * @brief Gets or sets the height.
	 */
	std::optional<qint32> height() const;
	/**
	* @brief Gets or sets the height.
	*/
	void setHeight(std::optional<qint32> newHeight);
	bool heightNull() const;
	void setHeightNull();

	/**
	 * @brief Gets or sets the width.
	 */
	std::optional<qint32> width() const;
	/**
	* @brief Gets or sets the width.
	*/
	void setWidth(std::optional<qint32> newWidth);
	bool widthNull() const;
	void setWidthNull();

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
	std::optional<qint32> m_imageIndex = std::nullopt;
	QString m_imageTag;
	QString m_path;
	QString m_blurHash;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;
	qint64 m_size;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_IMAGEINFO_H
