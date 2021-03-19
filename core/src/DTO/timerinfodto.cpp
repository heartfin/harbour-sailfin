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

#include <JellyfinQt/DTO/timerinfodto.h>

#include <JellyfinQt/DTO/keepuntil.h>
#include <JellyfinQt/DTO/recordingstatus.h>

namespace Jellyfin {
namespace DTO {

TimerInfoDto::TimerInfoDto(QObject *parent) : QObject(parent) {}

TimerInfoDto *TimerInfoDto::fromJSON(QJsonObject source, QObject *parent) {
	TimerInfoDto *instance = new TimerInfoDto(parent);
	instance->updateFromJSON(source);
	return instance;
}

void TimerInfoDto::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject TimerInfoDto::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString TimerInfoDto::jellyfinId() const { return m_jellyfinId; }
void TimerInfoDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

QString TimerInfoDto::type() const { return m_type; }
void TimerInfoDto::setType(QString newType) {
	m_type = newType;
	emit typeChanged(newType);
}

QString TimerInfoDto::serverId() const { return m_serverId; }
void TimerInfoDto::setServerId(QString newServerId) {
	m_serverId = newServerId;
	emit serverIdChanged(newServerId);
}

QString TimerInfoDto::externalId() const { return m_externalId; }
void TimerInfoDto::setExternalId(QString newExternalId) {
	m_externalId = newExternalId;
	emit externalIdChanged(newExternalId);
}

QString TimerInfoDto::channelId() const { return m_channelId; }
void TimerInfoDto::setChannelId(QString newChannelId) {
	m_channelId = newChannelId;
	emit channelIdChanged(newChannelId);
}

QString TimerInfoDto::externalChannelId() const { return m_externalChannelId; }
void TimerInfoDto::setExternalChannelId(QString newExternalChannelId) {
	m_externalChannelId = newExternalChannelId;
	emit externalChannelIdChanged(newExternalChannelId);
}

QString TimerInfoDto::channelName() const { return m_channelName; }
void TimerInfoDto::setChannelName(QString newChannelName) {
	m_channelName = newChannelName;
	emit channelNameChanged(newChannelName);
}

QString TimerInfoDto::channelPrimaryImageTag() const { return m_channelPrimaryImageTag; }
void TimerInfoDto::setChannelPrimaryImageTag(QString newChannelPrimaryImageTag) {
	m_channelPrimaryImageTag = newChannelPrimaryImageTag;
	emit channelPrimaryImageTagChanged(newChannelPrimaryImageTag);
}

QString TimerInfoDto::programId() const { return m_programId; }
void TimerInfoDto::setProgramId(QString newProgramId) {
	m_programId = newProgramId;
	emit programIdChanged(newProgramId);
}

QString TimerInfoDto::externalProgramId() const { return m_externalProgramId; }
void TimerInfoDto::setExternalProgramId(QString newExternalProgramId) {
	m_externalProgramId = newExternalProgramId;
	emit externalProgramIdChanged(newExternalProgramId);
}

QString TimerInfoDto::name() const { return m_name; }
void TimerInfoDto::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString TimerInfoDto::overview() const { return m_overview; }
void TimerInfoDto::setOverview(QString newOverview) {
	m_overview = newOverview;
	emit overviewChanged(newOverview);
}

QDateTime TimerInfoDto::startDate() const { return m_startDate; }
void TimerInfoDto::setStartDate(QDateTime newStartDate) {
	m_startDate = newStartDate;
	emit startDateChanged(newStartDate);
}

QDateTime TimerInfoDto::endDate() const { return m_endDate; }
void TimerInfoDto::setEndDate(QDateTime newEndDate) {
	m_endDate = newEndDate;
	emit endDateChanged(newEndDate);
}

QString TimerInfoDto::serviceName() const { return m_serviceName; }
void TimerInfoDto::setServiceName(QString newServiceName) {
	m_serviceName = newServiceName;
	emit serviceNameChanged(newServiceName);
}

qint32 TimerInfoDto::priority() const { return m_priority; }
void TimerInfoDto::setPriority(qint32 newPriority) {
	m_priority = newPriority;
	emit priorityChanged(newPriority);
}

qint32 TimerInfoDto::prePaddingSeconds() const { return m_prePaddingSeconds; }
void TimerInfoDto::setPrePaddingSeconds(qint32 newPrePaddingSeconds) {
	m_prePaddingSeconds = newPrePaddingSeconds;
	emit prePaddingSecondsChanged(newPrePaddingSeconds);
}

qint32 TimerInfoDto::postPaddingSeconds() const { return m_postPaddingSeconds; }
void TimerInfoDto::setPostPaddingSeconds(qint32 newPostPaddingSeconds) {
	m_postPaddingSeconds = newPostPaddingSeconds;
	emit postPaddingSecondsChanged(newPostPaddingSeconds);
}

bool TimerInfoDto::isPrePaddingRequired() const { return m_isPrePaddingRequired; }
void TimerInfoDto::setIsPrePaddingRequired(bool newIsPrePaddingRequired) {
	m_isPrePaddingRequired = newIsPrePaddingRequired;
	emit isPrePaddingRequiredChanged(newIsPrePaddingRequired);
}

QString TimerInfoDto::parentBackdropItemId() const { return m_parentBackdropItemId; }
void TimerInfoDto::setParentBackdropItemId(QString newParentBackdropItemId) {
	m_parentBackdropItemId = newParentBackdropItemId;
	emit parentBackdropItemIdChanged(newParentBackdropItemId);
}

QStringList TimerInfoDto::parentBackdropImageTags() const { return m_parentBackdropImageTags; }
void TimerInfoDto::setParentBackdropImageTags(QStringList newParentBackdropImageTags) {
	m_parentBackdropImageTags = newParentBackdropImageTags;
	emit parentBackdropImageTagsChanged(newParentBackdropImageTags);
}

bool TimerInfoDto::isPostPaddingRequired() const { return m_isPostPaddingRequired; }
void TimerInfoDto::setIsPostPaddingRequired(bool newIsPostPaddingRequired) {
	m_isPostPaddingRequired = newIsPostPaddingRequired;
	emit isPostPaddingRequiredChanged(newIsPostPaddingRequired);
}

KeepUntil TimerInfoDto::keepUntil() const { return m_keepUntil; }
void TimerInfoDto::setKeepUntil(KeepUntil newKeepUntil) {
	m_keepUntil = newKeepUntil;
	emit keepUntilChanged(newKeepUntil);
}

RecordingStatus TimerInfoDto::status() const { return m_status; }
void TimerInfoDto::setStatus(RecordingStatus newStatus) {
	m_status = newStatus;
	emit statusChanged(newStatus);
}

QString TimerInfoDto::seriesTimerId() const { return m_seriesTimerId; }
void TimerInfoDto::setSeriesTimerId(QString newSeriesTimerId) {
	m_seriesTimerId = newSeriesTimerId;
	emit seriesTimerIdChanged(newSeriesTimerId);
}

QString TimerInfoDto::externalSeriesTimerId() const { return m_externalSeriesTimerId; }
void TimerInfoDto::setExternalSeriesTimerId(QString newExternalSeriesTimerId) {
	m_externalSeriesTimerId = newExternalSeriesTimerId;
	emit externalSeriesTimerIdChanged(newExternalSeriesTimerId);
}

qint64 TimerInfoDto::runTimeTicks() const { return m_runTimeTicks; }
void TimerInfoDto::setRunTimeTicks(qint64 newRunTimeTicks) {
	m_runTimeTicks = newRunTimeTicks;
	emit runTimeTicksChanged(newRunTimeTicks);
}

BaseItemDto * TimerInfoDto::programInfo() const { return m_programInfo; }
void TimerInfoDto::setProgramInfo(BaseItemDto * newProgramInfo) {
	m_programInfo = newProgramInfo;
	emit programInfoChanged(newProgramInfo);
}


} // NS Jellyfin
} // NS DTO
