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

#include <JellyfinQt/dto/tunerchannelmapping.h>

namespace Jellyfin {
namespace DTO {

TunerChannelMapping::TunerChannelMapping() {}

TunerChannelMapping::TunerChannelMapping(const TunerChannelMapping &other) :

	m_name(other.m_name),
	m_providerChannelName(other.m_providerChannelName),
	m_providerChannelId(other.m_providerChannelId),
	m_jellyfinId(other.m_jellyfinId){}


void TunerChannelMapping::replaceData(TunerChannelMapping &other) {
	m_name = other.m_name;
	m_providerChannelName = other.m_providerChannelName;
	m_providerChannelId = other.m_providerChannelId;
	m_jellyfinId = other.m_jellyfinId;
}

TunerChannelMapping TunerChannelMapping::fromJson(QJsonObject source) {
	TunerChannelMapping instance;
	instance.setFromJson(source);
	return instance;
}


void TunerChannelMapping::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_providerChannelName = Jellyfin::Support::fromJsonValue<QString>(source["ProviderChannelName"]);
	m_providerChannelId = Jellyfin::Support::fromJsonValue<QString>(source["ProviderChannelId"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);

}
	
QJsonObject TunerChannelMapping::toJson() const {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["ProviderChannelName"] = Jellyfin::Support::toJsonValue<QString>(m_providerChannelName);
	result["ProviderChannelId"] = Jellyfin::Support::toJsonValue<QString>(m_providerChannelId);
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);

	return result;
}

QString TunerChannelMapping::name() const { return m_name; }

void TunerChannelMapping::setName(QString newName) {
	m_name = newName;
}
bool TunerChannelMapping::nameNull() const {
	return m_name.isNull();
}

void TunerChannelMapping::setNameNull() {
	m_name.clear();

}
QString TunerChannelMapping::providerChannelName() const { return m_providerChannelName; }

void TunerChannelMapping::setProviderChannelName(QString newProviderChannelName) {
	m_providerChannelName = newProviderChannelName;
}
bool TunerChannelMapping::providerChannelNameNull() const {
	return m_providerChannelName.isNull();
}

void TunerChannelMapping::setProviderChannelNameNull() {
	m_providerChannelName.clear();

}
QString TunerChannelMapping::providerChannelId() const { return m_providerChannelId; }

void TunerChannelMapping::setProviderChannelId(QString newProviderChannelId) {
	m_providerChannelId = newProviderChannelId;
}
bool TunerChannelMapping::providerChannelIdNull() const {
	return m_providerChannelId.isNull();
}

void TunerChannelMapping::setProviderChannelIdNull() {
	m_providerChannelId.clear();

}
QString TunerChannelMapping::jellyfinId() const { return m_jellyfinId; }

void TunerChannelMapping::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool TunerChannelMapping::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void TunerChannelMapping::setJellyfinIdNull() {
	m_jellyfinId.clear();

}

} // NS DTO

namespace Support {

using TunerChannelMapping = Jellyfin::DTO::TunerChannelMapping;

template <>
TunerChannelMapping fromJsonValue(const QJsonValue &source, convertType<TunerChannelMapping>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return TunerChannelMapping::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const TunerChannelMapping &source, convertType<TunerChannelMapping>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
