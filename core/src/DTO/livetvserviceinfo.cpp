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

#include <JellyfinQt/DTO/livetvserviceinfo.h>

namespace Jellyfin {
namespace DTO {

LiveTvServiceInfo::LiveTvServiceInfo() {}
LiveTvServiceInfo::LiveTvServiceInfo(const LiveTvServiceInfo &other) :
	m_name(other.m_name),
	m_homePageUrl(other.m_homePageUrl),
	m_status(other.m_status),
	m_statusMessage(other.m_statusMessage),
	m_version(other.m_version),
	m_hasUpdateAvailable(other.m_hasUpdateAvailable),
	m_isVisible(other.m_isVisible),
	m_tuners(other.m_tuners){}

LiveTvServiceInfo LiveTvServiceInfo::fromJson(QJsonObject source) {
	LiveTvServiceInfo instance;
	instance.setFromJson(source);
	return instance;
}


void LiveTvServiceInfo::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_homePageUrl = Jellyfin::Support::fromJsonValue<QString>(source["HomePageUrl"]);
	m_status = Jellyfin::Support::fromJsonValue<LiveTvServiceStatus>(source["Status"]);
	m_statusMessage = Jellyfin::Support::fromJsonValue<QString>(source["StatusMessage"]);
	m_version = Jellyfin::Support::fromJsonValue<QString>(source["Version"]);
	m_hasUpdateAvailable = Jellyfin::Support::fromJsonValue<bool>(source["HasUpdateAvailable"]);
	m_isVisible = Jellyfin::Support::fromJsonValue<bool>(source["IsVisible"]);
	m_tuners = Jellyfin::Support::fromJsonValue<QStringList>(source["Tuners"]);

}
	
QJsonObject LiveTvServiceInfo::toJson() {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["HomePageUrl"] = Jellyfin::Support::toJsonValue<QString>(m_homePageUrl);
	result["Status"] = Jellyfin::Support::toJsonValue<LiveTvServiceStatus>(m_status);
	result["StatusMessage"] = Jellyfin::Support::toJsonValue<QString>(m_statusMessage);
	result["Version"] = Jellyfin::Support::toJsonValue<QString>(m_version);
	result["HasUpdateAvailable"] = Jellyfin::Support::toJsonValue<bool>(m_hasUpdateAvailable);
	result["IsVisible"] = Jellyfin::Support::toJsonValue<bool>(m_isVisible);
	result["Tuners"] = Jellyfin::Support::toJsonValue<QStringList>(m_tuners);

	return result;
}

QString LiveTvServiceInfo::name() const { return m_name; }

void LiveTvServiceInfo::setName(QString newName) {
	m_name = newName;
}
QString LiveTvServiceInfo::homePageUrl() const { return m_homePageUrl; }

void LiveTvServiceInfo::setHomePageUrl(QString newHomePageUrl) {
	m_homePageUrl = newHomePageUrl;
}
LiveTvServiceStatus LiveTvServiceInfo::status() const { return m_status; }

void LiveTvServiceInfo::setStatus(LiveTvServiceStatus newStatus) {
	m_status = newStatus;
}
QString LiveTvServiceInfo::statusMessage() const { return m_statusMessage; }

void LiveTvServiceInfo::setStatusMessage(QString newStatusMessage) {
	m_statusMessage = newStatusMessage;
}
QString LiveTvServiceInfo::version() const { return m_version; }

void LiveTvServiceInfo::setVersion(QString newVersion) {
	m_version = newVersion;
}
bool LiveTvServiceInfo::hasUpdateAvailable() const { return m_hasUpdateAvailable; }

void LiveTvServiceInfo::setHasUpdateAvailable(bool newHasUpdateAvailable) {
	m_hasUpdateAvailable = newHasUpdateAvailable;
}
bool LiveTvServiceInfo::isVisible() const { return m_isVisible; }

void LiveTvServiceInfo::setIsVisible(bool newIsVisible) {
	m_isVisible = newIsVisible;
}
QStringList LiveTvServiceInfo::tuners() const { return m_tuners; }

void LiveTvServiceInfo::setTuners(QStringList newTuners) {
	m_tuners = newTuners;
}

} // NS DTO

namespace Support {

using LiveTvServiceInfo = Jellyfin::DTO::LiveTvServiceInfo;

template <>
LiveTvServiceInfo fromJsonValue<LiveTvServiceInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return LiveTvServiceInfo::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO
