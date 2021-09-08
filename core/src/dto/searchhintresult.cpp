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

#include <JellyfinQt/dto/searchhintresult.h>

namespace Jellyfin {
namespace DTO {

SearchHintResult::SearchHintResult() {}

SearchHintResult::SearchHintResult(const SearchHintResult &other) :

	m_searchHints(other.m_searchHints),
	m_totalRecordCount(other.m_totalRecordCount){}


void SearchHintResult::replaceData(SearchHintResult &other) {
	m_searchHints = other.m_searchHints;
	m_totalRecordCount = other.m_totalRecordCount;
}

SearchHintResult SearchHintResult::fromJson(QJsonObject source) {
	SearchHintResult instance;
	instance.setFromJson(source);
	return instance;
}


void SearchHintResult::setFromJson(QJsonObject source) {
	m_searchHints = Jellyfin::Support::fromJsonValue<QList<SearchHint>>(source["SearchHints"]);
	m_totalRecordCount = Jellyfin::Support::fromJsonValue<qint32>(source["TotalRecordCount"]);

}
	
QJsonObject SearchHintResult::toJson() const {
	QJsonObject result;
	
	
	if (!(m_searchHints.size() == 0)) {
		result["SearchHints"] = Jellyfin::Support::toJsonValue<QList<SearchHint>>(m_searchHints);
	}
			
	result["TotalRecordCount"] = Jellyfin::Support::toJsonValue<qint32>(m_totalRecordCount);	
	return result;
}

QList<SearchHint> SearchHintResult::searchHints() const { return m_searchHints; }

void SearchHintResult::setSearchHints(QList<SearchHint> newSearchHints) {
	m_searchHints = newSearchHints;
}
bool SearchHintResult::searchHintsNull() const {
	return m_searchHints.size() == 0;
}

void SearchHintResult::setSearchHintsNull() {
	m_searchHints.clear();

}
qint32 SearchHintResult::totalRecordCount() const { return m_totalRecordCount; }

void SearchHintResult::setTotalRecordCount(qint32 newTotalRecordCount) {
	m_totalRecordCount = newTotalRecordCount;
}


} // NS DTO

namespace Support {

using SearchHintResult = Jellyfin::DTO::SearchHintResult;

template <>
SearchHintResult fromJsonValue(const QJsonValue &source, convertType<SearchHintResult>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return SearchHintResult::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const SearchHintResult &source, convertType<SearchHintResult>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
