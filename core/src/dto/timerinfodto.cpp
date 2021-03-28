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

#include <JellyfinQt/dto/timerinfodto.h>

namespace Jellyfin {
namespace DTO {

TimerInfoDto::TimerInfoDto() {}

TimerInfoDto::TimerInfoDto(const TimerInfoDto &other) :

	m_jellyfinId(other.m_jellyfinId),
	m_type(other.m_type),
	m_serverId(other.m_serverId),
	m_externalId(other.m_externalId),
	m_channelId(other.m_channelId),
	m_externalChannelId(other.m_externalChannelId),
	m_channelName(other.m_channelName),
	m_channelPrimaryImageTag(other.m_channelPrimaryImageTag),
	m_programId(other.m_programId),
	m_externalProgramId(other.m_externalProgramId),
	m_name(other.m_name),
	m_overview(other.m_overview),
	m_startDate(other.m_startDate),
	m_endDate(other.m_endDate),
	m_serviceName(other.m_serviceName),
	m_priority(other.m_priority),
	m_prePaddingSeconds(other.m_prePaddingSeconds),
	m_postPaddingSeconds(other.m_postPaddingSeconds),
	m_isPrePaddingRequired(other.m_isPrePaddingRequired),
	m_parentBackdropItemId(other.m_parentBackdropItemId),
	m_parentBackdropImageTags(other.m_parentBackdropImageTags),
	m_isPostPaddingRequired(other.m_isPostPaddingRequired),
	m_keepUntil(other.m_keepUntil),
	m_status(other.m_status),
	m_seriesTimerId(other.m_seriesTimerId),
	m_externalSeriesTimerId(other.m_externalSeriesTimerId),
	m_runTimeTicks(other.m_runTimeTicks),
	m_programInfo(other.m_programInfo){}


void TimerInfoDto::replaceData(TimerInfoDto &other) {
	m_jellyfinId = other.m_jellyfinId;
	m_type = other.m_type;
	m_serverId = other.m_serverId;
	m_externalId = other.m_externalId;
	m_channelId = other.m_channelId;
	m_externalChannelId = other.m_externalChannelId;
	m_channelName = other.m_channelName;
	m_channelPrimaryImageTag = other.m_channelPrimaryImageTag;
	m_programId = other.m_programId;
	m_externalProgramId = other.m_externalProgramId;
	m_name = other.m_name;
	m_overview = other.m_overview;
	m_startDate = other.m_startDate;
	m_endDate = other.m_endDate;
	m_serviceName = other.m_serviceName;
	m_priority = other.m_priority;
	m_prePaddingSeconds = other.m_prePaddingSeconds;
	m_postPaddingSeconds = other.m_postPaddingSeconds;
	m_isPrePaddingRequired = other.m_isPrePaddingRequired;
	m_parentBackdropItemId = other.m_parentBackdropItemId;
	m_parentBackdropImageTags = other.m_parentBackdropImageTags;
	m_isPostPaddingRequired = other.m_isPostPaddingRequired;
	m_keepUntil = other.m_keepUntil;
	m_status = other.m_status;
	m_seriesTimerId = other.m_seriesTimerId;
	m_externalSeriesTimerId = other.m_externalSeriesTimerId;
	m_runTimeTicks = other.m_runTimeTicks;
	m_programInfo = other.m_programInfo;
}

TimerInfoDto TimerInfoDto::fromJson(QJsonObject source) {
	TimerInfoDto instance;
	instance.setFromJson(source);
	return instance;
}


void TimerInfoDto::setFromJson(QJsonObject source) {
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_type = Jellyfin::Support::fromJsonValue<QString>(source["Type"]);
	m_serverId = Jellyfin::Support::fromJsonValue<QString>(source["ServerId"]);
	m_externalId = Jellyfin::Support::fromJsonValue<QString>(source["ExternalId"]);
	m_channelId = Jellyfin::Support::fromJsonValue<QString>(source["ChannelId"]);
	m_externalChannelId = Jellyfin::Support::fromJsonValue<QString>(source["ExternalChannelId"]);
	m_channelName = Jellyfin::Support::fromJsonValue<QString>(source["ChannelName"]);
	m_channelPrimaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["ChannelPrimaryImageTag"]);
	m_programId = Jellyfin::Support::fromJsonValue<QString>(source["ProgramId"]);
	m_externalProgramId = Jellyfin::Support::fromJsonValue<QString>(source["ExternalProgramId"]);
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_overview = Jellyfin::Support::fromJsonValue<QString>(source["Overview"]);
	m_startDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["StartDate"]);
	m_endDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["EndDate"]);
	m_serviceName = Jellyfin::Support::fromJsonValue<QString>(source["ServiceName"]);
	m_priority = Jellyfin::Support::fromJsonValue<qint32>(source["Priority"]);
	m_prePaddingSeconds = Jellyfin::Support::fromJsonValue<qint32>(source["PrePaddingSeconds"]);
	m_postPaddingSeconds = Jellyfin::Support::fromJsonValue<qint32>(source["PostPaddingSeconds"]);
	m_isPrePaddingRequired = Jellyfin::Support::fromJsonValue<bool>(source["IsPrePaddingRequired"]);
	m_parentBackdropItemId = Jellyfin::Support::fromJsonValue<QString>(source["ParentBackdropItemId"]);
	m_parentBackdropImageTags = Jellyfin::Support::fromJsonValue<QStringList>(source["ParentBackdropImageTags"]);
	m_isPostPaddingRequired = Jellyfin::Support::fromJsonValue<bool>(source["IsPostPaddingRequired"]);
	m_keepUntil = Jellyfin::Support::fromJsonValue<KeepUntil>(source["KeepUntil"]);
	m_status = Jellyfin::Support::fromJsonValue<RecordingStatus>(source["Status"]);
	m_seriesTimerId = Jellyfin::Support::fromJsonValue<QString>(source["SeriesTimerId"]);
	m_externalSeriesTimerId = Jellyfin::Support::fromJsonValue<QString>(source["ExternalSeriesTimerId"]);
	m_runTimeTicks = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["RunTimeTicks"]);
	m_programInfo = Jellyfin::Support::fromJsonValue<QSharedPointer<BaseItemDto>>(source["ProgramInfo"]);

}
	
