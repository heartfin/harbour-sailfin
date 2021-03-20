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

#include <JellyfinQt/DTO/queueitem.h>

namespace Jellyfin {
namespace DTO {

QueueItem::QueueItem(QObject *parent) {}

QueueItem QueueItem::fromJson(QJsonObject source) {QueueItem instance;
	instance->setFromJson(source, false);
	return instance;
}


void QueueItem::setFromJson(QJsonObject source) {
	m_jellyfinId = fromJsonValue<QUuid>(source["Id"]);
	m_playlistItemId = fromJsonValue<QString>(source["PlaylistItemId"]);

}
	
QJsonObject QueueItem::toJson() {
	QJsonObject result;
	result["Id"] = toJsonValue<QUuid>(m_jellyfinId);
	result["PlaylistItemId"] = toJsonValue<QString>(m_playlistItemId);

	return result;
}

QUuid QueueItem::jellyfinId() const { return m_jellyfinId; }

void QueueItem::setJellyfinId(QUuid newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
QString QueueItem::playlistItemId() const { return m_playlistItemId; }

void QueueItem::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
}


} // NS Jellyfin
} // NS DTO
