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

#include "JellyfinQt/loader/getvideostreamparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetVideoStreamParams

const QString &GetVideoStreamParams::itemId() const {
	return m_itemId;
}

void GetVideoStreamParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetVideoStreamParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetVideoStreamParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetVideoStreamParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetVideoStreamParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetVideoStreamParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetVideoStreamParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetVideoStreamParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetVideoStreamParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetVideoStreamParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetVideoStreamParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetVideoStreamParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetVideoStreamParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetVideoStreamParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetVideoStreamParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetVideoStreamParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetVideoStreamParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetVideoStreamParams::audioCodec() const {
	return m_audioCodec;
}

void GetVideoStreamParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetVideoStreamParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetVideoStreamParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetVideoStreamParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetVideoStreamParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetVideoStreamParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetVideoStreamParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetVideoStreamParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetVideoStreamParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetVideoStreamParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetVideoStreamParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetVideoStreamParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetVideoStreamParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetVideoStreamParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetVideoStreamParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const QString &GetVideoStreamParams::container() const {
	return m_container;
}

void GetVideoStreamParams::setContainer(QString newContainer)  {
	m_container = newContainer;
}

bool GetVideoStreamParams::containerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_container.isNull();
}

void GetVideoStreamParams::setContainerNull() {
	m_container.clear();
}


const EncodingContext &GetVideoStreamParams::context() const {
	return m_context;
}

void GetVideoStreamParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetVideoStreamParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetVideoStreamParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetVideoStreamParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetVideoStreamParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetVideoStreamParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetVideoStreamParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetVideoStreamParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetVideoStreamParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetVideoStreamParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetVideoStreamParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetVideoStreamParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetVideoStreamParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetVideoStreamParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetVideoStreamParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetVideoStreamParams::deviceId() const {
	return m_deviceId;
}

void GetVideoStreamParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetVideoStreamParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetVideoStreamParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetVideoStreamParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetVideoStreamParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetVideoStreamParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetVideoStreamParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetVideoStreamParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetVideoStreamParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetVideoStreamParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetVideoStreamParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetVideoStreamParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetVideoStreamParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetVideoStreamParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetVideoStreamParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetVideoStreamParams::framerate() const {
	return m_framerate.value();
}

void GetVideoStreamParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetVideoStreamParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetVideoStreamParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetVideoStreamParams::height() const {
	return m_height.value();
}

void GetVideoStreamParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetVideoStreamParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetVideoStreamParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetVideoStreamParams::level() const {
	return m_level;
}

void GetVideoStreamParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetVideoStreamParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetVideoStreamParams::setLevelNull() {
	m_level.clear();
}


const QString &GetVideoStreamParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetVideoStreamParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetVideoStreamParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetVideoStreamParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetVideoStreamParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetVideoStreamParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetVideoStreamParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetVideoStreamParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetVideoStreamParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetVideoStreamParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetVideoStreamParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetVideoStreamParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetVideoStreamParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetVideoStreamParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetVideoStreamParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetVideoStreamParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetVideoStreamParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetVideoStreamParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetVideoStreamParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetVideoStreamParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetVideoStreamParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetVideoStreamParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetVideoStreamParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetVideoStreamParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &GetVideoStreamParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetVideoStreamParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetVideoStreamParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetVideoStreamParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &GetVideoStreamParams::minSegments() const {
	return m_minSegments.value();
}

void GetVideoStreamParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetVideoStreamParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetVideoStreamParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetVideoStreamParams::params() const {
	return m_params;
}

void GetVideoStreamParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetVideoStreamParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetVideoStreamParams::setParamsNull() {
	m_params.clear();
}


const QString &GetVideoStreamParams::playSessionId() const {
	return m_playSessionId;
}

void GetVideoStreamParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetVideoStreamParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetVideoStreamParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetVideoStreamParams::profile() const {
	return m_profile;
}

void GetVideoStreamParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetVideoStreamParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetVideoStreamParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetVideoStreamParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetVideoStreamParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetVideoStreamParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetVideoStreamParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetVideoStreamParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetVideoStreamParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetVideoStreamParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetVideoStreamParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetVideoStreamParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetVideoStreamParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetVideoStreamParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetVideoStreamParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetVideoStreamParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetVideoStreamParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetVideoStreamParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetVideoStreamParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetVideoStreamParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetVideoStreamParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetVideoStreamParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetVideoStreamParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetVideoStreamParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetVideoStreamParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetVideoStreamParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetVideoStreamParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetVideoStreamParams::streamOptions() const {
	return m_streamOptions;
}

void GetVideoStreamParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetVideoStreamParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetVideoStreamParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetVideoStreamParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetVideoStreamParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetVideoStreamParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetVideoStreamParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetVideoStreamParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetVideoStreamParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetVideoStreamParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetVideoStreamParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetVideoStreamParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetVideoStreamParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetVideoStreamParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetVideoStreamParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetVideoStreamParams::tag() const {
	return m_tag;
}

void GetVideoStreamParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetVideoStreamParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetVideoStreamParams::setTagNull() {
	m_tag.clear();
}


const QString &GetVideoStreamParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetVideoStreamParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetVideoStreamParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetVideoStreamParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetVideoStreamParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetVideoStreamParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetVideoStreamParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetVideoStreamParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetVideoStreamParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetVideoStreamParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetVideoStreamParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetVideoStreamParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetVideoStreamParams::videoCodec() const {
	return m_videoCodec;
}

void GetVideoStreamParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetVideoStreamParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetVideoStreamParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetVideoStreamParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetVideoStreamParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetVideoStreamParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetVideoStreamParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetVideoStreamParams::width() const {
	return m_width.value();
}

void GetVideoStreamParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetVideoStreamParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetVideoStreamParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
