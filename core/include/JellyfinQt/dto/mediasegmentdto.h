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

#ifndef JELLYFIN_DTO_MEDIASEGMENTDTO_H
#define JELLYFIN_DTO_MEDIASEGMENTDTO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/dto/mediasegmenttype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class MediaSegmentDto {
public:
	MediaSegmentDto(	
		QString jellyfinId,			
		QString itemId,			
		MediaSegmentType type,			
		qint64 startTicks,			
		qint64 endTicks		
	);

	MediaSegmentDto(const MediaSegmentDto &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(MediaSegmentDto &other);
	
	static MediaSegmentDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the id of the media segment.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets or sets the id of the media segment.
	*/
	void setJellyfinId(QString newJellyfinId);

	/**
	 * @brief Gets or sets the id of the associated item.
	 */
	QString itemId() const;
	/**
	* @brief Gets or sets the id of the associated item.
	*/
	void setItemId(QString newItemId);


	MediaSegmentType type() const;

	void setType(MediaSegmentType newType);

	/**
	 * @brief Gets or sets the start of the segment.
	 */
	qint64 startTicks() const;
	/**
	* @brief Gets or sets the start of the segment.
	*/
	void setStartTicks(qint64 newStartTicks);

	/**
	 * @brief Gets or sets the end of the segment.
	 */
	qint64 endTicks() const;
	/**
	* @brief Gets or sets the end of the segment.
	*/
	void setEndTicks(qint64 newEndTicks);


protected:
	QString m_jellyfinId;
	QString m_itemId;
	MediaSegmentType m_type;
	qint64 m_startTicks;
	qint64 m_endTicks;

private:
	// Private constructor which generates an invalid object, for use withing MediaSegmentDto::fromJson();
	MediaSegmentDto();
};


} // NS DTO

namespace Support {

using MediaSegmentDto = Jellyfin::DTO::MediaSegmentDto;

template <>
MediaSegmentDto fromJsonValue(const QJsonValue &source, convertType<MediaSegmentDto>);

template<>
QJsonValue toJsonValue(const MediaSegmentDto &source, convertType<MediaSegmentDto>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_MEDIASEGMENTDTO_H
