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

#include <JellyfinQt/DTO/containerprofile.h>

namespace Jellyfin {
namespace DTO {

ContainerProfile::ContainerProfile() {}

ContainerProfile ContainerProfile::fromJson(QJsonObject source) {
	ContainerProfile instance;
	instance.setFromJson(source);
	return instance;
}


void ContainerProfile::setFromJson(QJsonObject source) {
	m_type = Jellyfin::Support::fromJsonValue<DlnaProfileType>(source["Type"]);
	m_conditions = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<ProfileCondition>>>(source["Conditions"]);
	m_container = Jellyfin::Support::fromJsonValue<QString>(source["Container"]);

}
	
QJsonObject ContainerProfile::toJson() {
	QJsonObject result;
	result["Type"] = Jellyfin::Support::toJsonValue<DlnaProfileType>(m_type);
	result["Conditions"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<ProfileCondition>>>(m_conditions);
	result["Container"] = Jellyfin::Support::toJsonValue<QString>(m_container);

	return result;
}

DlnaProfileType ContainerProfile::type() const { return m_type; }

void ContainerProfile::setType(DlnaProfileType newType) {
	m_type = newType;
}
QList<QSharedPointer<ProfileCondition>> ContainerProfile::conditions() const { return m_conditions; }

void ContainerProfile::setConditions(QList<QSharedPointer<ProfileCondition>> newConditions) {
	m_conditions = newConditions;
}
QString ContainerProfile::container() const { return m_container; }

void ContainerProfile::setContainer(QString newContainer) {
	m_container = newContainer;
}

} // NS DTO

namespace Support {

using ContainerProfile = Jellyfin::DTO::ContainerProfile;

template <>
ContainerProfile fromJsonValue<ContainerProfile>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return ContainerProfile::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO
