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

#ifndef JELLYFIN_DTO_GROUPINFODTO_H
#define JELLYFIN_DTO_GROUPINFODTO_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <QUuid>
#include <optional>

#include "JellyfinQt/DTO/groupstatetype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class GroupInfoDto {
public:
	explicit GroupInfoDto();
	static GroupInfoDto fromJson(QJsonObject source);
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
	 * @brief Gets the group name.
	 */
	QString groupName() const;
	/**
	* @brief Gets the group name.
	*/
	void setGroupName(QString newGroupName);

	GroupStateType state() const;

	void setState(GroupStateType newState);
	/**
	 * @brief Gets the participants.
	 */
	QStringList participants() const;
	/**
	* @brief Gets the participants.
	*/
	void setParticipants(QStringList newParticipants);
	/**
	 * @brief Gets the date when this DTO has been created.
	 */
	QDateTime lastUpdatedAt() const;
	/**
	* @brief Gets the date when this DTO has been created.
	*/
	void setLastUpdatedAt(QDateTime newLastUpdatedAt);

protected:
	QUuid m_groupId;
	QString m_groupName;
	GroupStateType m_state;
	QStringList m_participants;
	QDateTime m_lastUpdatedAt;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_GROUPINFODTO_H
