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
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/imageoption.h"
#include "JellyfinQt/dto/imagetype.h"
#include "JellyfinQt/dto/libraryoptioninfodto.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class LibraryTypeOptionsDto {
public:
	LibraryTypeOptionsDto();
	LibraryTypeOptionsDto(const LibraryTypeOptionsDto &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(LibraryTypeOptionsDto &other);
	
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
	bool typeNull() const;
	void setTypeNull();

	/**
	 * @brief Gets or sets the metadata fetchers.
	 */
	QList<LibraryOptionInfoDto> metadataFetchers() const;
	/**
	* @brief Gets or sets the metadata fetchers.
	*/
	void setMetadataFetchers(QList<LibraryOptionInfoDto> newMetadataFetchers);
	bool metadataFetchersNull() const;
	void setMetadataFetchersNull();

	/**
	 * @brief Gets or sets the image fetchers.
	 */
	QList<LibraryOptionInfoDto> imageFetchers() const;
	/**
	* @brief Gets or sets the image fetchers.
	*/
	void setImageFetchers(QList<LibraryOptionInfoDto> newImageFetchers);
	bool imageFetchersNull() const;
	void setImageFetchersNull();

	/**
	 * @brief Gets or sets the supported image types.
	 */
	QList<ImageType> supportedImageTypes() const;
	/**
	* @brief Gets or sets the supported image types.
	*/
	void setSupportedImageTypes(QList<ImageType> newSupportedImageTypes);
	bool supportedImageTypesNull() const;
	void setSupportedImageTypesNull();

	/**
	 * @brief Gets or sets the default image options.
	 */
	QList<ImageOption> defaultImageOptions() const;
	/**
	* @brief Gets or sets the default image options.
	*/
	void setDefaultImageOptions(QList<ImageOption> newDefaultImageOptions);
	bool defaultImageOptionsNull() const;
	void setDefaultImageOptionsNull();


protected:
	QString m_type;
	QList<LibraryOptionInfoDto> m_metadataFetchers;
	QList<LibraryOptionInfoDto> m_imageFetchers;
	QList<ImageType> m_supportedImageTypes;
	QList<ImageOption> m_defaultImageOptions;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_LIBRARYTYPEOPTIONSDTO_H
