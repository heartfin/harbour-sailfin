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

#include <JellyfinQt/dto/librarytypeoptionsdto.h>

namespace Jellyfin {
namespace DTO {

LibraryTypeOptionsDto::LibraryTypeOptionsDto() {}
LibraryTypeOptionsDto::LibraryTypeOptionsDto (
		QList<LibraryOptionInfoDto> metadataFetchers, 
		QList<LibraryOptionInfoDto> imageFetchers, 
		QList<ImageType> supportedImageTypes, 
		QList<ImageOption> defaultImageOptions 
		) :
	m_metadataFetchers(metadataFetchers),
	m_imageFetchers(imageFetchers),
	m_supportedImageTypes(supportedImageTypes),
	m_defaultImageOptions(defaultImageOptions) { }



LibraryTypeOptionsDto::LibraryTypeOptionsDto(const LibraryTypeOptionsDto &other) :

	m_type(other.m_type),
	m_metadataFetchers(other.m_metadataFetchers),
	m_imageFetchers(other.m_imageFetchers),
	m_supportedImageTypes(other.m_supportedImageTypes),
	m_defaultImageOptions(other.m_defaultImageOptions){}


void LibraryTypeOptionsDto::replaceData(LibraryTypeOptionsDto &other) {
	m_type = other.m_type;
	m_metadataFetchers = other.m_metadataFetchers;
	m_imageFetchers = other.m_imageFetchers;
	m_supportedImageTypes = other.m_supportedImageTypes;
	m_defaultImageOptions = other.m_defaultImageOptions;
}

LibraryTypeOptionsDto LibraryTypeOptionsDto::fromJson(QJsonObject source) {
	LibraryTypeOptionsDto instance;
	instance.setFromJson(source);
	return instance;
}


void LibraryTypeOptionsDto::setFromJson(QJsonObject source) {
	m_type = Jellyfin::Support::fromJsonValue<QString>(source["Type"]);
	m_metadataFetchers = Jellyfin::Support::fromJsonValue<QList<LibraryOptionInfoDto>>(source["MetadataFetchers"]);
	m_imageFetchers = Jellyfin::Support::fromJsonValue<QList<LibraryOptionInfoDto>>(source["ImageFetchers"]);
	m_supportedImageTypes = Jellyfin::Support::fromJsonValue<QList<ImageType>>(source["SupportedImageTypes"]);
	m_defaultImageOptions = Jellyfin::Support::fromJsonValue<QList<ImageOption>>(source["DefaultImageOptions"]);

}
	
QJsonObject LibraryTypeOptionsDto::toJson() const {
	QJsonObject result;
	
	
	if (!(m_type.isNull())) {
		result["Type"] = Jellyfin::Support::toJsonValue<QString>(m_type);
	}
			
	result["MetadataFetchers"] = Jellyfin::Support::toJsonValue<QList<LibraryOptionInfoDto>>(m_metadataFetchers);		
	result["ImageFetchers"] = Jellyfin::Support::toJsonValue<QList<LibraryOptionInfoDto>>(m_imageFetchers);		
	result["SupportedImageTypes"] = Jellyfin::Support::toJsonValue<QList<ImageType>>(m_supportedImageTypes);		
	result["DefaultImageOptions"] = Jellyfin::Support::toJsonValue<QList<ImageOption>>(m_defaultImageOptions);	
	return result;
}

QString LibraryTypeOptionsDto::type() const { return m_type; }

void LibraryTypeOptionsDto::setType(QString newType) {
	m_type = newType;
}
bool LibraryTypeOptionsDto::typeNull() const {
	return m_type.isNull();
}

void LibraryTypeOptionsDto::setTypeNull() {
	m_type.clear();

}
QList<LibraryOptionInfoDto> LibraryTypeOptionsDto::metadataFetchers() const { return m_metadataFetchers; }

void LibraryTypeOptionsDto::setMetadataFetchers(QList<LibraryOptionInfoDto> newMetadataFetchers) {
	m_metadataFetchers = newMetadataFetchers;
}

QList<LibraryOptionInfoDto> LibraryTypeOptionsDto::imageFetchers() const { return m_imageFetchers; }

void LibraryTypeOptionsDto::setImageFetchers(QList<LibraryOptionInfoDto> newImageFetchers) {
	m_imageFetchers = newImageFetchers;
}

QList<ImageType> LibraryTypeOptionsDto::supportedImageTypes() const { return m_supportedImageTypes; }

void LibraryTypeOptionsDto::setSupportedImageTypes(QList<ImageType> newSupportedImageTypes) {
	m_supportedImageTypes = newSupportedImageTypes;
}

QList<ImageOption> LibraryTypeOptionsDto::defaultImageOptions() const { return m_defaultImageOptions; }

void LibraryTypeOptionsDto::setDefaultImageOptions(QList<ImageOption> newDefaultImageOptions) {
	m_defaultImageOptions = newDefaultImageOptions;
}


} // NS DTO

namespace Support {

using LibraryTypeOptionsDto = Jellyfin::DTO::LibraryTypeOptionsDto;

template <>
LibraryTypeOptionsDto fromJsonValue(const QJsonValue &source, convertType<LibraryTypeOptionsDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return LibraryTypeOptionsDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const LibraryTypeOptionsDto &source, convertType<LibraryTypeOptionsDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
