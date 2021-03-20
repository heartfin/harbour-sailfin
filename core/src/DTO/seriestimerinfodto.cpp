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

#include <JellyfinQt/DTO/seriestimerinfodto.h>

namespace Jellyfin {
namespace DTO {

SeriesTimerInfoDto::SeriesTimerInfoDto(QObject *parent) {}

SeriesTimerInfoDto SeriesTimerInfoDto::fromJson(QJsonObject source) {SeriesTimerInfoDto instance;
	instance->setFromJson(source, false);
	return instance;
}


void SeriesTimerInfoDto::setFromJson(QJsonObject source) {
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
	m_recordAnyTime = fromJsonValue<bool>(source["RecordAnyTime"]);
	m_skipEpisodesInLibrary = fromJsonValue<bool>(source["SkipEpisodesInLibrary"]);
	m_recordAnyChannel = fromJsonValue<bool>(source["RecordAnyChannel"]);
	m_keepUpTo = fromJsonValue<qint32>(source["KeepUpTo"]);
	m_recordNewOnly = fromJsonValue<bool>(source["RecordNewOnly"]);
	m_days = fromJsonValue<QList<DayOfWeek>>(source["Days"]);
	m_dayPattern = fromJsonValue<DayPattern>(source["DayPattern"]);
	m_imageTags = fromJsonValue<QJsonObject>(source["ImageTags"]);
	m_parentThumbItemId = fromJsonValue<QString>(source["ParentThumbItemId"]);
	m_parentThumbImageTag = fromJsonValue<QString>(source["ParentThumbImageTag"]);
	m_parentPrimaryImageItemId = fromJsonValue<QString>(source["ParentPrimaryImageItemId"]);
	m_parentPrimaryImageTag = fromJsonValue<QString>(source["ParentPrimaryImageTag"]);

}
	
QJsonObject SeriesTimerInfoDto::toJson() {
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
	result["RecordAnyTime"] = toJsonValue<bool>(m_recordAnyTime);
	result["SkipEpisodesInLibrary"] = toJsonValue<bool>(m_skipEpisodesInLibrary);
	result["RecordAnyChannel"] = toJsonValue<bool>(m_recordAnyChannel);
	result["KeepUpTo"] = toJsonValue<qint32>(m_keepUpTo);
	result["RecordNewOnly"] = toJsonValue<bool>(m_recordNewOnly);
	result["Days"] = toJsonValue<QList<DayOfWeek>>(m_days);
	result["DayPattern"] = toJsonValue<DayPattern>(m_dayPattern);
	result["ImageTags"] = toJsonValue<QJsonObject>(m_imageTags);
	result["ParentThumbItemId"] = toJsonValue<QString>(m_parentThumbItemId);
	result["ParentThumbImageTag"] = toJsonValue<QString>(m_parentThumbImageTag);
	result["ParentPrimaryImageItemId"] = toJsonValue<QString>(m_parentPrimaryImageItemId);
	result["ParentPrimaryImageTag"] = toJsonValue<QString>(m_parentPrimaryImageTag);

	return result;
}

QString SeriesTimerInfoDto::jellyfinId() const { return m_jellyfinId; }

void SeriesTimerInfoDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
QString SeriesTimerInfoDto::type() const { return m_type; }

void SeriesTimerInfoDto::setType(QString newType) {
	m_type = newType;
}
QString SeriesTimerInfoDto::serverId() const { return m_serverId; }

void SeriesTimerInfoDto::setServerId(QString newServerId) {
	m_serverId = newServerId;
}
QString SeriesTimerInfoDto::externalId() const { return m_externalId; }

void SeriesTimerInfoDto::setExternalId(QString newExternalId) {
	m_externalId = newExternalId;
}
QUuid SeriesTimerInfoDto::channelId() const { return m_channelId; }

void SeriesTimerInfoDto::setChannelId(QUuid newChannelId) {
	m_channelId = newChannelId;
}
QString SeriesTimerInfoDto::externalChannelId() const { return m_externalChannelId; }

void SeriesTimerInfoDto::setExternalChannelId(QString newExternalChannelId) {
	m_externalChannelId = newExternalChannelId;
}
QString SeriesTimerInfoDto::channelName() const { return m_channelName; }

void SeriesTimerInfoDto::setChannelName(QString newChannelName) {
	m_channelName = newChannelName;
}
QString SeriesTimerInfoDto::channelPrimaryImageTag() const { return m_channelPrimaryImageTag; }

void SeriesTimerInfoDto::setChannelPrimaryImageTag(QString newChannelPrimaryImageTag) {
	m_channelPrimaryImageTag = newChannelPrimaryImageTag;
}
QString SeriesTimerInfoDto::programId() const { return m_programId; }

void SeriesTimerInfoDto::setProgramId(QString newProgramId) {
	m_programId = newProgramId;
}
QString SeriesTimerInfoDto::externalProgramId() const { return m_externalProgramId; }

void SeriesTimerInfoDto::setExternalProgramId(QString newExternalProgramId) {
	m_externalProgramId = newExternalProgramId;
}
QString SeriesTimerInfoDto::name() const { return m_name; }

void SeriesTimerInfoDto::setName(QString newName) {
	m_name = newName;
}
QString SeriesTimerInfoDto::overview() const { return m_overview; }

void SeriesTimerInfoDto::setOverview(QString newOverview) {
	m_overview = newOverview;
}
QDateTime SeriesTimerInfoDto::startDate() const { return m_startDate; }

void SeriesTimerInfoDto::setStartDate(QDateTime newStartDate) {
	m_startDate = newStartDate;
}
QDateTime SeriesTimerInfoDto::endDate() const { return m_endDate; }

void SeriesTimerInfoDto::setEndDate(QDateTime newEndDate) {
	m_endDate = newEndDate;
}
QString SeriesTimerInfoDto::serviceName() const { return m_serviceName; }

void SeriesTimerInfoDto::setServiceName(QString newServiceName) {
	m_serviceName = newServiceName;
}
qint32 SeriesTimerInfoDto::priority() const { return m_priority; }

void SeriesTimerInfoDto::setPriority(qint32 newPriority) {
	m_priority = newPriority;
}
qint32 SeriesTimerInfoDto::prePaddingSeconds() const { return m_prePaddingSeconds; }

void SeriesTimerInfoDto::setPrePaddingSeconds(qint32 newPrePaddingSeconds) {
	m_prePaddingSeconds = newPrePaddingSeconds;
}
qint32 SeriesTimerInfoDto::postPaddingSeconds() const { return m_postPaddingSeconds; }

void SeriesTimerInfoDto::setPostPaddingSeconds(qint32 newPostPaddingSeconds) {
	m_postPaddingSeconds = newPostPaddingSeconds;
}
bool SeriesTimerInfoDto::isPrePaddingRequired() const { return m_isPrePaddingRequired; }

void SeriesTimerInfoDto::setIsPrePaddingRequired(bool newIsPrePaddingRequired) {
	m_isPrePaddingRequired = newIsPrePaddingRequired;
}
QString SeriesTimerInfoDto::parentBackdropItemId() const { return m_parentBackdropItemId; }

void SeriesTimerInfoDto::setParentBackdropItemId(QString newParentBackdropItemId) {
	m_parentBackdropItemId = newParentBackdropItemId;
}
QStringList SeriesTimerInfoDto::parentBackdropImageTags() const { return m_parentBackdropImageTags; }

void SeriesTimerInfoDto::setParentBackdropImageTags(QStringList newParentBackdropImageTags) {
	m_parentBackdropImageTags = newParentBackdropImageTags;
}
bool SeriesTimerInfoDto::isPostPaddingRequired() const { return m_isPostPaddingRequired; }

void SeriesTimerInfoDto::setIsPostPaddingRequired(bool newIsPostPaddingRequired) {
	m_isPostPaddingRequired = newIsPostPaddingRequired;
}
KeepUntil SeriesTimerInfoDto::keepUntil() const { return m_keepUntil; }

void SeriesTimerInfoDto::setKeepUntil(KeepUntil newKeepUntil) {
	m_keepUntil = newKeepUntil;
}
bool SeriesTimerInfoDto::recordAnyTime() const { return m_recordAnyTime; }

void SeriesTimerInfoDto::setRecordAnyTime(bool newRecordAnyTime) {
	m_recordAnyTime = newRecordAnyTime;
}
bool SeriesTimerInfoDto::skipEpisodesInLibrary() const { return m_skipEpisodesInLibrary; }

void SeriesTimerInfoDto::setSkipEpisodesInLibrary(bool newSkipEpisodesInLibrary) {
	m_skipEpisodesInLibrary = newSkipEpisodesInLibrary;
}
bool SeriesTimerInfoDto::recordAnyChannel() const { return m_recordAnyChannel; }

void SeriesTimerInfoDto::setRecordAnyChannel(bool newRecordAnyChannel) {
	m_recordAnyChannel = newRecordAnyChannel;
}
qint32 SeriesTimerInfoDto::keepUpTo() const { return m_keepUpTo; }

void SeriesTimerInfoDto::setKeepUpTo(qint32 newKeepUpTo) {
	m_keepUpTo = newKeepUpTo;
}
bool SeriesTimerInfoDto::recordNewOnly() const { return m_recordNewOnly; }

void SeriesTimerInfoDto::setRecordNewOnly(bool newRecordNewOnly) {
	m_recordNewOnly = newRecordNewOnly;
}
QList<DayOfWeek> SeriesTimerInfoDto::days() const { return m_days; }

void SeriesTimerInfoDto::setDays(QList<DayOfWeek> newDays) {
	m_days = newDays;
}
DayPattern SeriesTimerInfoDto::dayPattern() const { return m_dayPattern; }

void SeriesTimerInfoDto::setDayPattern(DayPattern newDayPattern) {
	m_dayPattern = newDayPattern;
}
QJsonObject SeriesTimerInfoDto::imageTags() const { return m_imageTags; }

void SeriesTimerInfoDto::setImageTags(QJsonObject newImageTags) {
	m_imageTags = newImageTags;
}
QString SeriesTimerInfoDto::parentThumbItemId() const { return m_parentThumbItemId; }

void SeriesTimerInfoDto::setParentThumbItemId(QString newParentThumbItemId) {
	m_parentThumbItemId = newParentThumbItemId;
}
QString SeriesTimerInfoDto::parentThumbImageTag() const { return m_parentThumbImageTag; }

void SeriesTimerInfoDto::setParentThumbImageTag(QString newParentThumbImageTag) {
	m_parentThumbImageTag = newParentThumbImageTag;
}
QString SeriesTimerInfoDto::parentPrimaryImageItemId() const { return m_parentPrimaryImageItemId; }

void SeriesTimerInfoDto::setParentPrimaryImageItemId(QString newParentPrimaryImageItemId) {
	m_parentPrimaryImageItemId = newParentPrimaryImageItemId;
}
QString SeriesTimerInfoDto::parentPrimaryImageTag() const { return m_parentPrimaryImageTag; }

void SeriesTimerInfoDto::setParentPrimaryImageTag(QString newParentPrimaryImageTag) {
	m_parentPrimaryImageTag = newParentPrimaryImageTag;
}


} // NS Jellyfin
} // NS DTO
