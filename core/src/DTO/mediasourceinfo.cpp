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

#include <JellyfinQt/DTO/mediasourceinfo.h>

namespace Jellyfin {
namespace DTO {

MediaSourceInfo::MediaSourceInfo(QObject *parent) {}

MediaSourceInfo MediaSourceInfo::fromJson(QJsonObject source) {MediaSourceInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void MediaSourceInfo::setFromJson(QJsonObject source) {
	m_protocol = fromJsonValue<MediaProtocol>(source["Protocol"]);
	m_jellyfinId = fromJsonValue<QString>(source["Id"]);
	m_path = fromJsonValue<QString>(source["Path"]);
	m_encoderPath = fromJsonValue<QString>(source["EncoderPath"]);
	m_encoderProtocol = fromJsonValue<MediaProtocol>(source["EncoderProtocol"]);
	m_type = fromJsonValue<MediaSourceType>(source["Type"]);
	m_container = fromJsonValue<QString>(source["Container"]);
	m_size = fromJsonValue<qint64>(source["Size"]);
	m_name = fromJsonValue<QString>(source["Name"]);
	m_isRemote = fromJsonValue<bool>(source["IsRemote"]);
	m_eTag = fromJsonValue<QString>(source["ETag"]);
	m_runTimeTicks = fromJsonValue<qint64>(source["RunTimeTicks"]);
	m_readAtNativeFramerate = fromJsonValue<bool>(source["ReadAtNativeFramerate"]);
	m_ignoreDts = fromJsonValue<bool>(source["IgnoreDts"]);
	m_ignoreIndex = fromJsonValue<bool>(source["IgnoreIndex"]);
	m_genPtsInput = fromJsonValue<bool>(source["GenPtsInput"]);
	m_supportsTranscoding = fromJsonValue<bool>(source["SupportsTranscoding"]);
	m_supportsDirectStream = fromJsonValue<bool>(source["SupportsDirectStream"]);
	m_supportsDirectPlay = fromJsonValue<bool>(source["SupportsDirectPlay"]);
	m_isInfiniteStream = fromJsonValue<bool>(source["IsInfiniteStream"]);
	m_requiresOpening = fromJsonValue<bool>(source["RequiresOpening"]);
	m_openToken = fromJsonValue<QString>(source["OpenToken"]);
	m_requiresClosing = fromJsonValue<bool>(source["RequiresClosing"]);
	m_liveStreamId = fromJsonValue<QString>(source["LiveStreamId"]);
	m_bufferMs = fromJsonValue<qint32>(source["BufferMs"]);
	m_requiresLooping = fromJsonValue<bool>(source["RequiresLooping"]);
	m_supportsProbing = fromJsonValue<bool>(source["SupportsProbing"]);
	m_videoType = fromJsonValue<VideoType>(source["VideoType"]);
	m_isoType = fromJsonValue<IsoType>(source["IsoType"]);
	m_video3DFormat = fromJsonValue<Video3DFormat>(source["Video3DFormat"]);
	m_mediaStreams = fromJsonValue<QList<QSharedPointer<MediaStream>>>(source["MediaStreams"]);
	m_mediaAttachments = fromJsonValue<QList<QSharedPointer<MediaAttachment>>>(source["MediaAttachments"]);
	m_formats = fromJsonValue<QStringList>(source["Formats"]);
	m_bitrate = fromJsonValue<qint32>(source["Bitrate"]);
	m_timestamp = fromJsonValue<TransportStreamTimestamp>(source["Timestamp"]);
	m_requiredHttpHeaders = fromJsonValue<QJsonObject>(source["RequiredHttpHeaders"]);
	m_transcodingUrl = fromJsonValue<QString>(source["TranscodingUrl"]);
	m_transcodingSubProtocol = fromJsonValue<QString>(source["TranscodingSubProtocol"]);
	m_transcodingContainer = fromJsonValue<QString>(source["TranscodingContainer"]);
	m_analyzeDurationMs = fromJsonValue<qint32>(source["AnalyzeDurationMs"]);
	m_defaultAudioStreamIndex = fromJsonValue<qint32>(source["DefaultAudioStreamIndex"]);
	m_defaultSubtitleStreamIndex = fromJsonValue<qint32>(source["DefaultSubtitleStreamIndex"]);

}
	
QJsonObject MediaSourceInfo::toJson() {
	QJsonObject result;
	result["Protocol"] = toJsonValue<MediaProtocol>(m_protocol);
	result["Id"] = toJsonValue<QString>(m_jellyfinId);
	result["Path"] = toJsonValue<QString>(m_path);
	result["EncoderPath"] = toJsonValue<QString>(m_encoderPath);
	result["EncoderProtocol"] = toJsonValue<MediaProtocol>(m_encoderProtocol);
	result["Type"] = toJsonValue<MediaSourceType>(m_type);
	result["Container"] = toJsonValue<QString>(m_container);
	result["Size"] = toJsonValue<qint64>(m_size);
	result["Name"] = toJsonValue<QString>(m_name);
	result["IsRemote"] = toJsonValue<bool>(m_isRemote);
	result["ETag"] = toJsonValue<QString>(m_eTag);
	result["RunTimeTicks"] = toJsonValue<qint64>(m_runTimeTicks);
	result["ReadAtNativeFramerate"] = toJsonValue<bool>(m_readAtNativeFramerate);
	result["IgnoreDts"] = toJsonValue<bool>(m_ignoreDts);
	result["IgnoreIndex"] = toJsonValue<bool>(m_ignoreIndex);
	result["GenPtsInput"] = toJsonValue<bool>(m_genPtsInput);
	result["SupportsTranscoding"] = toJsonValue<bool>(m_supportsTranscoding);
	result["SupportsDirectStream"] = toJsonValue<bool>(m_supportsDirectStream);
	result["SupportsDirectPlay"] = toJsonValue<bool>(m_supportsDirectPlay);
	result["IsInfiniteStream"] = toJsonValue<bool>(m_isInfiniteStream);
	result["RequiresOpening"] = toJsonValue<bool>(m_requiresOpening);
	result["OpenToken"] = toJsonValue<QString>(m_openToken);
	result["RequiresClosing"] = toJsonValue<bool>(m_requiresClosing);
	result["LiveStreamId"] = toJsonValue<QString>(m_liveStreamId);
	result["BufferMs"] = toJsonValue<qint32>(m_bufferMs);
	result["RequiresLooping"] = toJsonValue<bool>(m_requiresLooping);
	result["SupportsProbing"] = toJsonValue<bool>(m_supportsProbing);
	result["VideoType"] = toJsonValue<VideoType>(m_videoType);
	result["IsoType"] = toJsonValue<IsoType>(m_isoType);
	result["Video3DFormat"] = toJsonValue<Video3DFormat>(m_video3DFormat);
	result["MediaStreams"] = toJsonValue<QList<QSharedPointer<MediaStream>>>(m_mediaStreams);
	result["MediaAttachments"] = toJsonValue<QList<QSharedPointer<MediaAttachment>>>(m_mediaAttachments);
	result["Formats"] = toJsonValue<QStringList>(m_formats);
	result["Bitrate"] = toJsonValue<qint32>(m_bitrate);
	result["Timestamp"] = toJsonValue<TransportStreamTimestamp>(m_timestamp);
	result["RequiredHttpHeaders"] = toJsonValue<QJsonObject>(m_requiredHttpHeaders);
	result["TranscodingUrl"] = toJsonValue<QString>(m_transcodingUrl);
	result["TranscodingSubProtocol"] = toJsonValue<QString>(m_transcodingSubProtocol);
	result["TranscodingContainer"] = toJsonValue<QString>(m_transcodingContainer);
	result["AnalyzeDurationMs"] = toJsonValue<qint32>(m_analyzeDurationMs);
	result["DefaultAudioStreamIndex"] = toJsonValue<qint32>(m_defaultAudioStreamIndex);
	result["DefaultSubtitleStreamIndex"] = toJsonValue<qint32>(m_defaultSubtitleStreamIndex);

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
QString MediaSourceInfo::path() const { return m_path; }

void MediaSourceInfo::setPath(QString newPath) {
	m_path = newPath;
}
QString MediaSourceInfo::encoderPath() const { return m_encoderPath; }

void MediaSourceInfo::setEncoderPath(QString newEncoderPath) {
	m_encoderPath = newEncoderPath;
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
qint64 MediaSourceInfo::size() const { return m_size; }

void MediaSourceInfo::setSize(qint64 newSize) {
	m_size = newSize;
}
QString MediaSourceInfo::name() const { return m_name; }

void MediaSourceInfo::setName(QString newName) {
	m_name = newName;
}
bool MediaSourceInfo::isRemote() const { return m_isRemote; }

void MediaSourceInfo::setIsRemote(bool newIsRemote) {
	m_isRemote = newIsRemote;
}
QString MediaSourceInfo::eTag() const { return m_eTag; }

void MediaSourceInfo::setETag(QString newETag) {
	m_eTag = newETag;
}
qint64 MediaSourceInfo::runTimeTicks() const { return m_runTimeTicks; }

void MediaSourceInfo::setRunTimeTicks(qint64 newRunTimeTicks) {
	m_runTimeTicks = newRunTimeTicks;
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
bool MediaSourceInfo::requiresClosing() const { return m_requiresClosing; }

void MediaSourceInfo::setRequiresClosing(bool newRequiresClosing) {
	m_requiresClosing = newRequiresClosing;
}
QString MediaSourceInfo::liveStreamId() const { return m_liveStreamId; }

void MediaSourceInfo::setLiveStreamId(QString newLiveStreamId) {
	m_liveStreamId = newLiveStreamId;
}
qint32 MediaSourceInfo::bufferMs() const { return m_bufferMs; }

void MediaSourceInfo::setBufferMs(qint32 newBufferMs) {
	m_bufferMs = newBufferMs;
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
QList<QSharedPointer<MediaStream>> MediaSourceInfo::mediaStreams() const { return m_mediaStreams; }

void MediaSourceInfo::setMediaStreams(QList<QSharedPointer<MediaStream>> newMediaStreams) {
	m_mediaStreams = newMediaStreams;
}
QList<QSharedPointer<MediaAttachment>> MediaSourceInfo::mediaAttachments() const { return m_mediaAttachments; }

void MediaSourceInfo::setMediaAttachments(QList<QSharedPointer<MediaAttachment>> newMediaAttachments) {
	m_mediaAttachments = newMediaAttachments;
}
QStringList MediaSourceInfo::formats() const { return m_formats; }

void MediaSourceInfo::setFormats(QStringList newFormats) {
	m_formats = newFormats;
}
qint32 MediaSourceInfo::bitrate() const { return m_bitrate; }

void MediaSourceInfo::setBitrate(qint32 newBitrate) {
	m_bitrate = newBitrate;
}
TransportStreamTimestamp MediaSourceInfo::timestamp() const { return m_timestamp; }

void MediaSourceInfo::setTimestamp(TransportStreamTimestamp newTimestamp) {
	m_timestamp = newTimestamp;
}
QJsonObject MediaSourceInfo::requiredHttpHeaders() const { return m_requiredHttpHeaders; }

void MediaSourceInfo::setRequiredHttpHeaders(QJsonObject newRequiredHttpHeaders) {
	m_requiredHttpHeaders = newRequiredHttpHeaders;
}
QString MediaSourceInfo::transcodingUrl() const { return m_transcodingUrl; }

void MediaSourceInfo::setTranscodingUrl(QString newTranscodingUrl) {
	m_transcodingUrl = newTranscodingUrl;
}
QString MediaSourceInfo::transcodingSubProtocol() const { return m_transcodingSubProtocol; }

void MediaSourceInfo::setTranscodingSubProtocol(QString newTranscodingSubProtocol) {
	m_transcodingSubProtocol = newTranscodingSubProtocol;
}
QString MediaSourceInfo::transcodingContainer() const { return m_transcodingContainer; }

void MediaSourceInfo::setTranscodingContainer(QString newTranscodingContainer) {
	m_transcodingContainer = newTranscodingContainer;
}
qint32 MediaSourceInfo::analyzeDurationMs() const { return m_analyzeDurationMs; }

void MediaSourceInfo::setAnalyzeDurationMs(qint32 newAnalyzeDurationMs) {
	m_analyzeDurationMs = newAnalyzeDurationMs;
}
qint32 MediaSourceInfo::defaultAudioStreamIndex() const { return m_defaultAudioStreamIndex; }

void MediaSourceInfo::setDefaultAudioStreamIndex(qint32 newDefaultAudioStreamIndex) {
	m_defaultAudioStreamIndex = newDefaultAudioStreamIndex;
}
qint32 MediaSourceInfo::defaultSubtitleStreamIndex() const { return m_defaultSubtitleStreamIndex; }

void MediaSourceInfo::setDefaultSubtitleStreamIndex(qint32 newDefaultSubtitleStreamIndex) {
	m_defaultSubtitleStreamIndex = newDefaultSubtitleStreamIndex;
}


} // NS Jellyfin
} // NS DTO
