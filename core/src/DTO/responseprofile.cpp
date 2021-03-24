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

#include <JellyfinQt/DTO/responseprofile.h>

namespace Jellyfin {
namespace DTO {

ResponseProfile::ResponseProfile() {}
ResponseProfile::ResponseProfile(const ResponseProfile &other) :
	m_container(other.m_container),
	m_audioCodec(other.m_audioCodec),
	m_videoCodec(other.m_videoCodec),
	m_type(other.m_type),
	m_orgPn(other.m_orgPn),
	m_mimeType(other.m_mimeType),
	m_conditions(other.m_conditions){}

ResponseProfile ResponseProfile::fromJson(QJsonObject source) {
	ResponseProfile instance;
	instance.setFromJson(source);
	return instance;
}


void ResponseProfile::setFromJson(QJsonObject source) {
	m_container = Jellyfin::Support::fromJsonValue<QString>(source["Container"]);
	m_audioCodec = Jellyfin::Support::fromJsonValue<QString>(source["AudioCodec"]);
	m_videoCodec = Jellyfin::Support::fromJsonValue<QString>(source["VideoCodec"]);
	m_type = Jellyfin::Support::fromJsonValue<DlnaProfileType>(source["Type"]);
	m_orgPn = Jellyfin::Support::fromJsonValue<QString>(source["OrgPn"]);
	m_mimeType = Jellyfin::Support::fromJsonValue<QString>(source["MimeType"]);
	m_conditions = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<ProfileCondition>>>(source["Conditions"]);

}
	
QJsonObject ResponseProfile::toJson() {
	QJsonObject result;
	result["Container"] = Jellyfin::Support::toJsonValue<QString>(m_container);
	result["AudioCodec"] = Jellyfin::Support::toJsonValue<QString>(m_audioCodec);
	result["VideoCodec"] = Jellyfin::Support::toJsonValue<QString>(m_videoCodec);
	result["Type"] = Jellyfin::Support::toJsonValue<DlnaProfileType>(m_type);
	result["OrgPn"] = Jellyfin::Support::toJsonValue<QString>(m_orgPn);
	result["MimeType"] = Jellyfin::Support::toJsonValue<QString>(m_mimeType);
	result["Conditions"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<ProfileCondition>>>(m_conditions);

	return result;
}

QString ResponseProfile::container() const { return m_container; }

void ResponseProfile::setContainer(QString newContainer) {
	m_container = newContainer;
}
QString ResponseProfile::audioCodec() const { return m_audioCodec; }

void ResponseProfile::setAudioCodec(QString newAudioCodec) {
	m_audioCodec = newAudioCodec;
}
QString ResponseProfile::videoCodec() const { return m_videoCodec; }

void ResponseProfile::setVideoCodec(QString newVideoCodec) {
	m_videoCodec = newVideoCodec;
}
DlnaProfileType ResponseProfile::type() const { return m_type; }

void ResponseProfile::setType(DlnaProfileType newType) {
	m_type = newType;
}
QString ResponseProfile::orgPn() const { return m_orgPn; }

void ResponseProfile::setOrgPn(QString newOrgPn) {
	m_orgPn = newOrgPn;
}
QString ResponseProfile::mimeType() const { return m_mimeType; }

void ResponseProfile::setMimeType(QString newMimeType) {
	m_mimeType = newMimeType;
}
QList<QSharedPointer<ProfileCondition>> ResponseProfile::conditions() const { return m_conditions; }

void ResponseProfile::setConditions(QList<QSharedPointer<ProfileCondition>> newConditions) {
	m_conditions = newConditions;
}

} // NS DTO

namespace Support {

using ResponseProfile = Jellyfin::DTO::ResponseProfile;

template <>
ResponseProfile fromJsonValue<ResponseProfile>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return ResponseProfile::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO
