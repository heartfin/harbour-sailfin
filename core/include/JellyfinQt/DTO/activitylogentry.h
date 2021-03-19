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

#ifndef JELLYFIN_DTO_ACTIVITYLOGENTRY_H
#define JELLYFIN_DTO_ACTIVITYLOGENTRY_H

#include <QDateTime>
#include <QJsonObject>
#include <QObject>
#include <QString>

#include "JellyfinQt/DTO/loglevel.h"

namespace Jellyfin {
namespace DTO {

class ActivityLogEntry : public QObject {
	Q_OBJECT
public:
	explicit ActivityLogEntry(QObject *parent = nullptr);
	static ActivityLogEntry *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the identifier.
	 */
	Q_PROPERTY(qint64 jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the overview.
	 */
	Q_PROPERTY(QString overview READ overview WRITE setOverview NOTIFY overviewChanged)
	/**
	 * @brief Gets or sets the short overview.
	 */
	Q_PROPERTY(QString shortOverview READ shortOverview WRITE setShortOverview NOTIFY shortOverviewChanged)
	/**
	 * @brief Gets or sets the type.
	 */
	Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
	/**
	 * @brief Gets or sets the item identifier.
	 */
	Q_PROPERTY(QString itemId READ itemId WRITE setItemId NOTIFY itemIdChanged)
	/**
	 * @brief Gets or sets the date.
	 */
	Q_PROPERTY(QDateTime date READ date WRITE setDate NOTIFY dateChanged)
	/**
	 * @brief Gets or sets the user identifier.
	 */
	Q_PROPERTY(QString userId READ userId WRITE setUserId NOTIFY userIdChanged)
	/**
	 * @brief Gets or sets the user primary image tag.
	 */
	Q_PROPERTY(QString userPrimaryImageTag READ userPrimaryImageTag WRITE setUserPrimaryImageTag NOTIFY userPrimaryImageTagChanged)
	Q_PROPERTY(LogLevel severity READ severity WRITE setSeverity NOTIFY severityChanged)

	qint64 jellyfinId() const;
	void setJellyfinId(qint64 newJellyfinId);
	
	QString name() const;
	void setName(QString newName);
	
	QString overview() const;
	void setOverview(QString newOverview);
	
	QString shortOverview() const;
	void setShortOverview(QString newShortOverview);
	
	QString type() const;
	void setType(QString newType);
	
	QString itemId() const;
	void setItemId(QString newItemId);
	
	QDateTime date() const;
	void setDate(QDateTime newDate);
	
	QString userId() const;
	void setUserId(QString newUserId);
	
	QString userPrimaryImageTag() const;
	void setUserPrimaryImageTag(QString newUserPrimaryImageTag);
	
	LogLevel severity() const;
	void setSeverity(LogLevel newSeverity);
	
signals:
	void jellyfinIdChanged(qint64 newJellyfinId);
	void nameChanged(QString newName);
	void overviewChanged(QString newOverview);
	void shortOverviewChanged(QString newShortOverview);
	void typeChanged(QString newType);
	void itemIdChanged(QString newItemId);
	void dateChanged(QDateTime newDate);
	void userIdChanged(QString newUserId);
	void userPrimaryImageTagChanged(QString newUserPrimaryImageTag);
	void severityChanged(LogLevel newSeverity);
protected:
	qint64 m_jellyfinId;
	QString m_name;
	QString m_overview;
	QString m_shortOverview;
	QString m_type;
	QString m_itemId;
	QDateTime m_date;
	QString m_userId;
	QString m_userPrimaryImageTag;
	LogLevel m_severity;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_ACTIVITYLOGENTRY_H
