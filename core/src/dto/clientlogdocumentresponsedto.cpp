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

#include <JellyfinQt/dto/clientlogdocumentresponsedto.h>

namespace Jellyfin {
namespace DTO {

ClientLogDocumentResponseDto::ClientLogDocumentResponseDto() {}
ClientLogDocumentResponseDto::ClientLogDocumentResponseDto (
		QString fileName 
		) :
	m_fileName(fileName) { }



ClientLogDocumentResponseDto::ClientLogDocumentResponseDto(const ClientLogDocumentResponseDto &other) :

	m_fileName(other.m_fileName){}


void ClientLogDocumentResponseDto::replaceData(ClientLogDocumentResponseDto &other) {
	m_fileName = other.m_fileName;
}

ClientLogDocumentResponseDto ClientLogDocumentResponseDto::fromJson(QJsonObject source) {
	ClientLogDocumentResponseDto instance;
	instance.setFromJson(source);
	return instance;
}


void ClientLogDocumentResponseDto::setFromJson(QJsonObject source) {
	m_fileName = Jellyfin::Support::fromJsonValue<QString>(source["FileName"]);

}
	
QJsonObject ClientLogDocumentResponseDto::toJson() const {
	QJsonObject result;
	
	result["FileName"] = Jellyfin::Support::toJsonValue<QString>(m_fileName);	
	return result;
}

QString ClientLogDocumentResponseDto::fileName() const { return m_fileName; }

void ClientLogDocumentResponseDto::setFileName(QString newFileName) {
	m_fileName = newFileName;
}


} // NS DTO

namespace Support {

using ClientLogDocumentResponseDto = Jellyfin::DTO::ClientLogDocumentResponseDto;

template <>
ClientLogDocumentResponseDto fromJsonValue(const QJsonValue &source, convertType<ClientLogDocumentResponseDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ClientLogDocumentResponseDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ClientLogDocumentResponseDto &source, convertType<ClientLogDocumentResponseDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
