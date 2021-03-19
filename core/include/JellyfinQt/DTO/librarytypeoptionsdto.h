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

#ifndef JELLYFIN_DTO_LIBRARYTYPEOPTIONSDTO_H
#define JELLYFIN_DTO_LIBRARYTYPEOPTIONSDTO_H

#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/imagetype.h"

namespace Jellyfin {
namespace DTO {

class ImageOption;
class LibraryOptionInfoDto;
class LibraryOptionInfoDto;

class LibraryTypeOptionsDto : public QObject {
	Q_OBJECT
public:
	explicit LibraryTypeOptionsDto(QObject *parent = nullptr);
	static LibraryTypeOptionsDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the type.
	 */
	Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
	/**
	 * @brief Gets or sets the metadata fetchers.
	 */
	Q_PROPERTY(QList<LibraryOptionInfoDto *> metadataFetchers READ metadataFetchers WRITE setMetadataFetchers NOTIFY metadataFetchersChanged)
	/**
	 * @brief Gets or sets the image fetchers.
	 */
	Q_PROPERTY(QList<LibraryOptionInfoDto *> imageFetchers READ imageFetchers WRITE setImageFetchers NOTIFY imageFetchersChanged)
	/**
	 * @brief Gets or sets the supported image types.
	 */
	Q_PROPERTY(QList<ImageType> supportedImageTypes READ supportedImageTypes WRITE setSupportedImageTypes NOTIFY supportedImageTypesChanged)
	/**
	 * @brief Gets or sets the default image options.
	 */
	Q_PROPERTY(QList<ImageOption *> defaultImageOptions READ defaultImageOptions WRITE setDefaultImageOptions NOTIFY defaultImageOptionsChanged)

	QString type() const;
	void setType(QString newType);
	
	QList<LibraryOptionInfoDto *> metadataFetchers() const;
	void setMetadataFetchers(QList<LibraryOptionInfoDto *> newMetadataFetchers);
	
	QList<LibraryOptionInfoDto *> imageFetchers() const;
	void setImageFetchers(QList<LibraryOptionInfoDto *> newImageFetchers);
	
	QList<ImageType> supportedImageTypes() const;
	void setSupportedImageTypes(QList<ImageType> newSupportedImageTypes);
	
	QList<ImageOption *> defaultImageOptions() const;
	void setDefaultImageOptions(QList<ImageOption *> newDefaultImageOptions);
	
signals:
	void typeChanged(QString newType);
	void metadataFetchersChanged(QList<LibraryOptionInfoDto *> newMetadataFetchers);
	void imageFetchersChanged(QList<LibraryOptionInfoDto *> newImageFetchers);
	void supportedImageTypesChanged(QList<ImageType> newSupportedImageTypes);
	void defaultImageOptionsChanged(QList<ImageOption *> newDefaultImageOptions);
protected:
	QString m_type;
	QList<LibraryOptionInfoDto *> m_metadataFetchers;
	QList<LibraryOptionInfoDto *> m_imageFetchers;
	QList<ImageType> m_supportedImageTypes;
	QList<ImageOption *> m_defaultImageOptions;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_LIBRARYTYPEOPTIONSDTO_H
