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

#include "JellyfinQt/loader/getqueryfiltersparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetQueryFiltersParams

const QStringList &GetQueryFiltersParams::includeItemTypes() const {
	return m_includeItemTypes;
}

void GetQueryFiltersParams::setIncludeItemTypes(QStringList newIncludeItemTypes)  {
	m_includeItemTypes = newIncludeItemTypes;
}

bool GetQueryFiltersParams::includeItemTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_includeItemTypes.size() == 0;
}

void GetQueryFiltersParams::setIncludeItemTypesNull() {
	m_includeItemTypes.clear();
}


const bool &GetQueryFiltersParams::isAiring() const {
	return m_isAiring.value();
}

void GetQueryFiltersParams::setIsAiring(bool newIsAiring)  {
	m_isAiring = newIsAiring;
}

bool GetQueryFiltersParams::isAiringNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isAiring.has_value();
}

void GetQueryFiltersParams::setIsAiringNull() {
	m_isAiring = std::nullopt;
}


const bool &GetQueryFiltersParams::isKids() const {
	return m_isKids.value();
}

void GetQueryFiltersParams::setIsKids(bool newIsKids)  {
	m_isKids = newIsKids;
}

bool GetQueryFiltersParams::isKidsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isKids.has_value();
}

void GetQueryFiltersParams::setIsKidsNull() {
	m_isKids = std::nullopt;
}


const bool &GetQueryFiltersParams::isMovie() const {
	return m_isMovie.value();
}

void GetQueryFiltersParams::setIsMovie(bool newIsMovie)  {
	m_isMovie = newIsMovie;
}

bool GetQueryFiltersParams::isMovieNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isMovie.has_value();
}

void GetQueryFiltersParams::setIsMovieNull() {
	m_isMovie = std::nullopt;
}


const bool &GetQueryFiltersParams::isNews() const {
	return m_isNews.value();
}

void GetQueryFiltersParams::setIsNews(bool newIsNews)  {
	m_isNews = newIsNews;
}

bool GetQueryFiltersParams::isNewsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isNews.has_value();
}

void GetQueryFiltersParams::setIsNewsNull() {
	m_isNews = std::nullopt;
}


const bool &GetQueryFiltersParams::isSeries() const {
	return m_isSeries.value();
}

void GetQueryFiltersParams::setIsSeries(bool newIsSeries)  {
	m_isSeries = newIsSeries;
}

bool GetQueryFiltersParams::isSeriesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSeries.has_value();
}

void GetQueryFiltersParams::setIsSeriesNull() {
	m_isSeries = std::nullopt;
}


const bool &GetQueryFiltersParams::isSports() const {
	return m_isSports.value();
}

void GetQueryFiltersParams::setIsSports(bool newIsSports)  {
	m_isSports = newIsSports;
}

bool GetQueryFiltersParams::isSportsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_isSports.has_value();
}

void GetQueryFiltersParams::setIsSportsNull() {
	m_isSports = std::nullopt;
}


const QString &GetQueryFiltersParams::parentId() const {
	return m_parentId;
}

void GetQueryFiltersParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetQueryFiltersParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetQueryFiltersParams::setParentIdNull() {
	m_parentId.clear();
}


const bool &GetQueryFiltersParams::recursive() const {
	return m_recursive.value();
}

void GetQueryFiltersParams::setRecursive(bool newRecursive)  {
	m_recursive = newRecursive;
}

bool GetQueryFiltersParams::recursiveNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_recursive.has_value();
}

void GetQueryFiltersParams::setRecursiveNull() {
	m_recursive = std::nullopt;
}


const QString &GetQueryFiltersParams::userId() const {
	return m_userId;
}

void GetQueryFiltersParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetQueryFiltersParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetQueryFiltersParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
