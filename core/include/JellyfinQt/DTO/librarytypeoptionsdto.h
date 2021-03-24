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
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/DTO/imageoption.h"
#include "JellyfinQt/DTO/imagetype.h"
#include "JellyfinQt/DTO/libraryoptioninfodto.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class LibraryTypeOptionsDto {
public:LibraryTypeOptionsDto();LibraryTypeOptionsDto(const LibraryTypeOptionsDto &other);
	
	static LibraryTypeOptionsDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the type.
	 */
	QString type() const;
	/**
	* @brief Gets or sets the type.
	*/
	void setType(QString newType);
	/**
	 * @brief Gets or sets the metadata fetchers.
	 */
	QList<QSharedPointer<LibraryOptionInfoDto>> metadataFetchers() const;
	/**
	* @brief Gets or sets the metadata fetchers.
	*/
	void setMetadataFetchers(QList<QSharedPointer<LibraryOptionInfoDto>> newMetadataFetchers);
	/**
	 * @brief Gets or sets the image fetchers.
	 */
	QList<QSharedPointer<LibraryOptionInfoDto>> imageFetchers() const;
	/**
	* @brief Gets or sets the image fetchers.
	*/
	void setImageFetchers(QList<QSharedPointer<LibraryOptionInfoDto>> newImageFetchers);
	/**
	 * @brief Gets or sets the supported image types.
	 */
	QList<ImageType> supportedImageTypes() const;
	/**
	* @brief Gets or sets the supported image types.
	*/
	void setSupportedImageTypes(QList<ImageType> newSupportedImageTypes);
	/**
	 * @brief Gets or sets the default image options.
	 */
	QList<QSharedPointer<ImageOption>> defaultImageOptions() const;
	/**
	* @brief Gets or sets the default image options.
	*/
	void setDefaultImageOptions(QList<QSharedPointer<ImageOption>> newDefaultImageOptions);

protected:
	QString m_type;
	QList<QSharedPointer<LibraryOptionInfoDto>> m_metadataFetchers;
	QList<QSharedPointer<LibraryOptionInfoDto>> m_imageFetchers;
	QList<ImageType> m_supportedImageTypes;
	QList<QSharedPointer<ImageOption>> m_defaultImageOptions;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_LIBRARYTYPEOPTIONSDTO_H
