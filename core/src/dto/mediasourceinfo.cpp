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

#include <JellyfinQt/dto/mediasourceinfo.h>

namespace Jellyfin {
namespace DTO {

MediaSourceInfo::MediaSourceInfo() {}

MediaSourceInfo::MediaSourceInfo(const MediaSourceInfo &other) :

	m_protocol(other.m_protocol),
	m_jellyfinId(other.m_jellyfinId),
	m_path(other.m_path),
	m_encoderPath(other.m_encoderPath),
	m_encoderProtocol(other.m_encoderProtocol),
	m_type(other.m_type),
	m_container(other.m_container),
	m_size(other.m_size),
	m_name(other.m_name),
	m_isRemote(other.m_isRemote),
	m_eTag(other.m_eTag),
	m_runTimeTicks(other.m_runTimeTicks),
	m_readAtNativeFramerate(other.m_readAtNativeFramerate),
	m_ignoreDts(other.m_ignoreDts),
	m_ignoreIndex(other.m_ignoreIndex),
	m_genPtsInput(other.m_genPtsInput),
	m_supportsTranscoding(other.m_supportsTranscoding),
	m_supportsDirectStream(other.m_supportsDirectStream),
	m_supportsDirectPlay(other.m_supportsDirectPlay),
	m_isInfiniteStream(other.m_isInfiniteStream),
	m_requiresOpening(other.m_requiresOpening),
	m_openToken(other.m_openToken),
	m_requiresClosing(other.m_requiresClosing),
	m_liveStreamId(other.m_liveStreamId),
	m_bufferMs(other.m_bufferMs),
	m_requiresLooping(other.m_requiresLooping),
	m_supportsProbing(other.m_supportsProbing),
	m_videoType(other.m_videoType),
	m_isoType(other.m_isoType),
	m_video3DFormat(other.m_video3DFormat),
	m_mediaStreams(other.m_mediaStreams),
	m_mediaAttachments(other.m_mediaAttachments),
	m_formats(other.m_formats),
	m_bitrate(other.m_bitrate),
	m_timestamp(other.m_timestamp),
	m_requiredHttpHeaders(other.m_requiredHttpHeaders),
	m_transcodingUrl(other.m_transcodingUrl),
	m_transcodingSubProtocol(other.m_transcodingSubProtocol),
	m_transcodingContainer(other.m_transcodingContainer),
	m_analyzeDurationMs(other.m_analyzeDurationMs),
	m_defaultAudioStreamIndex(other.m_defaultAudioStreamIndex),
	m_defaultSubtitleStreamIndex(other.m_defaultSubtitleStreamIndex){}


void MediaSourceInfo::replaceData(MediaSourceInfo &other) {
	m_protocol = other.m_protocol;
	m_jellyfinId = other.m_jellyfinId;
	m_path = other.m_path;
	m_encoderPath = other.m_encoderPath;
	m_encoderProtocol = other.m_encoderProtocol;
	m_type = other.m_type;
	m_container = other.m_container;
	m_size = other.m_size;
	m_name = other.m_name;
	m_isRemote = other.m_isRemote;
	m_eTag = other.m_eTag;
	m_runTimeTicks = other.m_runTimeTicks;
	m_readAtNativeFramerate = other.m_readAtNativeFramerate;
	m_ignoreDts = other.m_ignoreDts;
	m_ignoreIndex = other.m_ignoreIndex;
	m_genPtsInput = other.m_genPtsInput;
	m_supportsTranscoding = other.m_supportsTranscoding;
	m_supportsDirectStream = other.m_supportsDirectStream;
	m_supportsDirectPlay = other.m_supportsDirectPlay;
	m_isInfiniteStream = other.m_isInfiniteStream;
	m_requiresOpening = other.m_requiresOpening;
	m_openToken = other.m_openToken;
	m_requiresClosing = other.m_requiresClosing;
	m_liveStreamId = other.m_liveStreamId;
	m_bufferMs = other.m_bufferMs;
	m_requiresLooping = other.m_requiresLooping;
	m_supportsProbing = other.m_supportsProbing;
	m_videoType = other.m_videoType;
	m_isoType = other.m_isoType;
	m_video3DFormat = other.m_video3DFormat;
	m_mediaStreams = other.m_mediaStreams;
	m_mediaAttachments = other.m_mediaAttachments;
	m_formats = other.m_formats;
	m_bitrate = other.m_bitrate;
	m_timestamp = other.m_timestamp;
	m_requiredHttpHeaders = other.m_requiredHttpHeaders;
	m_transcodingUrl = other.m_transcodingUrl;
	m_transcodingSubProtocol = other.m_transcodingSubProtocol;
	m_transcodingContainer = other.m_transcodingContainer;
	m_analyzeDurationMs = other.m_analyzeDurationMs;
	m_defaultAudioStreamIndex = other.m_defaultAudioStreamIndex;
	m_defaultSubtitleStreamIndex = other.m_defaultSubtitleStreamIndex;
}

MediaSourceInfo MediaSourceInfo::fromJson(QJsonObject source) {
	MediaSourceInfo instance;
	instance.setFromJson(source);
	return instance;
}


void MediaSourceInfo::setFromJson(QJsonObject source) {
	m_protocol = Jellyfin::Support::fromJsonValue<MediaProtocol>(source["Protocol"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_path = Jellyfin::Support::fromJsonValue<QString>(source["Path"]);
	m_encoderPath = Jellyfin::Support::fromJsonValue<QString>(source["EncoderPath"]);
	m_encoderProtocol = Jellyfin::Support::fromJsonValue<MediaProtocol>(source["EncoderProtocol"]);
	m_type = Jellyfin::Support::fromJsonValue<MediaSourceType>(source["Type"]);
	m_container = Jellyfin::Support::fromJsonValue<QString>(source["Container"]);
	m_size = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["Size"]);
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_isRemote = Jellyfin::Support::fromJsonValue<bool>(source["IsRemote"]);
	m_eTag = Jellyfin::Support::fromJsonValue<QString>(source["ETag"]);
	m_runTimeTicks = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["RunTimeTicks"]);
	m_readAtNativeFramerate = Jellyfin::Support::fromJsonValue<bool>(source["ReadAtNativeFramerate"]);
	m_ignoreDts = Jellyfin::Support::fromJsonValue<bool>(source["IgnoreDts"]);
	m_ignoreIndex = Jellyfin::Support::fromJsonValue<bool>(source["IgnoreIndex"]);
	m_genPtsInput = Jellyfin::Support::fromJsonValue<bool>(source["GenPtsInput"]);
	m_supportsTranscoding = Jellyfin::Support::fromJsonValue<bool>(source["SupportsTranscoding"]);
	m_supportsDirectStream = Jellyfin::Support::fromJsonValue<bool>(source["SupportsDirectStream"]);
	m_supportsDirectPlay = Jellyfin::Support::fromJsonValue<bool>(source["SupportsDirectPlay"]);
	m_isInfiniteStream = Jellyfin::Support::fromJsonValue<bool>(source["IsInfiniteStream"]);
	m_requiresOpening = Jellyfin::Support::fromJsonValue<bool>(source["RequiresOpening"]);
	m_openToken = Jellyfin::Support::fromJsonValue<QString>(source["OpenToken"]);
	m_requiresClosing = Jellyfin::Support::fromJsonValue<bool>(source["RequiresClosing"]);
	m_liveStreamId = Jellyfin::Support::fromJsonValue<QString>(source["LiveStreamId"]);
	m_bufferMs = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["BufferMs"]);
	m_requiresLooping = Jellyfin::Support::fromJsonValue<bool>(source["RequiresLooping"]);
	m_supportsProbing = Jellyfin::Support::fromJsonValue<bool>(source["SupportsProbing"]);
	m_videoType = Jellyfin::Support::fromJsonValue<VideoType>(source["VideoType"]);
	m_isoType = Jellyfin::Support::fromJsonValue<IsoType>(source["IsoType"]);
	m_video3DFormat = Jellyfin::Support::fromJsonValue<Video3DFormat>(source["Video3DFormat"]);
	m_mediaStreams = Jellyfin::Support::fromJsonValue<QList<MediaStream>>(source["MediaStreams"]);
	m_mediaAttachments = Jellyfin::Support::fromJsonValue<QList<MediaAttachment>>(source["MediaAttachments"]);
	m_formats = Jellyfin::Support::fromJsonValue<QStringList>(source["Formats"]);
	m_bitrate = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Bitrate"]);
	m_timestamp = Jellyfin::Support::fromJsonValue<TransportStreamTimestamp>(source["Timestamp"]);
	m_requiredHttpHeaders = Jellyfin::Support::fromJsonValue<QJsonObject>(source["RequiredHttpHeaders"]);
	m_transcodingUrl = Jellyfin::Support::fromJsonValue<QString>(source["TranscodingUrl"]);
	m_transcodingSubProtocol = Jellyfin::Support::fromJsonValue<QString>(source["TranscodingSubProtocol"]);
	m_transcodingContainer = Jellyfin::Support::fromJsonValue<QString>(source["TranscodingContainer"]);
	m_analyzeDurationMs = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["AnalyzeDurationMs"]);
	m_defaultAudioStreamIndex = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["DefaultAudioStreamIndex"]);
	m_defaultSubtitleStreamIndex = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["DefaultSubtitleStreamIndex"]);

}
	
