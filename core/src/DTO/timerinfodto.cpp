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

namespace Jellyfin {
namespace DTO {

TimerInfoDto::TimerInfoDto(QObject *parent) {}

TimerInfoDto TimerInfoDto::fromJson(QJsonObject source) {TimerInfoDto instance;
	instance->setFromJson(source, false);
	return instance;
}


void TimerInfoDto::setFromJson(QJsonObject source) {
	m_jellyfinId = fromJsonValue<QString>(source["Id"]);
	m_type = fromJsonValue<QString>(source["Type"]);
	m_serverId = fromJsonValue<QString>(source["ServerId"]);
	m_externalId = fromJsonValue<QString>(source["ExternalId"]);
	m_channelId = fromJsonValue<QUuid>(source["ChannelId"]);
	m_externalChannelId = fromJsonValue<QString>(source["ExternalChannelId"]);
	m_channelName = fromJsonValue<QString>(source["ChannelName"]);
	m_channelPrimaryImageTag = fromJsonValue<QString>(source["ChannelPrimaryImageTag"]);
	m_programId = fromJsonValue<QString>(source["ProgramId"]);
	m_externalProgramId = fromJsonValue<QString>(source["ExternalProgramId"]);
	m_name = fromJsonValue<QString>(source["Name"]);
	m_overview = fromJsonValue<QString>(source["Overview"]);
	m_startDate = fromJsonValue<QDateTime>(source["StartDate"]);
	m_endDate = fromJsonValue<QDateTime>(source["EndDate"]);
	m_serviceName = fromJsonValue<QString>(source["ServiceName"]);
	m_priority = fromJsonValue<qint32>(source["Priority"]);
	m_prePaddingSeconds = fromJsonValue<qint32>(source["PrePaddingSeconds"]);
	m_postPaddingSeconds = fromJsonValue<qint32>(source["PostPaddingSeconds"]);
	m_isPrePaddingRequired = fromJsonValue<bool>(source["IsPrePaddingRequired"]);
	m_parentBackdropItemId = fromJsonValue<QString>(source["ParentBackdropItemId"]);
	m_parentBackdropImageTags = fromJsonValue<QStringList>(source["ParentBackdropImageTags"]);
	m_isPostPaddingRequired = fromJsonValue<bool>(source["IsPostPaddingRequired"]);
	m_keepUntil = fromJsonValue<KeepUntil>(source["KeepUntil"]);
	m_status = fromJsonValue<RecordingStatus>(source["Status"]);
	m_seriesTimerId = fromJsonValue<QString>(source["SeriesTimerId"]);
	m_externalSeriesTimerId = fromJsonValue<QString>(source["ExternalSeriesTimerId"]);
	m_runTimeTicks = fromJsonValue<qint64>(source["RunTimeTicks"]);
	m_programInfo = fromJsonValue<QSharedPointer<BaseItemDto>>(source["ProgramInfo"]);

}
	
QJsonObject TimerInfoDto::toJson() {
	QJsonObject result;
	result["Id"] = toJsonValue<QString>(m_jellyfinId);
	result["Type"] = toJsonValue<QString>(m_type);
	result["ServerId"] = toJsonValue<QString>(m_serverId);
	result["ExternalId"] = toJsonValue<QString>(m_externalId);
	result["ChannelId"] = toJsonValue<QUuid>(m_channelId);
	result["ExternalChannelId"] = toJsonValue<QString>(m_externalChannelId);
	result["ChannelName"] = toJsonValue<QString>(m_channelName);
	result["ChannelPrimaryImageTag"] = toJsonValue<QString>(m_channelPrimaryImageTag);
	result["ProgramId"] = toJsonValue<QString>(m_programId);
	result["ExternalProgramId"] = toJsonValue<QString>(m_externalProgramId);
	result["Name"] = toJsonValue<QString>(m_name);
	result["Overview"] = toJsonValue<QString>(m_overview);
	result["StartDate"] = toJsonValue<QDateTime>(m_startDate);
	result["EndDate"] = toJsonValue<QDateTime>(m_endDate);
	result["ServiceName"] = toJsonValue<QString>(m_serviceName);
	result["Priority"] = toJsonValue<qint32>(m_priority);
	result["PrePaddingSeconds"] = toJsonValue<qint32>(m_prePaddingSeconds);
	result["PostPaddingSeconds"] = toJsonValue<qint32>(m_postPaddingSeconds);
	result["IsPrePaddingRequired"] = toJsonValue<bool>(m_isPrePaddingRequired);
	result["ParentBackdropItemId"] = toJsonValue<QString>(m_parentBackdropItemId);
	result["ParentBackdropImageTags"] = toJsonValue<QStringList>(m_parentBackdropImageTags);
	result["IsPostPaddingRequired"] = toJsonValue<bool>(m_isPostPaddingRequired);
	result["KeepUntil"] = toJsonValue<KeepUntil>(m_keepUntil);
	result["Status"] = toJsonValue<RecordingStatus>(m_status);
	result["SeriesTimerId"] = toJsonValue<QString>(m_seriesTimerId);
	result["ExternalSeriesTimerId"] = toJsonValue<QString>(m_externalSeriesTimerId);
	result["RunTimeTicks"] = toJsonValue<qint64>(m_runTimeTicks);
	result["ProgramInfo"] = toJsonValue<QSharedPointer<BaseItemDto>>(m_programInfo);

	return result;
}

QString TimerInfoDto::jellyfinId() const { return m_jellyfinId; }

void TimerInfoDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
QString TimerInfoDto::type() const { return m_type; }

void TimerInfoDto::setType(QString newType) {
	m_type = newType;
}
QString TimerInfoDto::serverId() const { return m_serverId; }

void TimerInfoDto::setServerId(QString newServerId) {
	m_serverId = newServerId;
}
QString TimerInfoDto::externalId() const { return m_externalId; }

void TimerInfoDto::setExternalId(QString newExternalId) {
	m_externalId = newExternalId;
}
QUuid TimerInfoDto::channelId() const { return m_channelId; }

void TimerInfoDto::setChannelId(QUuid newChannelId) {
	m_channelId = newChannelId;
}
QString TimerInfoDto::externalChannelId() const { return m_externalChannelId; }

void TimerInfoDto::setExternalChannelId(QString newExternalChannelId) {
	m_externalChannelId = newExternalChannelId;
}
QString TimerInfoDto::channelName() const { return m_channelName; }

void TimerInfoDto::setChannelName(QString newChannelName) {
	m_channelName = newChannelName;
}
QString TimerInfoDto::channelPrimaryImageTag() const { return m_channelPrimaryImageTag; }

void TimerInfoDto::setChannelPrimaryImageTag(QString newChannelPrimaryImageTag) {
	m_channelPrimaryImageTag = newChannelPrimaryImageTag;
}
QString TimerInfoDto::programId() const { return m_programId; }

void TimerInfoDto::setProgramId(QString newProgramId) {
	m_programId = newProgramId;
}
QString TimerInfoDto::externalProgramId() const { return m_externalProgramId; }

void TimerInfoDto::setExternalProgramId(QString newExternalProgramId) {
	m_externalProgramId = newExternalProgramId;
}
QString TimerInfoDto::name() const { return m_name; }

void TimerInfoDto::setName(QString newName) {
	m_name = newName;
}
QString TimerInfoDto::overview() const { return m_overview; }

void TimerInfoDto::setOverview(QString newOverview) {
	m_overview = newOverview;
}
QDateTime TimerInfoDto::startDate() const { return m_startDate; }

void TimerInfoDto::setStartDate(QDateTime newStartDate) {
	m_startDate = newStartDate;
}
QDateTime TimerInfoDto::endDate() const { return m_endDate; }

void TimerInfoDto::setEndDate(QDateTime newEndDate) {
	m_endDate = newEndDate;
}
QString TimerInfoDto::serviceName() const { return m_serviceName; }

void TimerInfoDto::setServiceName(QString newServiceName) {
	m_serviceName = newServiceName;
}
qint32 TimerInfoDto::priority() const { return m_priority; }

void TimerInfoDto::setPriority(qint32 newPriority) {
	m_priority = newPriority;
}
qint32 TimerInfoDto::prePaddingSeconds() const { return m_prePaddingSeconds; }

void TimerInfoDto::setPrePaddingSeconds(qint32 newPrePaddingSeconds) {
	m_prePaddingSeconds = newPrePaddingSeconds;
}
qint32 TimerInfoDto::postPaddingSeconds() const { return m_postPaddingSeconds; }

void TimerInfoDto::setPostPaddingSeconds(qint32 newPostPaddingSeconds) {
	m_postPaddingSeconds = newPostPaddingSeconds;
}
bool TimerInfoDto::isPrePaddingRequired() const { return m_isPrePaddingRequired; }

void TimerInfoDto::setIsPrePaddingRequired(bool newIsPrePaddingRequired) {
	m_isPrePaddingRequired = newIsPrePaddingRequired;
}
QString TimerInfoDto::parentBackdropItemId() const { return m_parentBackdropItemId; }

void TimerInfoDto::setParentBackdropItemId(QString newParentBackdropItemId) {
	m_parentBackdropItemId = newParentBackdropItemId;
}
QStringList TimerInfoDto::parentBackdropImageTags() const { return m_parentBackdropImageTags; }

void TimerInfoDto::setParentBackdropImageTags(QStringList newParentBackdropImageTags) {
	m_parentBackdropImageTags = newParentBackdropImageTags;
}
bool TimerInfoDto::isPostPaddingRequired() const { return m_isPostPaddingRequired; }

void TimerInfoDto::setIsPostPaddingRequired(bool newIsPostPaddingRequired) {
	m_isPostPaddingRequired = newIsPostPaddingRequired;
}
KeepUntil TimerInfoDto::keepUntil() const { return m_keepUntil; }

void TimerInfoDto::setKeepUntil(KeepUntil newKeepUntil) {
	m_keepUntil = newKeepUntil;
}
RecordingStatus TimerInfoDto::status() const { return m_status; }

void TimerInfoDto::setStatus(RecordingStatus newStatus) {
	m_status = newStatus;
}
QString TimerInfoDto::seriesTimerId() const { return m_seriesTimerId; }

void TimerInfoDto::setSeriesTimerId(QString newSeriesTimerId) {
	m_seriesTimerId = newSeriesTimerId;
}
QString TimerInfoDto::externalSeriesTimerId() const { return m_externalSeriesTimerId; }

void TimerInfoDto::setExternalSeriesTimerId(QString newExternalSeriesTimerId) {
	m_externalSeriesTimerId = newExternalSeriesTimerId;
}
qint64 TimerInfoDto::runTimeTicks() const { return m_runTimeTicks; }

void TimerInfoDto::setRunTimeTicks(qint64 newRunTimeTicks) {
	m_runTimeTicks = newRunTimeTicks;
}
QSharedPointer<BaseItemDto> TimerInfoDto::programInfo() const { return m_programInfo; }

void TimerInfoDto::setProgramInfo(QSharedPointer<BaseItemDto> newProgramInfo) {
	m_programInfo = newProgramInfo;
}


} // NS Jellyfin
} // NS DTO
