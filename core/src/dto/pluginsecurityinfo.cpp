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

#include <JellyfinQt/dto/pluginsecurityinfo.h>

namespace Jellyfin {
namespace DTO {

PluginSecurityInfo::PluginSecurityInfo() {}

PluginSecurityInfo::PluginSecurityInfo(const PluginSecurityInfo &other) :

	m_supporterKey(other.m_supporterKey),
	m_isMbSupporter(other.m_isMbSupporter){}


void PluginSecurityInfo::replaceData(PluginSecurityInfo &other) {
	m_supporterKey = other.m_supporterKey;
	m_isMbSupporter = other.m_isMbSupporter;
}

PluginSecurityInfo PluginSecurityInfo::fromJson(QJsonObject source) {
	PluginSecurityInfo instance;
	instance.setFromJson(source);
	return instance;
}


void PluginSecurityInfo::setFromJson(QJsonObject source) {
	m_supporterKey = Jellyfin::Support::fromJsonValue<QString>(source["SupporterKey"]);
	m_isMbSupporter = Jellyfin::Support::fromJsonValue<bool>(source["IsMbSupporter"]);

}
	
QJsonObject PluginSecurityInfo::toJson() const {
	QJsonObject result;
	
	
	if (!(m_supporterKey.isNull())) {
		result["SupporterKey"] = Jellyfin::Support::toJsonValue<QString>(m_supporterKey);
	}
			
	result["IsMbSupporter"] = Jellyfin::Support::toJsonValue<bool>(m_isMbSupporter);	
	return result;
}

QString PluginSecurityInfo::supporterKey() const { return m_supporterKey; }

void PluginSecurityInfo::setSupporterKey(QString newSupporterKey) {
	m_supporterKey = newSupporterKey;
}
bool PluginSecurityInfo::supporterKeyNull() const {
	return m_supporterKey.isNull();
}

void PluginSecurityInfo::setSupporterKeyNull() {
	m_supporterKey.clear();

}
bool PluginSecurityInfo::isMbSupporter() const { return m_isMbSupporter; }

void PluginSecurityInfo::setIsMbSupporter(bool newIsMbSupporter) {
	m_isMbSupporter = newIsMbSupporter;
}


} // NS DTO

namespace Support {

using PluginSecurityInfo = Jellyfin::DTO::PluginSecurityInfo;

template <>
PluginSecurityInfo fromJsonValue(const QJsonValue &source, convertType<PluginSecurityInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return PluginSecurityInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const PluginSecurityInfo &source, convertType<PluginSecurityInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
