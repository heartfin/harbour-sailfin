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

#include <JellyfinQt/DTO/channelmappingoptionsdto.h>

namespace Jellyfin {
namespace DTO {

ChannelMappingOptionsDto::ChannelMappingOptionsDto(QObject *parent) : QObject(parent) {}

ChannelMappingOptionsDto *ChannelMappingOptionsDto::fromJSON(QJsonObject source, QObject *parent) {
	ChannelMappingOptionsDto *instance = new ChannelMappingOptionsDto(parent);
	instance->updateFromJSON(source);
	return instance;
}

void ChannelMappingOptionsDto::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject ChannelMappingOptionsDto::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QList<TunerChannelMapping *> ChannelMappingOptionsDto::tunerChannels() const { return m_tunerChannels; }
void ChannelMappingOptionsDto::setTunerChannels(QList<TunerChannelMapping *> newTunerChannels) {
	m_tunerChannels = newTunerChannels;
	emit tunerChannelsChanged(newTunerChannels);
}

QList<NameIdPair *> ChannelMappingOptionsDto::providerChannels() const { return m_providerChannels; }
void ChannelMappingOptionsDto::setProviderChannels(QList<NameIdPair *> newProviderChannels) {
	m_providerChannels = newProviderChannels;
	emit providerChannelsChanged(newProviderChannels);
}

QList<NameValuePair *> ChannelMappingOptionsDto::mappings() const { return m_mappings; }
void ChannelMappingOptionsDto::setMappings(QList<NameValuePair *> newMappings) {
	m_mappings = newMappings;
	emit mappingsChanged(newMappings);
}

QString ChannelMappingOptionsDto::providerName() const { return m_providerName; }
void ChannelMappingOptionsDto::setProviderName(QString newProviderName) {
	m_providerName = newProviderName;
	emit providerNameChanged(newProviderName);
}


} // NS Jellyfin
} // NS DTO
