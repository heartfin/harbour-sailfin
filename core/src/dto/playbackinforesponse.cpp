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

#include <JellyfinQt/dto/playbackinforesponse.h>

namespace Jellyfin {
namespace DTO {

PlaybackInfoResponse::PlaybackInfoResponse() {}
PlaybackInfoResponse::PlaybackInfoResponse (
		QList<MediaSourceInfo> mediaSources, 
		PlaybackErrorCode errorCode 
		) :
	m_mediaSources(mediaSources),
	m_errorCode(errorCode) { }



PlaybackInfoResponse::PlaybackInfoResponse(const PlaybackInfoResponse &other) :

	m_mediaSources(other.m_mediaSources),
	m_playSessionId(other.m_playSessionId),
	m_errorCode(other.m_errorCode){}


void PlaybackInfoResponse::replaceData(PlaybackInfoResponse &other) {
	m_mediaSources = other.m_mediaSources;
	m_playSessionId = other.m_playSessionId;
	m_errorCode = other.m_errorCode;
}

PlaybackInfoResponse PlaybackInfoResponse::fromJson(QJsonObject source) {
	PlaybackInfoResponse instance;
	instance.setFromJson(source);
	return instance;
}


void PlaybackInfoResponse::setFromJson(QJsonObject source) {
	m_mediaSources = Jellyfin::Support::fromJsonValue<QList<MediaSourceInfo>>(source["MediaSources"]);
	m_playSessionId = Jellyfin::Support::fromJsonValue<QString>(source["PlaySessionId"]);
	m_errorCode = Jellyfin::Support::fromJsonValue<PlaybackErrorCode>(source["ErrorCode"]);

}
	
QJsonObject PlaybackInfoResponse::toJson() const {
	QJsonObject result;
	
	result["MediaSources"] = Jellyfin::Support::toJsonValue<QList<MediaSourceInfo>>(m_mediaSources);		
	
	if (!(m_playSessionId.isNull())) {
		result["PlaySessionId"] = Jellyfin::Support::toJsonValue<QString>(m_playSessionId);
	}
			
	result["ErrorCode"] = Jellyfin::Support::toJsonValue<PlaybackErrorCode>(m_errorCode);	
	return result;
}

QList<MediaSourceInfo> PlaybackInfoResponse::mediaSources() const { return m_mediaSources; }

void PlaybackInfoResponse::setMediaSources(QList<MediaSourceInfo> newMediaSources) {
	m_mediaSources = newMediaSources;
}

QString PlaybackInfoResponse::playSessionId() const { return m_playSessionId; }

void PlaybackInfoResponse::setPlaySessionId(QString newPlaySessionId) {
	m_playSessionId = newPlaySessionId;
}
bool PlaybackInfoResponse::playSessionIdNull() const {
	return m_playSessionId.isNull();
}

void PlaybackInfoResponse::setPlaySessionIdNull() {
	m_playSessionId.clear();

}
PlaybackErrorCode PlaybackInfoResponse::errorCode() const { return m_errorCode; }

void PlaybackInfoResponse::setErrorCode(PlaybackErrorCode newErrorCode) {
	m_errorCode = newErrorCode;
}


} // NS DTO

namespace Support {

using PlaybackInfoResponse = Jellyfin::DTO::PlaybackInfoResponse;

template <>
PlaybackInfoResponse fromJsonValue(const QJsonValue &source, convertType<PlaybackInfoResponse>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return PlaybackInfoResponse::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const PlaybackInfoResponse &source, convertType<PlaybackInfoResponse>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
