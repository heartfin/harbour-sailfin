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

#include <JellyfinQt/DTO/subtitleprofile.h>

namespace Jellyfin {
namespace DTO {

SubtitleProfile::SubtitleProfile() {}

SubtitleProfile SubtitleProfile::fromJson(QJsonObject source) {
	SubtitleProfile instance;
	instance.setFromJson(source);
	return instance;
}


void SubtitleProfile::setFromJson(QJsonObject source) {
	m_format = Jellyfin::Support::fromJsonValue<QString>(source["Format"]);
	m_method = Jellyfin::Support::fromJsonValue<SubtitleDeliveryMethod>(source["Method"]);
	m_didlMode = Jellyfin::Support::fromJsonValue<QString>(source["DidlMode"]);
	m_language = Jellyfin::Support::fromJsonValue<QString>(source["Language"]);
	m_container = Jellyfin::Support::fromJsonValue<QString>(source["Container"]);

}
	
QJsonObject SubtitleProfile::toJson() {
	QJsonObject result;
	result["Format"] = Jellyfin::Support::toJsonValue<QString>(m_format);
	result["Method"] = Jellyfin::Support::toJsonValue<SubtitleDeliveryMethod>(m_method);
	result["DidlMode"] = Jellyfin::Support::toJsonValue<QString>(m_didlMode);
	result["Language"] = Jellyfin::Support::toJsonValue<QString>(m_language);
	result["Container"] = Jellyfin::Support::toJsonValue<QString>(m_container);

	return result;
}

QString SubtitleProfile::format() const { return m_format; }

void SubtitleProfile::setFormat(QString newFormat) {
	m_format = newFormat;
}
SubtitleDeliveryMethod SubtitleProfile::method() const { return m_method; }

void SubtitleProfile::setMethod(SubtitleDeliveryMethod newMethod) {
	m_method = newMethod;
}
QString SubtitleProfile::didlMode() const { return m_didlMode; }

void SubtitleProfile::setDidlMode(QString newDidlMode) {
	m_didlMode = newDidlMode;
}
QString SubtitleProfile::language() const { return m_language; }

void SubtitleProfile::setLanguage(QString newLanguage) {
	m_language = newLanguage;
}
QString SubtitleProfile::container() const { return m_container; }

void SubtitleProfile::setContainer(QString newContainer) {
	m_container = newContainer;
}

} // NS DTO

namespace Support {

using SubtitleProfile = Jellyfin::DTO::SubtitleProfile;

template <>
SubtitleProfile fromJsonValue<SubtitleProfile>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return SubtitleProfile::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO
