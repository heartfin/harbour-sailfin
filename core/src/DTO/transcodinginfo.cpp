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

#include <JellyfinQt/DTO/transcodinginfo.h>

namespace Jellyfin {
namespace DTO {

TranscodingInfo::TranscodingInfo() {}

TranscodingInfo TranscodingInfo::fromJson(QJsonObject source) {
	TranscodingInfo instance;
	instance.setFromJson(source);
	return instance;
}


void TranscodingInfo::setFromJson(QJsonObject source) {
	m_audioCodec = Jellyfin::Support::fromJsonValue<QString>(source["AudioCodec"]);
	m_videoCodec = Jellyfin::Support::fromJsonValue<QString>(source["VideoCodec"]);
	m_container = Jellyfin::Support::fromJsonValue<QString>(source["Container"]);
	m_isVideoDirect = Jellyfin::Support::fromJsonValue<bool>(source["IsVideoDirect"]);
	m_isAudioDirect = Jellyfin::Support::fromJsonValue<bool>(source["IsAudioDirect"]);
	m_bitrate = Jellyfin::Support::fromJsonValue<qint32>(source["Bitrate"]);
	m_framerate = Jellyfin::Support::fromJsonValue<float>(source["Framerate"]);
	m_completionPercentage = Jellyfin::Support::fromJsonValue<double>(source["CompletionPercentage"]);
	m_width = Jellyfin::Support::fromJsonValue<qint32>(source["Width"]);
	m_height = Jellyfin::Support::fromJsonValue<qint32>(source["Height"]);
	m_audioChannels = Jellyfin::Support::fromJsonValue<qint32>(source["AudioChannels"]);
	m_transcodeReasons = Jellyfin::Support::fromJsonValue<QList<TranscodeReason>>(source["TranscodeReasons"]);

}
	
QJsonObject TranscodingInfo::toJson() {
	QJsonObject result;
	result["AudioCodec"] = Jellyfin::Support::toJsonValue<QString>(m_audioCodec);
	result["VideoCodec"] = Jellyfin::Support::toJsonValue<QString>(m_videoCodec);
	result["Container"] = Jellyfin::Support::toJsonValue<QString>(m_container);
	result["IsVideoDirect"] = Jellyfin::Support::toJsonValue<bool>(m_isVideoDirect);
	result["IsAudioDirect"] = Jellyfin::Support::toJsonValue<bool>(m_isAudioDirect);
	result["Bitrate"] = Jellyfin::Support::toJsonValue<qint32>(m_bitrate);
	result["Framerate"] = Jellyfin::Support::toJsonValue<float>(m_framerate);
	result["CompletionPercentage"] = Jellyfin::Support::toJsonValue<double>(m_completionPercentage);
	result["Width"] = Jellyfin::Support::toJsonValue<qint32>(m_width);
	result["Height"] = Jellyfin::Support::toJsonValue<qint32>(m_height);
	result["AudioChannels"] = Jellyfin::Support::toJsonValue<qint32>(m_audioChannels);
	result["TranscodeReasons"] = Jellyfin::Support::toJsonValue<QList<TranscodeReason>>(m_transcodeReasons);

	return result;
}

QString TranscodingInfo::audioCodec() const { return m_audioCodec; }

void TranscodingInfo::setAudioCodec(QString newAudioCodec) {
	m_audioCodec = newAudioCodec;
}
QString TranscodingInfo::videoCodec() const { return m_videoCodec; }

void TranscodingInfo::setVideoCodec(QString newVideoCodec) {
	m_videoCodec = newVideoCodec;
}
QString TranscodingInfo::container() const { return m_container; }

void TranscodingInfo::setContainer(QString newContainer) {
	m_container = newContainer;
}
bool TranscodingInfo::isVideoDirect() const { return m_isVideoDirect; }

void TranscodingInfo::setIsVideoDirect(bool newIsVideoDirect) {
	m_isVideoDirect = newIsVideoDirect;
}
bool TranscodingInfo::isAudioDirect() const { return m_isAudioDirect; }

void TranscodingInfo::setIsAudioDirect(bool newIsAudioDirect) {
	m_isAudioDirect = newIsAudioDirect;
}
qint32 TranscodingInfo::bitrate() const { return m_bitrate; }

void TranscodingInfo::setBitrate(qint32 newBitrate) {
	m_bitrate = newBitrate;
}
float TranscodingInfo::framerate() const { return m_framerate; }

void TranscodingInfo::setFramerate(float newFramerate) {
	m_framerate = newFramerate;
}
double TranscodingInfo::completionPercentage() const { return m_completionPercentage; }

void TranscodingInfo::setCompletionPercentage(double newCompletionPercentage) {
	m_completionPercentage = newCompletionPercentage;
}
qint32 TranscodingInfo::width() const { return m_width; }

void TranscodingInfo::setWidth(qint32 newWidth) {
	m_width = newWidth;
}
qint32 TranscodingInfo::height() const { return m_height; }

void TranscodingInfo::setHeight(qint32 newHeight) {
	m_height = newHeight;
}
qint32 TranscodingInfo::audioChannels() const { return m_audioChannels; }

void TranscodingInfo::setAudioChannels(qint32 newAudioChannels) {
	m_audioChannels = newAudioChannels;
}
QList<TranscodeReason> TranscodingInfo::transcodeReasons() const { return m_transcodeReasons; }

void TranscodingInfo::setTranscodeReasons(QList<TranscodeReason> newTranscodeReasons) {
	m_transcodeReasons = newTranscodeReasons;
}

} // NS DTO

namespace Support {

using TranscodingInfo = Jellyfin::DTO::TranscodingInfo;

template <>
TranscodingInfo fromJsonValue<TranscodingInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return TranscodingInfo::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO
