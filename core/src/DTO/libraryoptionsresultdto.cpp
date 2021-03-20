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

#include <JellyfinQt/DTO/libraryoptionsresultdto.h>

namespace Jellyfin {
namespace DTO {

LibraryOptionsResultDto::LibraryOptionsResultDto(QObject *parent) {}

LibraryOptionsResultDto LibraryOptionsResultDto::fromJson(QJsonObject source) {LibraryOptionsResultDto instance;
	instance->setFromJson(source, false);
	return instance;
}


void LibraryOptionsResultDto::setFromJson(QJsonObject source) {
	m_metadataSavers = fromJsonValue<QList<QSharedPointer<LibraryOptionInfoDto>>>(source["MetadataSavers"]);
	m_metadataReaders = fromJsonValue<QList<QSharedPointer<LibraryOptionInfoDto>>>(source["MetadataReaders"]);
	m_subtitleFetchers = fromJsonValue<QList<QSharedPointer<LibraryOptionInfoDto>>>(source["SubtitleFetchers"]);
	m_typeOptions = fromJsonValue<QList<QSharedPointer<LibraryTypeOptionsDto>>>(source["TypeOptions"]);

}
	
QJsonObject LibraryOptionsResultDto::toJson() {
	QJsonObject result;
	result["MetadataSavers"] = toJsonValue<QList<QSharedPointer<LibraryOptionInfoDto>>>(m_metadataSavers);
	result["MetadataReaders"] = toJsonValue<QList<QSharedPointer<LibraryOptionInfoDto>>>(m_metadataReaders);
	result["SubtitleFetchers"] = toJsonValue<QList<QSharedPointer<LibraryOptionInfoDto>>>(m_subtitleFetchers);
	result["TypeOptions"] = toJsonValue<QList<QSharedPointer<LibraryTypeOptionsDto>>>(m_typeOptions);

	return result;
}

QList<QSharedPointer<LibraryOptionInfoDto>> LibraryOptionsResultDto::metadataSavers() const { return m_metadataSavers; }

void LibraryOptionsResultDto::setMetadataSavers(QList<QSharedPointer<LibraryOptionInfoDto>> newMetadataSavers) {
	m_metadataSavers = newMetadataSavers;
}
QList<QSharedPointer<LibraryOptionInfoDto>> LibraryOptionsResultDto::metadataReaders() const { return m_metadataReaders; }

void LibraryOptionsResultDto::setMetadataReaders(QList<QSharedPointer<LibraryOptionInfoDto>> newMetadataReaders) {
	m_metadataReaders = newMetadataReaders;
}
QList<QSharedPointer<LibraryOptionInfoDto>> LibraryOptionsResultDto::subtitleFetchers() const { return m_subtitleFetchers; }

void LibraryOptionsResultDto::setSubtitleFetchers(QList<QSharedPointer<LibraryOptionInfoDto>> newSubtitleFetchers) {
	m_subtitleFetchers = newSubtitleFetchers;
}
QList<QSharedPointer<LibraryTypeOptionsDto>> LibraryOptionsResultDto::typeOptions() const { return m_typeOptions; }

void LibraryOptionsResultDto::setTypeOptions(QList<QSharedPointer<LibraryTypeOptionsDto>> newTypeOptions) {
	m_typeOptions = newTypeOptions;
}


} // NS Jellyfin
} // NS DTO
