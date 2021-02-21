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

#include <JellyfinQt/DTO/createplaylistdto.h>

namespace Jellyfin {
namespace DTO {

CreatePlaylistDto::CreatePlaylistDto(QObject *parent) : QObject(parent) {}

CreatePlaylistDto *CreatePlaylistDto::fromJSON(QJsonObject source, QObject *parent) {
	CreatePlaylistDto *instance = new CreatePlaylistDto(parent);
	instance->updateFromJSON(source);
	return instance;
}

void CreatePlaylistDto::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject CreatePlaylistDto::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString CreatePlaylistDto::name() const { return m_name; }
void CreatePlaylistDto::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QStringList CreatePlaylistDto::ids() const { return m_ids; }
void CreatePlaylistDto::setIds(QStringList newIds) {
	m_ids = newIds;
	emit idsChanged(newIds);
}

QString CreatePlaylistDto::userId() const { return m_userId; }
void CreatePlaylistDto::setUserId(QString newUserId) {
	m_userId = newUserId;
	emit userIdChanged(newUserId);
}

QString CreatePlaylistDto::mediaType() const { return m_mediaType; }
void CreatePlaylistDto::setMediaType(QString newMediaType) {
	m_mediaType = newMediaType;
	emit mediaTypeChanged(newMediaType);
}


} // NS Jellyfin
} // NS DTO
