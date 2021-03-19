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

LibraryOptionsResultDto::LibraryOptionsResultDto(QObject *parent) : QObject(parent) {}

LibraryOptionsResultDto *LibraryOptionsResultDto::fromJSON(QJsonObject source, QObject *parent) {
	LibraryOptionsResultDto *instance = new LibraryOptionsResultDto(parent);
	instance->updateFromJSON(source);
	return instance;
}

void LibraryOptionsResultDto::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject LibraryOptionsResultDto::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QList<LibraryOptionInfoDto *> LibraryOptionsResultDto::metadataSavers() const { return m_metadataSavers; }
void LibraryOptionsResultDto::setMetadataSavers(QList<LibraryOptionInfoDto *> newMetadataSavers) {
	m_metadataSavers = newMetadataSavers;
	emit metadataSaversChanged(newMetadataSavers);
}

QList<LibraryOptionInfoDto *> LibraryOptionsResultDto::metadataReaders() const { return m_metadataReaders; }
void LibraryOptionsResultDto::setMetadataReaders(QList<LibraryOptionInfoDto *> newMetadataReaders) {
	m_metadataReaders = newMetadataReaders;
	emit metadataReadersChanged(newMetadataReaders);
}

QList<LibraryOptionInfoDto *> LibraryOptionsResultDto::subtitleFetchers() const { return m_subtitleFetchers; }
void LibraryOptionsResultDto::setSubtitleFetchers(QList<LibraryOptionInfoDto *> newSubtitleFetchers) {
	m_subtitleFetchers = newSubtitleFetchers;
	emit subtitleFetchersChanged(newSubtitleFetchers);
}

QList<LibraryTypeOptionsDto *> LibraryOptionsResultDto::typeOptions() const { return m_typeOptions; }
void LibraryOptionsResultDto::setTypeOptions(QList<LibraryTypeOptionsDto *> newTypeOptions) {
	m_typeOptions = newTypeOptions;
	emit typeOptionsChanged(newTypeOptions);
}


} // NS Jellyfin
} // NS DTO
