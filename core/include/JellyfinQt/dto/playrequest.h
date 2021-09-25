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

#ifndef JELLYFIN_DTO_PLAYREQUEST_H
#define JELLYFIN_DTO_PLAYREQUEST_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/playcommand.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class PlayRequest {
public:
	PlayRequest(					
		PlayCommand playCommand,			
		QString controllingUserId										
	);

	PlayRequest(const PlayRequest &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(PlayRequest &other);
	
	static PlayRequest fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the item ids.
	 */
	QStringList itemIds() const;
	/**
	* @brief Gets or sets the item ids.
	*/
	void setItemIds(QStringList newItemIds);
	bool itemIdsNull() const;
	void setItemIdsNull();

	/**
	 * @brief Gets or sets the start position ticks that the first item should be played at.
	 */
	std::optional<qint64> startPositionTicks() const;
	/**
	* @brief Gets or sets the start position ticks that the first item should be played at.
	*/
	void setStartPositionTicks(std::optional<qint64> newStartPositionTicks);
	bool startPositionTicksNull() const;
	void setStartPositionTicksNull();


	PlayCommand playCommand() const;

	void setPlayCommand(PlayCommand newPlayCommand);

	/**
	 * @brief Gets or sets the controlling user identifier.
	 */
	QString controllingUserId() const;
	/**
	* @brief Gets or sets the controlling user identifier.
	*/
	void setControllingUserId(QString newControllingUserId);


	std::optional<qint32> subtitleStreamIndex() const;

	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();


	std::optional<qint32> audioStreamIndex() const;

	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();


	QString mediaSourceId() const;

	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();


	std::optional<qint32> startIndex() const;

	void setStartIndex(std::optional<qint32> newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();


protected:
	QStringList m_itemIds;
	std::optional<qint64> m_startPositionTicks = std::nullopt;
	PlayCommand m_playCommand;
	QString m_controllingUserId;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_startIndex = std::nullopt;

private:
	// Private constructor which generates an invalid object, for use withing PlayRequest::fromJson();
	PlayRequest();
};


} // NS DTO

namespace Support {

using PlayRequest = Jellyfin::DTO::PlayRequest;

template <>
PlayRequest fromJsonValue(const QJsonValue &source, convertType<PlayRequest>);

template<>
QJsonValue toJsonValue(const PlayRequest &source, convertType<PlayRequest>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_PLAYREQUEST_H
