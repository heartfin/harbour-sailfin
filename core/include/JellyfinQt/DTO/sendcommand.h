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

#ifndef JELLYFIN_DTO_SENDCOMMAND_H
#define JELLYFIN_DTO_SENDCOMMAND_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QUuid>
#include <optional>

#include "JellyfinQt/DTO/sendcommandtype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class SendCommand {
public:
	explicit SendCommand();
	static SendCommand fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets the group identifier.
	 */
	QUuid groupId() const;
	/**
	* @brief Gets the group identifier.
	*/
	void setGroupId(QUuid newGroupId);
	/**
	 * @brief Gets the playlist identifier of the playing item.
	 */
	QUuid playlistItemId() const;
	/**
	* @brief Gets the playlist identifier of the playing item.
	*/
	void setPlaylistItemId(QUuid newPlaylistItemId);
	/**
	 * @brief Gets or sets the UTC time when to execute the command.
	 */
	QDateTime when() const;
	/**
	* @brief Gets or sets the UTC time when to execute the command.
	*/
	void setWhen(QDateTime newWhen);
	/**
	 * @brief Gets the position ticks.
	 */
	qint64 positionTicks() const;
	/**
	* @brief Gets the position ticks.
	*/
	void setPositionTicks(qint64 newPositionTicks);

	SendCommandType command() const;

	void setCommand(SendCommandType newCommand);
	/**
	 * @brief Gets the UTC time when this command has been emitted.
	 */
	QDateTime emittedAt() const;
	/**
	* @brief Gets the UTC time when this command has been emitted.
	*/
	void setEmittedAt(QDateTime newEmittedAt);

protected:
	QUuid m_groupId;
	QUuid m_playlistItemId;
	QDateTime m_when;
	qint64 m_positionTicks;
	SendCommandType m_command;
	QDateTime m_emittedAt;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_SENDCOMMAND_H
