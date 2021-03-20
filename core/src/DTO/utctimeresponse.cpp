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

#include <JellyfinQt/DTO/utctimeresponse.h>

namespace Jellyfin {
namespace DTO {

UtcTimeResponse::UtcTimeResponse(QObject *parent) {}

UtcTimeResponse UtcTimeResponse::fromJson(QJsonObject source) {UtcTimeResponse instance;
	instance->setFromJson(source, false);
	return instance;
}


void UtcTimeResponse::setFromJson(QJsonObject source) {
	m_requestReceptionTime = fromJsonValue<QDateTime>(source["RequestReceptionTime"]);
	m_responseTransmissionTime = fromJsonValue<QDateTime>(source["ResponseTransmissionTime"]);

}
	
QJsonObject UtcTimeResponse::toJson() {
	QJsonObject result;
	result["RequestReceptionTime"] = toJsonValue<QDateTime>(m_requestReceptionTime);
	result["ResponseTransmissionTime"] = toJsonValue<QDateTime>(m_responseTransmissionTime);

	return result;
}

QDateTime UtcTimeResponse::requestReceptionTime() const { return m_requestReceptionTime; }

void UtcTimeResponse::setRequestReceptionTime(QDateTime newRequestReceptionTime) {
	m_requestReceptionTime = newRequestReceptionTime;
}
QDateTime UtcTimeResponse::responseTransmissionTime() const { return m_responseTransmissionTime; }

void UtcTimeResponse::setResponseTransmissionTime(QDateTime newResponseTransmissionTime) {
	m_responseTransmissionTime = newResponseTransmissionTime;
}


} // NS Jellyfin
} // NS DTO
