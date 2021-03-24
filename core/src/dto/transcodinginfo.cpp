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

#include <JellyfinQt/dto/transcodinginfo.h>

namespace Jellyfin {
namespace DTO {

TranscodingInfo::TranscodingInfo() {}

TranscodingInfo::TranscodingInfo(const TranscodingInfo &other) :

	m_audioCodec(other.m_audioCodec),
	m_videoCodec(other.m_videoCodec),
	m_container(other.m_container),
	m_isVideoDirect(other.m_isVideoDirect),
	m_isAudioDirect(other.m_isAudioDirect),
	m_bitrate(other.m_bitrate),
	m_framerate(other.m_framerate),
	m_completionPercentage(other.m_completionPercentage),
	m_width(other.m_width),
	m_height(other.m_height),
	m_audioChannels(other.m_audioChannels),
	m_transcodeReasons(other.m_transcodeReasons){}


void TranscodingInfo::replaceData(TranscodingInfo &other) {
	m_audioCodec = other.m_audioCodec;
	m_videoCodec = other.m_videoCodec;
	m_container = other.m_container;
	m_isVideoDirect = other.m_isVideoDirect;
	m_isAudioDirect = other.m_isAudioDirect;
	m_bitrate = other.m_bitrate;
	m_framerate = other.m_framerate;
	m_completionPercentage = other.m_completionPercentage;
	m_width = other.m_width;
	m_height = other.m_height;
	m_audioChannels = other.m_audioChannels;
	m_transcodeReasons = other.m_transcodeReasons;
}

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
	m_bitrate = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Bitrate"]);
	m_framerate = Jellyfin::Support::fromJsonValue<std::optional<float>>(source["Framerate"]);
	m_completionPercentage = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["CompletionPercentage"]);
	m_width = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Width"]);
	m_height = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Height"]);
	m_audioChannels = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["AudioChannels"]);
	m_transcodeReasons = Jellyfin::Support::fromJsonValue<QList<TranscodeReason>>(source["TranscodeReasons"]);

}
	
QJsonObject TranscodingInfo::toJson() {
	QJsonObject result;
	result["AudioCodec"] = Jellyfin::Support::toJsonValue<QString>(m_audioCodec);
	result["VideoCodec"] = Jellyfin::Support::toJsonValue<QString>(m_videoCodec);
	result["Container"] = Jellyfin::Support::toJsonValue<QString>(m_container);
	result["IsVideoDirect"] = Jellyfin::Support::toJsonValue<bool>(m_isVideoDirect);
	result["IsAudioDirect"] = Jellyfin::Support::toJsonValue<bool>(m_isAudioDirect);
	result["Bitrate"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_bitrate);
	result["Framerate"] = Jellyfin::Support::toJsonValue<std::optional<float>>(m_framerate);
	result["CompletionPercentage"] = Jellyfin::Support::toJsonValue<std::optional<double>>(m_completionPercentage);
	result["Width"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_width);
	result["Height"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_height);
	result["AudioChannels"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_audioChannels);
	result["TranscodeReasons"] = Jellyfin::Support::toJsonValue<QList<TranscodeReason>>(m_transcodeReasons);

	return result;
}

QString TranscodingInfo::audioCodec() const { return m_audioCodec; }

void TranscodingInfo::setAudioCodec(QString newAudioCodec) {
	m_audioCodec = newAudioCodec;
}
bool TranscodingInfo::audioCodecNull() const {
	return m_audioCodec.isNull();
}

void TranscodingInfo::setAudioCodecNull() {
	m_audioCodec.clear();

}
QString TranscodingInfo::videoCodec() const { return m_videoCodec; }

void TranscodingInfo::setVideoCodec(QString newVideoCodec) {
	m_videoCodec = newVideoCodec;
}
bool TranscodingInfo::videoCodecNull() const {
	return m_videoCodec.isNull();
}

void TranscodingInfo::setVideoCodecNull() {
	m_videoCodec.clear();

}
QString TranscodingInfo::container() const { return m_container; }

void TranscodingInfo::setContainer(QString newContainer) {
	m_container = newContainer;
}
bool TranscodingInfo::containerNull() const {
	return m_container.isNull();
}

void TranscodingInfo::setContainerNull() {
	m_container.clear();

}
bool TranscodingInfo::isVideoDirect() const { return m_isVideoDirect; }

void TranscodingInfo::setIsVideoDirect(bool newIsVideoDirect) {
	m_isVideoDirect = newIsVideoDirect;
}

bool TranscodingInfo::isAudioDirect() const { return m_isAudioDirect; }

void TranscodingInfo::setIsAudioDirect(bool newIsAudioDirect) {
	m_isAudioDirect = newIsAudioDirect;
}

std::optional<qint32> TranscodingInfo::bitrate() const { return m_bitrate; }

void TranscodingInfo::setBitrate(std::optional<qint32> newBitrate) {
	m_bitrate = newBitrate;
}
bool TranscodingInfo::bitrateNull() const {
	return !m_bitrate.has_value();
}

void TranscodingInfo::setBitrateNull() {
	m_bitrate = std::nullopt;

}
std::optional<float> TranscodingInfo::framerate() const { return m_framerate; }

void TranscodingInfo::setFramerate(std::optional<float> newFramerate) {
	m_framerate = newFramerate;
}
bool TranscodingInfo::framerateNull() const {
	return !m_framerate.has_value();
}

void TranscodingInfo::setFramerateNull() {
	m_framerate = std::nullopt;

}
std::optional<double> TranscodingInfo::completionPercentage() const { return m_completionPercentage; }

void TranscodingInfo::setCompletionPercentage(std::optional<double> newCompletionPercentage) {
	m_completionPercentage = newCompletionPercentage;
}
bool TranscodingInfo::completionPercentageNull() const {
	return !m_completionPercentage.has_value();
}

void TranscodingInfo::setCompletionPercentageNull() {
	m_completionPercentage = std::nullopt;

}
std::optional<qint32> TranscodingInfo::width() const { return m_width; }

void TranscodingInfo::setWidth(std::optional<qint32> newWidth) {
	m_width = newWidth;
}
bool TranscodingInfo::widthNull() const {
	return !m_width.has_value();
}

void TranscodingInfo::setWidthNull() {
	m_width = std::nullopt;

}
std::optional<qint32> TranscodingInfo::height() const { return m_height; }

void TranscodingInfo::setHeight(std::optional<qint32> newHeight) {
	m_height = newHeight;
}
bool TranscodingInfo::heightNull() const {
	return !m_height.has_value();
}

void TranscodingInfo::setHeightNull() {
	m_height = std::nullopt;

}
std::optional<qint32> TranscodingInfo::audioChannels() const { return m_audioChannels; }

void TranscodingInfo::setAudioChannels(std::optional<qint32> newAudioChannels) {
	m_audioChannels = newAudioChannels;
}
bool TranscodingInfo::audioChannelsNull() const {
	return !m_audioChannels.has_value();
}

void TranscodingInfo::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;

}
QList<TranscodeReason> TranscodingInfo::transcodeReasons() const { return m_transcodeReasons; }

void TranscodingInfo::setTranscodeReasons(QList<TranscodeReason> newTranscodeReasons) {
	m_transcodeReasons = newTranscodeReasons;
}
bool TranscodingInfo::transcodeReasonsNull() const {
	return m_transcodeReasons.size() == 0;
}

void TranscodingInfo::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();

}

} // NS DTO

namespace Support {

using TranscodingInfo = Jellyfin::DTO::TranscodingInfo;

template <>
TranscodingInfo fromJsonValue<TranscodingInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return TranscodingInfo::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