QJsonObject MediaSourceInfo::toJson() const {
	QJsonObject result;
	
	result["Protocol"] = Jellyfin::Support::toJsonValue<MediaProtocol>(m_protocol);		
	
	if (!(m_jellyfinId.isNull())) {
		result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	}
			
	
	if (!(m_path.isNull())) {
		result["Path"] = Jellyfin::Support::toJsonValue<QString>(m_path);
	}
			
	
	if (!(m_encoderPath.isNull())) {
		result["EncoderPath"] = Jellyfin::Support::toJsonValue<QString>(m_encoderPath);
	}
			
	result["EncoderProtocol"] = Jellyfin::Support::toJsonValue<MediaProtocol>(m_encoderProtocol);		
	result["Type"] = Jellyfin::Support::toJsonValue<MediaSourceType>(m_type);		
	
	if (!(m_container.isNull())) {
		result["Container"] = Jellyfin::Support::toJsonValue<QString>(m_container);
	}
			
	
	if (!(!m_size.has_value())) {
		result["Size"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_size);
	}
			
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	result["IsRemote"] = Jellyfin::Support::toJsonValue<bool>(m_isRemote);		
	
	if (!(m_eTag.isNull())) {
		result["ETag"] = Jellyfin::Support::toJsonValue<QString>(m_eTag);
	}
			
	
	if (!(!m_runTimeTicks.has_value())) {
		result["RunTimeTicks"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_runTimeTicks);
	}
			
	result["ReadAtNativeFramerate"] = Jellyfin::Support::toJsonValue<bool>(m_readAtNativeFramerate);		
	result["IgnoreDts"] = Jellyfin::Support::toJsonValue<bool>(m_ignoreDts);		
	result["IgnoreIndex"] = Jellyfin::Support::toJsonValue<bool>(m_ignoreIndex);		
	result["GenPtsInput"] = Jellyfin::Support::toJsonValue<bool>(m_genPtsInput);		
	result["SupportsTranscoding"] = Jellyfin::Support::toJsonValue<bool>(m_supportsTranscoding);		
	result["SupportsDirectStream"] = Jellyfin::Support::toJsonValue<bool>(m_supportsDirectStream);		
	result["SupportsDirectPlay"] = Jellyfin::Support::toJsonValue<bool>(m_supportsDirectPlay);		
	result["IsInfiniteStream"] = Jellyfin::Support::toJsonValue<bool>(m_isInfiniteStream);		
	result["RequiresOpening"] = Jellyfin::Support::toJsonValue<bool>(m_requiresOpening);		
	
	if (!(m_openToken.isNull())) {
		result["OpenToken"] = Jellyfin::Support::toJsonValue<QString>(m_openToken);
	}
			
	result["RequiresClosing"] = Jellyfin::Support::toJsonValue<bool>(m_requiresClosing);		
	
	if (!(m_liveStreamId.isNull())) {
		result["LiveStreamId"] = Jellyfin::Support::toJsonValue<QString>(m_liveStreamId);
	}
			
	
	if (!(!m_bufferMs.has_value())) {
		result["BufferMs"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_bufferMs);
	}
			
	result["RequiresLooping"] = Jellyfin::Support::toJsonValue<bool>(m_requiresLooping);		
	result["SupportsProbing"] = Jellyfin::Support::toJsonValue<bool>(m_supportsProbing);		
	result["VideoType"] = Jellyfin::Support::toJsonValue<VideoType>(m_videoType);		
	result["IsoType"] = Jellyfin::Support::toJsonValue<IsoType>(m_isoType);		
	result["Video3DFormat"] = Jellyfin::Support::toJsonValue<Video3DFormat>(m_video3DFormat);		
	
	if (!(m_mediaStreams.size() == 0)) {
		result["MediaStreams"] = Jellyfin::Support::toJsonValue<QList<MediaStream>>(m_mediaStreams);
	}
			
	
	if (!(m_mediaAttachments.size() == 0)) {
		result["MediaAttachments"] = Jellyfin::Support::toJsonValue<QList<MediaAttachment>>(m_mediaAttachments);
	}
			
	
	if (!(m_formats.size() == 0)) {
		result["Formats"] = Jellyfin::Support::toJsonValue<QStringList>(m_formats);
	}
			
	
	if (!(!m_bitrate.has_value())) {
		result["Bitrate"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_bitrate);
	}
			
	result["Timestamp"] = Jellyfin::Support::toJsonValue<TransportStreamTimestamp>(m_timestamp);		
	
	if (!(m_requiredHttpHeaders.isEmpty())) {
		result["RequiredHttpHeaders"] = Jellyfin::Support::toJsonValue<QJsonObject>(m_requiredHttpHeaders);
	}
			
	
	if (!(m_transcodingUrl.isNull())) {
		result["TranscodingUrl"] = Jellyfin::Support::toJsonValue<QString>(m_transcodingUrl);
	}
			
	
	if (!(m_transcodingSubProtocol.isNull())) {
		result["TranscodingSubProtocol"] = Jellyfin::Support::toJsonValue<QString>(m_transcodingSubProtocol);
	}
			
	
	if (!(m_transcodingContainer.isNull())) {
		result["TranscodingContainer"] = Jellyfin::Support::toJsonValue<QString>(m_transcodingContainer);
	}
			
	
	if (!(!m_analyzeDurationMs.has_value())) {
		result["AnalyzeDurationMs"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_analyzeDurationMs);
	}
			
	
	if (!(!m_defaultAudioStreamIndex.has_value())) {
		result["DefaultAudioStreamIndex"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_defaultAudioStreamIndex);
	}
			
	
	if (!(!m_defaultSubtitleStreamIndex.has_value())) {
		result["DefaultSubtitleStreamIndex"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_defaultSubtitleStreamIndex);
	}
		
	return result;
}

