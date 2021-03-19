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

#include <JellyfinQt/DTO/dayofweek.h>
#include <JellyfinQt/DTO/daypattern.h>
#include <JellyfinQt/DTO/keepuntil.h>

namespace Jellyfin {
namespace DTO {

SeriesTimerInfoDto::SeriesTimerInfoDto(QObject *parent) : QObject(parent) {}

SeriesTimerInfoDto *SeriesTimerInfoDto::fromJSON(QJsonObject source, QObject *parent) {
	SeriesTimerInfoDto *instance = new SeriesTimerInfoDto(parent);
	instance->updateFromJSON(source);
	return instance;
}

void SeriesTimerInfoDto::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject SeriesTimerInfoDto::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString SeriesTimerInfoDto::jellyfinId() const { return m_jellyfinId; }
void SeriesTimerInfoDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

QString SeriesTimerInfoDto::type() const { return m_type; }
void SeriesTimerInfoDto::setType(QString newType) {
	m_type = newType;
	emit typeChanged(newType);
}

QString SeriesTimerInfoDto::serverId() const { return m_serverId; }
void SeriesTimerInfoDto::setServerId(QString newServerId) {
	m_serverId = newServerId;
	emit serverIdChanged(newServerId);
}

QString SeriesTimerInfoDto::externalId() const { return m_externalId; }
void SeriesTimerInfoDto::setExternalId(QString newExternalId) {
	m_externalId = newExternalId;
	emit externalIdChanged(newExternalId);
}

QString SeriesTimerInfoDto::channelId() const { return m_channelId; }
void SeriesTimerInfoDto::setChannelId(QString newChannelId) {
	m_channelId = newChannelId;
	emit channelIdChanged(newChannelId);
}

QString SeriesTimerInfoDto::externalChannelId() const { return m_externalChannelId; }
void SeriesTimerInfoDto::setExternalChannelId(QString newExternalChannelId) {
	m_externalChannelId = newExternalChannelId;
	emit externalChannelIdChanged(newExternalChannelId);
}

QString SeriesTimerInfoDto::channelName() const { return m_channelName; }
void SeriesTimerInfoDto::setChannelName(QString newChannelName) {
	m_channelName = newChannelName;
	emit channelNameChanged(newChannelName);
}

QString SeriesTimerInfoDto::channelPrimaryImageTag() const { return m_channelPrimaryImageTag; }
void SeriesTimerInfoDto::setChannelPrimaryImageTag(QString newChannelPrimaryImageTag) {
	m_channelPrimaryImageTag = newChannelPrimaryImageTag;
	emit channelPrimaryImageTagChanged(newChannelPrimaryImageTag);
}

QString SeriesTimerInfoDto::programId() const { return m_programId; }
void SeriesTimerInfoDto::setProgramId(QString newProgramId) {
	m_programId = newProgramId;
	emit programIdChanged(newProgramId);
}

QString SeriesTimerInfoDto::externalProgramId() const { return m_externalProgramId; }
void SeriesTimerInfoDto::setExternalProgramId(QString newExternalProgramId) {
	m_externalProgramId = newExternalProgramId;
	emit externalProgramIdChanged(newExternalProgramId);
}

QString SeriesTimerInfoDto::name() const { return m_name; }
void SeriesTimerInfoDto::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString SeriesTimerInfoDto::overview() const { return m_overview; }
void SeriesTimerInfoDto::setOverview(QString newOverview) {
	m_overview = newOverview;
	emit overviewChanged(newOverview);
}

QDateTime SeriesTimerInfoDto::startDate() const { return m_startDate; }
void SeriesTimerInfoDto::setStartDate(QDateTime newStartDate) {
	m_startDate = newStartDate;
	emit startDateChanged(newStartDate);
}

QDateTime SeriesTimerInfoDto::endDate() const { return m_endDate; }
void SeriesTimerInfoDto::setEndDate(QDateTime newEndDate) {
	m_endDate = newEndDate;
	emit endDateChanged(newEndDate);
}

QString SeriesTimerInfoDto::serviceName() const { return m_serviceName; }
void SeriesTimerInfoDto::setServiceName(QString newServiceName) {
	m_serviceName = newServiceName;
	emit serviceNameChanged(newServiceName);
}

qint32 SeriesTimerInfoDto::priority() const { return m_priority; }
void SeriesTimerInfoDto::setPriority(qint32 newPriority) {
	m_priority = newPriority;
	emit priorityChanged(newPriority);
}

qint32 SeriesTimerInfoDto::prePaddingSeconds() const { return m_prePaddingSeconds; }
void SeriesTimerInfoDto::setPrePaddingSeconds(qint32 newPrePaddingSeconds) {
	m_prePaddingSeconds = newPrePaddingSeconds;
	emit prePaddingSecondsChanged(newPrePaddingSeconds);
}

qint32 SeriesTimerInfoDto::postPaddingSeconds() const { return m_postPaddingSeconds; }
void SeriesTimerInfoDto::setPostPaddingSeconds(qint32 newPostPaddingSeconds) {
	m_postPaddingSeconds = newPostPaddingSeconds;
	emit postPaddingSecondsChanged(newPostPaddingSeconds);
}

bool SeriesTimerInfoDto::isPrePaddingRequired() const { return m_isPrePaddingRequired; }
void SeriesTimerInfoDto::setIsPrePaddingRequired(bool newIsPrePaddingRequired) {
	m_isPrePaddingRequired = newIsPrePaddingRequired;
	emit isPrePaddingRequiredChanged(newIsPrePaddingRequired);
}

QString SeriesTimerInfoDto::parentBackdropItemId() const { return m_parentBackdropItemId; }
void SeriesTimerInfoDto::setParentBackdropItemId(QString newParentBackdropItemId) {
	m_parentBackdropItemId = newParentBackdropItemId;
	emit parentBackdropItemIdChanged(newParentBackdropItemId);
}

QStringList SeriesTimerInfoDto::parentBackdropImageTags() const { return m_parentBackdropImageTags; }
void SeriesTimerInfoDto::setParentBackdropImageTags(QStringList newParentBackdropImageTags) {
	m_parentBackdropImageTags = newParentBackdropImageTags;
	emit parentBackdropImageTagsChanged(newParentBackdropImageTags);
}

bool SeriesTimerInfoDto::isPostPaddingRequired() const { return m_isPostPaddingRequired; }
void SeriesTimerInfoDto::setIsPostPaddingRequired(bool newIsPostPaddingRequired) {
	m_isPostPaddingRequired = newIsPostPaddingRequired;
	emit isPostPaddingRequiredChanged(newIsPostPaddingRequired);
}

KeepUntil SeriesTimerInfoDto::keepUntil() const { return m_keepUntil; }
void SeriesTimerInfoDto::setKeepUntil(KeepUntil newKeepUntil) {
	m_keepUntil = newKeepUntil;
	emit keepUntilChanged(newKeepUntil);
}

bool SeriesTimerInfoDto::recordAnyTime() const { return m_recordAnyTime; }
void SeriesTimerInfoDto::setRecordAnyTime(bool newRecordAnyTime) {
	m_recordAnyTime = newRecordAnyTime;
	emit recordAnyTimeChanged(newRecordAnyTime);
}

bool SeriesTimerInfoDto::skipEpisodesInLibrary() const { return m_skipEpisodesInLibrary; }
void SeriesTimerInfoDto::setSkipEpisodesInLibrary(bool newSkipEpisodesInLibrary) {
	m_skipEpisodesInLibrary = newSkipEpisodesInLibrary;
	emit skipEpisodesInLibraryChanged(newSkipEpisodesInLibrary);
}

bool SeriesTimerInfoDto::recordAnyChannel() const { return m_recordAnyChannel; }
void SeriesTimerInfoDto::setRecordAnyChannel(bool newRecordAnyChannel) {
	m_recordAnyChannel = newRecordAnyChannel;
	emit recordAnyChannelChanged(newRecordAnyChannel);
}

qint32 SeriesTimerInfoDto::keepUpTo() const { return m_keepUpTo; }
void SeriesTimerInfoDto::setKeepUpTo(qint32 newKeepUpTo) {
	m_keepUpTo = newKeepUpTo;
	emit keepUpToChanged(newKeepUpTo);
}

bool SeriesTimerInfoDto::recordNewOnly() const { return m_recordNewOnly; }
void SeriesTimerInfoDto::setRecordNewOnly(bool newRecordNewOnly) {
	m_recordNewOnly = newRecordNewOnly;
	emit recordNewOnlyChanged(newRecordNewOnly);
}

QList<DayOfWeek> SeriesTimerInfoDto::days() const { return m_days; }
void SeriesTimerInfoDto::setDays(QList<DayOfWeek> newDays) {
	m_days = newDays;
	emit daysChanged(newDays);
}

DayPattern SeriesTimerInfoDto::dayPattern() const { return m_dayPattern; }
void SeriesTimerInfoDto::setDayPattern(DayPattern newDayPattern) {
	m_dayPattern = newDayPattern;
	emit dayPatternChanged(newDayPattern);
}

QJsonObject SeriesTimerInfoDto::imageTags() const { return m_imageTags; }
void SeriesTimerInfoDto::setImageTags(QJsonObject newImageTags) {
	m_imageTags = newImageTags;
	emit imageTagsChanged(newImageTags);
}

QString SeriesTimerInfoDto::parentThumbItemId() const { return m_parentThumbItemId; }
void SeriesTimerInfoDto::setParentThumbItemId(QString newParentThumbItemId) {
	m_parentThumbItemId = newParentThumbItemId;
	emit parentThumbItemIdChanged(newParentThumbItemId);
}

QString SeriesTimerInfoDto::parentThumbImageTag() const { return m_parentThumbImageTag; }
void SeriesTimerInfoDto::setParentThumbImageTag(QString newParentThumbImageTag) {
	m_parentThumbImageTag = newParentThumbImageTag;
	emit parentThumbImageTagChanged(newParentThumbImageTag);
}

QString SeriesTimerInfoDto::parentPrimaryImageItemId() const { return m_parentPrimaryImageItemId; }
void SeriesTimerInfoDto::setParentPrimaryImageItemId(QString newParentPrimaryImageItemId) {
	m_parentPrimaryImageItemId = newParentPrimaryImageItemId;
	emit parentPrimaryImageItemIdChanged(newParentPrimaryImageItemId);
}

QString SeriesTimerInfoDto::parentPrimaryImageTag() const { return m_parentPrimaryImageTag; }
void SeriesTimerInfoDto::setParentPrimaryImageTag(QString newParentPrimaryImageTag) {
	m_parentPrimaryImageTag = newParentPrimaryImageTag;
	emit parentPrimaryImageTagChanged(newParentPrimaryImageTag);
}


} // NS Jellyfin
} // NS DTO
