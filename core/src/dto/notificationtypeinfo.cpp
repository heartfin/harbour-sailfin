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

#include <JellyfinQt/dto/notificationtypeinfo.h>

namespace Jellyfin {
namespace DTO {

NotificationTypeInfo::NotificationTypeInfo() {}
NotificationTypeInfo::NotificationTypeInfo (
		bool enabled, 
		bool isBasedOnUserEvent 
		) :
	m_enabled(enabled),
	m_isBasedOnUserEvent(isBasedOnUserEvent) { }



NotificationTypeInfo::NotificationTypeInfo(const NotificationTypeInfo &other) :

	m_type(other.m_type),
	m_name(other.m_name),
	m_enabled(other.m_enabled),
	m_category(other.m_category),
	m_isBasedOnUserEvent(other.m_isBasedOnUserEvent){}


void NotificationTypeInfo::replaceData(NotificationTypeInfo &other) {
	m_type = other.m_type;
	m_name = other.m_name;
	m_enabled = other.m_enabled;
	m_category = other.m_category;
	m_isBasedOnUserEvent = other.m_isBasedOnUserEvent;
}

NotificationTypeInfo NotificationTypeInfo::fromJson(QJsonObject source) {
	NotificationTypeInfo instance;
	instance.setFromJson(source);
	return instance;
}


void NotificationTypeInfo::setFromJson(QJsonObject source) {
	m_type = Jellyfin::Support::fromJsonValue<QString>(source["Type"]);
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_enabled = Jellyfin::Support::fromJsonValue<bool>(source["Enabled"]);
	m_category = Jellyfin::Support::fromJsonValue<QString>(source["Category"]);
	m_isBasedOnUserEvent = Jellyfin::Support::fromJsonValue<bool>(source["IsBasedOnUserEvent"]);

}
	
QJsonObject NotificationTypeInfo::toJson() const {
	QJsonObject result;
	
	
	if (!(m_type.isNull())) {
		result["Type"] = Jellyfin::Support::toJsonValue<QString>(m_type);
	}
			
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	result["Enabled"] = Jellyfin::Support::toJsonValue<bool>(m_enabled);		
	
	if (!(m_category.isNull())) {
		result["Category"] = Jellyfin::Support::toJsonValue<QString>(m_category);
	}
			
	result["IsBasedOnUserEvent"] = Jellyfin::Support::toJsonValue<bool>(m_isBasedOnUserEvent);	
	return result;
}

QString NotificationTypeInfo::type() const { return m_type; }

void NotificationTypeInfo::setType(QString newType) {
	m_type = newType;
}
bool NotificationTypeInfo::typeNull() const {
	return m_type.isNull();
}

void NotificationTypeInfo::setTypeNull() {
	m_type.clear();

}
QString NotificationTypeInfo::name() const { return m_name; }

void NotificationTypeInfo::setName(QString newName) {
	m_name = newName;
}
bool NotificationTypeInfo::nameNull() const {
	return m_name.isNull();
}

void NotificationTypeInfo::setNameNull() {
	m_name.clear();

}
bool NotificationTypeInfo::enabled() const { return m_enabled; }

void NotificationTypeInfo::setEnabled(bool newEnabled) {
	m_enabled = newEnabled;
}

QString NotificationTypeInfo::category() const { return m_category; }

void NotificationTypeInfo::setCategory(QString newCategory) {
	m_category = newCategory;
}
bool NotificationTypeInfo::categoryNull() const {
	return m_category.isNull();
}

void NotificationTypeInfo::setCategoryNull() {
	m_category.clear();

}
bool NotificationTypeInfo::isBasedOnUserEvent() const { return m_isBasedOnUserEvent; }

void NotificationTypeInfo::setIsBasedOnUserEvent(bool newIsBasedOnUserEvent) {
	m_isBasedOnUserEvent = newIsBasedOnUserEvent;
}


} // NS DTO

namespace Support {

using NotificationTypeInfo = Jellyfin::DTO::NotificationTypeInfo;

template <>
NotificationTypeInfo fromJsonValue(const QJsonValue &source, convertType<NotificationTypeInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return NotificationTypeInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const NotificationTypeInfo &source, convertType<NotificationTypeInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
