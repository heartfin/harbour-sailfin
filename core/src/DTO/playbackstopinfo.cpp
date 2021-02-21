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

#include <JellyfinQt/DTO/playbackstopinfo.h>

namespace Jellyfin {
namespace DTO {

PlaybackStopInfo::PlaybackStopInfo(QObject *parent) : QObject(parent) {}

PlaybackStopInfo *PlaybackStopInfo::fromJSON(QJsonObject source, QObject *parent) {
	PlaybackStopInfo *instance = new PlaybackStopInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void PlaybackStopInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject PlaybackStopInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
BaseItemDto * PlaybackStopInfo::item() const { return m_item; }
void PlaybackStopInfo::setItem(BaseItemDto * newItem) {
	m_item = newItem;
	emit itemChanged(newItem);
}

QString PlaybackStopInfo::itemId() const { return m_itemId; }
void PlaybackStopInfo::setItemId(QString newItemId) {
	m_itemId = newItemId;
	emit itemIdChanged(newItemId);
}

QString PlaybackStopInfo::sessionId() const { return m_sessionId; }
void PlaybackStopInfo::setSessionId(QString newSessionId) {
	m_sessionId = newSessionId;
	emit sessionIdChanged(newSessionId);
}

QString PlaybackStopInfo::mediaSourceId() const { return m_mediaSourceId; }
void PlaybackStopInfo::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
	emit mediaSourceIdChanged(newMediaSourceId);
}

qint64 PlaybackStopInfo::positionTicks() const { return m_positionTicks; }
void PlaybackStopInfo::setPositionTicks(qint64 newPositionTicks) {
	m_positionTicks = newPositionTicks;
	emit positionTicksChanged(newPositionTicks);
}

QString PlaybackStopInfo::liveStreamId() const { return m_liveStreamId; }
void PlaybackStopInfo::setLiveStreamId(QString newLiveStreamId) {
	m_liveStreamId = newLiveStreamId;
	emit liveStreamIdChanged(newLiveStreamId);
}

QString PlaybackStopInfo::playSessionId() const { return m_playSessionId; }
void PlaybackStopInfo::setPlaySessionId(QString newPlaySessionId) {
	m_playSessionId = newPlaySessionId;
	emit playSessionIdChanged(newPlaySessionId);
}

bool PlaybackStopInfo::failed() const { return m_failed; }
void PlaybackStopInfo::setFailed(bool newFailed) {
	m_failed = newFailed;
	emit failedChanged(newFailed);
}

QString PlaybackStopInfo::nextMediaType() const { return m_nextMediaType; }
void PlaybackStopInfo::setNextMediaType(QString newNextMediaType) {
	m_nextMediaType = newNextMediaType;
	emit nextMediaTypeChanged(newNextMediaType);
}

QString PlaybackStopInfo::playlistItemId() const { return m_playlistItemId; }
void PlaybackStopInfo::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
	emit playlistItemIdChanged(newPlaylistItemId);
}

QList<QueueItem *> PlaybackStopInfo::nowPlayingQueue() const { return m_nowPlayingQueue; }
void PlaybackStopInfo::setNowPlayingQueue(QList<QueueItem *> newNowPlayingQueue) {
	m_nowPlayingQueue = newNowPlayingQueue;
	emit nowPlayingQueueChanged(newNowPlayingQueue);
}


} // NS Jellyfin
} // NS DTO
