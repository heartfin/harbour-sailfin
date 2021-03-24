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

#include <JellyfinQt/dto/problemdetails.h>

namespace Jellyfin {
namespace DTO {

ProblemDetails::ProblemDetails() {}

ProblemDetails::ProblemDetails(const ProblemDetails &other) :

	m_type(other.m_type),
	m_title(other.m_title),
	m_status(other.m_status),
	m_detail(other.m_detail),
	m_instance(other.m_instance){}


void ProblemDetails::replaceData(ProblemDetails &other) {
	m_type = other.m_type;
	m_title = other.m_title;
	m_status = other.m_status;
	m_detail = other.m_detail;
	m_instance = other.m_instance;
}

ProblemDetails ProblemDetails::fromJson(QJsonObject source) {
	ProblemDetails instance;
	instance.setFromJson(source);
	return instance;
}


void ProblemDetails::setFromJson(QJsonObject source) {
	m_type = Jellyfin::Support::fromJsonValue<QString>(source["type"]);
	m_title = Jellyfin::Support::fromJsonValue<QString>(source["title"]);
	m_status = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["status"]);
	m_detail = Jellyfin::Support::fromJsonValue<QString>(source["detail"]);
	m_instance = Jellyfin::Support::fromJsonValue<QString>(source["instance"]);

}
	
QJsonObject ProblemDetails::toJson() {
	QJsonObject result;
	result["type"] = Jellyfin::Support::toJsonValue<QString>(m_type);
	result["title"] = Jellyfin::Support::toJsonValue<QString>(m_title);
	result["status"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_status);
	result["detail"] = Jellyfin::Support::toJsonValue<QString>(m_detail);
	result["instance"] = Jellyfin::Support::toJsonValue<QString>(m_instance);

	return result;
}

QString ProblemDetails::type() const { return m_type; }

void ProblemDetails::setType(QString newType) {
	m_type = newType;
}
bool ProblemDetails::typeNull() const {
	return m_type.isNull();
}

void ProblemDetails::setTypeNull() {
	m_type.clear();

}
QString ProblemDetails::title() const { return m_title; }

void ProblemDetails::setTitle(QString newTitle) {
	m_title = newTitle;
}
bool ProblemDetails::titleNull() const {
	return m_title.isNull();
}

void ProblemDetails::setTitleNull() {
	m_title.clear();

}
std::optional<qint32> ProblemDetails::status() const { return m_status; }

void ProblemDetails::setStatus(std::optional<qint32> newStatus) {
	m_status = newStatus;
}
bool ProblemDetails::statusNull() const {
	return !m_status.has_value();
}

void ProblemDetails::setStatusNull() {
	m_status = std::nullopt;

}
QString ProblemDetails::detail() const { return m_detail; }

void ProblemDetails::setDetail(QString newDetail) {
	m_detail = newDetail;
}
bool ProblemDetails::detailNull() const {
	return m_detail.isNull();
}

void ProblemDetails::setDetailNull() {
	m_detail.clear();

}
QString ProblemDetails::instance() const { return m_instance; }

void ProblemDetails::setInstance(QString newInstance) {
	m_instance = newInstance;
}
bool ProblemDetails::instanceNull() const {
	return m_instance.isNull();
}

void ProblemDetails::setInstanceNull() {
	m_instance.clear();

}

} // NS DTO

namespace Support {

using ProblemDetails = Jellyfin::DTO::ProblemDetails;

template <>
ProblemDetails fromJsonValue<ProblemDetails>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return ProblemDetails::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
