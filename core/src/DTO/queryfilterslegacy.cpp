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

#include <JellyfinQt/DTO/queryfilterslegacy.h>

namespace Jellyfin {
namespace DTO {

QueryFiltersLegacy::QueryFiltersLegacy(QObject *parent) {}

QueryFiltersLegacy QueryFiltersLegacy::fromJson(QJsonObject source) {QueryFiltersLegacy instance;
	instance->setFromJson(source, false);
	return instance;
}


void QueryFiltersLegacy::setFromJson(QJsonObject source) {
	m_genres = fromJsonValue<QStringList>(source["Genres"]);
	m_tags = fromJsonValue<QStringList>(source["Tags"]);
	m_officialRatings = fromJsonValue<QStringList>(source["OfficialRatings"]);
	m_years = fromJsonValue<QList<qint32>>(source["Years"]);

}
	
QJsonObject QueryFiltersLegacy::toJson() {
	QJsonObject result;
	result["Genres"] = toJsonValue<QStringList>(m_genres);
	result["Tags"] = toJsonValue<QStringList>(m_tags);
	result["OfficialRatings"] = toJsonValue<QStringList>(m_officialRatings);
	result["Years"] = toJsonValue<QList<qint32>>(m_years);

	return result;
}

QStringList QueryFiltersLegacy::genres() const { return m_genres; }

void QueryFiltersLegacy::setGenres(QStringList newGenres) {
	m_genres = newGenres;
}
QStringList QueryFiltersLegacy::tags() const { return m_tags; }

void QueryFiltersLegacy::setTags(QStringList newTags) {
	m_tags = newTags;
}
QStringList QueryFiltersLegacy::officialRatings() const { return m_officialRatings; }

void QueryFiltersLegacy::setOfficialRatings(QStringList newOfficialRatings) {
	m_officialRatings = newOfficialRatings;
}
QList<qint32> QueryFiltersLegacy::years() const { return m_years; }

void QueryFiltersLegacy::setYears(QList<qint32> newYears) {
	m_years = newYears;
}


} // NS Jellyfin
} // NS DTO
