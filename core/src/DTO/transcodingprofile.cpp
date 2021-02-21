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

#include <JellyfinQt/DTO/transcodingprofile.h>

#include <JellyfinQt/DTO/dlnaprofiletype.h>
#include <JellyfinQt/DTO/encodingcontext.h>
#include <JellyfinQt/DTO/transcodeseekinfo.h>

namespace Jellyfin {
namespace DTO {

TranscodingProfile::TranscodingProfile(QObject *parent) : QObject(parent) {}

TranscodingProfile *TranscodingProfile::fromJSON(QJsonObject source, QObject *parent) {
	TranscodingProfile *instance = new TranscodingProfile(parent);
	instance->updateFromJSON(source);
	return instance;
}

void TranscodingProfile::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject TranscodingProfile::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString TranscodingProfile::container() const { return m_container; }
void TranscodingProfile::setContainer(QString newContainer) {
	m_container = newContainer;
	emit containerChanged(newContainer);
}

DlnaProfileType TranscodingProfile::type() const { return m_type; }
void TranscodingProfile::setType(DlnaProfileType newType) {
	m_type = newType;
	emit typeChanged(newType);
}

QString TranscodingProfile::videoCodec() const { return m_videoCodec; }
void TranscodingProfile::setVideoCodec(QString newVideoCodec) {
	m_videoCodec = newVideoCodec;
	emit videoCodecChanged(newVideoCodec);
}

QString TranscodingProfile::audioCodec() const { return m_audioCodec; }
void TranscodingProfile::setAudioCodec(QString newAudioCodec) {
	m_audioCodec = newAudioCodec;
	emit audioCodecChanged(newAudioCodec);
}

QString TranscodingProfile::protocol() const { return m_protocol; }
void TranscodingProfile::setProtocol(QString newProtocol) {
	m_protocol = newProtocol;
	emit protocolChanged(newProtocol);
}

bool TranscodingProfile::estimateContentLength() const { return m_estimateContentLength; }
void TranscodingProfile::setEstimateContentLength(bool newEstimateContentLength) {
	m_estimateContentLength = newEstimateContentLength;
	emit estimateContentLengthChanged(newEstimateContentLength);
}

bool TranscodingProfile::enableMpegtsM2TsMode() const { return m_enableMpegtsM2TsMode; }
void TranscodingProfile::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode) {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
	emit enableMpegtsM2TsModeChanged(newEnableMpegtsM2TsMode);
}

TranscodeSeekInfo TranscodingProfile::transcodeSeekInfo() const { return m_transcodeSeekInfo; }
void TranscodingProfile::setTranscodeSeekInfo(TranscodeSeekInfo newTranscodeSeekInfo) {
	m_transcodeSeekInfo = newTranscodeSeekInfo;
	emit transcodeSeekInfoChanged(newTranscodeSeekInfo);
}

bool TranscodingProfile::copyTimestamps() const { return m_copyTimestamps; }
void TranscodingProfile::setCopyTimestamps(bool newCopyTimestamps) {
	m_copyTimestamps = newCopyTimestamps;
	emit copyTimestampsChanged(newCopyTimestamps);
}

EncodingContext TranscodingProfile::context() const { return m_context; }
void TranscodingProfile::setContext(EncodingContext newContext) {
	m_context = newContext;
	emit contextChanged(newContext);
}

bool TranscodingProfile::enableSubtitlesInManifest() const { return m_enableSubtitlesInManifest; }
void TranscodingProfile::setEnableSubtitlesInManifest(bool newEnableSubtitlesInManifest) {
	m_enableSubtitlesInManifest = newEnableSubtitlesInManifest;
	emit enableSubtitlesInManifestChanged(newEnableSubtitlesInManifest);
}

QString TranscodingProfile::maxAudioChannels() const { return m_maxAudioChannels; }
void TranscodingProfile::setMaxAudioChannels(QString newMaxAudioChannels) {
	m_maxAudioChannels = newMaxAudioChannels;
	emit maxAudioChannelsChanged(newMaxAudioChannels);
}

qint32 TranscodingProfile::minSegments() const { return m_minSegments; }
void TranscodingProfile::setMinSegments(qint32 newMinSegments) {
	m_minSegments = newMinSegments;
	emit minSegmentsChanged(newMinSegments);
}

qint32 TranscodingProfile::segmentLength() const { return m_segmentLength; }
void TranscodingProfile::setSegmentLength(qint32 newSegmentLength) {
	m_segmentLength = newSegmentLength;
	emit segmentLengthChanged(newSegmentLength);
}

bool TranscodingProfile::breakOnNonKeyFrames() const { return m_breakOnNonKeyFrames; }
void TranscodingProfile::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames) {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
	emit breakOnNonKeyFramesChanged(newBreakOnNonKeyFrames);
}


} // NS Jellyfin
} // NS DTO
