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

#include "JellyfinQt/loader/getvideostreambycontainerparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetVideoStreamByContainerParams

const QString &GetVideoStreamByContainerParams::container() const {
	return m_container;
}

void GetVideoStreamByContainerParams::setContainer(QString newContainer) {
	m_container = newContainer;
}


const QString &GetVideoStreamByContainerParams::itemId() const {
	return m_itemId;
}

void GetVideoStreamByContainerParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetVideoStreamByContainerParams::stream() const {
	return m_stream;
}

void GetVideoStreamByContainerParams::setStream(QString newStream) {
	m_stream = newStream;
}


const bool &GetVideoStreamByContainerParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetVideoStreamByContainerParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetVideoStreamByContainerParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetVideoStreamByContainerParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetVideoStreamByContainerParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetVideoStreamByContainerParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetVideoStreamByContainerParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetVideoStreamByContainerParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetVideoStreamByContainerParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetVideoStreamByContainerParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetVideoStreamByContainerParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetVideoStreamByContainerParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetVideoStreamByContainerParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetVideoStreamByContainerParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetVideoStreamByContainerParams::audioCodec() const {
	return m_audioCodec;
}

void GetVideoStreamByContainerParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetVideoStreamByContainerParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetVideoStreamByContainerParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetVideoStreamByContainerParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetVideoStreamByContainerParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetVideoStreamByContainerParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetVideoStreamByContainerParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetVideoStreamByContainerParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetVideoStreamByContainerParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetVideoStreamByContainerParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetVideoStreamByContainerParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetVideoStreamByContainerParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetVideoStreamByContainerParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetVideoStreamByContainerParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &GetVideoStreamByContainerParams::context() const {
	return m_context;
}

void GetVideoStreamByContainerParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetVideoStreamByContainerParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetVideoStreamByContainerParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetVideoStreamByContainerParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetVideoStreamByContainerParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetVideoStreamByContainerParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetVideoStreamByContainerParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetVideoStreamByContainerParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetVideoStreamByContainerParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetVideoStreamByContainerParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetVideoStreamByContainerParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetVideoStreamByContainerParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetVideoStreamByContainerParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetVideoStreamByContainerParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetVideoStreamByContainerParams::deviceId() const {
	return m_deviceId;
}

void GetVideoStreamByContainerParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetVideoStreamByContainerParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetVideoStreamByContainerParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetVideoStreamByContainerParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetVideoStreamByContainerParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetVideoStreamByContainerParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetVideoStreamByContainerParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetVideoStreamByContainerParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetVideoStreamByContainerParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetVideoStreamByContainerParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetVideoStreamByContainerParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetVideoStreamByContainerParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetVideoStreamByContainerParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetVideoStreamByContainerParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetVideoStreamByContainerParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetVideoStreamByContainerParams::framerate() const {
	return m_framerate.value();
}

void GetVideoStreamByContainerParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetVideoStreamByContainerParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetVideoStreamByContainerParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::height() const {
	return m_height.value();
}

void GetVideoStreamByContainerParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetVideoStreamByContainerParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetVideoStreamByContainerParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetVideoStreamByContainerParams::level() const {
	return m_level;
}

void GetVideoStreamByContainerParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetVideoStreamByContainerParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetVideoStreamByContainerParams::setLevelNull() {
	m_level.clear();
}


const QString &GetVideoStreamByContainerParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetVideoStreamByContainerParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetVideoStreamByContainerParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetVideoStreamByContainerParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetVideoStreamByContainerParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetVideoStreamByContainerParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetVideoStreamByContainerParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetVideoStreamByContainerParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetVideoStreamByContainerParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetVideoStreamByContainerParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetVideoStreamByContainerParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetVideoStreamByContainerParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetVideoStreamByContainerParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetVideoStreamByContainerParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetVideoStreamByContainerParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetVideoStreamByContainerParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetVideoStreamByContainerParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetVideoStreamByContainerParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetVideoStreamByContainerParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetVideoStreamByContainerParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetVideoStreamByContainerParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &GetVideoStreamByContainerParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetVideoStreamByContainerParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetVideoStreamByContainerParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetVideoStreamByContainerParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &GetVideoStreamByContainerParams::minSegments() const {
	return m_minSegments.value();
}

void GetVideoStreamByContainerParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetVideoStreamByContainerParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetVideoStreamByContainerParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetVideoStreamByContainerParams::params() const {
	return m_params;
}

void GetVideoStreamByContainerParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetVideoStreamByContainerParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetVideoStreamByContainerParams::setParamsNull() {
	m_params.clear();
}


const QString &GetVideoStreamByContainerParams::playSessionId() const {
	return m_playSessionId;
}

void GetVideoStreamByContainerParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetVideoStreamByContainerParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetVideoStreamByContainerParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetVideoStreamByContainerParams::profile() const {
	return m_profile;
}

void GetVideoStreamByContainerParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetVideoStreamByContainerParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetVideoStreamByContainerParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetVideoStreamByContainerParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetVideoStreamByContainerParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetVideoStreamByContainerParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetVideoStreamByContainerParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetVideoStreamByContainerParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetVideoStreamByContainerParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetVideoStreamByContainerParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetVideoStreamByContainerParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetVideoStreamByContainerParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetVideoStreamByContainerParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetVideoStreamByContainerParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetVideoStreamByContainerParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetVideoStreamByContainerParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetVideoStreamByContainerParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetVideoStreamByContainerParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetVideoStreamByContainerParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetVideoStreamByContainerParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetVideoStreamByContainerParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetVideoStreamByContainerParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetVideoStreamByContainerParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetVideoStreamByContainerParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetVideoStreamByContainerParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetVideoStreamByContainerParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetVideoStreamByContainerParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetVideoStreamByContainerParams::streamOptions() const {
	return m_streamOptions;
}

void GetVideoStreamByContainerParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetVideoStreamByContainerParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetVideoStreamByContainerParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetVideoStreamByContainerParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetVideoStreamByContainerParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetVideoStreamByContainerParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetVideoStreamByContainerParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetVideoStreamByContainerParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetVideoStreamByContainerParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetVideoStreamByContainerParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetVideoStreamByContainerParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetVideoStreamByContainerParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetVideoStreamByContainerParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetVideoStreamByContainerParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetVideoStreamByContainerParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetVideoStreamByContainerParams::tag() const {
	return m_tag;
}

void GetVideoStreamByContainerParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetVideoStreamByContainerParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetVideoStreamByContainerParams::setTagNull() {
	m_tag.clear();
}


const QString &GetVideoStreamByContainerParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetVideoStreamByContainerParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetVideoStreamByContainerParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetVideoStreamByContainerParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetVideoStreamByContainerParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetVideoStreamByContainerParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetVideoStreamByContainerParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetVideoStreamByContainerParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetVideoStreamByContainerParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetVideoStreamByContainerParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetVideoStreamByContainerParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetVideoStreamByContainerParams::videoCodec() const {
	return m_videoCodec;
}

void GetVideoStreamByContainerParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetVideoStreamByContainerParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetVideoStreamByContainerParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetVideoStreamByContainerParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetVideoStreamByContainerParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetVideoStreamByContainerParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetVideoStreamByContainerParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetVideoStreamByContainerParams::width() const {
	return m_width.value();
}

void GetVideoStreamByContainerParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetVideoStreamByContainerParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetVideoStreamByContainerParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
