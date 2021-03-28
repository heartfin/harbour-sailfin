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

#include <JellyfinQt/dto/recommendationdto.h>

namespace Jellyfin {
namespace DTO {

RecommendationDto::RecommendationDto() {}

RecommendationDto::RecommendationDto(const RecommendationDto &other) :

	m_items(other.m_items),
	m_recommendationType(other.m_recommendationType),
	m_baselineItemName(other.m_baselineItemName),
	m_categoryId(other.m_categoryId){}


void RecommendationDto::replaceData(RecommendationDto &other) {
	m_items = other.m_items;
	m_recommendationType = other.m_recommendationType;
	m_baselineItemName = other.m_baselineItemName;
	m_categoryId = other.m_categoryId;
}

RecommendationDto RecommendationDto::fromJson(QJsonObject source) {
	RecommendationDto instance;
	instance.setFromJson(source);
	return instance;
}


void RecommendationDto::setFromJson(QJsonObject source) {
	m_items = Jellyfin::Support::fromJsonValue<QList<BaseItemDto>>(source["Items"]);
	m_recommendationType = Jellyfin::Support::fromJsonValue<RecommendationType>(source["RecommendationType"]);
	m_baselineItemName = Jellyfin::Support::fromJsonValue<QString>(source["BaselineItemName"]);
	m_categoryId = Jellyfin::Support::fromJsonValue<QString>(source["CategoryId"]);

}
	
QJsonObject RecommendationDto::toJson() const {
	QJsonObject result;
	result["Items"] = Jellyfin::Support::toJsonValue<QList<BaseItemDto>>(m_items);
	result["RecommendationType"] = Jellyfin::Support::toJsonValue<RecommendationType>(m_recommendationType);
	result["BaselineItemName"] = Jellyfin::Support::toJsonValue<QString>(m_baselineItemName);
	result["CategoryId"] = Jellyfin::Support::toJsonValue<QString>(m_categoryId);

	return result;
}

QList<BaseItemDto> RecommendationDto::items() const { return m_items; }

void RecommendationDto::setItems(QList<BaseItemDto> newItems) {
	m_items = newItems;
}
bool RecommendationDto::itemsNull() const {
	return m_items.size() == 0;
}

void RecommendationDto::setItemsNull() {
	m_items.clear();

}
RecommendationType RecommendationDto::recommendationType() const { return m_recommendationType; }

void RecommendationDto::setRecommendationType(RecommendationType newRecommendationType) {
	m_recommendationType = newRecommendationType;
}

QString RecommendationDto::baselineItemName() const { return m_baselineItemName; }

void RecommendationDto::setBaselineItemName(QString newBaselineItemName) {
	m_baselineItemName = newBaselineItemName;
}
bool RecommendationDto::baselineItemNameNull() const {
	return m_baselineItemName.isNull();
}

void RecommendationDto::setBaselineItemNameNull() {
	m_baselineItemName.clear();

}
QString RecommendationDto::categoryId() const { return m_categoryId; }

void RecommendationDto::setCategoryId(QString newCategoryId) {
	m_categoryId = newCategoryId;
}


} // NS DTO

namespace Support {

using RecommendationDto = Jellyfin::DTO::RecommendationDto;

template <>
RecommendationDto fromJsonValue(const QJsonValue &source, convertType<RecommendationDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return RecommendationDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const RecommendationDto &source, convertType<RecommendationDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
