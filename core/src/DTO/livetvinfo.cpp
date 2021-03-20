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

#include <JellyfinQt/DTO/livetvinfo.h>

namespace Jellyfin {
namespace DTO {

LiveTvInfo::LiveTvInfo(QObject *parent) {}

LiveTvInfo LiveTvInfo::fromJson(QJsonObject source) {LiveTvInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void LiveTvInfo::setFromJson(QJsonObject source) {
	m_services = fromJsonValue<QList<QSharedPointer<LiveTvServiceInfo>>>(source["Services"]);
	m_isEnabled = fromJsonValue<bool>(source["IsEnabled"]);
	m_enabledUsers = fromJsonValue<QStringList>(source["EnabledUsers"]);

}
	
QJsonObject LiveTvInfo::toJson() {
	QJsonObject result;
	result["Services"] = toJsonValue<QList<QSharedPointer<LiveTvServiceInfo>>>(m_services);
	result["IsEnabled"] = toJsonValue<bool>(m_isEnabled);
	result["EnabledUsers"] = toJsonValue<QStringList>(m_enabledUsers);

	return result;
}

QList<QSharedPointer<LiveTvServiceInfo>> LiveTvInfo::services() const { return m_services; }

void LiveTvInfo::setServices(QList<QSharedPointer<LiveTvServiceInfo>> newServices) {
	m_services = newServices;
}
bool LiveTvInfo::isEnabled() const { return m_isEnabled; }

void LiveTvInfo::setIsEnabled(bool newIsEnabled) {
	m_isEnabled = newIsEnabled;
}
QStringList LiveTvInfo::enabledUsers() const { return m_enabledUsers; }

void LiveTvInfo::setEnabledUsers(QStringList newEnabledUsers) {
	m_enabledUsers = newEnabledUsers;
}


} // NS Jellyfin
} // NS DTO
