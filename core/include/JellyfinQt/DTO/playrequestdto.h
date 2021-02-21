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

#ifndef JELLYFIN_DTO_PLAYREQUESTDTO_H
#define JELLYFIN_DTO_PLAYREQUESTDTO_H

#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class PlayRequestDto : public QObject {
	Q_OBJECT
public:
	explicit PlayRequestDto(QObject *parent = nullptr);
	static PlayRequestDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the playing queue.
	 */
	Q_PROPERTY(QStringList playingQueue READ playingQueue WRITE setPlayingQueue NOTIFY playingQueueChanged)
	/**
	 * @brief Gets or sets the position of the playing item in the queue.
	 */
	Q_PROPERTY(qint32 playingItemPosition READ playingItemPosition WRITE setPlayingItemPosition NOTIFY playingItemPositionChanged)
	/**
	 * @brief Gets or sets the start position ticks.
	 */
	Q_PROPERTY(qint64 startPositionTicks READ startPositionTicks WRITE setStartPositionTicks NOTIFY startPositionTicksChanged)

	QStringList playingQueue() const;
	void setPlayingQueue(QStringList newPlayingQueue);
	
	qint32 playingItemPosition() const;
	void setPlayingItemPosition(qint32 newPlayingItemPosition);
	
	qint64 startPositionTicks() const;
	void setStartPositionTicks(qint64 newStartPositionTicks);
	
signals:
	void playingQueueChanged(QStringList newPlayingQueue);
	void playingItemPositionChanged(qint32 newPlayingItemPosition);
	void startPositionTicksChanged(qint64 newStartPositionTicks);
protected:
	QStringList m_playingQueue;
	qint32 m_playingItemPosition;
	qint64 m_startPositionTicks;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PLAYREQUESTDTO_H
