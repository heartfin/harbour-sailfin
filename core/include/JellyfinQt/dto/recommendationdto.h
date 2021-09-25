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

#ifndef JELLYFIN_DTO_RECOMMENDATIONDTO_H
#define JELLYFIN_DTO_RECOMMENDATIONDTO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/baseitemdto.h"
#include "JellyfinQt/dto/recommendationtype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class RecommendationDto {
public:
	RecommendationDto(			
		RecommendationType recommendationType,					
		QString categoryId		
	);

	RecommendationDto(const RecommendationDto &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(RecommendationDto &other);
	
	static RecommendationDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	QList<BaseItemDto> items() const;

	void setItems(QList<BaseItemDto> newItems);
	bool itemsNull() const;
	void setItemsNull();


	RecommendationType recommendationType() const;

	void setRecommendationType(RecommendationType newRecommendationType);


	QString baselineItemName() const;

	void setBaselineItemName(QString newBaselineItemName);
	bool baselineItemNameNull() const;
	void setBaselineItemNameNull();


	QString categoryId() const;

	void setCategoryId(QString newCategoryId);


protected:
	QList<BaseItemDto> m_items;
	RecommendationType m_recommendationType;
	QString m_baselineItemName;
	QString m_categoryId;

private:
	// Private constructor which generates an invalid object, for use withing RecommendationDto::fromJson();
	RecommendationDto();
};


} // NS DTO

namespace Support {

using RecommendationDto = Jellyfin::DTO::RecommendationDto;

template <>
RecommendationDto fromJsonValue(const QJsonValue &source, convertType<RecommendationDto>);

template<>
QJsonValue toJsonValue(const RecommendationDto &source, convertType<RecommendationDto>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_RECOMMENDATIONDTO_H
