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

#include <JellyfinQt/dto/updatelibraryoptionsdto.h>

namespace Jellyfin {
namespace DTO {

UpdateLibraryOptionsDto::UpdateLibraryOptionsDto() {}
UpdateLibraryOptionsDto::UpdateLibraryOptionsDto (
		QString jellyfinId, 
		QSharedPointer<LibraryOptions> libraryOptions 
		) :
	m_jellyfinId(jellyfinId),
	m_libraryOptions(libraryOptions) { }



UpdateLibraryOptionsDto::UpdateLibraryOptionsDto(const UpdateLibraryOptionsDto &other) :

	m_jellyfinId(other.m_jellyfinId),
	m_libraryOptions(other.m_libraryOptions){}


void UpdateLibraryOptionsDto::replaceData(UpdateLibraryOptionsDto &other) {
	m_jellyfinId = other.m_jellyfinId;
	m_libraryOptions = other.m_libraryOptions;
}

UpdateLibraryOptionsDto UpdateLibraryOptionsDto::fromJson(QJsonObject source) {
	UpdateLibraryOptionsDto instance;
	instance.setFromJson(source);
	return instance;
}


void UpdateLibraryOptionsDto::setFromJson(QJsonObject source) {
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_libraryOptions = Jellyfin::Support::fromJsonValue<QSharedPointer<LibraryOptions>>(source["LibraryOptions"]);

}
	
QJsonObject UpdateLibraryOptionsDto::toJson() const {
	QJsonObject result;
	
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);		
	result["LibraryOptions"] = Jellyfin::Support::toJsonValue<QSharedPointer<LibraryOptions>>(m_libraryOptions);	
	return result;
}

QString UpdateLibraryOptionsDto::jellyfinId() const { return m_jellyfinId; }

void UpdateLibraryOptionsDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}

QSharedPointer<LibraryOptions> UpdateLibraryOptionsDto::libraryOptions() const { return m_libraryOptions; }

void UpdateLibraryOptionsDto::setLibraryOptions(QSharedPointer<LibraryOptions> newLibraryOptions) {
	m_libraryOptions = newLibraryOptions;
}


} // NS DTO

namespace Support {

using UpdateLibraryOptionsDto = Jellyfin::DTO::UpdateLibraryOptionsDto;

template <>
UpdateLibraryOptionsDto fromJsonValue(const QJsonValue &source, convertType<UpdateLibraryOptionsDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return UpdateLibraryOptionsDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const UpdateLibraryOptionsDto &source, convertType<UpdateLibraryOptionsDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
