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

#include <JellyfinQt/dto/startupconfigurationdto.h>

namespace Jellyfin {
namespace DTO {

StartupConfigurationDto::StartupConfigurationDto() {}

StartupConfigurationDto::StartupConfigurationDto(const StartupConfigurationDto &other) :

	m_uICulture(other.m_uICulture),
	m_metadataCountryCode(other.m_metadataCountryCode),
	m_preferredMetadataLanguage(other.m_preferredMetadataLanguage){}


void StartupConfigurationDto::replaceData(StartupConfigurationDto &other) {
	m_uICulture = other.m_uICulture;
	m_metadataCountryCode = other.m_metadataCountryCode;
	m_preferredMetadataLanguage = other.m_preferredMetadataLanguage;
}

StartupConfigurationDto StartupConfigurationDto::fromJson(QJsonObject source) {
	StartupConfigurationDto instance;
	instance.setFromJson(source);
	return instance;
}


void StartupConfigurationDto::setFromJson(QJsonObject source) {
	m_uICulture = Jellyfin::Support::fromJsonValue<QString>(source["UICulture"]);
	m_metadataCountryCode = Jellyfin::Support::fromJsonValue<QString>(source["MetadataCountryCode"]);
	m_preferredMetadataLanguage = Jellyfin::Support::fromJsonValue<QString>(source["PreferredMetadataLanguage"]);

}
	
QJsonObject StartupConfigurationDto::toJson() {
	QJsonObject result;
	result["UICulture"] = Jellyfin::Support::toJsonValue<QString>(m_uICulture);
	result["MetadataCountryCode"] = Jellyfin::Support::toJsonValue<QString>(m_metadataCountryCode);
	result["PreferredMetadataLanguage"] = Jellyfin::Support::toJsonValue<QString>(m_preferredMetadataLanguage);

	return result;
}

QString StartupConfigurationDto::uICulture() const { return m_uICulture; }

void StartupConfigurationDto::setUICulture(QString newUICulture) {
	m_uICulture = newUICulture;
}
bool StartupConfigurationDto::uICultureNull() const {
	return m_uICulture.isNull();
}

void StartupConfigurationDto::setUICultureNull() {
	m_uICulture.clear();

}
QString StartupConfigurationDto::metadataCountryCode() const { return m_metadataCountryCode; }

void StartupConfigurationDto::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
}
bool StartupConfigurationDto::metadataCountryCodeNull() const {
	return m_metadataCountryCode.isNull();
}

void StartupConfigurationDto::setMetadataCountryCodeNull() {
	m_metadataCountryCode.clear();

}
QString StartupConfigurationDto::preferredMetadataLanguage() const { return m_preferredMetadataLanguage; }

void StartupConfigurationDto::setPreferredMetadataLanguage(QString newPreferredMetadataLanguage) {
	m_preferredMetadataLanguage = newPreferredMetadataLanguage;
}
bool StartupConfigurationDto::preferredMetadataLanguageNull() const {
	return m_preferredMetadataLanguage.isNull();
}

void StartupConfigurationDto::setPreferredMetadataLanguageNull() {
	m_preferredMetadataLanguage.clear();

}

} // NS DTO

namespace Support {

using StartupConfigurationDto = Jellyfin::DTO::StartupConfigurationDto;

template <>
StartupConfigurationDto fromJsonValue<StartupConfigurationDto>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return StartupConfigurationDto::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
