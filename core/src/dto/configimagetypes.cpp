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

#include <JellyfinQt/dto/configimagetypes.h>

namespace Jellyfin {
namespace DTO {

ConfigImageTypes::ConfigImageTypes() {}

ConfigImageTypes::ConfigImageTypes(const ConfigImageTypes &other) :

	m_backdropSizes(other.m_backdropSizes),
	m_baseUrl(other.m_baseUrl),
	m_logoSizes(other.m_logoSizes),
	m_posterSizes(other.m_posterSizes),
	m_profileSizes(other.m_profileSizes),
	m_secureBaseUrl(other.m_secureBaseUrl),
	m_stillSizes(other.m_stillSizes){}


void ConfigImageTypes::replaceData(ConfigImageTypes &other) {
	m_backdropSizes = other.m_backdropSizes;
	m_baseUrl = other.m_baseUrl;
	m_logoSizes = other.m_logoSizes;
	m_posterSizes = other.m_posterSizes;
	m_profileSizes = other.m_profileSizes;
	m_secureBaseUrl = other.m_secureBaseUrl;
	m_stillSizes = other.m_stillSizes;
}

ConfigImageTypes ConfigImageTypes::fromJson(QJsonObject source) {
	ConfigImageTypes instance;
	instance.setFromJson(source);
	return instance;
}


void ConfigImageTypes::setFromJson(QJsonObject source) {
	m_backdropSizes = Jellyfin::Support::fromJsonValue<QStringList>(source["BackdropSizes"]);
	m_baseUrl = Jellyfin::Support::fromJsonValue<QString>(source["BaseUrl"]);
	m_logoSizes = Jellyfin::Support::fromJsonValue<QStringList>(source["LogoSizes"]);
	m_posterSizes = Jellyfin::Support::fromJsonValue<QStringList>(source["PosterSizes"]);
	m_profileSizes = Jellyfin::Support::fromJsonValue<QStringList>(source["ProfileSizes"]);
	m_secureBaseUrl = Jellyfin::Support::fromJsonValue<QString>(source["SecureBaseUrl"]);
	m_stillSizes = Jellyfin::Support::fromJsonValue<QStringList>(source["StillSizes"]);

}
	
QJsonObject ConfigImageTypes::toJson() const {
	QJsonObject result;
	
	
	if (!(m_backdropSizes.size() == 0)) {
		result["BackdropSizes"] = Jellyfin::Support::toJsonValue<QStringList>(m_backdropSizes);
	}
			
	
	if (!(m_baseUrl.isNull())) {
		result["BaseUrl"] = Jellyfin::Support::toJsonValue<QString>(m_baseUrl);
	}
			
	
	if (!(m_logoSizes.size() == 0)) {
		result["LogoSizes"] = Jellyfin::Support::toJsonValue<QStringList>(m_logoSizes);
	}
			
	
	if (!(m_posterSizes.size() == 0)) {
		result["PosterSizes"] = Jellyfin::Support::toJsonValue<QStringList>(m_posterSizes);
	}
			
	
	if (!(m_profileSizes.size() == 0)) {
		result["ProfileSizes"] = Jellyfin::Support::toJsonValue<QStringList>(m_profileSizes);
	}
			
	
	if (!(m_secureBaseUrl.isNull())) {
		result["SecureBaseUrl"] = Jellyfin::Support::toJsonValue<QString>(m_secureBaseUrl);
	}
			
	
	if (!(m_stillSizes.size() == 0)) {
		result["StillSizes"] = Jellyfin::Support::toJsonValue<QStringList>(m_stillSizes);
	}
		
	return result;
}

QStringList ConfigImageTypes::backdropSizes() const { return m_backdropSizes; }

void ConfigImageTypes::setBackdropSizes(QStringList newBackdropSizes) {
	m_backdropSizes = newBackdropSizes;
}
bool ConfigImageTypes::backdropSizesNull() const {
	return m_backdropSizes.size() == 0;
}

void ConfigImageTypes::setBackdropSizesNull() {
	m_backdropSizes.clear();

}
QString ConfigImageTypes::baseUrl() const { return m_baseUrl; }

void ConfigImageTypes::setBaseUrl(QString newBaseUrl) {
	m_baseUrl = newBaseUrl;
}
bool ConfigImageTypes::baseUrlNull() const {
	return m_baseUrl.isNull();
}

void ConfigImageTypes::setBaseUrlNull() {
	m_baseUrl.clear();

}
QStringList ConfigImageTypes::logoSizes() const { return m_logoSizes; }

void ConfigImageTypes::setLogoSizes(QStringList newLogoSizes) {
	m_logoSizes = newLogoSizes;
}
bool ConfigImageTypes::logoSizesNull() const {
	return m_logoSizes.size() == 0;
}

void ConfigImageTypes::setLogoSizesNull() {
	m_logoSizes.clear();

}
QStringList ConfigImageTypes::posterSizes() const { return m_posterSizes; }

void ConfigImageTypes::setPosterSizes(QStringList newPosterSizes) {
	m_posterSizes = newPosterSizes;
}
bool ConfigImageTypes::posterSizesNull() const {
	return m_posterSizes.size() == 0;
}

void ConfigImageTypes::setPosterSizesNull() {
	m_posterSizes.clear();

}
QStringList ConfigImageTypes::profileSizes() const { return m_profileSizes; }

void ConfigImageTypes::setProfileSizes(QStringList newProfileSizes) {
	m_profileSizes = newProfileSizes;
}
bool ConfigImageTypes::profileSizesNull() const {
	return m_profileSizes.size() == 0;
}

void ConfigImageTypes::setProfileSizesNull() {
	m_profileSizes.clear();

}
QString ConfigImageTypes::secureBaseUrl() const { return m_secureBaseUrl; }

void ConfigImageTypes::setSecureBaseUrl(QString newSecureBaseUrl) {
	m_secureBaseUrl = newSecureBaseUrl;
}
bool ConfigImageTypes::secureBaseUrlNull() const {
	return m_secureBaseUrl.isNull();
}

void ConfigImageTypes::setSecureBaseUrlNull() {
	m_secureBaseUrl.clear();

}
QStringList ConfigImageTypes::stillSizes() const { return m_stillSizes; }

void ConfigImageTypes::setStillSizes(QStringList newStillSizes) {
	m_stillSizes = newStillSizes;
}
bool ConfigImageTypes::stillSizesNull() const {
	return m_stillSizes.size() == 0;
}

void ConfigImageTypes::setStillSizesNull() {
	m_stillSizes.clear();

}

} // NS DTO

namespace Support {

using ConfigImageTypes = Jellyfin::DTO::ConfigImageTypes;

template <>
ConfigImageTypes fromJsonValue(const QJsonValue &source, convertType<ConfigImageTypes>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ConfigImageTypes::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ConfigImageTypes &source, convertType<ConfigImageTypes>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
