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

#include <JellyfinQt/DTO/codecprofile.h>

namespace Jellyfin {
namespace DTO {

CodecProfile::CodecProfile(QObject *parent) {}

CodecProfile CodecProfile::fromJson(QJsonObject source) {CodecProfile instance;
	instance->setFromJson(source, false);
	return instance;
}


void CodecProfile::setFromJson(QJsonObject source) {
	m_type = fromJsonValue<CodecType>(source["Type"]);
	m_conditions = fromJsonValue<QList<QSharedPointer<ProfileCondition>>>(source["Conditions"]);
	m_applyConditions = fromJsonValue<QList<QSharedPointer<ProfileCondition>>>(source["ApplyConditions"]);
	m_codec = fromJsonValue<QString>(source["Codec"]);
	m_container = fromJsonValue<QString>(source["Container"]);

}
	
QJsonObject CodecProfile::toJson() {
	QJsonObject result;
	result["Type"] = toJsonValue<CodecType>(m_type);
	result["Conditions"] = toJsonValue<QList<QSharedPointer<ProfileCondition>>>(m_conditions);
	result["ApplyConditions"] = toJsonValue<QList<QSharedPointer<ProfileCondition>>>(m_applyConditions);
	result["Codec"] = toJsonValue<QString>(m_codec);
	result["Container"] = toJsonValue<QString>(m_container);

	return result;
}

CodecType CodecProfile::type() const { return m_type; }

void CodecProfile::setType(CodecType newType) {
	m_type = newType;
}
QList<QSharedPointer<ProfileCondition>> CodecProfile::conditions() const { return m_conditions; }

void CodecProfile::setConditions(QList<QSharedPointer<ProfileCondition>> newConditions) {
	m_conditions = newConditions;
}
QList<QSharedPointer<ProfileCondition>> CodecProfile::applyConditions() const { return m_applyConditions; }

void CodecProfile::setApplyConditions(QList<QSharedPointer<ProfileCondition>> newApplyConditions) {
	m_applyConditions = newApplyConditions;
}
QString CodecProfile::codec() const { return m_codec; }

void CodecProfile::setCodec(QString newCodec) {
	m_codec = newCodec;
}
QString CodecProfile::container() const { return m_container; }

void CodecProfile::setContainer(QString newContainer) {
	m_container = newContainer;
}


} // NS Jellyfin
} // NS DTO
