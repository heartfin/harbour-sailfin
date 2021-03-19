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

#include <JellyfinQt/DTO/tunerchannelmapping.h>

namespace Jellyfin {
namespace DTO {

TunerChannelMapping::TunerChannelMapping(QObject *parent) : QObject(parent) {}

TunerChannelMapping *TunerChannelMapping::fromJSON(QJsonObject source, QObject *parent) {
	TunerChannelMapping *instance = new TunerChannelMapping(parent);
	instance->updateFromJSON(source);
	return instance;
}

void TunerChannelMapping::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject TunerChannelMapping::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString TunerChannelMapping::name() const { return m_name; }
void TunerChannelMapping::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString TunerChannelMapping::providerChannelName() const { return m_providerChannelName; }
void TunerChannelMapping::setProviderChannelName(QString newProviderChannelName) {
	m_providerChannelName = newProviderChannelName;
	emit providerChannelNameChanged(newProviderChannelName);
}

QString TunerChannelMapping::providerChannelId() const { return m_providerChannelId; }
void TunerChannelMapping::setProviderChannelId(QString newProviderChannelId) {
	m_providerChannelId = newProviderChannelId;
	emit providerChannelIdChanged(newProviderChannelId);
}

QString TunerChannelMapping::jellyfinId() const { return m_jellyfinId; }
void TunerChannelMapping::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}


} // NS Jellyfin
} // NS DTO
