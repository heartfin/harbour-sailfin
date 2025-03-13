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

#include <JellyfinQt/dto/syncplayqueueitem.h>

namespace Jellyfin {
namespace DTO {

SyncPlayQueueItem::SyncPlayQueueItem() {}
SyncPlayQueueItem::SyncPlayQueueItem (
		QString itemId, 
		QString playlistItemId 
		) :
	m_itemId(itemId),
	m_playlistItemId(playlistItemId) { }



SyncPlayQueueItem::SyncPlayQueueItem(const SyncPlayQueueItem &other) :

	m_itemId(other.m_itemId),
	m_playlistItemId(other.m_playlistItemId){}


void SyncPlayQueueItem::replaceData(SyncPlayQueueItem &other) {
	m_itemId = other.m_itemId;
	m_playlistItemId = other.m_playlistItemId;
}

SyncPlayQueueItem SyncPlayQueueItem::fromJson(QJsonObject source) {
	SyncPlayQueueItem instance;
	instance.setFromJson(source);
	return instance;
}


void SyncPlayQueueItem::setFromJson(QJsonObject source) {
	m_itemId = Jellyfin::Support::fromJsonValue<QString>(source["ItemId"]);
	m_playlistItemId = Jellyfin::Support::fromJsonValue<QString>(source["PlaylistItemId"]);

}
	
QJsonObject SyncPlayQueueItem::toJson() const {
	QJsonObject result;
	
	result["ItemId"] = Jellyfin::Support::toJsonValue<QString>(m_itemId);		
	result["PlaylistItemId"] = Jellyfin::Support::toJsonValue<QString>(m_playlistItemId);	
	return result;
}

QString SyncPlayQueueItem::itemId() const { return m_itemId; }

void SyncPlayQueueItem::setItemId(QString newItemId) {
	m_itemId = newItemId;
}

QString SyncPlayQueueItem::playlistItemId() const { return m_playlistItemId; }

void SyncPlayQueueItem::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
}


} // NS DTO

namespace Support {

using SyncPlayQueueItem = Jellyfin::DTO::SyncPlayQueueItem;

template <>
SyncPlayQueueItem fromJsonValue(const QJsonValue &source, convertType<SyncPlayQueueItem>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return SyncPlayQueueItem::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const SyncPlayQueueItem &source, convertType<SyncPlayQueueItem>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
