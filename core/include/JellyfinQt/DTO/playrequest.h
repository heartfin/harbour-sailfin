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
#include <QUuid>
#include <optional>

#include "JellyfinQt/DTO/playcommand.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class PlayRequest {
public:
	explicit PlayRequest();
	static PlayRequest fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the item ids.
	 */
	QList<QUuid> itemIds() const;
	/**
	* @brief Gets or sets the item ids.
	*/
	void setItemIds(QList<QUuid> newItemIds);
	/**
	 * @brief Gets or sets the start position ticks that the first item should be played at.
	 */
	qint64 startPositionTicks() const;
	/**
	* @brief Gets or sets the start position ticks that the first item should be played at.
	*/
	void setStartPositionTicks(qint64 newStartPositionTicks);

	PlayCommand playCommand() const;

	void setPlayCommand(PlayCommand newPlayCommand);
	/**
	 * @brief Gets or sets the controlling user identifier.
	 */
	QUuid controllingUserId() const;
	/**
	* @brief Gets or sets the controlling user identifier.
	*/
	void setControllingUserId(QUuid newControllingUserId);

	qint32 subtitleStreamIndex() const;

	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);

	qint32 audioStreamIndex() const;

	void setAudioStreamIndex(qint32 newAudioStreamIndex);

	QString mediaSourceId() const;

	void setMediaSourceId(QString newMediaSourceId);

	qint32 startIndex() const;

	void setStartIndex(qint32 newStartIndex);

protected:
	QList<QUuid> m_itemIds;
	qint64 m_startPositionTicks;
	PlayCommand m_playCommand;
	QUuid m_controllingUserId;
	qint32 m_subtitleStreamIndex;
	qint32 m_audioStreamIndex;
	QString m_mediaSourceId;
	qint32 m_startIndex;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PLAYREQUEST_H
