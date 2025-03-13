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

#ifndef JELLYFIN_DTO_SERIESTIMERINFODTOQUERYRESULT_H
#define JELLYFIN_DTO_SERIESTIMERINFODTOQUERYRESULT_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/seriestimerinfodto.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class SeriesTimerInfoDtoQueryResult {
public:
	SeriesTimerInfoDtoQueryResult(	
		QList<SeriesTimerInfoDto> items,			
		qint32 totalRecordCount,			
		qint32 startIndex		
	);

	SeriesTimerInfoDtoQueryResult(const SeriesTimerInfoDtoQueryResult &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(SeriesTimerInfoDtoQueryResult &other);
	
	static SeriesTimerInfoDtoQueryResult fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the items.
	 */
	QList<SeriesTimerInfoDto> items() const;
	/**
	* @brief Gets or sets the items.
	*/
	void setItems(QList<SeriesTimerInfoDto> newItems);

	/**
	 * @brief Gets or sets the total number of records available.
	 */
	qint32 totalRecordCount() const;
	/**
	* @brief Gets or sets the total number of records available.
	*/
	void setTotalRecordCount(qint32 newTotalRecordCount);

	/**
	 * @brief Gets or sets the index of the first record in Items.
	 */
	qint32 startIndex() const;
	/**
	* @brief Gets or sets the index of the first record in Items.
	*/
	void setStartIndex(qint32 newStartIndex);


protected:
	QList<SeriesTimerInfoDto> m_items;
	qint32 m_totalRecordCount;
	qint32 m_startIndex;

private:
	// Private constructor which generates an invalid object, for use withing SeriesTimerInfoDtoQueryResult::fromJson();
	SeriesTimerInfoDtoQueryResult();
};


} // NS DTO

namespace Support {

using SeriesTimerInfoDtoQueryResult = Jellyfin::DTO::SeriesTimerInfoDtoQueryResult;

template <>
SeriesTimerInfoDtoQueryResult fromJsonValue(const QJsonValue &source, convertType<SeriesTimerInfoDtoQueryResult>);

template<>
QJsonValue toJsonValue(const SeriesTimerInfoDtoQueryResult &source, convertType<SeriesTimerInfoDtoQueryResult>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_SERIESTIMERINFODTOQUERYRESULT_H
