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

#include <JellyfinQt/DTO/endpointinfo.h>

namespace Jellyfin {
namespace DTO {

EndPointInfo::EndPointInfo(QObject *parent) {}

EndPointInfo EndPointInfo::fromJson(QJsonObject source) {EndPointInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void EndPointInfo::setFromJson(QJsonObject source) {
	m_isLocal = fromJsonValue<bool>(source["IsLocal"]);
	m_isInNetwork = fromJsonValue<bool>(source["IsInNetwork"]);

}
	
QJsonObject EndPointInfo::toJson() {
	QJsonObject result;
	result["IsLocal"] = toJsonValue<bool>(m_isLocal);
	result["IsInNetwork"] = toJsonValue<bool>(m_isInNetwork);

	return result;
}

bool EndPointInfo::isLocal() const { return m_isLocal; }

void EndPointInfo::setIsLocal(bool newIsLocal) {
	m_isLocal = newIsLocal;
}
bool EndPointInfo::isInNetwork() const { return m_isInNetwork; }

void EndPointInfo::setIsInNetwork(bool newIsInNetwork) {
	m_isInNetwork = newIsInNetwork;
}


} // NS Jellyfin
} // NS DTO
