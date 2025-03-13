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

#include <JellyfinQt/dto/brandingoptions.h>

namespace Jellyfin {
namespace DTO {

BrandingOptions::BrandingOptions() {}
BrandingOptions::BrandingOptions (
		bool splashscreenEnabled 
		) :
	m_splashscreenEnabled(splashscreenEnabled) { }



BrandingOptions::BrandingOptions(const BrandingOptions &other) :

	m_loginDisclaimer(other.m_loginDisclaimer),
	m_customCss(other.m_customCss),
	m_splashscreenEnabled(other.m_splashscreenEnabled){}


void BrandingOptions::replaceData(BrandingOptions &other) {
	m_loginDisclaimer = other.m_loginDisclaimer;
	m_customCss = other.m_customCss;
	m_splashscreenEnabled = other.m_splashscreenEnabled;
}

BrandingOptions BrandingOptions::fromJson(QJsonObject source) {
	BrandingOptions instance;
	instance.setFromJson(source);
	return instance;
}


void BrandingOptions::setFromJson(QJsonObject source) {
	m_loginDisclaimer = Jellyfin::Support::fromJsonValue<QString>(source["LoginDisclaimer"]);
	m_customCss = Jellyfin::Support::fromJsonValue<QString>(source["CustomCss"]);
	m_splashscreenEnabled = Jellyfin::Support::fromJsonValue<bool>(source["SplashscreenEnabled"]);

}
	
QJsonObject BrandingOptions::toJson() const {
	QJsonObject result;
	
	
	if (!(m_loginDisclaimer.isNull())) {
		result["LoginDisclaimer"] = Jellyfin::Support::toJsonValue<QString>(m_loginDisclaimer);
	}
			
	
	if (!(m_customCss.isNull())) {
		result["CustomCss"] = Jellyfin::Support::toJsonValue<QString>(m_customCss);
	}
			
	result["SplashscreenEnabled"] = Jellyfin::Support::toJsonValue<bool>(m_splashscreenEnabled);	
	return result;
}

QString BrandingOptions::loginDisclaimer() const { return m_loginDisclaimer; }

void BrandingOptions::setLoginDisclaimer(QString newLoginDisclaimer) {
	m_loginDisclaimer = newLoginDisclaimer;
}
bool BrandingOptions::loginDisclaimerNull() const {
	return m_loginDisclaimer.isNull();
}

void BrandingOptions::setLoginDisclaimerNull() {
	m_loginDisclaimer.clear();

}
QString BrandingOptions::customCss() const { return m_customCss; }

void BrandingOptions::setCustomCss(QString newCustomCss) {
	m_customCss = newCustomCss;
}
bool BrandingOptions::customCssNull() const {
	return m_customCss.isNull();
}

void BrandingOptions::setCustomCssNull() {
	m_customCss.clear();

}
bool BrandingOptions::splashscreenEnabled() const { return m_splashscreenEnabled; }

void BrandingOptions::setSplashscreenEnabled(bool newSplashscreenEnabled) {
	m_splashscreenEnabled = newSplashscreenEnabled;
}


} // NS DTO

namespace Support {

using BrandingOptions = Jellyfin::DTO::BrandingOptions;

template <>
BrandingOptions fromJsonValue(const QJsonValue &source, convertType<BrandingOptions>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return BrandingOptions::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const BrandingOptions &source, convertType<BrandingOptions>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
