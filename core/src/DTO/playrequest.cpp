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

#include <JellyfinQt/DTO/playcommand.h>

namespace Jellyfin {
namespace DTO {

PlayRequest::PlayRequest(QObject *parent) : QObject(parent) {}

PlayRequest *PlayRequest::fromJSON(QJsonObject source, QObject *parent) {
	PlayRequest *instance = new PlayRequest(parent);
	instance->updateFromJSON(source);
	return instance;
}

void PlayRequest::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject PlayRequest::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QStringList PlayRequest::itemIds() const { return m_itemIds; }
void PlayRequest::setItemIds(QStringList newItemIds) {
	m_itemIds = newItemIds;
	emit itemIdsChanged(newItemIds);
}

qint64 PlayRequest::startPositionTicks() const { return m_startPositionTicks; }
void PlayRequest::setStartPositionTicks(qint64 newStartPositionTicks) {
	m_startPositionTicks = newStartPositionTicks;
	emit startPositionTicksChanged(newStartPositionTicks);
}

PlayCommand PlayRequest::playCommand() const { return m_playCommand; }
void PlayRequest::setPlayCommand(PlayCommand newPlayCommand) {
	m_playCommand = newPlayCommand;
	emit playCommandChanged(newPlayCommand);
}

QString PlayRequest::controllingUserId() const { return m_controllingUserId; }
void PlayRequest::setControllingUserId(QString newControllingUserId) {
	m_controllingUserId = newControllingUserId;
	emit controllingUserIdChanged(newControllingUserId);
}

qint32 PlayRequest::subtitleStreamIndex() const { return m_subtitleStreamIndex; }
void PlayRequest::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex) {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
	emit subtitleStreamIndexChanged(newSubtitleStreamIndex);
}

qint32 PlayRequest::audioStreamIndex() const { return m_audioStreamIndex; }
void PlayRequest::setAudioStreamIndex(qint32 newAudioStreamIndex) {
	m_audioStreamIndex = newAudioStreamIndex;
	emit audioStreamIndexChanged(newAudioStreamIndex);
}

QString PlayRequest::mediaSourceId() const { return m_mediaSourceId; }
void PlayRequest::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
	emit mediaSourceIdChanged(newMediaSourceId);
}

qint32 PlayRequest::startIndex() const { return m_startIndex; }
void PlayRequest::setStartIndex(qint32 newStartIndex) {
	m_startIndex = newStartIndex;
	emit startIndexChanged(newStartIndex);
}


} // NS Jellyfin
} // NS DTO
