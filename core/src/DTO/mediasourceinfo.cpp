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

#include <JellyfinQt/DTO/isotype.h>
#include <JellyfinQt/DTO/mediaprotocol.h>
#include <JellyfinQt/DTO/mediasourcetype.h>
#include <JellyfinQt/DTO/transportstreamtimestamp.h>
#include <JellyfinQt/DTO/video3dformat.h>
#include <JellyfinQt/DTO/videotype.h>

namespace Jellyfin {
namespace DTO {

MediaSourceInfo::MediaSourceInfo(QObject *parent) : QObject(parent) {}

MediaSourceInfo *MediaSourceInfo::fromJSON(QJsonObject source, QObject *parent) {
	MediaSourceInfo *instance = new MediaSourceInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void MediaSourceInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject MediaSourceInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
MediaProtocol MediaSourceInfo::protocol() const { return m_protocol; }
void MediaSourceInfo::setProtocol(MediaProtocol newProtocol) {
	m_protocol = newProtocol;
	emit protocolChanged(newProtocol);
}

QString MediaSourceInfo::jellyfinId() const { return m_jellyfinId; }
void MediaSourceInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

QString MediaSourceInfo::path() const { return m_path; }
void MediaSourceInfo::setPath(QString newPath) {
	m_path = newPath;
	emit pathChanged(newPath);
}

QString MediaSourceInfo::encoderPath() const { return m_encoderPath; }
void MediaSourceInfo::setEncoderPath(QString newEncoderPath) {
	m_encoderPath = newEncoderPath;
	emit encoderPathChanged(newEncoderPath);
}

MediaProtocol MediaSourceInfo::encoderProtocol() const { return m_encoderProtocol; }
void MediaSourceInfo::setEncoderProtocol(MediaProtocol newEncoderProtocol) {
	m_encoderProtocol = newEncoderProtocol;
	emit encoderProtocolChanged(newEncoderProtocol);
}

MediaSourceType MediaSourceInfo::type() const { return m_type; }
void MediaSourceInfo::setType(MediaSourceType newType) {
	m_type = newType;
	emit typeChanged(newType);
}

QString MediaSourceInfo::container() const { return m_container; }
void MediaSourceInfo::setContainer(QString newContainer) {
	m_container = newContainer;
	emit containerChanged(newContainer);
}

qint64 MediaSourceInfo::size() const { return m_size; }
void MediaSourceInfo::setSize(qint64 newSize) {
	m_size = newSize;
	emit sizeChanged(newSize);
}

QString MediaSourceInfo::name() const { return m_name; }
void MediaSourceInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

bool MediaSourceInfo::isRemote() const { return m_isRemote; }
void MediaSourceInfo::setIsRemote(bool newIsRemote) {
	m_isRemote = newIsRemote;
	emit isRemoteChanged(newIsRemote);
}

QString MediaSourceInfo::eTag() const { return m_eTag; }
void MediaSourceInfo::setETag(QString newETag) {
	m_eTag = newETag;
	emit eTagChanged(newETag);
}

qint64 MediaSourceInfo::runTimeTicks() const { return m_runTimeTicks; }
void MediaSourceInfo::setRunTimeTicks(qint64 newRunTimeTicks) {
	m_runTimeTicks = newRunTimeTicks;
	emit runTimeTicksChanged(newRunTimeTicks);
}

bool MediaSourceInfo::readAtNativeFramerate() const { return m_readAtNativeFramerate; }
void MediaSourceInfo::setReadAtNativeFramerate(bool newReadAtNativeFramerate) {
	m_readAtNativeFramerate = newReadAtNativeFramerate;
	emit readAtNativeFramerateChanged(newReadAtNativeFramerate);
}

bool MediaSourceInfo::ignoreDts() const { return m_ignoreDts; }
void MediaSourceInfo::setIgnoreDts(bool newIgnoreDts) {
	m_ignoreDts = newIgnoreDts;
	emit ignoreDtsChanged(newIgnoreDts);
}

bool MediaSourceInfo::ignoreIndex() const { return m_ignoreIndex; }
void MediaSourceInfo::setIgnoreIndex(bool newIgnoreIndex) {
	m_ignoreIndex = newIgnoreIndex;
	emit ignoreIndexChanged(newIgnoreIndex);
}

bool MediaSourceInfo::genPtsInput() const { return m_genPtsInput; }
void MediaSourceInfo::setGenPtsInput(bool newGenPtsInput) {
	m_genPtsInput = newGenPtsInput;
	emit genPtsInputChanged(newGenPtsInput);
}

bool MediaSourceInfo::supportsTranscoding() const { return m_supportsTranscoding; }
void MediaSourceInfo::setSupportsTranscoding(bool newSupportsTranscoding) {
	m_supportsTranscoding = newSupportsTranscoding;
	emit supportsTranscodingChanged(newSupportsTranscoding);
}

bool MediaSourceInfo::supportsDirectStream() const { return m_supportsDirectStream; }
void MediaSourceInfo::setSupportsDirectStream(bool newSupportsDirectStream) {
	m_supportsDirectStream = newSupportsDirectStream;
	emit supportsDirectStreamChanged(newSupportsDirectStream);
}

bool MediaSourceInfo::supportsDirectPlay() const { return m_supportsDirectPlay; }
void MediaSourceInfo::setSupportsDirectPlay(bool newSupportsDirectPlay) {
	m_supportsDirectPlay = newSupportsDirectPlay;
	emit supportsDirectPlayChanged(newSupportsDirectPlay);
}

bool MediaSourceInfo::isInfiniteStream() const { return m_isInfiniteStream; }
void MediaSourceInfo::setIsInfiniteStream(bool newIsInfiniteStream) {
	m_isInfiniteStream = newIsInfiniteStream;
	emit isInfiniteStreamChanged(newIsInfiniteStream);
}

bool MediaSourceInfo::requiresOpening() const { return m_requiresOpening; }
void MediaSourceInfo::setRequiresOpening(bool newRequiresOpening) {
	m_requiresOpening = newRequiresOpening;
	emit requiresOpeningChanged(newRequiresOpening);
}

QString MediaSourceInfo::openToken() const { return m_openToken; }
void MediaSourceInfo::setOpenToken(QString newOpenToken) {
	m_openToken = newOpenToken;
	emit openTokenChanged(newOpenToken);
}

bool MediaSourceInfo::requiresClosing() const { return m_requiresClosing; }
void MediaSourceInfo::setRequiresClosing(bool newRequiresClosing) {
	m_requiresClosing = newRequiresClosing;
	emit requiresClosingChanged(newRequiresClosing);
}

QString MediaSourceInfo::liveStreamId() const { return m_liveStreamId; }
void MediaSourceInfo::setLiveStreamId(QString newLiveStreamId) {
	m_liveStreamId = newLiveStreamId;
	emit liveStreamIdChanged(newLiveStreamId);
}

qint32 MediaSourceInfo::bufferMs() const { return m_bufferMs; }
void MediaSourceInfo::setBufferMs(qint32 newBufferMs) {
	m_bufferMs = newBufferMs;
	emit bufferMsChanged(newBufferMs);
}

bool MediaSourceInfo::requiresLooping() const { return m_requiresLooping; }
void MediaSourceInfo::setRequiresLooping(bool newRequiresLooping) {
	m_requiresLooping = newRequiresLooping;
	emit requiresLoopingChanged(newRequiresLooping);
}

bool MediaSourceInfo::supportsProbing() const { return m_supportsProbing; }
void MediaSourceInfo::setSupportsProbing(bool newSupportsProbing) {
	m_supportsProbing = newSupportsProbing;
	emit supportsProbingChanged(newSupportsProbing);
}

VideoType MediaSourceInfo::videoType() const { return m_videoType; }
void MediaSourceInfo::setVideoType(VideoType newVideoType) {
	m_videoType = newVideoType;
	emit videoTypeChanged(newVideoType);
}

IsoType MediaSourceInfo::isoType() const { return m_isoType; }
void MediaSourceInfo::setIsoType(IsoType newIsoType) {
	m_isoType = newIsoType;
	emit isoTypeChanged(newIsoType);
}

Video3DFormat MediaSourceInfo::video3DFormat() const { return m_video3DFormat; }
void MediaSourceInfo::setVideo3DFormat(Video3DFormat newVideo3DFormat) {
	m_video3DFormat = newVideo3DFormat;
	emit video3DFormatChanged(newVideo3DFormat);
}

QList<MediaStream *> MediaSourceInfo::mediaStreams() const { return m_mediaStreams; }
void MediaSourceInfo::setMediaStreams(QList<MediaStream *> newMediaStreams) {
	m_mediaStreams = newMediaStreams;
	emit mediaStreamsChanged(newMediaStreams);
}

QList<MediaAttachment *> MediaSourceInfo::mediaAttachments() const { return m_mediaAttachments; }
void MediaSourceInfo::setMediaAttachments(QList<MediaAttachment *> newMediaAttachments) {
	m_mediaAttachments = newMediaAttachments;
	emit mediaAttachmentsChanged(newMediaAttachments);
}

QStringList MediaSourceInfo::formats() const { return m_formats; }
void MediaSourceInfo::setFormats(QStringList newFormats) {
	m_formats = newFormats;
	emit formatsChanged(newFormats);
}

qint32 MediaSourceInfo::bitrate() const { return m_bitrate; }
void MediaSourceInfo::setBitrate(qint32 newBitrate) {
	m_bitrate = newBitrate;
	emit bitrateChanged(newBitrate);
}

TransportStreamTimestamp MediaSourceInfo::timestamp() const { return m_timestamp; }
void MediaSourceInfo::setTimestamp(TransportStreamTimestamp newTimestamp) {
	m_timestamp = newTimestamp;
	emit timestampChanged(newTimestamp);
}

QJsonObject MediaSourceInfo::requiredHttpHeaders() const { return m_requiredHttpHeaders; }
void MediaSourceInfo::setRequiredHttpHeaders(QJsonObject newRequiredHttpHeaders) {
	m_requiredHttpHeaders = newRequiredHttpHeaders;
	emit requiredHttpHeadersChanged(newRequiredHttpHeaders);
}

QString MediaSourceInfo::transcodingUrl() const { return m_transcodingUrl; }
void MediaSourceInfo::setTranscodingUrl(QString newTranscodingUrl) {
	m_transcodingUrl = newTranscodingUrl;
	emit transcodingUrlChanged(newTranscodingUrl);
}

QString MediaSourceInfo::transcodingSubProtocol() const { return m_transcodingSubProtocol; }
void MediaSourceInfo::setTranscodingSubProtocol(QString newTranscodingSubProtocol) {
	m_transcodingSubProtocol = newTranscodingSubProtocol;
	emit transcodingSubProtocolChanged(newTranscodingSubProtocol);
}

QString MediaSourceInfo::transcodingContainer() const { return m_transcodingContainer; }
void MediaSourceInfo::setTranscodingContainer(QString newTranscodingContainer) {
	m_transcodingContainer = newTranscodingContainer;
	emit transcodingContainerChanged(newTranscodingContainer);
}

qint32 MediaSourceInfo::analyzeDurationMs() const { return m_analyzeDurationMs; }
void MediaSourceInfo::setAnalyzeDurationMs(qint32 newAnalyzeDurationMs) {
	m_analyzeDurationMs = newAnalyzeDurationMs;
	emit analyzeDurationMsChanged(newAnalyzeDurationMs);
}

qint32 MediaSourceInfo::defaultAudioStreamIndex() const { return m_defaultAudioStreamIndex; }
void MediaSourceInfo::setDefaultAudioStreamIndex(qint32 newDefaultAudioStreamIndex) {
	m_defaultAudioStreamIndex = newDefaultAudioStreamIndex;
	emit defaultAudioStreamIndexChanged(newDefaultAudioStreamIndex);
}

qint32 MediaSourceInfo::defaultSubtitleStreamIndex() const { return m_defaultSubtitleStreamIndex; }
void MediaSourceInfo::setDefaultSubtitleStreamIndex(qint32 newDefaultSubtitleStreamIndex) {
	m_defaultSubtitleStreamIndex = newDefaultSubtitleStreamIndex;
	emit defaultSubtitleStreamIndexChanged(newDefaultSubtitleStreamIndex);
}


} // NS Jellyfin
} // NS DTO
