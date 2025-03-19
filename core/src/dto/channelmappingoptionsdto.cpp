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

#include <JellyfinQt/dto/channelmappingoptionsdto.h>

namespace Jellyfin {
namespace DTO {

ChannelMappingOptionsDto::ChannelMappingOptionsDto() {}
ChannelMappingOptionsDto::ChannelMappingOptionsDto (
		QList<TunerChannelMapping> tunerChannels, 
		QList<NameIdPair> providerChannels, 
		QList<NameValuePair> mappings 
		) :
	m_tunerChannels(tunerChannels),
	m_providerChannels(providerChannels),
	m_mappings(mappings) { }



ChannelMappingOptionsDto::ChannelMappingOptionsDto(const ChannelMappingOptionsDto &other) :

	m_tunerChannels(other.m_tunerChannels),
	m_providerChannels(other.m_providerChannels),
	m_mappings(other.m_mappings),
	m_providerName(other.m_providerName){}


void ChannelMappingOptionsDto::replaceData(ChannelMappingOptionsDto &other) {
	m_tunerChannels = other.m_tunerChannels;
	m_providerChannels = other.m_providerChannels;
	m_mappings = other.m_mappings;
	m_providerName = other.m_providerName;
}

ChannelMappingOptionsDto ChannelMappingOptionsDto::fromJson(QJsonObject source) {
	ChannelMappingOptionsDto instance;
	instance.setFromJson(source);
	return instance;
}


void ChannelMappingOptionsDto::setFromJson(QJsonObject source) {
	m_tunerChannels = Jellyfin::Support::fromJsonValue<QList<TunerChannelMapping>>(source["TunerChannels"]);
	m_providerChannels = Jellyfin::Support::fromJsonValue<QList<NameIdPair>>(source["ProviderChannels"]);
	m_mappings = Jellyfin::Support::fromJsonValue<QList<NameValuePair>>(source["Mappings"]);
	m_providerName = Jellyfin::Support::fromJsonValue<QString>(source["ProviderName"]);

}
	
QJsonObject ChannelMappingOptionsDto::toJson() const {
	QJsonObject result;
	
	result["TunerChannels"] = Jellyfin::Support::toJsonValue<QList<TunerChannelMapping>>(m_tunerChannels);		
	result["ProviderChannels"] = Jellyfin::Support::toJsonValue<QList<NameIdPair>>(m_providerChannels);		
	result["Mappings"] = Jellyfin::Support::toJsonValue<QList<NameValuePair>>(m_mappings);		
	
	if (!(m_providerName.isNull())) {
		result["ProviderName"] = Jellyfin::Support::toJsonValue<QString>(m_providerName);
	}
		
	return result;
}

QList<TunerChannelMapping> ChannelMappingOptionsDto::tunerChannels() const { return m_tunerChannels; }

void ChannelMappingOptionsDto::setTunerChannels(QList<TunerChannelMapping> newTunerChannels) {
	m_tunerChannels = newTunerChannels;
}

QList<NameIdPair> ChannelMappingOptionsDto::providerChannels() const { return m_providerChannels; }

void ChannelMappingOptionsDto::setProviderChannels(QList<NameIdPair> newProviderChannels) {
	m_providerChannels = newProviderChannels;
}

QList<NameValuePair> ChannelMappingOptionsDto::mappings() const { return m_mappings; }

void ChannelMappingOptionsDto::setMappings(QList<NameValuePair> newMappings) {
	m_mappings = newMappings;
}

QString ChannelMappingOptionsDto::providerName() const { return m_providerName; }

void ChannelMappingOptionsDto::setProviderName(QString newProviderName) {
	m_providerName = newProviderName;
}
bool ChannelMappingOptionsDto::providerNameNull() const {
	return m_providerName.isNull();
}

void ChannelMappingOptionsDto::setProviderNameNull() {
	m_providerName.clear();

}

} // NS DTO

namespace Support {

using ChannelMappingOptionsDto = Jellyfin::DTO::ChannelMappingOptionsDto;

template <>
ChannelMappingOptionsDto fromJsonValue(const QJsonValue &source, convertType<ChannelMappingOptionsDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ChannelMappingOptionsDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ChannelMappingOptionsDto &source, convertType<ChannelMappingOptionsDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
