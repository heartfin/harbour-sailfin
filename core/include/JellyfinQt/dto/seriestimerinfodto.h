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

#ifndef JELLYFIN_DTO_SERIESTIMERINFODTO_H
#define JELLYFIN_DTO_SERIESTIMERINFODTO_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/dayofweek.h"
#include "JellyfinQt/dto/daypattern.h"
#include "JellyfinQt/dto/keepuntil.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class SeriesTimerInfoDto {
public:
	SeriesTimerInfoDto();
	SeriesTimerInfoDto(const SeriesTimerInfoDto &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(SeriesTimerInfoDto &other);
	
	static SeriesTimerInfoDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Id of the recording.
	 */
	QString jellyfinId() const;
	/**
	* @brief Id of the recording.
	*/
	void setJellyfinId(QString newJellyfinId);
	bool jellyfinIdNull() const;
	void setJellyfinIdNull();


	QString type() const;

	void setType(QString newType);
	bool typeNull() const;
	void setTypeNull();

	/**
	 * @brief Gets or sets the server identifier.
	 */
	QString serverId() const;
	/**
	* @brief Gets or sets the server identifier.
	*/
	void setServerId(QString newServerId);
	bool serverIdNull() const;
	void setServerIdNull();

	/**
	 * @brief Gets or sets the external identifier.
	 */
	QString externalId() const;
	/**
	* @brief Gets or sets the external identifier.
	*/
	void setExternalId(QString newExternalId);
	bool externalIdNull() const;
	void setExternalIdNull();

	/**
	 * @brief ChannelId of the recording.
	 */
	QString channelId() const;
	/**
	* @brief ChannelId of the recording.
	*/
	void setChannelId(QString newChannelId);

	/**
	 * @brief Gets or sets the external channel identifier.
	 */
	QString externalChannelId() const;
	/**
	* @brief Gets or sets the external channel identifier.
	*/
	void setExternalChannelId(QString newExternalChannelId);
	bool externalChannelIdNull() const;
	void setExternalChannelIdNull();

	/**
	 * @brief ChannelName of the recording.
	 */
	QString channelName() const;
	/**
	* @brief ChannelName of the recording.
	*/
	void setChannelName(QString newChannelName);
	bool channelNameNull() const;
	void setChannelNameNull();


	QString channelPrimaryImageTag() const;

	void setChannelPrimaryImageTag(QString newChannelPrimaryImageTag);
	bool channelPrimaryImageTagNull() const;
	void setChannelPrimaryImageTagNull();

	/**
	 * @brief Gets or sets the program identifier.
	 */
	QString programId() const;
	/**
	* @brief Gets or sets the program identifier.
	*/
	void setProgramId(QString newProgramId);
	bool programIdNull() const;
	void setProgramIdNull();

	/**
	 * @brief Gets or sets the external program identifier.
	 */
	QString externalProgramId() const;
	/**
	* @brief Gets or sets the external program identifier.
	*/
	void setExternalProgramId(QString newExternalProgramId);
	bool externalProgramIdNull() const;
	void setExternalProgramIdNull();

	/**
	 * @brief Name of the recording.
	 */
	QString name() const;
	/**
	* @brief Name of the recording.
	*/
	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();

	/**
	 * @brief Description of the recording.
	 */
	QString overview() const;
	/**
	* @brief Description of the recording.
	*/
	void setOverview(QString newOverview);
	bool overviewNull() const;
	void setOverviewNull();

	/**
	 * @brief The start date of the recording, in UTC.
	 */
	QDateTime startDate() const;
	/**
	* @brief The start date of the recording, in UTC.
	*/
	void setStartDate(QDateTime newStartDate);

	/**
	 * @brief The end date of the recording, in UTC.
	 */
	QDateTime endDate() const;
	/**
	* @brief The end date of the recording, in UTC.
	*/
	void setEndDate(QDateTime newEndDate);

	/**
	 * @brief Gets or sets the name of the service.
	 */
	QString serviceName() const;
	/**
	* @brief Gets or sets the name of the service.
	*/
	void setServiceName(QString newServiceName);
	bool serviceNameNull() const;
	void setServiceNameNull();

	/**
	 * @brief Gets or sets the priority.
	 */
	qint32 priority() const;
	/**
	* @brief Gets or sets the priority.
	*/
	void setPriority(qint32 newPriority);

	/**
	 * @brief Gets or sets the pre padding seconds.
	 */
	qint32 prePaddingSeconds() const;
	/**
	* @brief Gets or sets the pre padding seconds.
	*/
	void setPrePaddingSeconds(qint32 newPrePaddingSeconds);

	/**
	 * @brief Gets or sets the post padding seconds.
	 */
	qint32 postPaddingSeconds() const;
	/**
	* @brief Gets or sets the post padding seconds.
	*/
	void setPostPaddingSeconds(qint32 newPostPaddingSeconds);

	/**
	 * @brief Gets or sets a value indicating whether this instance is pre padding required.
	 */
	bool isPrePaddingRequired() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is pre padding required.
	*/
	void setIsPrePaddingRequired(bool newIsPrePaddingRequired);

	/**
	 * @brief If the item does not have any backdrops, this will hold the Id of the Parent that has one.
	 */
	QString parentBackdropItemId() const;
	/**
	* @brief If the item does not have any backdrops, this will hold the Id of the Parent that has one.
	*/
	void setParentBackdropItemId(QString newParentBackdropItemId);
	bool parentBackdropItemIdNull() const;
	void setParentBackdropItemIdNull();

	/**
	 * @brief Gets or sets the parent backdrop image tags.
	 */
	QStringList parentBackdropImageTags() const;
	/**
	* @brief Gets or sets the parent backdrop image tags.
	*/
	void setParentBackdropImageTags(QStringList newParentBackdropImageTags);
	bool parentBackdropImageTagsNull() const;
	void setParentBackdropImageTagsNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance is post padding required.
	 */
	bool isPostPaddingRequired() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is post padding required.
	*/
	void setIsPostPaddingRequired(bool newIsPostPaddingRequired);


	KeepUntil keepUntil() const;

	void setKeepUntil(KeepUntil newKeepUntil);

	/**
	 * @brief Gets or sets a value indicating whether [record any time].
	 */
	bool recordAnyTime() const;
	/**
	* @brief Gets or sets a value indicating whether [record any time].
	*/
	void setRecordAnyTime(bool newRecordAnyTime);


	bool skipEpisodesInLibrary() const;

	void setSkipEpisodesInLibrary(bool newSkipEpisodesInLibrary);

	/**
	 * @brief Gets or sets a value indicating whether [record any channel].
	 */
	bool recordAnyChannel() const;
	/**
	* @brief Gets or sets a value indicating whether [record any channel].
	*/
	void setRecordAnyChannel(bool newRecordAnyChannel);


	qint32 keepUpTo() const;

	void setKeepUpTo(qint32 newKeepUpTo);

	/**
	 * @brief Gets or sets a value indicating whether [record new only].
	 */
	bool recordNewOnly() const;
	/**
	* @brief Gets or sets a value indicating whether [record new only].
	*/
	void setRecordNewOnly(bool newRecordNewOnly);

	/**
	 * @brief Gets or sets the days.
	 */
	QList<DayOfWeek> days() const;
	/**
	* @brief Gets or sets the days.
	*/
	void setDays(QList<DayOfWeek> newDays);
	bool daysNull() const;
	void setDaysNull();


	DayPattern dayPattern() const;

	void setDayPattern(DayPattern newDayPattern);

	/**
	 * @brief Gets or sets the image tags.
	 */
	QJsonObject imageTags() const;
	/**
	* @brief Gets or sets the image tags.
	*/
	void setImageTags(QJsonObject newImageTags);
	bool imageTagsNull() const;
	void setImageTagsNull();

	/**
	 * @brief Gets or sets the parent thumb item id.
	 */
	QString parentThumbItemId() const;
	/**
	* @brief Gets or sets the parent thumb item id.
	*/
	void setParentThumbItemId(QString newParentThumbItemId);
	bool parentThumbItemIdNull() const;
	void setParentThumbItemIdNull();

	/**
	 * @brief Gets or sets the parent thumb image tag.
	 */
	QString parentThumbImageTag() const;
	/**
	* @brief Gets or sets the parent thumb image tag.
	*/
	void setParentThumbImageTag(QString newParentThumbImageTag);
	bool parentThumbImageTagNull() const;
	void setParentThumbImageTagNull();

	/**
	 * @brief Gets or sets the parent primary image item identifier.
	 */
	QString parentPrimaryImageItemId() const;
	/**
	* @brief Gets or sets the parent primary image item identifier.
	*/
	void setParentPrimaryImageItemId(QString newParentPrimaryImageItemId);
	bool parentPrimaryImageItemIdNull() const;
	void setParentPrimaryImageItemIdNull();

	/**
	 * @brief Gets or sets the parent primary image tag.
	 */
	QString parentPrimaryImageTag() const;
	/**
	* @brief Gets or sets the parent primary image tag.
	*/
	void setParentPrimaryImageTag(QString newParentPrimaryImageTag);
	bool parentPrimaryImageTagNull() const;
	void setParentPrimaryImageTagNull();


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
	bool m_recordAnyTime;
	bool m_skipEpisodesInLibrary;
	bool m_recordAnyChannel;
	qint32 m_keepUpTo;
	bool m_recordNewOnly;
	QList<DayOfWeek> m_days;
	DayPattern m_dayPattern;
	QJsonObject m_imageTags;
	QString m_parentThumbItemId;
	QString m_parentThumbImageTag;
	QString m_parentPrimaryImageItemId;
	QString m_parentPrimaryImageTag;
};

} // NS DTO

namespace Support {

using SeriesTimerInfoDto = Jellyfin::DTO::SeriesTimerInfoDto;

template <>
SeriesTimerInfoDto fromJsonValue(const QJsonValue &source, convertType<SeriesTimerInfoDto>);

template<>
QJsonValue toJsonValue(const SeriesTimerInfoDto &source, convertType<SeriesTimerInfoDto>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_SERIESTIMERINFODTO_H