QJsonObject TimerInfoDto::toJson() const {
	QJsonObject result;
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	result["Type"] = Jellyfin::Support::toJsonValue<QString>(m_type);
	result["ServerId"] = Jellyfin::Support::toJsonValue<QString>(m_serverId);
	result["ExternalId"] = Jellyfin::Support::toJsonValue<QString>(m_externalId);
	result["ChannelId"] = Jellyfin::Support::toJsonValue<QString>(m_channelId);
	result["ExternalChannelId"] = Jellyfin::Support::toJsonValue<QString>(m_externalChannelId);
	result["ChannelName"] = Jellyfin::Support::toJsonValue<QString>(m_channelName);
	result["ChannelPrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_channelPrimaryImageTag);
	result["ProgramId"] = Jellyfin::Support::toJsonValue<QString>(m_programId);
	result["ExternalProgramId"] = Jellyfin::Support::toJsonValue<QString>(m_externalProgramId);
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["Overview"] = Jellyfin::Support::toJsonValue<QString>(m_overview);
	result["StartDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_startDate);
	result["EndDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_endDate);
	result["ServiceName"] = Jellyfin::Support::toJsonValue<QString>(m_serviceName);
	result["Priority"] = Jellyfin::Support::toJsonValue<qint32>(m_priority);
	result["PrePaddingSeconds"] = Jellyfin::Support::toJsonValue<qint32>(m_prePaddingSeconds);
	result["PostPaddingSeconds"] = Jellyfin::Support::toJsonValue<qint32>(m_postPaddingSeconds);
	result["IsPrePaddingRequired"] = Jellyfin::Support::toJsonValue<bool>(m_isPrePaddingRequired);
	result["ParentBackdropItemId"] = Jellyfin::Support::toJsonValue<QString>(m_parentBackdropItemId);
	result["ParentBackdropImageTags"] = Jellyfin::Support::toJsonValue<QStringList>(m_parentBackdropImageTags);
	result["IsPostPaddingRequired"] = Jellyfin::Support::toJsonValue<bool>(m_isPostPaddingRequired);
	result["KeepUntil"] = Jellyfin::Support::toJsonValue<KeepUntil>(m_keepUntil);
	result["Status"] = Jellyfin::Support::toJsonValue<RecordingStatus>(m_status);
	result["SeriesTimerId"] = Jellyfin::Support::toJsonValue<QString>(m_seriesTimerId);
	result["ExternalSeriesTimerId"] = Jellyfin::Support::toJsonValue<QString>(m_externalSeriesTimerId);
	result["RunTimeTicks"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_runTimeTicks);
	result["ProgramInfo"] = Jellyfin::Support::toJsonValue<QSharedPointer<BaseItemDto>>(m_programInfo);

	return result;
}

QString TimerInfoDto::jellyfinId() const { return m_jellyfinId; }

void TimerInfoDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool TimerInfoDto::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void TimerInfoDto::setJellyfinIdNull() {
	m_jellyfinId.clear();

}
QString TimerInfoDto::type() const { return m_type; }

void TimerInfoDto::setType(QString newType) {
	m_type = newType;
}
bool TimerInfoDto::typeNull() const {
	return m_type.isNull();
}

void TimerInfoDto::setTypeNull() {
	m_type.clear();

}
QString TimerInfoDto::serverId() const { return m_serverId; }

void TimerInfoDto::setServerId(QString newServerId) {
	m_serverId = newServerId;
}
bool TimerInfoDto::serverIdNull() const {
	return m_serverId.isNull();
}

void TimerInfoDto::setServerIdNull() {
	m_serverId.clear();

}
QString TimerInfoDto::externalId() const { return m_externalId; }

void TimerInfoDto::setExternalId(QString newExternalId) {
	m_externalId = newExternalId;
}
bool TimerInfoDto::externalIdNull() const {
	return m_externalId.isNull();
}

void TimerInfoDto::setExternalIdNull() {
	m_externalId.clear();

}
QString TimerInfoDto::channelId() const { return m_channelId; }

void TimerInfoDto::setChannelId(QString newChannelId) {
	m_channelId = newChannelId;
}

QString TimerInfoDto::externalChannelId() const { return m_externalChannelId; }

void TimerInfoDto::setExternalChannelId(QString newExternalChannelId) {
	m_externalChannelId = newExternalChannelId;
}
bool TimerInfoDto::externalChannelIdNull() const {
	return m_externalChannelId.isNull();
}

void TimerInfoDto::setExternalChannelIdNull() {
	m_externalChannelId.clear();

}
QString TimerInfoDto::channelName() const { return m_channelName; }

void TimerInfoDto::setChannelName(QString newChannelName) {
	m_channelName = newChannelName;
}
bool TimerInfoDto::channelNameNull() const {
	return m_channelName.isNull();
}

void TimerInfoDto::setChannelNameNull() {
	m_channelName.clear();

}
QString TimerInfoDto::channelPrimaryImageTag() const { return m_channelPrimaryImageTag; }

void TimerInfoDto::setChannelPrimaryImageTag(QString newChannelPrimaryImageTag) {
	m_channelPrimaryImageTag = newChannelPrimaryImageTag;
}
bool TimerInfoDto::channelPrimaryImageTagNull() const {
	return m_channelPrimaryImageTag.isNull();
}

void TimerInfoDto::setChannelPrimaryImageTagNull() {
	m_channelPrimaryImageTag.clear();

}
QString TimerInfoDto::programId() const { return m_programId; }

void TimerInfoDto::setProgramId(QString newProgramId) {
	m_programId = newProgramId;
}
bool TimerInfoDto::programIdNull() const {
	return m_programId.isNull();
}

void TimerInfoDto::setProgramIdNull() {
	m_programId.clear();

}
QString TimerInfoDto::externalProgramId() const { return m_externalProgramId; }

void TimerInfoDto::setExternalProgramId(QString newExternalProgramId) {
	m_externalProgramId = newExternalProgramId;
}
bool TimerInfoDto::externalProgramIdNull() const {
	return m_externalProgramId.isNull();
}

void TimerInfoDto::setExternalProgramIdNull() {
	m_externalProgramId.clear();

}
QString TimerInfoDto::name() const { return m_name; }

void TimerInfoDto::setName(QString newName) {
	m_name = newName;
}
bool TimerInfoDto::nameNull() const {
	return m_name.isNull();
}

void TimerInfoDto::setNameNull() {
	m_name.clear();

}
QString TimerInfoDto::overview() const { return m_overview; }

void TimerInfoDto::setOverview(QString newOverview) {
	m_overview = newOverview;
}
bool TimerInfoDto::overviewNull() const {
	return m_overview.isNull();
}

void TimerInfoDto::setOverviewNull() {
	m_overview.clear();

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
bool TimerInfoDto::serviceNameNull() const {
	return m_serviceName.isNull();
}

void TimerInfoDto::setServiceNameNull() {
	m_serviceName.clear();

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
bool TimerInfoDto::parentBackdropItemIdNull() const {
	return m_parentBackdropItemId.isNull();
}

void TimerInfoDto::setParentBackdropItemIdNull() {
	m_parentBackdropItemId.clear();

}
QStringList TimerInfoDto::parentBackdropImageTags() const { return m_parentBackdropImageTags; }

void TimerInfoDto::setParentBackdropImageTags(QStringList newParentBackdropImageTags) {
	m_parentBackdropImageTags = newParentBackdropImageTags;
}
bool TimerInfoDto::parentBackdropImageTagsNull() const {
	return m_parentBackdropImageTags.size() == 0;
}

void TimerInfoDto::setParentBackdropImageTagsNull() {
	m_parentBackdropImageTags.clear();

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
bool TimerInfoDto::seriesTimerIdNull() const {
	return m_seriesTimerId.isNull();
}

void TimerInfoDto::setSeriesTimerIdNull() {
	m_seriesTimerId.clear();

}
QString TimerInfoDto::externalSeriesTimerId() const { return m_externalSeriesTimerId; }

void TimerInfoDto::setExternalSeriesTimerId(QString newExternalSeriesTimerId) {
	m_externalSeriesTimerId = newExternalSeriesTimerId;
}
bool TimerInfoDto::externalSeriesTimerIdNull() const {
	return m_externalSeriesTimerId.isNull();
}

void TimerInfoDto::setExternalSeriesTimerIdNull() {
	m_externalSeriesTimerId.clear();

}
std::optional<qint64> TimerInfoDto::runTimeTicks() const { return m_runTimeTicks; }

void TimerInfoDto::setRunTimeTicks(std::optional<qint64> newRunTimeTicks) {
	m_runTimeTicks = newRunTimeTicks;
}
bool TimerInfoDto::runTimeTicksNull() const {
	return !m_runTimeTicks.has_value();
}

void TimerInfoDto::setRunTimeTicksNull() {
	m_runTimeTicks = std::nullopt;

}
QSharedPointer<BaseItemDto> TimerInfoDto::programInfo() const { return m_programInfo; }

void TimerInfoDto::setProgramInfo(QSharedPointer<BaseItemDto> newProgramInfo) {
	m_programInfo = newProgramInfo;
}


} // NS DTO

namespace Support {

using TimerInfoDto = Jellyfin::DTO::TimerInfoDto;

template <>
TimerInfoDto fromJsonValue(const QJsonValue &source, convertType<TimerInfoDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return TimerInfoDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const TimerInfoDto &source, convertType<TimerInfoDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