MediaProtocol MediaSourceInfo::protocol() const { return m_protocol; }

void MediaSourceInfo::setProtocol(MediaProtocol newProtocol) {
	m_protocol = newProtocol;
}

QString MediaSourceInfo::jellyfinId() const { return m_jellyfinId; }

void MediaSourceInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool MediaSourceInfo::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void MediaSourceInfo::setJellyfinIdNull() {
	m_jellyfinId.clear();

}
QString MediaSourceInfo::path() const { return m_path; }

void MediaSourceInfo::setPath(QString newPath) {
	m_path = newPath;
}
bool MediaSourceInfo::pathNull() const {
	return m_path.isNull();
}

void MediaSourceInfo::setPathNull() {
	m_path.clear();

}
QString MediaSourceInfo::encoderPath() const { return m_encoderPath; }

void MediaSourceInfo::setEncoderPath(QString newEncoderPath) {
	m_encoderPath = newEncoderPath;
}
bool MediaSourceInfo::encoderPathNull() const {
	return m_encoderPath.isNull();
}

void MediaSourceInfo::setEncoderPathNull() {
	m_encoderPath.clear();

}
MediaProtocol MediaSourceInfo::encoderProtocol() const { return m_encoderProtocol; }

void MediaSourceInfo::setEncoderProtocol(MediaProtocol newEncoderProtocol) {
	m_encoderProtocol = newEncoderProtocol;
}

