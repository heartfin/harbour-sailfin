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

#include "JellyfinQt/loader/headaudiostreamparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadAudioStreamParams

const QString &HeadAudioStreamParams::itemId() const {
	return m_itemId;
}

void HeadAudioStreamParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &HeadAudioStreamParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void HeadAudioStreamParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool HeadAudioStreamParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void HeadAudioStreamParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &HeadAudioStreamParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void HeadAudioStreamParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool HeadAudioStreamParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void HeadAudioStreamParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &HeadAudioStreamParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void HeadAudioStreamParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool HeadAudioStreamParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void HeadAudioStreamParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &HeadAudioStreamParams::audioChannels() const {
	return m_audioChannels.value();
}

void HeadAudioStreamParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool HeadAudioStreamParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void HeadAudioStreamParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &HeadAudioStreamParams::audioCodec() const {
	return m_audioCodec;
}

void HeadAudioStreamParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool HeadAudioStreamParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void HeadAudioStreamParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &HeadAudioStreamParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void HeadAudioStreamParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool HeadAudioStreamParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void HeadAudioStreamParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &HeadAudioStreamParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void HeadAudioStreamParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool HeadAudioStreamParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void HeadAudioStreamParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &HeadAudioStreamParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void HeadAudioStreamParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool HeadAudioStreamParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void HeadAudioStreamParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const QString &HeadAudioStreamParams::container() const {
	return m_container;
}

void HeadAudioStreamParams::setContainer(QString newContainer)  {
	m_container = newContainer;
}

bool HeadAudioStreamParams::containerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_container.isNull();
}

void HeadAudioStreamParams::setContainerNull() {
	m_container.clear();
}


const EncodingContext &HeadAudioStreamParams::context() const {
	return m_context;
}

void HeadAudioStreamParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool HeadAudioStreamParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void HeadAudioStreamParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &HeadAudioStreamParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void HeadAudioStreamParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool HeadAudioStreamParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void HeadAudioStreamParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &HeadAudioStreamParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void HeadAudioStreamParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool HeadAudioStreamParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void HeadAudioStreamParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &HeadAudioStreamParams::deInterlace() const {
	return m_deInterlace.value();
}

void HeadAudioStreamParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool HeadAudioStreamParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void HeadAudioStreamParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &HeadAudioStreamParams::deviceId() const {
	return m_deviceId;
}

void HeadAudioStreamParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool HeadAudioStreamParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void HeadAudioStreamParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &HeadAudioStreamParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void HeadAudioStreamParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool HeadAudioStreamParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void HeadAudioStreamParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &HeadAudioStreamParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void HeadAudioStreamParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool HeadAudioStreamParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void HeadAudioStreamParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &HeadAudioStreamParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void HeadAudioStreamParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool HeadAudioStreamParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void HeadAudioStreamParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &HeadAudioStreamParams::framerate() const {
	return m_framerate.value();
}

void HeadAudioStreamParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool HeadAudioStreamParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void HeadAudioStreamParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &HeadAudioStreamParams::height() const {
	return m_height.value();
}

void HeadAudioStreamParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadAudioStreamParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadAudioStreamParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &HeadAudioStreamParams::level() const {
	return m_level;
}

void HeadAudioStreamParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool HeadAudioStreamParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void HeadAudioStreamParams::setLevelNull() {
	m_level.clear();
}


const QString &HeadAudioStreamParams::liveStreamId() const {
	return m_liveStreamId;
}

void HeadAudioStreamParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool HeadAudioStreamParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void HeadAudioStreamParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &HeadAudioStreamParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void HeadAudioStreamParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool HeadAudioStreamParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void HeadAudioStreamParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &HeadAudioStreamParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void HeadAudioStreamParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool HeadAudioStreamParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void HeadAudioStreamParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &HeadAudioStreamParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void HeadAudioStreamParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool HeadAudioStreamParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void HeadAudioStreamParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &HeadAudioStreamParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void HeadAudioStreamParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool HeadAudioStreamParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void HeadAudioStreamParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &HeadAudioStreamParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void HeadAudioStreamParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool HeadAudioStreamParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void HeadAudioStreamParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &HeadAudioStreamParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void HeadAudioStreamParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool HeadAudioStreamParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void HeadAudioStreamParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &HeadAudioStreamParams::minSegments() const {
	return m_minSegments.value();
}

void HeadAudioStreamParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool HeadAudioStreamParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void HeadAudioStreamParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &HeadAudioStreamParams::params() const {
	return m_params;
}

void HeadAudioStreamParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool HeadAudioStreamParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void HeadAudioStreamParams::setParamsNull() {
	m_params.clear();
}


const QString &HeadAudioStreamParams::playSessionId() const {
	return m_playSessionId;
}

void HeadAudioStreamParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool HeadAudioStreamParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void HeadAudioStreamParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &HeadAudioStreamParams::profile() const {
	return m_profile;
}

void HeadAudioStreamParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool HeadAudioStreamParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void HeadAudioStreamParams::setProfileNull() {
	m_profile.clear();
}


const bool &HeadAudioStreamParams::requireAvc() const {
	return m_requireAvc.value();
}

void HeadAudioStreamParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool HeadAudioStreamParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void HeadAudioStreamParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &HeadAudioStreamParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void HeadAudioStreamParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool HeadAudioStreamParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void HeadAudioStreamParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &HeadAudioStreamParams::segmentContainer() const {
	return m_segmentContainer;
}

void HeadAudioStreamParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool HeadAudioStreamParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void HeadAudioStreamParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &HeadAudioStreamParams::segmentLength() const {
	return m_segmentLength.value();
}

void HeadAudioStreamParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool HeadAudioStreamParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void HeadAudioStreamParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &HeadAudioStreamParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void HeadAudioStreamParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool HeadAudioStreamParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void HeadAudioStreamParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &HeadAudioStreamParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void HeadAudioStreamParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool HeadAudioStreamParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void HeadAudioStreamParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &HeadAudioStreamParams::streamOptions() const {
	return m_streamOptions;
}

void HeadAudioStreamParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool HeadAudioStreamParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void HeadAudioStreamParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &HeadAudioStreamParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void HeadAudioStreamParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool HeadAudioStreamParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void HeadAudioStreamParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &HeadAudioStreamParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void HeadAudioStreamParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool HeadAudioStreamParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void HeadAudioStreamParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &HeadAudioStreamParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void HeadAudioStreamParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool HeadAudioStreamParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void HeadAudioStreamParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &HeadAudioStreamParams::tag() const {
	return m_tag;
}

void HeadAudioStreamParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadAudioStreamParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadAudioStreamParams::setTagNull() {
	m_tag.clear();
}


const QString &HeadAudioStreamParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void HeadAudioStreamParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool HeadAudioStreamParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void HeadAudioStreamParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &HeadAudioStreamParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void HeadAudioStreamParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool HeadAudioStreamParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void HeadAudioStreamParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &HeadAudioStreamParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void HeadAudioStreamParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool HeadAudioStreamParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void HeadAudioStreamParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &HeadAudioStreamParams::videoCodec() const {
	return m_videoCodec;
}

void HeadAudioStreamParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool HeadAudioStreamParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void HeadAudioStreamParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &HeadAudioStreamParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void HeadAudioStreamParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool HeadAudioStreamParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void HeadAudioStreamParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &HeadAudioStreamParams::width() const {
	return m_width.value();
}

void HeadAudioStreamParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadAudioStreamParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadAudioStreamParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
