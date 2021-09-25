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

#include <JellyfinQt/dto/codecprofile.h>

namespace Jellyfin {
namespace DTO {

CodecProfile::CodecProfile() {}
CodecProfile::CodecProfile (
		CodecType type 
		) :
	m_type(type) { }



CodecProfile::CodecProfile(const CodecProfile &other) :

	m_type(other.m_type),
	m_conditions(other.m_conditions),
	m_applyConditions(other.m_applyConditions),
	m_codec(other.m_codec),
	m_container(other.m_container){}


void CodecProfile::replaceData(CodecProfile &other) {
	m_type = other.m_type;
	m_conditions = other.m_conditions;
	m_applyConditions = other.m_applyConditions;
	m_codec = other.m_codec;
	m_container = other.m_container;
}

CodecProfile CodecProfile::fromJson(QJsonObject source) {
	CodecProfile instance;
	instance.setFromJson(source);
	return instance;
}


void CodecProfile::setFromJson(QJsonObject source) {
	m_type = Jellyfin::Support::fromJsonValue<CodecType>(source["Type"]);
	m_conditions = Jellyfin::Support::fromJsonValue<QList<ProfileCondition>>(source["Conditions"]);
	m_applyConditions = Jellyfin::Support::fromJsonValue<QList<ProfileCondition>>(source["ApplyConditions"]);
	m_codec = Jellyfin::Support::fromJsonValue<QString>(source["Codec"]);
	m_container = Jellyfin::Support::fromJsonValue<QString>(source["Container"]);

}
	
QJsonObject CodecProfile::toJson() const {
	QJsonObject result;
	
	result["Type"] = Jellyfin::Support::toJsonValue<CodecType>(m_type);		
	
	if (!(m_conditions.size() == 0)) {
		result["Conditions"] = Jellyfin::Support::toJsonValue<QList<ProfileCondition>>(m_conditions);
	}
			
	
	if (!(m_applyConditions.size() == 0)) {
		result["ApplyConditions"] = Jellyfin::Support::toJsonValue<QList<ProfileCondition>>(m_applyConditions);
	}
			
	
	if (!(m_codec.isNull())) {
		result["Codec"] = Jellyfin::Support::toJsonValue<QString>(m_codec);
	}
			
	
	if (!(m_container.isNull())) {
		result["Container"] = Jellyfin::Support::toJsonValue<QString>(m_container);
	}
		
	return result;
}

CodecType CodecProfile::type() const { return m_type; }

void CodecProfile::setType(CodecType newType) {
	m_type = newType;
}

QList<ProfileCondition> CodecProfile::conditions() const { return m_conditions; }

void CodecProfile::setConditions(QList<ProfileCondition> newConditions) {
	m_conditions = newConditions;
}
bool CodecProfile::conditionsNull() const {
	return m_conditions.size() == 0;
}

void CodecProfile::setConditionsNull() {
	m_conditions.clear();

}
QList<ProfileCondition> CodecProfile::applyConditions() const { return m_applyConditions; }

void CodecProfile::setApplyConditions(QList<ProfileCondition> newApplyConditions) {
	m_applyConditions = newApplyConditions;
}
bool CodecProfile::applyConditionsNull() const {
	return m_applyConditions.size() == 0;
}

void CodecProfile::setApplyConditionsNull() {
	m_applyConditions.clear();

}
QString CodecProfile::codec() const { return m_codec; }

void CodecProfile::setCodec(QString newCodec) {
	m_codec = newCodec;
}
bool CodecProfile::codecNull() const {
	return m_codec.isNull();
}

void CodecProfile::setCodecNull() {
	m_codec.clear();

}
QString CodecProfile::container() const { return m_container; }

void CodecProfile::setContainer(QString newContainer) {
	m_container = newContainer;
}
bool CodecProfile::containerNull() const {
	return m_container.isNull();
}

void CodecProfile::setContainerNull() {
	m_container.clear();

}

} // NS DTO

namespace Support {

using CodecProfile = Jellyfin::DTO::CodecProfile;

template <>
CodecProfile fromJsonValue(const QJsonValue &source, convertType<CodecProfile>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return CodecProfile::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const CodecProfile &source, convertType<CodecProfile>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