MediaSourceType MediaSourceInfo::type() const { return m_type; }

void MediaSourceInfo::setType(MediaSourceType newType) {
	m_type = newType;
}

QString MediaSourceInfo::container() const { return m_container; }

void MediaSourceInfo::setContainer(QString newContainer) {
	m_container = newContainer;
}
bool MediaSourceInfo::containerNull() const {
	return m_container.isNull();
}

void MediaSourceInfo::setContainerNull() {
	m_container.clear();

}
std::optional<qint64> MediaSourceInfo::size() const { return m_size; }

void MediaSourceInfo::setSize(std::optional<qint64> newSize) {
	m_size = newSize;
}
bool MediaSourceInfo::sizeNull() const {
	return !m_size.has_value();
}

void MediaSourceInfo::setSizeNull() {
	m_size = std::nullopt;

}
QString MediaSourceInfo::name() const { return m_name; }

void MediaSourceInfo::setName(QString newName) {
	m_name = newName;
}
bool MediaSourceInfo::nameNull() const {
	return m_name.isNull();
}

void MediaSourceInfo::setNameNull() {
	m_name.clear();

}
bool MediaSourceInfo::isRemote() const { return m_isRemote; }

void MediaSourceInfo::setIsRemote(bool newIsRemote) {
	m_isRemote = newIsRemote;
}

