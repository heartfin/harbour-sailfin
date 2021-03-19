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

#ifndef JELLYFIN_DTO_PLAYBACKSTOPINFO_H
#define JELLYFIN_DTO_PLAYBACKSTOPINFO_H

#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class BaseItemDto;
class QueueItem;

class PlaybackStopInfo : public QObject {
	Q_OBJECT
public:
	explicit PlaybackStopInfo(QObject *parent = nullptr);
	static PlaybackStopInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(BaseItemDto * item READ item WRITE setItem NOTIFY itemChanged)
	/**
	 * @brief Gets or sets the item identifier.
	 */
	Q_PROPERTY(QString itemId READ itemId WRITE setItemId NOTIFY itemIdChanged)
	/**
	 * @brief Gets or sets the session id.
	 */
	Q_PROPERTY(QString sessionId READ sessionId WRITE setSessionId NOTIFY sessionIdChanged)
	/**
	 * @brief Gets or sets the media version identifier.
	 */
	Q_PROPERTY(QString mediaSourceId READ mediaSourceId WRITE setMediaSourceId NOTIFY mediaSourceIdChanged)
	/**
	 * @brief Gets or sets the position ticks.
	 */
	Q_PROPERTY(qint64 positionTicks READ positionTicks WRITE setPositionTicks NOTIFY positionTicksChanged)
	/**
	 * @brief Gets or sets the live stream identifier.
	 */
	Q_PROPERTY(QString liveStreamId READ liveStreamId WRITE setLiveStreamId NOTIFY liveStreamIdChanged)
	/**
	 * @brief Gets or sets the play session identifier.
	 */
	Q_PROPERTY(QString playSessionId READ playSessionId WRITE setPlaySessionId NOTIFY playSessionIdChanged)
	/**
	 * @brief Gets or sets a value indicating whether this MediaBrowser.Model.Session.PlaybackStopInfo is failed.
	 */
	Q_PROPERTY(bool failed READ failed WRITE setFailed NOTIFY failedChanged)
	Q_PROPERTY(QString nextMediaType READ nextMediaType WRITE setNextMediaType NOTIFY nextMediaTypeChanged)
	Q_PROPERTY(QString playlistItemId READ playlistItemId WRITE setPlaylistItemId NOTIFY playlistItemIdChanged)
	Q_PROPERTY(QList<QueueItem *> nowPlayingQueue READ nowPlayingQueue WRITE setNowPlayingQueue NOTIFY nowPlayingQueueChanged)

	BaseItemDto * item() const;
	void setItem(BaseItemDto * newItem);
	
	QString itemId() const;
	void setItemId(QString newItemId);
	
	QString sessionId() const;
	void setSessionId(QString newSessionId);
	
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	
	qint64 positionTicks() const;
	void setPositionTicks(qint64 newPositionTicks);
	
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	
	bool failed() const;
	void setFailed(bool newFailed);
	
	QString nextMediaType() const;
	void setNextMediaType(QString newNextMediaType);
	
	QString playlistItemId() const;
	void setPlaylistItemId(QString newPlaylistItemId);
	
	QList<QueueItem *> nowPlayingQueue() const;
	void setNowPlayingQueue(QList<QueueItem *> newNowPlayingQueue);
	
signals:
	void itemChanged(BaseItemDto * newItem);
	void itemIdChanged(QString newItemId);
	void sessionIdChanged(QString newSessionId);
	void mediaSourceIdChanged(QString newMediaSourceId);
	void positionTicksChanged(qint64 newPositionTicks);
	void liveStreamIdChanged(QString newLiveStreamId);
	void playSessionIdChanged(QString newPlaySessionId);
	void failedChanged(bool newFailed);
	void nextMediaTypeChanged(QString newNextMediaType);
	void playlistItemIdChanged(QString newPlaylistItemId);
	void nowPlayingQueueChanged(QList<QueueItem *> newNowPlayingQueue);
protected:
	BaseItemDto * m_item = nullptr;
	QString m_itemId;
	QString m_sessionId;
	QString m_mediaSourceId;
	qint64 m_positionTicks;
	QString m_liveStreamId;
	QString m_playSessionId;
	bool m_failed;
	QString m_nextMediaType;
	QString m_playlistItemId;
	QList<QueueItem *> m_nowPlayingQueue;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PLAYBACKSTOPINFO_H
