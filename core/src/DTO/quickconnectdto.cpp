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

#include <JellyfinQt/DTO/quickconnectdto.h>

namespace Jellyfin {
namespace DTO {

QuickConnectDto::QuickConnectDto() {}
QuickConnectDto::QuickConnectDto(const QuickConnectDto &other) :
	m_token(other.m_token){}

QuickConnectDto QuickConnectDto::fromJson(QJsonObject source) {
	QuickConnectDto instance;
	instance.setFromJson(source);
	return instance;
}


void QuickConnectDto::setFromJson(QJsonObject source) {
	m_token = Jellyfin::Support::fromJsonValue<QString>(source["Token"]);

}
	
QJsonObject QuickConnectDto::toJson() {
	QJsonObject result;
	result["Token"] = Jellyfin::Support::toJsonValue<QString>(m_token);

	return result;
}

QString QuickConnectDto::token() const { return m_token; }

void QuickConnectDto::setToken(QString newToken) {
	m_token = newToken;
}

} // NS DTO

namespace Support {

using QuickConnectDto = Jellyfin::DTO::QuickConnectDto;

template <>
QuickConnectDto fromJsonValue<QuickConnectDto>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return QuickConnectDto::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO
