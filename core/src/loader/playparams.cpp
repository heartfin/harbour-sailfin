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

#include "JellyfinQt/loader/playparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// PlayParams

const QString &PlayParams::sessionId() const {
	return m_sessionId;
}

void PlayParams::setSessionId(QString newSessionId) {
	m_sessionId = newSessionId;
}


const QStringList &PlayParams::itemIds() const {
	return m_itemIds;
}

void PlayParams::setItemIds(QStringList newItemIds) {
	m_itemIds = newItemIds;
}


const PlayCommand &PlayParams::playCommand() const {
	return m_playCommand;
}

void PlayParams::setPlayCommand(PlayCommand newPlayCommand) {
	m_playCommand = newPlayCommand;
}


const qint64 &PlayParams::startPositionTicks() const {
	return m_startPositionTicks.value();
}

void PlayParams::setStartPositionTicks(qint64 newStartPositionTicks)  {
	m_startPositionTicks = newStartPositionTicks;
}

bool PlayParams::startPositionTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startPositionTicks.has_value();
}

void PlayParams::setStartPositionTicksNull() {
	m_startPositionTicks = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
