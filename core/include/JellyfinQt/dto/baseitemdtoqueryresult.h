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

#ifndef JELLYFIN_DTO_BASEITEMDTOQUERYRESULT_H
#define JELLYFIN_DTO_BASEITEMDTOQUERYRESULT_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/baseitemdto.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class BaseItemDtoQueryResult {
public:
	BaseItemDtoQueryResult();
	BaseItemDtoQueryResult(const BaseItemDtoQueryResult &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(BaseItemDtoQueryResult &other);
	
	static BaseItemDtoQueryResult fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the items.
	 */
	QList<BaseItemDto> items() const;
	/**
	* @brief Gets or sets the items.
	*/
	void setItems(QList<BaseItemDto> newItems);
	bool itemsNull() const;
	void setItemsNull();

	/**
	 * @brief The total number of records available.
	 */
	qint32 totalRecordCount() const;
	/**
	* @brief The total number of records available.
	*/
	void setTotalRecordCount(qint32 newTotalRecordCount);

	/**
	 * @brief The index of the first record in Items.
	 */
	qint32 startIndex() const;
	/**
	* @brief The index of the first record in Items.
	*/
	void setStartIndex(qint32 newStartIndex);


protected:
	QList<BaseItemDto> m_items;
	qint32 m_totalRecordCount;
	qint32 m_startIndex;
};

} // NS DTO

namespace Support {

using BaseItemDtoQueryResult = Jellyfin::DTO::BaseItemDtoQueryResult;

template <>
BaseItemDtoQueryResult fromJsonValue(const QJsonValue &source, convertType<BaseItemDtoQueryResult>);

template<>
QJsonValue toJsonValue(const BaseItemDtoQueryResult &source, convertType<BaseItemDtoQueryResult>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_BASEITEMDTOQUERYRESULT_H