QString MediaSourceInfo::eTag() const { return m_eTag; }

void MediaSourceInfo::setETag(QString newETag) {
	m_eTag = newETag;
}
bool MediaSourceInfo::eTagNull() const {
	return m_eTag.isNull();
}

void MediaSourceInfo::setETagNull() {
	m_eTag.clear();

}
std::optional<qint64> MediaSourceInfo::runTimeTicks() const { return m_runTimeTicks; }

void MediaSourceInfo::setRunTimeTicks(std::optional<qint64> newRunTimeTicks) {
	m_runTimeTicks = newRunTimeTicks;
}
bool MediaSourceInfo::runTimeTicksNull() const {
	return !m_runTimeTicks.has_value();
}

void MediaSourceInfo::setRunTimeTicksNull() {
	m_runTimeTicks = std::nullopt;

}
bool MediaSourceInfo::readAtNativeFramerate() const { return m_readAtNativeFramerate; }

void MediaSourceInfo::setReadAtNativeFramerate(bool newReadAtNativeFramerate) {
	m_readAtNativeFramerate = newReadAtNativeFramerate;
}

bool MediaSourceInfo::ignoreDts() const { return m_ignoreDts; }

void MediaSourceInfo::setIgnoreDts(bool newIgnoreDts) {
	m_ignoreDts = newIgnoreDts;
}

bool MediaSourceInfo::ignoreIndex() const { return m_ignoreIndex; }

void MediaSourceInfo::setIgnoreIndex(bool newIgnoreIndex) {
	m_ignoreIndex = newIgnoreIndex;
}

bool MediaSourceInfo::genPtsInput() const { return m_genPtsInput; }

void MediaSourceInfo::setGenPtsInput(bool newGenPtsInput) {
	m_genPtsInput = newGenPtsInput;
}

bool MediaSourceInfo::supportsTranscoding() const { return m_supportsTranscoding; }

void MediaSourceInfo::setSupportsTranscoding(bool newSupportsTranscoding) {
	m_supportsTranscoding = newSupportsTranscoding;
}

bool MediaSourceInfo::supportsDirectStream() const { return m_supportsDirectStream; }

void MediaSourceInfo::setSupportsDirectStream(bool newSupportsDirectStream) {
	m_supportsDirectStream = newSupportsDirectStream;
}

bool MediaSourceInfo::supportsDirectPlay() const { return m_supportsDirectPlay; }

void MediaSourceInfo::setSupportsDirectPlay(bool newSupportsDirectPlay) {
	m_supportsDirectPlay = newSupportsDirectPlay;
}

bool MediaSourceInfo::isInfiniteStream() const { return m_isInfiniteStream; }

void MediaSourceInfo::setIsInfiniteStream(bool newIsInfiniteStream) {
	m_isInfiniteStream = newIsInfiniteStream;
}

bool MediaSourceInfo::requiresOpening() const { return m_requiresOpening; }

void MediaSourceInfo::setRequiresOpening(bool newRequiresOpening) {
	m_requiresOpening = newRequiresOpening;
}

QString MediaSourceInfo::openToken() const { return m_openToken; }

void MediaSourceInfo::setOpenToken(QString newOpenToken) {
	m_openToken = newOpenToken;
}
bool MediaSourceInfo::openTokenNull() const {
	return m_openToken.isNull();
}

