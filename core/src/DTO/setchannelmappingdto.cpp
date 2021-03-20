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

#include <JellyfinQt/DTO/setchannelmappingdto.h>

namespace Jellyfin {
namespace DTO {

SetChannelMappingDto::SetChannelMappingDto(QObject *parent) {}

SetChannelMappingDto SetChannelMappingDto::fromJson(QJsonObject source) {SetChannelMappingDto instance;
	instance->setFromJson(source, false);
	return instance;
}


void SetChannelMappingDto::setFromJson(QJsonObject source) {
	m_providerId = fromJsonValue<QString>(source["ProviderId"]);
	m_tunerChannelId = fromJsonValue<QString>(source["TunerChannelId"]);
	m_providerChannelId = fromJsonValue<QString>(source["ProviderChannelId"]);

}
	
QJsonObject SetChannelMappingDto::toJson() {
	QJsonObject result;
	result["ProviderId"] = toJsonValue<QString>(m_providerId);
	result["TunerChannelId"] = toJsonValue<QString>(m_tunerChannelId);
	result["ProviderChannelId"] = toJsonValue<QString>(m_providerChannelId);

	return result;
}

QString SetChannelMappingDto::providerId() const { return m_providerId; }

void SetChannelMappingDto::setProviderId(QString newProviderId) {
	m_providerId = newProviderId;
}
QString SetChannelMappingDto::tunerChannelId() const { return m_tunerChannelId; }

void SetChannelMappingDto::setTunerChannelId(QString newTunerChannelId) {
	m_tunerChannelId = newTunerChannelId;
}
QString SetChannelMappingDto::providerChannelId() const { return m_providerChannelId; }

void SetChannelMappingDto::setProviderChannelId(QString newProviderChannelId) {
	m_providerChannelId = newProviderChannelId;
}


} // NS Jellyfin
} // NS DTO
