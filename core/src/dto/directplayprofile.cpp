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

#include <JellyfinQt/dto/directplayprofile.h>

namespace Jellyfin {
namespace DTO {

DirectPlayProfile::DirectPlayProfile() {}
DirectPlayProfile::DirectPlayProfile (
		QString container, 
		DlnaProfileType type 
		) :
	m_container(container),
	m_type(type) { }



DirectPlayProfile::DirectPlayProfile(const DirectPlayProfile &other) :

	m_container(other.m_container),
	m_audioCodec(other.m_audioCodec),
	m_videoCodec(other.m_videoCodec),
	m_type(other.m_type){}


void DirectPlayProfile::replaceData(DirectPlayProfile &other) {
	m_container = other.m_container;
	m_audioCodec = other.m_audioCodec;
	m_videoCodec = other.m_videoCodec;
	m_type = other.m_type;
}

DirectPlayProfile DirectPlayProfile::fromJson(QJsonObject source) {
	DirectPlayProfile instance;
	instance.setFromJson(source);
	return instance;
}


void DirectPlayProfile::setFromJson(QJsonObject source) {
	m_container = Jellyfin::Support::fromJsonValue<QString>(source["Container"]);
	m_audioCodec = Jellyfin::Support::fromJsonValue<QString>(source["AudioCodec"]);
	m_videoCodec = Jellyfin::Support::fromJsonValue<QString>(source["VideoCodec"]);
	m_type = Jellyfin::Support::fromJsonValue<DlnaProfileType>(source["Type"]);

}
	
QJsonObject DirectPlayProfile::toJson() const {
	QJsonObject result;
	
	result["Container"] = Jellyfin::Support::toJsonValue<QString>(m_container);		
	
	if (!(m_audioCodec.isNull())) {
		result["AudioCodec"] = Jellyfin::Support::toJsonValue<QString>(m_audioCodec);
	}
			
	
	if (!(m_videoCodec.isNull())) {
		result["VideoCodec"] = Jellyfin::Support::toJsonValue<QString>(m_videoCodec);
	}
			
	result["Type"] = Jellyfin::Support::toJsonValue<DlnaProfileType>(m_type);	
	return result;
}

QString DirectPlayProfile::container() const { return m_container; }

void DirectPlayProfile::setContainer(QString newContainer) {
	m_container = newContainer;
}

QString DirectPlayProfile::audioCodec() const { return m_audioCodec; }

void DirectPlayProfile::setAudioCodec(QString newAudioCodec) {
	m_audioCodec = newAudioCodec;
}
bool DirectPlayProfile::audioCodecNull() const {
	return m_audioCodec.isNull();
}

void DirectPlayProfile::setAudioCodecNull() {
	m_audioCodec.clear();

}
QString DirectPlayProfile::videoCodec() const { return m_videoCodec; }

void DirectPlayProfile::setVideoCodec(QString newVideoCodec) {
	m_videoCodec = newVideoCodec;
}
bool DirectPlayProfile::videoCodecNull() const {
	return m_videoCodec.isNull();
}

void DirectPlayProfile::setVideoCodecNull() {
	m_videoCodec.clear();

}
DlnaProfileType DirectPlayProfile::type() const { return m_type; }

void DirectPlayProfile::setType(DlnaProfileType newType) {
	m_type = newType;
}


} // NS DTO

namespace Support {

using DirectPlayProfile = Jellyfin::DTO::DirectPlayProfile;

template <>
DirectPlayProfile fromJsonValue(const QJsonValue &source, convertType<DirectPlayProfile>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return DirectPlayProfile::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const DirectPlayProfile &source, convertType<DirectPlayProfile>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
