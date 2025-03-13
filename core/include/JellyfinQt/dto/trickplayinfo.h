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

#ifndef JELLYFIN_DTO_TRICKPLAYINFO_H
#define JELLYFIN_DTO_TRICKPLAYINFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class TrickplayInfo {
public:
	TrickplayInfo(	
		qint32 width,			
		qint32 height,			
		qint32 tileWidth,			
		qint32 tileHeight,			
		qint32 thumbnailCount,			
		qint32 interval,			
		qint32 bandwidth		
	);

	TrickplayInfo(const TrickplayInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(TrickplayInfo &other);
	
	static TrickplayInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets width of an individual thumbnail.
	 */
	qint32 width() const;
	/**
	* @brief Gets or sets width of an individual thumbnail.
	*/
	void setWidth(qint32 newWidth);

	/**
	 * @brief Gets or sets height of an individual thumbnail.
	 */
	qint32 height() const;
	/**
	* @brief Gets or sets height of an individual thumbnail.
	*/
	void setHeight(qint32 newHeight);

	/**
	 * @brief Gets or sets amount of thumbnails per row.
	 */
	qint32 tileWidth() const;
	/**
	* @brief Gets or sets amount of thumbnails per row.
	*/
	void setTileWidth(qint32 newTileWidth);

	/**
	 * @brief Gets or sets amount of thumbnails per column.
	 */
	qint32 tileHeight() const;
	/**
	* @brief Gets or sets amount of thumbnails per column.
	*/
	void setTileHeight(qint32 newTileHeight);

	/**
	 * @brief Gets or sets total amount of non-black thumbnails.
	 */
	qint32 thumbnailCount() const;
	/**
	* @brief Gets or sets total amount of non-black thumbnails.
	*/
	void setThumbnailCount(qint32 newThumbnailCount);

	/**
	 * @brief Gets or sets interval in milliseconds between each trickplay thumbnail.
	 */
	qint32 interval() const;
	/**
	* @brief Gets or sets interval in milliseconds between each trickplay thumbnail.
	*/
	void setInterval(qint32 newInterval);

	/**
	 * @brief Gets or sets peak bandwith usage in bits per second.
	 */
	qint32 bandwidth() const;
	/**
	* @brief Gets or sets peak bandwith usage in bits per second.
	*/
	void setBandwidth(qint32 newBandwidth);


protected:
	qint32 m_width;
	qint32 m_height;
	qint32 m_tileWidth;
	qint32 m_tileHeight;
	qint32 m_thumbnailCount;
	qint32 m_interval;
	qint32 m_bandwidth;

private:
	// Private constructor which generates an invalid object, for use withing TrickplayInfo::fromJson();
	TrickplayInfo();
};


} // NS DTO

namespace Support {

using TrickplayInfo = Jellyfin::DTO::TrickplayInfo;

template <>
TrickplayInfo fromJsonValue(const QJsonValue &source, convertType<TrickplayInfo>);

template<>
QJsonValue toJsonValue(const TrickplayInfo &source, convertType<TrickplayInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_TRICKPLAYINFO_H
