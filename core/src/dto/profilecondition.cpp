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

#include <JellyfinQt/dto/profilecondition.h>

namespace Jellyfin {
namespace DTO {

ProfileCondition::ProfileCondition() {}
ProfileCondition::ProfileCondition (
		ProfileConditionType condition, 
		ProfileConditionValue property, 
		bool isRequired 
		) :
	m_condition(condition),
	m_property(property),
	m_isRequired(isRequired) { }



ProfileCondition::ProfileCondition(const ProfileCondition &other) :

	m_condition(other.m_condition),
	m_property(other.m_property),
	m_value(other.m_value),
	m_isRequired(other.m_isRequired){}


void ProfileCondition::replaceData(ProfileCondition &other) {
	m_condition = other.m_condition;
	m_property = other.m_property;
	m_value = other.m_value;
	m_isRequired = other.m_isRequired;
}

ProfileCondition ProfileCondition::fromJson(QJsonObject source) {
	ProfileCondition instance;
	instance.setFromJson(source);
	return instance;
}


void ProfileCondition::setFromJson(QJsonObject source) {
	m_condition = Jellyfin::Support::fromJsonValue<ProfileConditionType>(source["Condition"]);
	m_property = Jellyfin::Support::fromJsonValue<ProfileConditionValue>(source["Property"]);
	m_value = Jellyfin::Support::fromJsonValue<QString>(source["Value"]);
	m_isRequired = Jellyfin::Support::fromJsonValue<bool>(source["IsRequired"]);

}
	
QJsonObject ProfileCondition::toJson() const {
	QJsonObject result;
	
	result["Condition"] = Jellyfin::Support::toJsonValue<ProfileConditionType>(m_condition);		
	result["Property"] = Jellyfin::Support::toJsonValue<ProfileConditionValue>(m_property);		
	
	if (!(m_value.isNull())) {
		result["Value"] = Jellyfin::Support::toJsonValue<QString>(m_value);
	}
			
	result["IsRequired"] = Jellyfin::Support::toJsonValue<bool>(m_isRequired);	
	return result;
}

ProfileConditionType ProfileCondition::condition() const { return m_condition; }

void ProfileCondition::setCondition(ProfileConditionType newCondition) {
	m_condition = newCondition;
}

ProfileConditionValue ProfileCondition::property() const { return m_property; }

void ProfileCondition::setProperty(ProfileConditionValue newProperty) {
	m_property = newProperty;
}

QString ProfileCondition::value() const { return m_value; }

void ProfileCondition::setValue(QString newValue) {
	m_value = newValue;
}
bool ProfileCondition::valueNull() const {
	return m_value.isNull();
}

void ProfileCondition::setValueNull() {
	m_value.clear();

}
bool ProfileCondition::isRequired() const { return m_isRequired; }

void ProfileCondition::setIsRequired(bool newIsRequired) {
	m_isRequired = newIsRequired;
}


} // NS DTO

namespace Support {

using ProfileCondition = Jellyfin::DTO::ProfileCondition;

template <>
ProfileCondition fromJsonValue(const QJsonValue &source, convertType<ProfileCondition>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ProfileCondition::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ProfileCondition &source, convertType<ProfileCondition>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
