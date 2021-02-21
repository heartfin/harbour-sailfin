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

#ifndef JELLYFIN_DTO_TIMERINFODTO_H
#define JELLYFIN_DTO_TIMERINFODTO_H

#include <QDateTime>
#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/keepuntil.h"
#include "JellyfinQt/DTO/recordingstatus.h"

namespace Jellyfin {
namespace DTO {

class BaseItemDto;

class TimerInfoDto : public QObject {
	Q_OBJECT
public:
	explicit TimerInfoDto(QObject *parent = nullptr);
	static TimerInfoDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Id of the recording.
	 */
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
	/**
	 * @brief Gets or sets the server identifier.
	 */
	Q_PROPERTY(QString serverId READ serverId WRITE setServerId NOTIFY serverIdChanged)
	/**
	 * @brief Gets or sets the external identifier.
	 */
	Q_PROPERTY(QString externalId READ externalId WRITE setExternalId NOTIFY externalIdChanged)
	/**
	 * @brief ChannelId of the recording.
	 */
	Q_PROPERTY(QString channelId READ channelId WRITE setChannelId NOTIFY channelIdChanged)
	/**
	 * @brief Gets or sets the external channel identifier.
	 */
	Q_PROPERTY(QString externalChannelId READ externalChannelId WRITE setExternalChannelId NOTIFY externalChannelIdChanged)
	/**
	 * @brief ChannelName of the recording.
	 */
	Q_PROPERTY(QString channelName READ channelName WRITE setChannelName NOTIFY channelNameChanged)
	Q_PROPERTY(QString channelPrimaryImageTag READ channelPrimaryImageTag WRITE setChannelPrimaryImageTag NOTIFY channelPrimaryImageTagChanged)
	/**
	 * @brief Gets or sets the program identifier.
	 */
	Q_PROPERTY(QString programId READ programId WRITE setProgramId NOTIFY programIdChanged)
	/**
	 * @brief Gets or sets the external program identifier.
	 */
	Q_PROPERTY(QString externalProgramId READ externalProgramId WRITE setExternalProgramId NOTIFY externalProgramIdChanged)
	/**
	 * @brief Name of the recording.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Description of the recording.
	 */
	Q_PROPERTY(QString overview READ overview WRITE setOverview NOTIFY overviewChanged)
	/**
	 * @brief The start date of the recording, in UTC.
	 */
	Q_PROPERTY(QDateTime startDate READ startDate WRITE setStartDate NOTIFY startDateChanged)
	/**
	 * @brief The end date of the recording, in UTC.
	 */
	Q_PROPERTY(QDateTime endDate READ endDate WRITE setEndDate NOTIFY endDateChanged)
	/**
	 * @brief Gets or sets the name of the service.
	 */
	Q_PROPERTY(QString serviceName READ serviceName WRITE setServiceName NOTIFY serviceNameChanged)
	/**
	 * @brief Gets or sets the priority.
	 */
	Q_PROPERTY(qint32 priority READ priority WRITE setPriority NOTIFY priorityChanged)
	/**
	 * @brief Gets or sets the pre padding seconds.
	 */
	Q_PROPERTY(qint32 prePaddingSeconds READ prePaddingSeconds WRITE setPrePaddingSeconds NOTIFY prePaddingSecondsChanged)
	/**
	 * @brief Gets or sets the post padding seconds.
	 */
	Q_PROPERTY(qint32 postPaddingSeconds READ postPaddingSeconds WRITE setPostPaddingSeconds NOTIFY postPaddingSecondsChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is pre padding required.
	 */
	Q_PROPERTY(bool isPrePaddingRequired READ isPrePaddingRequired WRITE setIsPrePaddingRequired NOTIFY isPrePaddingRequiredChanged)
	/**
	 * @brief If the item does not have any backdrops, this will hold the Id of the Parent that has one.
	 */
	Q_PROPERTY(QString parentBackdropItemId READ parentBackdropItemId WRITE setParentBackdropItemId NOTIFY parentBackdropItemIdChanged)
	/**
	 * @brief Gets or sets the parent backdrop image tags.
	 */
	Q_PROPERTY(QStringList parentBackdropImageTags READ parentBackdropImageTags WRITE setParentBackdropImageTags NOTIFY parentBackdropImageTagsChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is post padding required.
	 */
	Q_PROPERTY(bool isPostPaddingRequired READ isPostPaddingRequired WRITE setIsPostPaddingRequired NOTIFY isPostPaddingRequiredChanged)
	Q_PROPERTY(KeepUntil keepUntil READ keepUntil WRITE setKeepUntil NOTIFY keepUntilChanged)
	Q_PROPERTY(RecordingStatus status READ status WRITE setStatus NOTIFY statusChanged)
	/**
	 * @brief Gets or sets the series timer identifier.
	 */
	Q_PROPERTY(QString seriesTimerId READ seriesTimerId WRITE setSeriesTimerId NOTIFY seriesTimerIdChanged)
	/**
	 * @brief Gets or sets the external series timer identifier.
	 */
	Q_PROPERTY(QString externalSeriesTimerId READ externalSeriesTimerId WRITE setExternalSeriesTimerId NOTIFY externalSeriesTimerIdChanged)
	/**
	 * @brief Gets or sets the run time ticks.
	 */
	Q_PROPERTY(qint64 runTimeTicks READ runTimeTicks WRITE setRunTimeTicks NOTIFY runTimeTicksChanged)
	Q_PROPERTY(BaseItemDto * programInfo READ programInfo WRITE setProgramInfo NOTIFY programInfoChanged)

	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	QString type() const;
	void setType(QString newType);
	
	QString serverId() const;
	void setServerId(QString newServerId);
	
	QString externalId() const;
	void setExternalId(QString newExternalId);
	
	QString channelId() const;
	void setChannelId(QString newChannelId);
	
	QString externalChannelId() const;
	void setExternalChannelId(QString newExternalChannelId);
	
	QString channelName() const;
	void setChannelName(QString newChannelName);
	
	QString channelPrimaryImageTag() const;
	void setChannelPrimaryImageTag(QString newChannelPrimaryImageTag);
	
	QString programId() const;
	void setProgramId(QString newProgramId);
	
	QString externalProgramId() const;
	void setExternalProgramId(QString newExternalProgramId);
	
	QString name() const;
	void setName(QString newName);
	
	QString overview() const;
	void setOverview(QString newOverview);
	
	QDateTime startDate() const;
	void setStartDate(QDateTime newStartDate);
	
	QDateTime endDate() const;
	void setEndDate(QDateTime newEndDate);
	
	QString serviceName() const;
	void setServiceName(QString newServiceName);
	
	qint32 priority() const;
	void setPriority(qint32 newPriority);
	
	qint32 prePaddingSeconds() const;
	void setPrePaddingSeconds(qint32 newPrePaddingSeconds);
	
	qint32 postPaddingSeconds() const;
	void setPostPaddingSeconds(qint32 newPostPaddingSeconds);
	
	bool isPrePaddingRequired() const;
	void setIsPrePaddingRequired(bool newIsPrePaddingRequired);
	
	QString parentBackdropItemId() const;
	void setParentBackdropItemId(QString newParentBackdropItemId);
	
	QStringList parentBackdropImageTags() const;
	void setParentBackdropImageTags(QStringList newParentBackdropImageTags);
	
	bool isPostPaddingRequired() const;
	void setIsPostPaddingRequired(bool newIsPostPaddingRequired);
	
	KeepUntil keepUntil() const;
	void setKeepUntil(KeepUntil newKeepUntil);
	
	RecordingStatus status() const;
	void setStatus(RecordingStatus newStatus);
	
	QString seriesTimerId() const;
	void setSeriesTimerId(QString newSeriesTimerId);
	
	QString externalSeriesTimerId() const;
	void setExternalSeriesTimerId(QString newExternalSeriesTimerId);
	
	qint64 runTimeTicks() const;
	void setRunTimeTicks(qint64 newRunTimeTicks);
	
	BaseItemDto * programInfo() const;
	void setProgramInfo(BaseItemDto * newProgramInfo);
	
signals:
	void jellyfinIdChanged(QString newJellyfinId);
	void typeChanged(QString newType);
	void serverIdChanged(QString newServerId);
	void externalIdChanged(QString newExternalId);
	void channelIdChanged(QString newChannelId);
	void externalChannelIdChanged(QString newExternalChannelId);
	void channelNameChanged(QString newChannelName);
	void channelPrimaryImageTagChanged(QString newChannelPrimaryImageTag);
	void programIdChanged(QString newProgramId);
	void externalProgramIdChanged(QString newExternalProgramId);
	void nameChanged(QString newName);
	void overviewChanged(QString newOverview);
	void startDateChanged(QDateTime newStartDate);
	void endDateChanged(QDateTime newEndDate);
	void serviceNameChanged(QString newServiceName);
	void priorityChanged(qint32 newPriority);
	void prePaddingSecondsChanged(qint32 newPrePaddingSeconds);
	void postPaddingSecondsChanged(qint32 newPostPaddingSeconds);
	void isPrePaddingRequiredChanged(bool newIsPrePaddingRequired);
	void parentBackdropItemIdChanged(QString newParentBackdropItemId);
	void parentBackdropImageTagsChanged(QStringList newParentBackdropImageTags);
	void isPostPaddingRequiredChanged(bool newIsPostPaddingRequired);
	void keepUntilChanged(KeepUntil newKeepUntil);
	void statusChanged(RecordingStatus newStatus);
	void seriesTimerIdChanged(QString newSeriesTimerId);
	void externalSeriesTimerIdChanged(QString newExternalSeriesTimerId);
	void runTimeTicksChanged(qint64 newRunTimeTicks);
	void programInfoChanged(BaseItemDto * newProgramInfo);
protected:
	QString m_jellyfinId;
	QString m_type;
	QString m_serverId;
	QString m_externalId;
	QString m_channelId;
	QString m_externalChannelId;
	QString m_channelName;
	QString m_channelPrimaryImageTag;
	QString m_programId;
	QString m_externalProgramId;
	QString m_name;
	QString m_overview;
	QDateTime m_startDate;
	QDateTime m_endDate;
	QString m_serviceName;
	qint32 m_priority;
	qint32 m_prePaddingSeconds;
	qint32 m_postPaddingSeconds;
	bool m_isPrePaddingRequired;
	QString m_parentBackdropItemId;
	QStringList m_parentBackdropImageTags;
	bool m_isPostPaddingRequired;
	KeepUntil m_keepUntil;
	RecordingStatus m_status;
	QString m_seriesTimerId;
	QString m_externalSeriesTimerId;
	qint64 m_runTimeTicks;
	BaseItemDto * m_programInfo = nullptr;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_TIMERINFODTO_H