void MediaSourceInfo::setOpenTokenNull() {
	m_openToken.clear();

}
bool MediaSourceInfo::requiresClosing() const { return m_requiresClosing; }

void MediaSourceInfo::setRequiresClosing(bool newRequiresClosing) {
	m_requiresClosing = newRequiresClosing;
}

QString MediaSourceInfo::liveStreamId() const { return m_liveStreamId; }

void MediaSourceInfo::setLiveStreamId(QString newLiveStreamId) {
	m_liveStreamId = newLiveStreamId;
}
bool MediaSourceInfo::liveStreamIdNull() const {
	return m_liveStreamId.isNull();
}

void MediaSourceInfo::setLiveStreamIdNull() {
	m_liveStreamId.clear();

}
std::optional<qint32> MediaSourceInfo::bufferMs() const { return m_bufferMs; }

void MediaSourceInfo::setBufferMs(std::optional<qint32> newBufferMs) {
	m_bufferMs = newBufferMs;
}
bool MediaSourceInfo::bufferMsNull() const {
	return !m_bufferMs.has_value();
}

void MediaSourceInfo::setBufferMsNull() {
	m_bufferMs = std::nullopt;

}
bool MediaSourceInfo::requiresLooping() const { return m_requiresLooping; }

void MediaSourceInfo::setRequiresLooping(bool newRequiresLooping) {
	m_requiresLooping = newRequiresLooping;
}

bool MediaSourceInfo::supportsProbing() const { return m_supportsProbing; }

void MediaSourceInfo::setSupportsProbing(bool newSupportsProbing) {
	m_supportsProbing = newSupportsProbing;
}

VideoType MediaSourceInfo::videoType() const { return m_videoType; }

void MediaSourceInfo::setVideoType(VideoType newVideoType) {
	m_videoType = newVideoType;
}

IsoType MediaSourceInfo::isoType() const { return m_isoType; }

void MediaSourceInfo::setIsoType(IsoType newIsoType) {
	m_isoType = newIsoType;
}

Video3DFormat MediaSourceInfo::video3DFormat() const { return m_video3DFormat; }

void MediaSourceInfo::setVideo3DFormat(Video3DFormat newVideo3DFormat) {
	m_video3DFormat = newVideo3DFormat;
}

QList<MediaStream> MediaSourceInfo::mediaStreams() const { return m_mediaStreams; }

void MediaSourceInfo::setMediaStreams(QList<MediaStream> newMediaStreams) {
	m_mediaStreams = newMediaStreams;
}
bool MediaSourceInfo::mediaStreamsNull() const {
	return m_mediaStreams.size() == 0;
}

void MediaSourceInfo::setMediaStreamsNull() {
	m_mediaStreams.clear();

}
QList<MediaAttachment> MediaSourceInfo::mediaAttachments() const { return m_mediaAttachments; }

void MediaSourceInfo::setMediaAttachments(QList<MediaAttachment> newMediaAttachments) {
	m_mediaAttachments = newMediaAttachments;
}
bool MediaSourceInfo::mediaAttachmentsNull() const {
	return m_mediaAttachments.size() == 0;
}

void MediaSourceInfo::setMediaAttachmentsNull() {
	m_mediaAttachments.clear();

}
QStringList MediaSourceInfo::formats() const { return m_formats; }

void MediaSourceInfo::setFormats(QStringList newFormats) {
	m_formats = newFormats;
}
bool MediaSourceInfo::formatsNull() const {
	return m_formats.size() == 0;
}

void MediaSourceInfo::setFormatsNull() {
	m_formats.clear();

}
std::optional<qint32> MediaSourceInfo::bitrate() const { return m_bitrate; }

void MediaSourceInfo::setBitrate(std::optional<qint32> newBitrate) {
	m_bitrate = newBitrate;
}
bool MediaSourceInfo::bitrateNull() const {
	return !m_bitrate.has_value();
}

void MediaSourceInfo::setBitrateNull() {
	m_bitrate = std::nullopt;

}
TransportStreamTimestamp MediaSourceInfo::timestamp() const { return m_timestamp; }

void MediaSourceInfo::setTimestamp(TransportStreamTimestamp newTimestamp) {
	m_timestamp = newTimestamp;
}

