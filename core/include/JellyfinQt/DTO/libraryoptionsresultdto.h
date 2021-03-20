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

#ifndef JELLYFIN_DTO_LIBRARYOPTIONSRESULTDTO_H
#define JELLYFIN_DTO_LIBRARYOPTIONSRESULTDTO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QStringList>
#include <optional>

#include "JellyfinQt/DTO/libraryoptioninfodto.h"
#include "JellyfinQt/DTO/librarytypeoptionsdto.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class LibraryOptionsResultDto {
public:
	explicit LibraryOptionsResultDto();
	static LibraryOptionsResultDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the metadata savers.
	 */
	QList<QSharedPointer<LibraryOptionInfoDto>> metadataSavers() const;
	/**
	* @brief Gets or sets the metadata savers.
	*/
	void setMetadataSavers(QList<QSharedPointer<LibraryOptionInfoDto>> newMetadataSavers);
	/**
	 * @brief Gets or sets the metadata readers.
	 */
	QList<QSharedPointer<LibraryOptionInfoDto>> metadataReaders() const;
	/**
	* @brief Gets or sets the metadata readers.
	*/
	void setMetadataReaders(QList<QSharedPointer<LibraryOptionInfoDto>> newMetadataReaders);
	/**
	 * @brief Gets or sets the subtitle fetchers.
	 */
	QList<QSharedPointer<LibraryOptionInfoDto>> subtitleFetchers() const;
	/**
	* @brief Gets or sets the subtitle fetchers.
	*/
	void setSubtitleFetchers(QList<QSharedPointer<LibraryOptionInfoDto>> newSubtitleFetchers);
	/**
	 * @brief Gets or sets the type options.
	 */
	QList<QSharedPointer<LibraryTypeOptionsDto>> typeOptions() const;
	/**
	* @brief Gets or sets the type options.
	*/
	void setTypeOptions(QList<QSharedPointer<LibraryTypeOptionsDto>> newTypeOptions);

protected:
	QList<QSharedPointer<LibraryOptionInfoDto>> m_metadataSavers;
	QList<QSharedPointer<LibraryOptionInfoDto>> m_metadataReaders;
	QList<QSharedPointer<LibraryOptionInfoDto>> m_subtitleFetchers;
	QList<QSharedPointer<LibraryTypeOptionsDto>> m_typeOptions;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_LIBRARYOPTIONSRESULTDTO_H
