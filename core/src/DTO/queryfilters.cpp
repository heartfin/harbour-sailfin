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

#include <JellyfinQt/DTO/queryfilters.h>

namespace Jellyfin {
namespace DTO {

QueryFilters::QueryFilters() {}

QueryFilters QueryFilters::fromJson(QJsonObject source) {
	QueryFilters instance;
	instance.setFromJson(source);
	return instance;
}


void QueryFilters::setFromJson(QJsonObject source) {
	m_genres = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<NameGuidPair>>>(source["Genres"]);
	m_tags = Jellyfin::Support::fromJsonValue<QStringList>(source["Tags"]);

}
	
QJsonObject QueryFilters::toJson() {
	QJsonObject result;
	result["Genres"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<NameGuidPair>>>(m_genres);
	result["Tags"] = Jellyfin::Support::toJsonValue<QStringList>(m_tags);

	return result;
}

QList<QSharedPointer<NameGuidPair>> QueryFilters::genres() const { return m_genres; }

void QueryFilters::setGenres(QList<QSharedPointer<NameGuidPair>> newGenres) {
	m_genres = newGenres;
}
QStringList QueryFilters::tags() const { return m_tags; }

void QueryFilters::setTags(QStringList newTags) {
	m_tags = newTags;
}

} // NS DTO

namespace Support {

using QueryFilters = Jellyfin::DTO::QueryFilters;

template <>
QueryFilters fromJsonValue<QueryFilters>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return QueryFilters::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO
