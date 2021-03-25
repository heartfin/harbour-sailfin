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

#include <JellyfinQt/dto/libraryoptionsresultdto.h>

namespace Jellyfin {
namespace DTO {

LibraryOptionsResultDto::LibraryOptionsResultDto() {}

LibraryOptionsResultDto::LibraryOptionsResultDto(const LibraryOptionsResultDto &other) :

	m_metadataSavers(other.m_metadataSavers),
	m_metadataReaders(other.m_metadataReaders),
	m_subtitleFetchers(other.m_subtitleFetchers),
	m_typeOptions(other.m_typeOptions){}


void LibraryOptionsResultDto::replaceData(LibraryOptionsResultDto &other) {
	m_metadataSavers = other.m_metadataSavers;
	m_metadataReaders = other.m_metadataReaders;
	m_subtitleFetchers = other.m_subtitleFetchers;
	m_typeOptions = other.m_typeOptions;
}

LibraryOptionsResultDto LibraryOptionsResultDto::fromJson(QJsonObject source) {
	LibraryOptionsResultDto instance;
	instance.setFromJson(source);
	return instance;
}


void LibraryOptionsResultDto::setFromJson(QJsonObject source) {
	m_metadataSavers = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<LibraryOptionInfoDto>>>(source["MetadataSavers"]);
	m_metadataReaders = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<LibraryOptionInfoDto>>>(source["MetadataReaders"]);
	m_subtitleFetchers = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<LibraryOptionInfoDto>>>(source["SubtitleFetchers"]);
	m_typeOptions = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<LibraryTypeOptionsDto>>>(source["TypeOptions"]);

}
	
QJsonObject LibraryOptionsResultDto::toJson() {
	QJsonObject result;
	result["MetadataSavers"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<LibraryOptionInfoDto>>>(m_metadataSavers);
	result["MetadataReaders"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<LibraryOptionInfoDto>>>(m_metadataReaders);
	result["SubtitleFetchers"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<LibraryOptionInfoDto>>>(m_subtitleFetchers);
	result["TypeOptions"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<LibraryTypeOptionsDto>>>(m_typeOptions);

	return result;
}

QList<QSharedPointer<LibraryOptionInfoDto>> LibraryOptionsResultDto::metadataSavers() const { return m_metadataSavers; }

void LibraryOptionsResultDto::setMetadataSavers(QList<QSharedPointer<LibraryOptionInfoDto>> newMetadataSavers) {
	m_metadataSavers = newMetadataSavers;
}
bool LibraryOptionsResultDto::metadataSaversNull() const {
	return m_metadataSavers.size() == 0;
}

void LibraryOptionsResultDto::setMetadataSaversNull() {
	m_metadataSavers.clear();

}
QList<QSharedPointer<LibraryOptionInfoDto>> LibraryOptionsResultDto::metadataReaders() const { return m_metadataReaders; }

void LibraryOptionsResultDto::setMetadataReaders(QList<QSharedPointer<LibraryOptionInfoDto>> newMetadataReaders) {
	m_metadataReaders = newMetadataReaders;
}
bool LibraryOptionsResultDto::metadataReadersNull() const {
	return m_metadataReaders.size() == 0;
}

void LibraryOptionsResultDto::setMetadataReadersNull() {
	m_metadataReaders.clear();

}
QList<QSharedPointer<LibraryOptionInfoDto>> LibraryOptionsResultDto::subtitleFetchers() const { return m_subtitleFetchers; }

void LibraryOptionsResultDto::setSubtitleFetchers(QList<QSharedPointer<LibraryOptionInfoDto>> newSubtitleFetchers) {
	m_subtitleFetchers = newSubtitleFetchers;
}
bool LibraryOptionsResultDto::subtitleFetchersNull() const {
	return m_subtitleFetchers.size() == 0;
}

void LibraryOptionsResultDto::setSubtitleFetchersNull() {
	m_subtitleFetchers.clear();

}
QList<QSharedPointer<LibraryTypeOptionsDto>> LibraryOptionsResultDto::typeOptions() const { return m_typeOptions; }

void LibraryOptionsResultDto::setTypeOptions(QList<QSharedPointer<LibraryTypeOptionsDto>> newTypeOptions) {
	m_typeOptions = newTypeOptions;
}
bool LibraryOptionsResultDto::typeOptionsNull() const {
	return m_typeOptions.size() == 0;
}

void LibraryOptionsResultDto::setTypeOptionsNull() {
	m_typeOptions.clear();

}

} // NS DTO

namespace Support {

using LibraryOptionsResultDto = Jellyfin::DTO::LibraryOptionsResultDto;

template <>
LibraryOptionsResultDto fromJsonValue<LibraryOptionsResultDto>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return LibraryOptionsResultDto::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin