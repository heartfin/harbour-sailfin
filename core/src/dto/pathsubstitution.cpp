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

#include <JellyfinQt/dto/pathsubstitution.h>

namespace Jellyfin {
namespace DTO {

PathSubstitution::PathSubstitution() {}

PathSubstitution::PathSubstitution(const PathSubstitution &other) :

	m_from(other.m_from),
	m_to(other.m_to){}


void PathSubstitution::replaceData(PathSubstitution &other) {
	m_from = other.m_from;
	m_to = other.m_to;
}

PathSubstitution PathSubstitution::fromJson(QJsonObject source) {
	PathSubstitution instance;
	instance.setFromJson(source);
	return instance;
}


void PathSubstitution::setFromJson(QJsonObject source) {
	m_from = Jellyfin::Support::fromJsonValue<QString>(source["From"]);
	m_to = Jellyfin::Support::fromJsonValue<QString>(source["To"]);

}
	
QJsonObject PathSubstitution::toJson() {
	QJsonObject result;
	result["From"] = Jellyfin::Support::toJsonValue<QString>(m_from);
	result["To"] = Jellyfin::Support::toJsonValue<QString>(m_to);

	return result;
}

QString PathSubstitution::from() const { return m_from; }

void PathSubstitution::setFrom(QString newFrom) {
	m_from = newFrom;
}
bool PathSubstitution::fromNull() const {
	return m_from.isNull();
}

void PathSubstitution::setFromNull() {
	m_from.clear();

}
QString PathSubstitution::to() const { return m_to; }

void PathSubstitution::setTo(QString newTo) {
	m_to = newTo;
}
bool PathSubstitution::toNull() const {
	return m_to.isNull();
}

void PathSubstitution::setToNull() {
	m_to.clear();

}

} // NS DTO

namespace Support {

using PathSubstitution = Jellyfin::DTO::PathSubstitution;

template <>
PathSubstitution fromJsonValue<PathSubstitution>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return PathSubstitution::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
