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

#include "JellyfinQt/loader/getmovierecommendationsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetMovieRecommendationsParams

const qint32 &GetMovieRecommendationsParams::categoryLimit() const {
	return m_categoryLimit.value();
}

void GetMovieRecommendationsParams::setCategoryLimit(qint32 newCategoryLimit)  {
	m_categoryLimit = newCategoryLimit;
}

bool GetMovieRecommendationsParams::categoryLimitNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_categoryLimit.has_value();
}

void GetMovieRecommendationsParams::setCategoryLimitNull() {
	m_categoryLimit = std::nullopt;
}


const QList<ItemFields> &GetMovieRecommendationsParams::fields() const {
	return m_fields;
}

void GetMovieRecommendationsParams::setFields(QList<ItemFields> newFields)  {
	m_fields = newFields;
}

bool GetMovieRecommendationsParams::fieldsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_fields.size() == 0;
}

void GetMovieRecommendationsParams::setFieldsNull() {
	m_fields.clear();
}


const qint32 &GetMovieRecommendationsParams::itemLimit() const {
	return m_itemLimit.value();
}

void GetMovieRecommendationsParams::setItemLimit(qint32 newItemLimit)  {
	m_itemLimit = newItemLimit;
}

bool GetMovieRecommendationsParams::itemLimitNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_itemLimit.has_value();
}

void GetMovieRecommendationsParams::setItemLimitNull() {
	m_itemLimit = std::nullopt;
}


const QString &GetMovieRecommendationsParams::parentId() const {
	return m_parentId;
}

void GetMovieRecommendationsParams::setParentId(QString newParentId)  {
	m_parentId = newParentId;
}

bool GetMovieRecommendationsParams::parentIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_parentId.isNull();
}

void GetMovieRecommendationsParams::setParentIdNull() {
	m_parentId.clear();
}


const QString &GetMovieRecommendationsParams::userId() const {
	return m_userId;
}

void GetMovieRecommendationsParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetMovieRecommendationsParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetMovieRecommendationsParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
