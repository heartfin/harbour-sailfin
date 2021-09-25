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

#include <JellyfinQt/dto/playrequest.h>

namespace Jellyfin {
namespace DTO {

PlayRequest::PlayRequest() {}
PlayRequest::PlayRequest (
		PlayCommand playCommand, 
		QString controllingUserId 
		) :
	m_playCommand(playCommand),
	m_controllingUserId(controllingUserId) { }



PlayRequest::PlayRequest(const PlayRequest &other) :

	m_itemIds(other.m_itemIds),
	m_startPositionTicks(other.m_startPositionTicks),
	m_playCommand(other.m_playCommand),
	m_controllingUserId(other.m_controllingUserId),
	m_subtitleStreamIndex(other.m_subtitleStreamIndex),
	m_audioStreamIndex(other.m_audioStreamIndex),
	m_mediaSourceId(other.m_mediaSourceId),
	m_startIndex(other.m_startIndex){}


void PlayRequest::replaceData(PlayRequest &other) {
	m_itemIds = other.m_itemIds;
	m_startPositionTicks = other.m_startPositionTicks;
	m_playCommand = other.m_playCommand;
	m_controllingUserId = other.m_controllingUserId;
	m_subtitleStreamIndex = other.m_subtitleStreamIndex;
	m_audioStreamIndex = other.m_audioStreamIndex;
	m_mediaSourceId = other.m_mediaSourceId;
	m_startIndex = other.m_startIndex;
}

PlayRequest PlayRequest::fromJson(QJsonObject source) {
	PlayRequest instance;
	instance.setFromJson(source);
	return instance;
}


void PlayRequest::setFromJson(QJsonObject source) {
	m_itemIds = Jellyfin::Support::fromJsonValue<QStringList>(source["ItemIds"]);
	m_startPositionTicks = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["StartPositionTicks"]);
	m_playCommand = Jellyfin::Support::fromJsonValue<PlayCommand>(source["PlayCommand"]);
	m_controllingUserId = Jellyfin::Support::fromJsonValue<QString>(source["ControllingUserId"]);
	m_subtitleStreamIndex = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["SubtitleStreamIndex"]);
	m_audioStreamIndex = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["AudioStreamIndex"]);
	m_mediaSourceId = Jellyfin::Support::fromJsonValue<QString>(source["MediaSourceId"]);
	m_startIndex = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["StartIndex"]);

}
	
QJsonObject PlayRequest::toJson() const {
	QJsonObject result;
	
	
	if (!(m_itemIds.size() == 0)) {
		result["ItemIds"] = Jellyfin::Support::toJsonValue<QStringList>(m_itemIds);
	}
			
	
	if (!(!m_startPositionTicks.has_value())) {
		result["StartPositionTicks"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_startPositionTicks);
	}
			
	result["PlayCommand"] = Jellyfin::Support::toJsonValue<PlayCommand>(m_playCommand);		
	result["ControllingUserId"] = Jellyfin::Support::toJsonValue<QString>(m_controllingUserId);		
	
	if (!(!m_subtitleStreamIndex.has_value())) {
		result["SubtitleStreamIndex"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_subtitleStreamIndex);
	}
			
	
	if (!(!m_audioStreamIndex.has_value())) {
		result["AudioStreamIndex"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_audioStreamIndex);
	}
			
	
	if (!(m_mediaSourceId.isNull())) {
		result["MediaSourceId"] = Jellyfin::Support::toJsonValue<QString>(m_mediaSourceId);
	}
			
	
	if (!(!m_startIndex.has_value())) {
		result["StartIndex"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_startIndex);
	}
		
	return result;
}

QStringList PlayRequest::itemIds() const { return m_itemIds; }

void PlayRequest::setItemIds(QStringList newItemIds) {
	m_itemIds = newItemIds;
}
bool PlayRequest::itemIdsNull() const {
	return m_itemIds.size() == 0;
}

void PlayRequest::setItemIdsNull() {
	m_itemIds.clear();

}
std::optional<qint64> PlayRequest::startPositionTicks() const { return m_startPositionTicks; }

void PlayRequest::setStartPositionTicks(std::optional<qint64> newStartPositionTicks) {
	m_startPositionTicks = newStartPositionTicks;
}
bool PlayRequest::startPositionTicksNull() const {
	return !m_startPositionTicks.has_value();
}

void PlayRequest::setStartPositionTicksNull() {
	m_startPositionTicks = std::nullopt;

}
PlayCommand PlayRequest::playCommand() const { return m_playCommand; }

void PlayRequest::setPlayCommand(PlayCommand newPlayCommand) {
	m_playCommand = newPlayCommand;
}

QString PlayRequest::controllingUserId() const { return m_controllingUserId; }

void PlayRequest::setControllingUserId(QString newControllingUserId) {
	m_controllingUserId = newControllingUserId;
}

std::optional<qint32> PlayRequest::subtitleStreamIndex() const { return m_subtitleStreamIndex; }

void PlayRequest::setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}
bool PlayRequest::subtitleStreamIndexNull() const {
	return !m_subtitleStreamIndex.has_value();
}

void PlayRequest::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;

}
std::optional<qint32> PlayRequest::audioStreamIndex() const { return m_audioStreamIndex; }

void PlayRequest::setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) {
	m_audioStreamIndex = newAudioStreamIndex;
}
bool PlayRequest::audioStreamIndexNull() const {
	return !m_audioStreamIndex.has_value();
}

void PlayRequest::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;

}
QString PlayRequest::mediaSourceId() const { return m_mediaSourceId; }

void PlayRequest::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}
bool PlayRequest::mediaSourceIdNull() const {
	return m_mediaSourceId.isNull();
}

void PlayRequest::setMediaSourceIdNull() {
	m_mediaSourceId.clear();

}
std::optional<qint32> PlayRequest::startIndex() const { return m_startIndex; }

void PlayRequest::setStartIndex(std::optional<qint32> newStartIndex) {
	m_startIndex = newStartIndex;
}
bool PlayRequest::startIndexNull() const {
	return !m_startIndex.has_value();
}

void PlayRequest::setStartIndexNull() {
	m_startIndex = std::nullopt;

}

} // NS DTO

namespace Support {

using PlayRequest = Jellyfin::DTO::PlayRequest;

template <>
PlayRequest fromJsonValue(const QJsonValue &source, convertType<PlayRequest>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return PlayRequest::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const PlayRequest &source, convertType<PlayRequest>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
