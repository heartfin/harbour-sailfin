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

#include <JellyfinQt/DTO/playrequest.h>

namespace Jellyfin {
namespace DTO {

PlayRequest::PlayRequest() {}

PlayRequest PlayRequest::fromJson(QJsonObject source) {
	PlayRequest instance;
	instance.setFromJson(source);
	return instance;
}


void PlayRequest::setFromJson(QJsonObject source) {
	m_itemIds = Jellyfin::Support::fromJsonValue<QList<QUuid>>(source["ItemIds"]);
	m_startPositionTicks = Jellyfin::Support::fromJsonValue<qint64>(source["StartPositionTicks"]);
	m_playCommand = Jellyfin::Support::fromJsonValue<PlayCommand>(source["PlayCommand"]);
	m_controllingUserId = Jellyfin::Support::fromJsonValue<QUuid>(source["ControllingUserId"]);
	m_subtitleStreamIndex = Jellyfin::Support::fromJsonValue<qint32>(source["SubtitleStreamIndex"]);
	m_audioStreamIndex = Jellyfin::Support::fromJsonValue<qint32>(source["AudioStreamIndex"]);
	m_mediaSourceId = Jellyfin::Support::fromJsonValue<QString>(source["MediaSourceId"]);
	m_startIndex = Jellyfin::Support::fromJsonValue<qint32>(source["StartIndex"]);

}
	
QJsonObject PlayRequest::toJson() {
	QJsonObject result;
	result["ItemIds"] = Jellyfin::Support::toJsonValue<QList<QUuid>>(m_itemIds);
	result["StartPositionTicks"] = Jellyfin::Support::toJsonValue<qint64>(m_startPositionTicks);
	result["PlayCommand"] = Jellyfin::Support::toJsonValue<PlayCommand>(m_playCommand);
	result["ControllingUserId"] = Jellyfin::Support::toJsonValue<QUuid>(m_controllingUserId);
	result["SubtitleStreamIndex"] = Jellyfin::Support::toJsonValue<qint32>(m_subtitleStreamIndex);
	result["AudioStreamIndex"] = Jellyfin::Support::toJsonValue<qint32>(m_audioStreamIndex);
	result["MediaSourceId"] = Jellyfin::Support::toJsonValue<QString>(m_mediaSourceId);
	result["StartIndex"] = Jellyfin::Support::toJsonValue<qint32>(m_startIndex);

	return result;
}

QList<QUuid> PlayRequest::itemIds() const { return m_itemIds; }

void PlayRequest::setItemIds(QList<QUuid> newItemIds) {
	m_itemIds = newItemIds;
}
qint64 PlayRequest::startPositionTicks() const { return m_startPositionTicks; }

void PlayRequest::setStartPositionTicks(qint64 newStartPositionTicks) {
	m_startPositionTicks = newStartPositionTicks;
}
PlayCommand PlayRequest::playCommand() const { return m_playCommand; }

void PlayRequest::setPlayCommand(PlayCommand newPlayCommand) {
	m_playCommand = newPlayCommand;
}
QUuid PlayRequest::controllingUserId() const { return m_controllingUserId; }

void PlayRequest::setControllingUserId(QUuid newControllingUserId) {
	m_controllingUserId = newControllingUserId;
}
qint32 PlayRequest::subtitleStreamIndex() const { return m_subtitleStreamIndex; }

void PlayRequest::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex) {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}
qint32 PlayRequest::audioStreamIndex() const { return m_audioStreamIndex; }

void PlayRequest::setAudioStreamIndex(qint32 newAudioStreamIndex) {
	m_audioStreamIndex = newAudioStreamIndex;
}
QString PlayRequest::mediaSourceId() const { return m_mediaSourceId; }

void PlayRequest::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}
qint32 PlayRequest::startIndex() const { return m_startIndex; }

void PlayRequest::setStartIndex(qint32 newStartIndex) {
	m_startIndex = newStartIndex;
}

} // NS DTO

namespace Support {

using PlayRequest = Jellyfin::DTO::PlayRequest;

template <>
PlayRequest fromJsonValue<PlayRequest>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return PlayRequest::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO
