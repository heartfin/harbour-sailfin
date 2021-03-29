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

#include "JellyfinQt/loader/getparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetParams

const QString &GetParams::searchTerm() const {
	return m_searchTerm;
}

void GetParams::setSearchTerm(QString newSearchTerm) {
	m_searchTerm = newSearchTerm;
}


const QStringList &GetParams::excludeItemTypes() const {
	return m_excludeItemTypes;
}

void GetParams::setExcludeItemTypes(QStringList newExcludeItemTypes)  {
	m_excludeItemTypes = newExcludeItemTypes;
}

bool GetParams::excludeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_excludeItemTypes.size() == 0;
}

void GetParams::setExcludeItemTypesNull() {
	m_excludeItemTypes.clear();
}


const bool &GetParams::includeArtists() const {
	return m_includeArtists.value();
}

void GetParams::setIncludeArtists(bool newIncludeArtists)  {
	m_includeArtists = newIncludeArtists;
}

bool GetParams::includeArtistsNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_includeArtists.has_value();
}

void GetParams::setIncludeArtistsNull() {
	m_includeArtists = std::nullopt;
}


const bool &GetParams::includeGenres() const {
	return m_includeGenres.value();
}

void GetParams::setIncludeGenres(bool newIncludeGenres)  {
	m_includeGenres = newIncludeGenres;
}

bool GetParams::includeGenresNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_includeGenres.has_value();
}

void GetParams::setIncludeGenresNull() {
	m_includeGenres = std::nullopt;
}


const QStringList &GetParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetParams::includeMedia() const {
	return m_includeMedia.value();
}

void GetParams::setIncludeMedia(bool newIncludeMedia)  {
	m_includeMedia = newIncludeMedia;
}

bool GetParams::includeMediaNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_includeMedia.has_value();
}

void GetParams::setIncludeMediaNull() {
	m_includeMedia = std::nullopt;
}


const bool &GetParams::includePeople() const {
	return m_includePeople.value();
}

void GetParams::setIncludePeople(bool newIncludePeople)  {
	m_includePeople = newIncludePeople;
}

bool GetParams::includePeopleNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_includePeople.has_value();
}

void GetParams::setIncludePeopleNull() {
	m_includePeople = std::nullopt;
}


const bool &GetParams::includeStudios() const {
	return m_includeStudios.value();
}

void GetParams::setIncludeStudios(bool newIncludeStudios)  {
	m_includeStudios = newIncludeStudios;
}

bool GetParams::includeStudiosNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_includeStudios.has_value();
}

void GetParams::setIncludeStudiosNull() {
	m_includeStudios = std::nullopt;
}


const bool &GetParams::isKids() const {
	return m_isKids.value();
}

void GetParams::setIsKids(bool newIsKids)  {
	m_isKids = newIsKids;
}

bool GetParams::isKidsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isKids.has_value();
}

void GetParams::setIsKidsNull() {
	m_isKids = std::nullopt;
}


const bool &GetParams::isMovie() const {
	return m_isMovie.value();
}

void GetParams::setIsMovie(bool newIsMovie)  {
	m_isMovie = newIsMovie;
}

bool GetParams::isMovieNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMovie.has_value();
}

void GetParams::setIsMovieNull() {
	m_isMovie = std::nullopt;
}


const bool &GetParams::isNews() const {
	return m_isNews.value();
}

void GetParams::setIsNews(bool newIsNews)  {
	m_isNews = newIsNews;
}

bool GetParams::isNewsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isNews.has_value();
}

void GetParams::setIsNewsNull() {
	m_isNews = std::nullopt;
}


const bool &GetParams::isSeries() const {
	return m_isSeries.value();
}

void GetParams::setIsSeries(bool newIsSeries)  {
	m_isSeries = newIsSeries;
}

bool GetParams::isSeriesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSeries.has_value();
}

void GetParams::setIsSeriesNull() {
	m_isSeries = std::nullopt;
}


const bool &GetParams::isSports() const {
	return m_isSports.value();
}

void GetParams::setIsSports(bool newIsSports)  {
	m_isSports = newIsSports;
}

bool GetParams::isSportsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSports.has_value();
}

void GetParams::setIsSportsNull() {
	m_isSports = std::nullopt;
}


const qint32 &GetParams::limit() const {
	return m_limit.value();
}

void GetParams::setLimit(qint32 newLimit)  {
	m_limit = newLimit;
}

bool GetParams::limitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_limit.has_value();
}

void GetParams::setLimitNull() {
	m_limit = std::nullopt;
}


const QStringList &GetParams::mediaTypes() const {
	return m_mediaTypes;
}

void GetParams::setMediaTypes(QStringList newMediaTypes)  {
	m_mediaTypes = newMediaTypes;
}

bool GetParams::mediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaTypes.size() == 0;
}

void GetParams::setMediaTypesNull() {
	m_mediaTypes.clear();
}


const QString &GetParams::parentId() const {
	return m_parentId;
}

void GetParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetParams::setParentIdNull() {
	m_parentId.clear();
}


const qint32 &GetParams::startIndex() const {
	return m_startIndex.value();
}

void GetParams::setStartIndex(qint32 newStartIndex)  {
	m_startIndex = newStartIndex;
}

bool GetParams::startIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startIndex.has_value();
}

void GetParams::setStartIndexNull() {
	m_startIndex = std::nullopt;
}


const QString &GetParams::userId() const {
	return m_userId;
}

void GetParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
