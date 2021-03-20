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

#include <JellyfinQt/DTO/notificationtypeinfo.h>

namespace Jellyfin {
namespace DTO {

NotificationTypeInfo::NotificationTypeInfo(QObject *parent) {}

NotificationTypeInfo NotificationTypeInfo::fromJson(QJsonObject source) {NotificationTypeInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void NotificationTypeInfo::setFromJson(QJsonObject source) {
	m_type = fromJsonValue<QString>(source["Type"]);
	m_name = fromJsonValue<QString>(source["Name"]);
	m_enabled = fromJsonValue<bool>(source["Enabled"]);
	m_category = fromJsonValue<QString>(source["Category"]);
	m_isBasedOnUserEvent = fromJsonValue<bool>(source["IsBasedOnUserEvent"]);

}
	
QJsonObject NotificationTypeInfo::toJson() {
	QJsonObject result;
	result["Type"] = toJsonValue<QString>(m_type);
	result["Name"] = toJsonValue<QString>(m_name);
	result["Enabled"] = toJsonValue<bool>(m_enabled);
	result["Category"] = toJsonValue<QString>(m_category);
	result["IsBasedOnUserEvent"] = toJsonValue<bool>(m_isBasedOnUserEvent);

	return result;
}

QString NotificationTypeInfo::type() const { return m_type; }

void NotificationTypeInfo::setType(QString newType) {
	m_type = newType;
}
QString NotificationTypeInfo::name() const { return m_name; }

void NotificationTypeInfo::setName(QString newName) {
	m_name = newName;
}
bool NotificationTypeInfo::enabled() const { return m_enabled; }

void NotificationTypeInfo::setEnabled(bool newEnabled) {
	m_enabled = newEnabled;
}
QString NotificationTypeInfo::category() const { return m_category; }

void NotificationTypeInfo::setCategory(QString newCategory) {
	m_category = newCategory;
}
bool NotificationTypeInfo::isBasedOnUserEvent() const { return m_isBasedOnUserEvent; }

void NotificationTypeInfo::setIsBasedOnUserEvent(bool newIsBasedOnUserEvent) {
	m_isBasedOnUserEvent = newIsBasedOnUserEvent;
}


} // NS Jellyfin
} // NS DTO
