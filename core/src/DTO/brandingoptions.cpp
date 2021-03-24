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

#include <JellyfinQt/DTO/brandingoptions.h>

namespace Jellyfin {
namespace DTO {

BrandingOptions::BrandingOptions() {}
BrandingOptions::BrandingOptions(const BrandingOptions &other) :
	m_loginDisclaimer(other.m_loginDisclaimer),
	m_customCss(other.m_customCss){}

BrandingOptions BrandingOptions::fromJson(QJsonObject source) {
	BrandingOptions instance;
	instance.setFromJson(source);
	return instance;
}


void BrandingOptions::setFromJson(QJsonObject source) {
	m_loginDisclaimer = Jellyfin::Support::fromJsonValue<QString>(source["LoginDisclaimer"]);
	m_customCss = Jellyfin::Support::fromJsonValue<QString>(source["CustomCss"]);

}
	
QJsonObject BrandingOptions::toJson() {
	QJsonObject result;
	result["LoginDisclaimer"] = Jellyfin::Support::toJsonValue<QString>(m_loginDisclaimer);
	result["CustomCss"] = Jellyfin::Support::toJsonValue<QString>(m_customCss);

	return result;
}

QString BrandingOptions::loginDisclaimer() const { return m_loginDisclaimer; }

void BrandingOptions::setLoginDisclaimer(QString newLoginDisclaimer) {
	m_loginDisclaimer = newLoginDisclaimer;
}
QString BrandingOptions::customCss() const { return m_customCss; }

void BrandingOptions::setCustomCss(QString newCustomCss) {
	m_customCss = newCustomCss;
}

} // NS DTO

namespace Support {

using BrandingOptions = Jellyfin::DTO::BrandingOptions;

template <>
BrandingOptions fromJsonValue<BrandingOptions>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return BrandingOptions::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO
