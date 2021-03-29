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

#include "JellyfinQt/loader/getaudiostreamparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetAudioStreamParams

const QString &GetAudioStreamParams::itemId() const {
	return m_itemId;
}

void GetAudioStreamParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetAudioStreamParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetAudioStreamParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetAudioStreamParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetAudioStreamParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetAudioStreamParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetAudioStreamParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetAudioStreamParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetAudioStreamParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetAudioStreamParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetAudioStreamParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetAudioStreamParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetAudioStreamParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetAudioStreamParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetAudioStreamParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetAudioStreamParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetAudioStreamParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetAudioStreamParams::audioCodec() const {
	return m_audioCodec;
}

void GetAudioStreamParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetAudioStreamParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetAudioStreamParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetAudioStreamParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetAudioStreamParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetAudioStreamParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetAudioStreamParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetAudioStreamParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetAudioStreamParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetAudioStreamParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetAudioStreamParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetAudioStreamParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetAudioStreamParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetAudioStreamParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetAudioStreamParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const QString &GetAudioStreamParams::container() const {
	return m_container;
}

void GetAudioStreamParams::setContainer(QString newContainer)  {
	m_container = newContainer;
}

bool GetAudioStreamParams::containerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_container.isNull();
}

void GetAudioStreamParams::setContainerNull() {
	m_container.clear();
}


const EncodingContext &GetAudioStreamParams::context() const {
	return m_context;
}

void GetAudioStreamParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetAudioStreamParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetAudioStreamParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetAudioStreamParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetAudioStreamParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetAudioStreamParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetAudioStreamParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetAudioStreamParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetAudioStreamParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetAudioStreamParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetAudioStreamParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetAudioStreamParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetAudioStreamParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetAudioStreamParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetAudioStreamParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetAudioStreamParams::deviceId() const {
	return m_deviceId;
}

void GetAudioStreamParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetAudioStreamParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetAudioStreamParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetAudioStreamParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetAudioStreamParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetAudioStreamParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetAudioStreamParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetAudioStreamParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetAudioStreamParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetAudioStreamParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetAudioStreamParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetAudioStreamParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetAudioStreamParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetAudioStreamParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetAudioStreamParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetAudioStreamParams::framerate() const {
	return m_framerate.value();
}

void GetAudioStreamParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetAudioStreamParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetAudioStreamParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetAudioStreamParams::height() const {
	return m_height.value();
}

void GetAudioStreamParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetAudioStreamParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetAudioStreamParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetAudioStreamParams::level() const {
	return m_level;
}

void GetAudioStreamParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetAudioStreamParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetAudioStreamParams::setLevelNull() {
	m_level.clear();
}


const QString &GetAudioStreamParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetAudioStreamParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetAudioStreamParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetAudioStreamParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetAudioStreamParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetAudioStreamParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetAudioStreamParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetAudioStreamParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetAudioStreamParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetAudioStreamParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetAudioStreamParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetAudioStreamParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetAudioStreamParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetAudioStreamParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetAudioStreamParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetAudioStreamParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetAudioStreamParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetAudioStreamParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetAudioStreamParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetAudioStreamParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetAudioStreamParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetAudioStreamParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetAudioStreamParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetAudioStreamParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &GetAudioStreamParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetAudioStreamParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetAudioStreamParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetAudioStreamParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &GetAudioStreamParams::minSegments() const {
	return m_minSegments.value();
}

void GetAudioStreamParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetAudioStreamParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetAudioStreamParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetAudioStreamParams::params() const {
	return m_params;
}

void GetAudioStreamParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetAudioStreamParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetAudioStreamParams::setParamsNull() {
	m_params.clear();
}


const QString &GetAudioStreamParams::playSessionId() const {
	return m_playSessionId;
}

void GetAudioStreamParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetAudioStreamParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetAudioStreamParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetAudioStreamParams::profile() const {
	return m_profile;
}

void GetAudioStreamParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetAudioStreamParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetAudioStreamParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetAudioStreamParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetAudioStreamParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetAudioStreamParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetAudioStreamParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetAudioStreamParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetAudioStreamParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetAudioStreamParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetAudioStreamParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetAudioStreamParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetAudioStreamParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetAudioStreamParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetAudioStreamParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetAudioStreamParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetAudioStreamParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetAudioStreamParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetAudioStreamParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetAudioStreamParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetAudioStreamParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetAudioStreamParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetAudioStreamParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetAudioStreamParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetAudioStreamParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetAudioStreamParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetAudioStreamParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetAudioStreamParams::streamOptions() const {
	return m_streamOptions;
}

void GetAudioStreamParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetAudioStreamParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetAudioStreamParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetAudioStreamParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetAudioStreamParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetAudioStreamParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetAudioStreamParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetAudioStreamParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetAudioStreamParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetAudioStreamParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetAudioStreamParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetAudioStreamParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetAudioStreamParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetAudioStreamParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetAudioStreamParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetAudioStreamParams::tag() const {
	return m_tag;
}

void GetAudioStreamParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetAudioStreamParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetAudioStreamParams::setTagNull() {
	m_tag.clear();
}


const QString &GetAudioStreamParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetAudioStreamParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetAudioStreamParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetAudioStreamParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetAudioStreamParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetAudioStreamParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetAudioStreamParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetAudioStreamParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetAudioStreamParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetAudioStreamParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetAudioStreamParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetAudioStreamParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetAudioStreamParams::videoCodec() const {
	return m_videoCodec;
}

void GetAudioStreamParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetAudioStreamParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetAudioStreamParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetAudioStreamParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetAudioStreamParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetAudioStreamParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetAudioStreamParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetAudioStreamParams::width() const {
	return m_width.value();
}

void GetAudioStreamParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetAudioStreamParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetAudioStreamParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
