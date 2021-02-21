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
#include <QObject>
#include <QString>

#include "JellyfinQt/DTO/imagetype.h"

namespace Jellyfin {
namespace DTO {

class ImageInfo : public QObject {
	Q_OBJECT
public:
	explicit ImageInfo(QObject *parent = nullptr);
	static ImageInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(ImageType imageType READ imageType WRITE setImageType NOTIFY imageTypeChanged)
	/**
	 * @brief Gets or sets the index of the image.
	 */
	Q_PROPERTY(qint32 imageIndex READ imageIndex WRITE setImageIndex NOTIFY imageIndexChanged)
	/**
	 * @brief Gets or sets the image tag.
	 */
	Q_PROPERTY(QString imageTag READ imageTag WRITE setImageTag NOTIFY imageTagChanged)
	/**
	 * @brief Gets or sets the path.
	 */
	Q_PROPERTY(QString path READ path WRITE setPath NOTIFY pathChanged)
	/**
	 * @brief Gets or sets the blurhash.
	 */
	Q_PROPERTY(QString blurHash READ blurHash WRITE setBlurHash NOTIFY blurHashChanged)
	/**
	 * @brief Gets or sets the height.
	 */
	Q_PROPERTY(qint32 height READ height WRITE setHeight NOTIFY heightChanged)
	/**
	 * @brief Gets or sets the width.
	 */
	Q_PROPERTY(qint32 width READ width WRITE setWidth NOTIFY widthChanged)
	/**
	 * @brief Gets or sets the size.
	 */
	Q_PROPERTY(qint64 size READ size WRITE setSize NOTIFY sizeChanged)

	ImageType imageType() const;
	void setImageType(ImageType newImageType);
	
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex);
	
	QString imageTag() const;
	void setImageTag(QString newImageTag);
	
	QString path() const;
	void setPath(QString newPath);
	
	QString blurHash() const;
	void setBlurHash(QString newBlurHash);
	
	qint32 height() const;
	void setHeight(qint32 newHeight);
	
	qint32 width() const;
	void setWidth(qint32 newWidth);
	
	qint64 size() const;
	void setSize(qint64 newSize);
	
signals:
	void imageTypeChanged(ImageType newImageType);
	void imageIndexChanged(qint32 newImageIndex);
	void imageTagChanged(QString newImageTag);
	void pathChanged(QString newPath);
	void blurHashChanged(QString newBlurHash);
	void heightChanged(qint32 newHeight);
	void widthChanged(qint32 newWidth);
	void sizeChanged(qint64 newSize);
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
