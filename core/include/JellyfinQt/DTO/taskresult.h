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

#ifndef JELLYFIN_DTO_TASKRESULT_H
#define JELLYFIN_DTO_TASKRESULT_H

#include <QDateTime>
#include <QJsonObject>
#include <QObject>
#include <QString>

#include "JellyfinQt/DTO/taskcompletionstatus.h"

namespace Jellyfin {
namespace DTO {

class TaskResult : public QObject {
	Q_OBJECT
public:
	explicit TaskResult(QObject *parent = nullptr);
	static TaskResult *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the start time UTC.
	 */
	Q_PROPERTY(QDateTime startTimeUtc READ startTimeUtc WRITE setStartTimeUtc NOTIFY startTimeUtcChanged)
	/**
	 * @brief Gets or sets the end time UTC.
	 */
	Q_PROPERTY(QDateTime endTimeUtc READ endTimeUtc WRITE setEndTimeUtc NOTIFY endTimeUtcChanged)
	Q_PROPERTY(TaskCompletionStatus status READ status WRITE setStatus NOTIFY statusChanged)
	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the key.
	 */
	Q_PROPERTY(QString key READ key WRITE setKey NOTIFY keyChanged)
	/**
	 * @brief Gets or sets the id.
	 */
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	/**
	 * @brief Gets or sets the error message.
	 */
	Q_PROPERTY(QString errorMessage READ errorMessage WRITE setErrorMessage NOTIFY errorMessageChanged)
	/**
	 * @brief Gets or sets the long error message.
	 */
	Q_PROPERTY(QString longErrorMessage READ longErrorMessage WRITE setLongErrorMessage NOTIFY longErrorMessageChanged)

	QDateTime startTimeUtc() const;
	void setStartTimeUtc(QDateTime newStartTimeUtc);
	
	QDateTime endTimeUtc() const;
	void setEndTimeUtc(QDateTime newEndTimeUtc);
	
	TaskCompletionStatus status() const;
	void setStatus(TaskCompletionStatus newStatus);
	
	QString name() const;
	void setName(QString newName);
	
	QString key() const;
	void setKey(QString newKey);
	
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	QString errorMessage() const;
	void setErrorMessage(QString newErrorMessage);
	
	QString longErrorMessage() const;
	void setLongErrorMessage(QString newLongErrorMessage);
	
signals:
	void startTimeUtcChanged(QDateTime newStartTimeUtc);
	void endTimeUtcChanged(QDateTime newEndTimeUtc);
	void statusChanged(TaskCompletionStatus newStatus);
	void nameChanged(QString newName);
	void keyChanged(QString newKey);
	void jellyfinIdChanged(QString newJellyfinId);
	void errorMessageChanged(QString newErrorMessage);
	void longErrorMessageChanged(QString newLongErrorMessage);
protected:
	QDateTime m_startTimeUtc;
	QDateTime m_endTimeUtc;
	TaskCompletionStatus m_status;
	QString m_name;
	QString m_key;
	QString m_jellyfinId;
	QString m_errorMessage;
	QString m_longErrorMessage;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_TASKRESULT_H
