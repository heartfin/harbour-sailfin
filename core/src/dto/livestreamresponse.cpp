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

#include <JellyfinQt/dto/livestreamresponse.h>

namespace Jellyfin {
namespace DTO {

LiveStreamResponse::LiveStreamResponse() {}
LiveStreamResponse::LiveStreamResponse (
		QSharedPointer<MediaSourceInfo> mediaSource 
		) :
	m_mediaSource(mediaSource) { }



LiveStreamResponse::LiveStreamResponse(const LiveStreamResponse &other) :

	m_mediaSource(other.m_mediaSource){}


void LiveStreamResponse::replaceData(LiveStreamResponse &other) {
	m_mediaSource = other.m_mediaSource;
}

LiveStreamResponse LiveStreamResponse::fromJson(QJsonObject source) {
	LiveStreamResponse instance;
	instance.setFromJson(source);
	return instance;
}


void LiveStreamResponse::setFromJson(QJsonObject source) {
	m_mediaSource = Jellyfin::Support::fromJsonValue<QSharedPointer<MediaSourceInfo>>(source["MediaSource"]);

}
	
QJsonObject LiveStreamResponse::toJson() const {
	QJsonObject result;
	
	result["MediaSource"] = Jellyfin::Support::toJsonValue<QSharedPointer<MediaSourceInfo>>(m_mediaSource);	
	return result;
}

QSharedPointer<MediaSourceInfo> LiveStreamResponse::mediaSource() const { return m_mediaSource; }

void LiveStreamResponse::setMediaSource(QSharedPointer<MediaSourceInfo> newMediaSource) {
	m_mediaSource = newMediaSource;
}


} // NS DTO

namespace Support {

using LiveStreamResponse = Jellyfin::DTO::LiveStreamResponse;

template <>
LiveStreamResponse fromJsonValue(const QJsonValue &source, convertType<LiveStreamResponse>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return LiveStreamResponse::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const LiveStreamResponse &source, convertType<LiveStreamResponse>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
