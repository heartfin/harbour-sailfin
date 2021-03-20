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

#include <JellyfinQt/DTO/librarytypeoptionsdto.h>

namespace Jellyfin {
namespace DTO {

LibraryTypeOptionsDto::LibraryTypeOptionsDto(QObject *parent) {}

LibraryTypeOptionsDto LibraryTypeOptionsDto::fromJson(QJsonObject source) {LibraryTypeOptionsDto instance;
	instance->setFromJson(source, false);
	return instance;
}


void LibraryTypeOptionsDto::setFromJson(QJsonObject source) {
	m_type = fromJsonValue<QString>(source["Type"]);
	m_metadataFetchers = fromJsonValue<QList<QSharedPointer<LibraryOptionInfoDto>>>(source["MetadataFetchers"]);
	m_imageFetchers = fromJsonValue<QList<QSharedPointer<LibraryOptionInfoDto>>>(source["ImageFetchers"]);
	m_supportedImageTypes = fromJsonValue<QList<ImageType>>(source["SupportedImageTypes"]);
	m_defaultImageOptions = fromJsonValue<QList<QSharedPointer<ImageOption>>>(source["DefaultImageOptions"]);

}
	
QJsonObject LibraryTypeOptionsDto::toJson() {
	QJsonObject result;
	result["Type"] = toJsonValue<QString>(m_type);
	result["MetadataFetchers"] = toJsonValue<QList<QSharedPointer<LibraryOptionInfoDto>>>(m_metadataFetchers);
	result["ImageFetchers"] = toJsonValue<QList<QSharedPointer<LibraryOptionInfoDto>>>(m_imageFetchers);
	result["SupportedImageTypes"] = toJsonValue<QList<ImageType>>(m_supportedImageTypes);
	result["DefaultImageOptions"] = toJsonValue<QList<QSharedPointer<ImageOption>>>(m_defaultImageOptions);

	return result;
}

QString LibraryTypeOptionsDto::type() const { return m_type; }

void LibraryTypeOptionsDto::setType(QString newType) {
	m_type = newType;
}
QList<QSharedPointer<LibraryOptionInfoDto>> LibraryTypeOptionsDto::metadataFetchers() const { return m_metadataFetchers; }

void LibraryTypeOptionsDto::setMetadataFetchers(QList<QSharedPointer<LibraryOptionInfoDto>> newMetadataFetchers) {
	m_metadataFetchers = newMetadataFetchers;
}
QList<QSharedPointer<LibraryOptionInfoDto>> LibraryTypeOptionsDto::imageFetchers() const { return m_imageFetchers; }

void LibraryTypeOptionsDto::setImageFetchers(QList<QSharedPointer<LibraryOptionInfoDto>> newImageFetchers) {
	m_imageFetchers = newImageFetchers;
}
QList<ImageType> LibraryTypeOptionsDto::supportedImageTypes() const { return m_supportedImageTypes; }

void LibraryTypeOptionsDto::setSupportedImageTypes(QList<ImageType> newSupportedImageTypes) {
	m_supportedImageTypes = newSupportedImageTypes;
}
QList<QSharedPointer<ImageOption>> LibraryTypeOptionsDto::defaultImageOptions() const { return m_defaultImageOptions; }

void LibraryTypeOptionsDto::setDefaultImageOptions(QList<QSharedPointer<ImageOption>> newDefaultImageOptions) {
	m_defaultImageOptions = newDefaultImageOptions;
}


} // NS Jellyfin
} // NS DTO
