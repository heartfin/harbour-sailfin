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

#include "JellyfinQt/loader/headvideostreambycontainerparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadVideoStreamByContainerParams

const QString &HeadVideoStreamByContainerParams::container() const {
	return m_container;
}

void HeadVideoStreamByContainerParams::setContainer(QString newContainer) {
	m_container = newContainer;
}


const QString &HeadVideoStreamByContainerParams::itemId() const {
	return m_itemId;
}

void HeadVideoStreamByContainerParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &HeadVideoStreamByContainerParams::stream() const {
	return m_stream;
}

void HeadVideoStreamByContainerParams::setStream(QString newStream) {
	m_stream = newStream;
}


const bool &HeadVideoStreamByContainerParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void HeadVideoStreamByContainerParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool HeadVideoStreamByContainerParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void HeadVideoStreamByContainerParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &HeadVideoStreamByContainerParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void HeadVideoStreamByContainerParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool HeadVideoStreamByContainerParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void HeadVideoStreamByContainerParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void HeadVideoStreamByContainerParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool HeadVideoStreamByContainerParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void HeadVideoStreamByContainerParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::audioChannels() const {
	return m_audioChannels.value();
}

void HeadVideoStreamByContainerParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool HeadVideoStreamByContainerParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void HeadVideoStreamByContainerParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &HeadVideoStreamByContainerParams::audioCodec() const {
	return m_audioCodec;
}

void HeadVideoStreamByContainerParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool HeadVideoStreamByContainerParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void HeadVideoStreamByContainerParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &HeadVideoStreamByContainerParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void HeadVideoStreamByContainerParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool HeadVideoStreamByContainerParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void HeadVideoStreamByContainerParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void HeadVideoStreamByContainerParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool HeadVideoStreamByContainerParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void HeadVideoStreamByContainerParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &HeadVideoStreamByContainerParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void HeadVideoStreamByContainerParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool HeadVideoStreamByContainerParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void HeadVideoStreamByContainerParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &HeadVideoStreamByContainerParams::context() const {
	return m_context;
}

void HeadVideoStreamByContainerParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool HeadVideoStreamByContainerParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void HeadVideoStreamByContainerParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &HeadVideoStreamByContainerParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void HeadVideoStreamByContainerParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool HeadVideoStreamByContainerParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void HeadVideoStreamByContainerParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void HeadVideoStreamByContainerParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool HeadVideoStreamByContainerParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void HeadVideoStreamByContainerParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &HeadVideoStreamByContainerParams::deInterlace() const {
	return m_deInterlace.value();
}

void HeadVideoStreamByContainerParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool HeadVideoStreamByContainerParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void HeadVideoStreamByContainerParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &HeadVideoStreamByContainerParams::deviceId() const {
	return m_deviceId;
}

void HeadVideoStreamByContainerParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool HeadVideoStreamByContainerParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void HeadVideoStreamByContainerParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &HeadVideoStreamByContainerParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void HeadVideoStreamByContainerParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool HeadVideoStreamByContainerParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void HeadVideoStreamByContainerParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &HeadVideoStreamByContainerParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void HeadVideoStreamByContainerParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool HeadVideoStreamByContainerParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void HeadVideoStreamByContainerParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &HeadVideoStreamByContainerParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void HeadVideoStreamByContainerParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool HeadVideoStreamByContainerParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void HeadVideoStreamByContainerParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &HeadVideoStreamByContainerParams::framerate() const {
	return m_framerate.value();
}

void HeadVideoStreamByContainerParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool HeadVideoStreamByContainerParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void HeadVideoStreamByContainerParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::height() const {
	return m_height.value();
}

void HeadVideoStreamByContainerParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadVideoStreamByContainerParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadVideoStreamByContainerParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &HeadVideoStreamByContainerParams::level() const {
	return m_level;
}

void HeadVideoStreamByContainerParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool HeadVideoStreamByContainerParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void HeadVideoStreamByContainerParams::setLevelNull() {
	m_level.clear();
}


const QString &HeadVideoStreamByContainerParams::liveStreamId() const {
	return m_liveStreamId;
}

void HeadVideoStreamByContainerParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool HeadVideoStreamByContainerParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void HeadVideoStreamByContainerParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &HeadVideoStreamByContainerParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void HeadVideoStreamByContainerParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool HeadVideoStreamByContainerParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void HeadVideoStreamByContainerParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void HeadVideoStreamByContainerParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool HeadVideoStreamByContainerParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void HeadVideoStreamByContainerParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &HeadVideoStreamByContainerParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void HeadVideoStreamByContainerParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool HeadVideoStreamByContainerParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void HeadVideoStreamByContainerParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void HeadVideoStreamByContainerParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool HeadVideoStreamByContainerParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void HeadVideoStreamByContainerParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void HeadVideoStreamByContainerParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool HeadVideoStreamByContainerParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void HeadVideoStreamByContainerParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &HeadVideoStreamByContainerParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void HeadVideoStreamByContainerParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool HeadVideoStreamByContainerParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void HeadVideoStreamByContainerParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &HeadVideoStreamByContainerParams::minSegments() const {
	return m_minSegments.value();
}

void HeadVideoStreamByContainerParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool HeadVideoStreamByContainerParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void HeadVideoStreamByContainerParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &HeadVideoStreamByContainerParams::params() const {
	return m_params;
}

void HeadVideoStreamByContainerParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool HeadVideoStreamByContainerParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void HeadVideoStreamByContainerParams::setParamsNull() {
	m_params.clear();
}


const QString &HeadVideoStreamByContainerParams::playSessionId() const {
	return m_playSessionId;
}

void HeadVideoStreamByContainerParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool HeadVideoStreamByContainerParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void HeadVideoStreamByContainerParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &HeadVideoStreamByContainerParams::profile() const {
	return m_profile;
}

void HeadVideoStreamByContainerParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool HeadVideoStreamByContainerParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void HeadVideoStreamByContainerParams::setProfileNull() {
	m_profile.clear();
}


const bool &HeadVideoStreamByContainerParams::requireAvc() const {
	return m_requireAvc.value();
}

void HeadVideoStreamByContainerParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool HeadVideoStreamByContainerParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void HeadVideoStreamByContainerParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &HeadVideoStreamByContainerParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void HeadVideoStreamByContainerParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool HeadVideoStreamByContainerParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void HeadVideoStreamByContainerParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &HeadVideoStreamByContainerParams::segmentContainer() const {
	return m_segmentContainer;
}

void HeadVideoStreamByContainerParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool HeadVideoStreamByContainerParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void HeadVideoStreamByContainerParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &HeadVideoStreamByContainerParams::segmentLength() const {
	return m_segmentLength.value();
}

void HeadVideoStreamByContainerParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool HeadVideoStreamByContainerParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void HeadVideoStreamByContainerParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &HeadVideoStreamByContainerParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void HeadVideoStreamByContainerParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool HeadVideoStreamByContainerParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void HeadVideoStreamByContainerParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &HeadVideoStreamByContainerParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void HeadVideoStreamByContainerParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool HeadVideoStreamByContainerParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void HeadVideoStreamByContainerParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &HeadVideoStreamByContainerParams::streamOptions() const {
	return m_streamOptions;
}

void HeadVideoStreamByContainerParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool HeadVideoStreamByContainerParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void HeadVideoStreamByContainerParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &HeadVideoStreamByContainerParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void HeadVideoStreamByContainerParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool HeadVideoStreamByContainerParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void HeadVideoStreamByContainerParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &HeadVideoStreamByContainerParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void HeadVideoStreamByContainerParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool HeadVideoStreamByContainerParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void HeadVideoStreamByContainerParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &HeadVideoStreamByContainerParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void HeadVideoStreamByContainerParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool HeadVideoStreamByContainerParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void HeadVideoStreamByContainerParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &HeadVideoStreamByContainerParams::tag() const {
	return m_tag;
}

void HeadVideoStreamByContainerParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadVideoStreamByContainerParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadVideoStreamByContainerParams::setTagNull() {
	m_tag.clear();
}


const QString &HeadVideoStreamByContainerParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void HeadVideoStreamByContainerParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool HeadVideoStreamByContainerParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void HeadVideoStreamByContainerParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &HeadVideoStreamByContainerParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void HeadVideoStreamByContainerParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool HeadVideoStreamByContainerParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void HeadVideoStreamByContainerParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void HeadVideoStreamByContainerParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool HeadVideoStreamByContainerParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void HeadVideoStreamByContainerParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &HeadVideoStreamByContainerParams::videoCodec() const {
	return m_videoCodec;
}

void HeadVideoStreamByContainerParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool HeadVideoStreamByContainerParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void HeadVideoStreamByContainerParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &HeadVideoStreamByContainerParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void HeadVideoStreamByContainerParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool HeadVideoStreamByContainerParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void HeadVideoStreamByContainerParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &HeadVideoStreamByContainerParams::width() const {
	return m_width.value();
}

void HeadVideoStreamByContainerParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadVideoStreamByContainerParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadVideoStreamByContainerParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
