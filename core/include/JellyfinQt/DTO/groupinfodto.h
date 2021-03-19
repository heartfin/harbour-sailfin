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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/groupstatetype.h"

namespace Jellyfin {
namespace DTO {

class GroupInfoDto : public QObject {
	Q_OBJECT
public:
	explicit GroupInfoDto(QObject *parent = nullptr);
	static GroupInfoDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets the group identifier.
	 */
	Q_PROPERTY(QString groupId READ groupId WRITE setGroupId NOTIFY groupIdChanged)
	/**
	 * @brief Gets the group name.
	 */
	Q_PROPERTY(QString groupName READ groupName WRITE setGroupName NOTIFY groupNameChanged)
	Q_PROPERTY(GroupStateType state READ state WRITE setState NOTIFY stateChanged)
	/**
	 * @brief Gets the participants.
	 */
	Q_PROPERTY(QStringList participants READ participants WRITE setParticipants NOTIFY participantsChanged)
	/**
	 * @brief Gets the date when this DTO has been created.
	 */
	Q_PROPERTY(QDateTime lastUpdatedAt READ lastUpdatedAt WRITE setLastUpdatedAt NOTIFY lastUpdatedAtChanged)

	QString groupId() const;
	void setGroupId(QString newGroupId);
	
	QString groupName() const;
	void setGroupName(QString newGroupName);
	
	GroupStateType state() const;
	void setState(GroupStateType newState);
	
	QStringList participants() const;
	void setParticipants(QStringList newParticipants);
	
	QDateTime lastUpdatedAt() const;
	void setLastUpdatedAt(QDateTime newLastUpdatedAt);
	
signals:
	void groupIdChanged(QString newGroupId);
	void groupNameChanged(QString newGroupName);
	void stateChanged(GroupStateType newState);
	void participantsChanged(QStringList newParticipants);
	void lastUpdatedAtChanged(QDateTime newLastUpdatedAt);
protected:
	QString m_groupId;
	QString m_groupName;
	GroupStateType m_state;
	QStringList m_participants;
	QDateTime m_lastUpdatedAt;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_GROUPINFODTO_H
