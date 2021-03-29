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

#include "JellyfinQt/loader/headvideostreamparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadVideoStreamParams

const QString &HeadVideoStreamParams::itemId() const {
	return m_itemId;
}

void HeadVideoStreamParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &HeadVideoStreamParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void HeadVideoStreamParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool HeadVideoStreamParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void HeadVideoStreamParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &HeadVideoStreamParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void HeadVideoStreamParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool HeadVideoStreamParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void HeadVideoStreamParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &HeadVideoStreamParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void HeadVideoStreamParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool HeadVideoStreamParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void HeadVideoStreamParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &HeadVideoStreamParams::audioChannels() const {
	return m_audioChannels.value();
}

void HeadVideoStreamParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool HeadVideoStreamParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void HeadVideoStreamParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &HeadVideoStreamParams::audioCodec() const {
	return m_audioCodec;
}

void HeadVideoStreamParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool HeadVideoStreamParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void HeadVideoStreamParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &HeadVideoStreamParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void HeadVideoStreamParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool HeadVideoStreamParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void HeadVideoStreamParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &HeadVideoStreamParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void HeadVideoStreamParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool HeadVideoStreamParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void HeadVideoStreamParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &HeadVideoStreamParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void HeadVideoStreamParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool HeadVideoStreamParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void HeadVideoStreamParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const QString &HeadVideoStreamParams::container() const {
	return m_container;
}

void HeadVideoStreamParams::setContainer(QString newContainer)  {
	m_container = newContainer;
}

bool HeadVideoStreamParams::containerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_container.isNull();
}

void HeadVideoStreamParams::setContainerNull() {
	m_container.clear();
}


const EncodingContext &HeadVideoStreamParams::context() const {
	return m_context;
}

void HeadVideoStreamParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool HeadVideoStreamParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void HeadVideoStreamParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &HeadVideoStreamParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void HeadVideoStreamParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool HeadVideoStreamParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void HeadVideoStreamParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &HeadVideoStreamParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void HeadVideoStreamParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool HeadVideoStreamParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void HeadVideoStreamParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &HeadVideoStreamParams::deInterlace() const {
	return m_deInterlace.value();
}

void HeadVideoStreamParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool HeadVideoStreamParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void HeadVideoStreamParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &HeadVideoStreamParams::deviceId() const {
	return m_deviceId;
}

void HeadVideoStreamParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool HeadVideoStreamParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void HeadVideoStreamParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &HeadVideoStreamParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void HeadVideoStreamParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool HeadVideoStreamParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void HeadVideoStreamParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &HeadVideoStreamParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void HeadVideoStreamParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool HeadVideoStreamParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void HeadVideoStreamParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &HeadVideoStreamParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void HeadVideoStreamParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool HeadVideoStreamParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void HeadVideoStreamParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &HeadVideoStreamParams::framerate() const {
	return m_framerate.value();
}

void HeadVideoStreamParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool HeadVideoStreamParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void HeadVideoStreamParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &HeadVideoStreamParams::height() const {
	return m_height.value();
}

void HeadVideoStreamParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadVideoStreamParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadVideoStreamParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &HeadVideoStreamParams::level() const {
	return m_level;
}

void HeadVideoStreamParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool HeadVideoStreamParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void HeadVideoStreamParams::setLevelNull() {
	m_level.clear();
}


const QString &HeadVideoStreamParams::liveStreamId() const {
	return m_liveStreamId;
}

void HeadVideoStreamParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool HeadVideoStreamParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void HeadVideoStreamParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &HeadVideoStreamParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void HeadVideoStreamParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool HeadVideoStreamParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void HeadVideoStreamParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &HeadVideoStreamParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void HeadVideoStreamParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool HeadVideoStreamParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void HeadVideoStreamParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &HeadVideoStreamParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void HeadVideoStreamParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool HeadVideoStreamParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void HeadVideoStreamParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &HeadVideoStreamParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void HeadVideoStreamParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool HeadVideoStreamParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void HeadVideoStreamParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &HeadVideoStreamParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void HeadVideoStreamParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool HeadVideoStreamParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void HeadVideoStreamParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &HeadVideoStreamParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void HeadVideoStreamParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool HeadVideoStreamParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void HeadVideoStreamParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &HeadVideoStreamParams::minSegments() const {
	return m_minSegments.value();
}

void HeadVideoStreamParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool HeadVideoStreamParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void HeadVideoStreamParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &HeadVideoStreamParams::params() const {
	return m_params;
}

void HeadVideoStreamParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool HeadVideoStreamParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void HeadVideoStreamParams::setParamsNull() {
	m_params.clear();
}


const QString &HeadVideoStreamParams::playSessionId() const {
	return m_playSessionId;
}

void HeadVideoStreamParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool HeadVideoStreamParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void HeadVideoStreamParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &HeadVideoStreamParams::profile() const {
	return m_profile;
}

void HeadVideoStreamParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool HeadVideoStreamParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void HeadVideoStreamParams::setProfileNull() {
	m_profile.clear();
}


const bool &HeadVideoStreamParams::requireAvc() const {
	return m_requireAvc.value();
}

void HeadVideoStreamParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool HeadVideoStreamParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void HeadVideoStreamParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &HeadVideoStreamParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void HeadVideoStreamParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool HeadVideoStreamParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void HeadVideoStreamParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &HeadVideoStreamParams::segmentContainer() const {
	return m_segmentContainer;
}

void HeadVideoStreamParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool HeadVideoStreamParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void HeadVideoStreamParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &HeadVideoStreamParams::segmentLength() const {
	return m_segmentLength.value();
}

void HeadVideoStreamParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool HeadVideoStreamParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void HeadVideoStreamParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &HeadVideoStreamParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void HeadVideoStreamParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool HeadVideoStreamParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void HeadVideoStreamParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &HeadVideoStreamParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void HeadVideoStreamParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool HeadVideoStreamParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void HeadVideoStreamParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &HeadVideoStreamParams::streamOptions() const {
	return m_streamOptions;
}

void HeadVideoStreamParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool HeadVideoStreamParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void HeadVideoStreamParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &HeadVideoStreamParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void HeadVideoStreamParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool HeadVideoStreamParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void HeadVideoStreamParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &HeadVideoStreamParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void HeadVideoStreamParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool HeadVideoStreamParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void HeadVideoStreamParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &HeadVideoStreamParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void HeadVideoStreamParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool HeadVideoStreamParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void HeadVideoStreamParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &HeadVideoStreamParams::tag() const {
	return m_tag;
}

void HeadVideoStreamParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadVideoStreamParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadVideoStreamParams::setTagNull() {
	m_tag.clear();
}


const QString &HeadVideoStreamParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void HeadVideoStreamParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool HeadVideoStreamParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void HeadVideoStreamParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &HeadVideoStreamParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void HeadVideoStreamParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool HeadVideoStreamParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void HeadVideoStreamParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &HeadVideoStreamParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void HeadVideoStreamParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool HeadVideoStreamParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void HeadVideoStreamParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &HeadVideoStreamParams::videoCodec() const {
	return m_videoCodec;
}

void HeadVideoStreamParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool HeadVideoStreamParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void HeadVideoStreamParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &HeadVideoStreamParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void HeadVideoStreamParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool HeadVideoStreamParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void HeadVideoStreamParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &HeadVideoStreamParams::width() const {
	return m_width.value();
}

void HeadVideoStreamParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadVideoStreamParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadVideoStreamParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
