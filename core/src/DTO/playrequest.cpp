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

PlayRequest::PlayRequest(QObject *parent) {}

PlayRequest PlayRequest::fromJson(QJsonObject source) {PlayRequest instance;
	instance->setFromJson(source, false);
	return instance;
}


void PlayRequest::setFromJson(QJsonObject source) {
	m_itemIds = fromJsonValue<QList<QUuid>>(source["ItemIds"]);
	m_startPositionTicks = fromJsonValue<qint64>(source["StartPositionTicks"]);
	m_playCommand = fromJsonValue<PlayCommand>(source["PlayCommand"]);
	m_controllingUserId = fromJsonValue<QUuid>(source["ControllingUserId"]);
	m_subtitleStreamIndex = fromJsonValue<qint32>(source["SubtitleStreamIndex"]);
	m_audioStreamIndex = fromJsonValue<qint32>(source["AudioStreamIndex"]);
	m_mediaSourceId = fromJsonValue<QString>(source["MediaSourceId"]);
	m_startIndex = fromJsonValue<qint32>(source["StartIndex"]);

}
	
QJsonObject PlayRequest::toJson() {
	QJsonObject result;
	result["ItemIds"] = toJsonValue<QList<QUuid>>(m_itemIds);
	result["StartPositionTicks"] = toJsonValue<qint64>(m_startPositionTicks);
	result["PlayCommand"] = toJsonValue<PlayCommand>(m_playCommand);
	result["ControllingUserId"] = toJsonValue<QUuid>(m_controllingUserId);
	result["SubtitleStreamIndex"] = toJsonValue<qint32>(m_subtitleStreamIndex);
	result["AudioStreamIndex"] = toJsonValue<qint32>(m_audioStreamIndex);
	result["MediaSourceId"] = toJsonValue<QString>(m_mediaSourceId);
	result["StartIndex"] = toJsonValue<qint32>(m_startIndex);

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


} // NS Jellyfin
} // NS DTO
