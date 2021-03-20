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

#include <JellyfinQt/DTO/updatelibraryoptionsdto.h>

namespace Jellyfin {
namespace DTO {

UpdateLibraryOptionsDto::UpdateLibraryOptionsDto(QObject *parent) {}

UpdateLibraryOptionsDto UpdateLibraryOptionsDto::fromJson(QJsonObject source) {UpdateLibraryOptionsDto instance;
	instance->setFromJson(source, false);
	return instance;
}


void UpdateLibraryOptionsDto::setFromJson(QJsonObject source) {
	m_jellyfinId = fromJsonValue<QUuid>(source["Id"]);
	m_libraryOptions = fromJsonValue<QSharedPointer<LibraryOptions>>(source["LibraryOptions"]);

}
	
QJsonObject UpdateLibraryOptionsDto::toJson() {
	QJsonObject result;
	result["Id"] = toJsonValue<QUuid>(m_jellyfinId);
	result["LibraryOptions"] = toJsonValue<QSharedPointer<LibraryOptions>>(m_libraryOptions);

	return result;
}

QUuid UpdateLibraryOptionsDto::jellyfinId() const { return m_jellyfinId; }

void UpdateLibraryOptionsDto::setJellyfinId(QUuid newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
QSharedPointer<LibraryOptions> UpdateLibraryOptionsDto::libraryOptions() const { return m_libraryOptions; }

void UpdateLibraryOptionsDto::setLibraryOptions(QSharedPointer<LibraryOptions> newLibraryOptions) {
	m_libraryOptions = newLibraryOptions;
}


} // NS Jellyfin
} // NS DTO