QJsonObject MediaSourceInfo::requiredHttpHeaders() const { return m_requiredHttpHeaders; }

void MediaSourceInfo::setRequiredHttpHeaders(QJsonObject newRequiredHttpHeaders) {
	m_requiredHttpHeaders = newRequiredHttpHeaders;
}
bool MediaSourceInfo::requiredHttpHeadersNull() const {
	return m_requiredHttpHeaders.isEmpty();
}

void MediaSourceInfo::setRequiredHttpHeadersNull() {
	m_requiredHttpHeaders= QJsonObject();

}
QString MediaSourceInfo::transcodingUrl() const { return m_transcodingUrl; }

void MediaSourceInfo::setTranscodingUrl(QString newTranscodingUrl) {
	m_transcodingUrl = newTranscodingUrl;
}
bool MediaSourceInfo::transcodingUrlNull() const {
	return m_transcodingUrl.isNull();
}

void MediaSourceInfo::setTranscodingUrlNull() {
	m_transcodingUrl.clear();

}
QString MediaSourceInfo::transcodingSubProtocol() const { return m_transcodingSubProtocol; }

void MediaSourceInfo::setTranscodingSubProtocol(QString newTranscodingSubProtocol) {
	m_transcodingSubProtocol = newTranscodingSubProtocol;
}
bool MediaSourceInfo::transcodingSubProtocolNull() const {
	return m_transcodingSubProtocol.isNull();
}

void MediaSourceInfo::setTranscodingSubProtocolNull() {
	m_transcodingSubProtocol.clear();

}
QString MediaSourceInfo::transcodingContainer() const { return m_transcodingContainer; }

void MediaSourceInfo::setTranscodingContainer(QString newTranscodingContainer) {
	m_transcodingContainer = newTranscodingContainer;
}
bool MediaSourceInfo::transcodingContainerNull() const {
	return m_transcodingContainer.isNull();
}

void MediaSourceInfo::setTranscodingContainerNull() {
	m_transcodingContainer.clear();

}
std::optional<qint32> MediaSourceInfo::analyzeDurationMs() const { return m_analyzeDurationMs; }

void MediaSourceInfo::setAnalyzeDurationMs(std::optional<qint32> newAnalyzeDurationMs) {
	m_analyzeDurationMs = newAnalyzeDurationMs;
}
bool MediaSourceInfo::analyzeDurationMsNull() const {
	return !m_analyzeDurationMs.has_value();
}

void MediaSourceInfo::setAnalyzeDurationMsNull() {
	m_analyzeDurationMs = std::nullopt;

}
std::optional<qint32> MediaSourceInfo::defaultAudioStreamIndex() const { return m_defaultAudioStreamIndex; }

void MediaSourceInfo::setDefaultAudioStreamIndex(std::optional<qint32> newDefaultAudioStreamIndex) {
	m_defaultAudioStreamIndex = newDefaultAudioStreamIndex;
}
bool MediaSourceInfo::defaultAudioStreamIndexNull() const {
	return !m_defaultAudioStreamIndex.has_value();
}

void MediaSourceInfo::setDefaultAudioStreamIndexNull() {
	m_defaultAudioStreamIndex = std::nullopt;

}
std::optional<qint32> MediaSourceInfo::defaultSubtitleStreamIndex() const { return m_defaultSubtitleStreamIndex; }

void MediaSourceInfo::setDefaultSubtitleStreamIndex(std::optional<qint32> newDefaultSubtitleStreamIndex) {
	m_defaultSubtitleStreamIndex = newDefaultSubtitleStreamIndex;
}
bool MediaSourceInfo::defaultSubtitleStreamIndexNull() const {
	return !m_defaultSubtitleStreamIndex.has_value();
}

void MediaSourceInfo::setDefaultSubtitleStreamIndexNull() {
	m_defaultSubtitleStreamIndex = std::nullopt;

}

} // NS DTO

namespace Support {

using MediaSourceInfo = Jellyfin::DTO::MediaSourceInfo;

template <>
MediaSourceInfo fromJsonValue(const QJsonValue &source, convertType<MediaSourceInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return MediaSourceInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const MediaSourceInfo &source, convertType<MediaSourceInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
