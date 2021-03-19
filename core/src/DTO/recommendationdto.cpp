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

#include <JellyfinQt/DTO/recommendationdto.h>

#include <JellyfinQt/DTO/recommendationtype.h>

namespace Jellyfin {
namespace DTO {

RecommendationDto::RecommendationDto(QObject *parent) : QObject(parent) {}

RecommendationDto *RecommendationDto::fromJSON(QJsonObject source, QObject *parent) {
	RecommendationDto *instance = new RecommendationDto(parent);
	instance->updateFromJSON(source);
	return instance;
}

void RecommendationDto::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject RecommendationDto::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QList<BaseItemDto *> RecommendationDto::items() const { return m_items; }
void RecommendationDto::setItems(QList<BaseItemDto *> newItems) {
	m_items = newItems;
	emit itemsChanged(newItems);
}

RecommendationType RecommendationDto::recommendationType() const { return m_recommendationType; }
void RecommendationDto::setRecommendationType(RecommendationType newRecommendationType) {
	m_recommendationType = newRecommendationType;
	emit recommendationTypeChanged(newRecommendationType);
}

QString RecommendationDto::baselineItemName() const { return m_baselineItemName; }
void RecommendationDto::setBaselineItemName(QString newBaselineItemName) {
	m_baselineItemName = newBaselineItemName;
	emit baselineItemNameChanged(newBaselineItemName);
}

QString RecommendationDto::categoryId() const { return m_categoryId; }
void RecommendationDto::setCategoryId(QString newCategoryId) {
	m_categoryId = newCategoryId;
	emit categoryIdChanged(newCategoryId);
}


} // NS Jellyfin
} // NS DTO
