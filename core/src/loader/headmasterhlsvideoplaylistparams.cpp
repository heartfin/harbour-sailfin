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

#include "JellyfinQt/loader/headmasterhlsvideoplaylistparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadMasterHlsVideoPlaylistParams

const QString &HeadMasterHlsVideoPlaylistParams::itemId() const {
	return m_itemId;
}

void HeadMasterHlsVideoPlaylistParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &HeadMasterHlsVideoPlaylistParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void HeadMasterHlsVideoPlaylistParams::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}


const bool &HeadMasterHlsVideoPlaylistParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void HeadMasterHlsVideoPlaylistParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool HeadMasterHlsVideoPlaylistParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &HeadMasterHlsVideoPlaylistParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void HeadMasterHlsVideoPlaylistParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool HeadMasterHlsVideoPlaylistParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void HeadMasterHlsVideoPlaylistParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool HeadMasterHlsVideoPlaylistParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::audioChannels() const {
	return m_audioChannels.value();
}

void HeadMasterHlsVideoPlaylistParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool HeadMasterHlsVideoPlaylistParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &HeadMasterHlsVideoPlaylistParams::audioCodec() const {
	return m_audioCodec;
}

void HeadMasterHlsVideoPlaylistParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool HeadMasterHlsVideoPlaylistParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &HeadMasterHlsVideoPlaylistParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void HeadMasterHlsVideoPlaylistParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool HeadMasterHlsVideoPlaylistParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void HeadMasterHlsVideoPlaylistParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool HeadMasterHlsVideoPlaylistParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &HeadMasterHlsVideoPlaylistParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void HeadMasterHlsVideoPlaylistParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool HeadMasterHlsVideoPlaylistParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &HeadMasterHlsVideoPlaylistParams::context() const {
	return m_context;
}

void HeadMasterHlsVideoPlaylistParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool HeadMasterHlsVideoPlaylistParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void HeadMasterHlsVideoPlaylistParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &HeadMasterHlsVideoPlaylistParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void HeadMasterHlsVideoPlaylistParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool HeadMasterHlsVideoPlaylistParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void HeadMasterHlsVideoPlaylistParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool HeadMasterHlsVideoPlaylistParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &HeadMasterHlsVideoPlaylistParams::deInterlace() const {
	return m_deInterlace.value();
}

void HeadMasterHlsVideoPlaylistParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool HeadMasterHlsVideoPlaylistParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &HeadMasterHlsVideoPlaylistParams::deviceId() const {
	return m_deviceId;
}

void HeadMasterHlsVideoPlaylistParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool HeadMasterHlsVideoPlaylistParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &HeadMasterHlsVideoPlaylistParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void HeadMasterHlsVideoPlaylistParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool HeadMasterHlsVideoPlaylistParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &HeadMasterHlsVideoPlaylistParams::enableAdaptiveBitrateStreaming() const {
	return m_enableAdaptiveBitrateStreaming.value();
}

void HeadMasterHlsVideoPlaylistParams::setEnableAdaptiveBitrateStreaming(bool newEnableAdaptiveBitrateStreaming)  {
	m_enableAdaptiveBitrateStreaming = newEnableAdaptiveBitrateStreaming;
}

bool HeadMasterHlsVideoPlaylistParams::enableAdaptiveBitrateStreamingNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableAdaptiveBitrateStreaming.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setEnableAdaptiveBitrateStreamingNull() {
	m_enableAdaptiveBitrateStreaming = std::nullopt;
}


const bool &HeadMasterHlsVideoPlaylistParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void HeadMasterHlsVideoPlaylistParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool HeadMasterHlsVideoPlaylistParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &HeadMasterHlsVideoPlaylistParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void HeadMasterHlsVideoPlaylistParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool HeadMasterHlsVideoPlaylistParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &HeadMasterHlsVideoPlaylistParams::framerate() const {
	return m_framerate.value();
}

void HeadMasterHlsVideoPlaylistParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool HeadMasterHlsVideoPlaylistParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::height() const {
	return m_height.value();
}

void HeadMasterHlsVideoPlaylistParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadMasterHlsVideoPlaylistParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &HeadMasterHlsVideoPlaylistParams::level() const {
	return m_level;
}

void HeadMasterHlsVideoPlaylistParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool HeadMasterHlsVideoPlaylistParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setLevelNull() {
	m_level.clear();
}


const QString &HeadMasterHlsVideoPlaylistParams::liveStreamId() const {
	return m_liveStreamId;
}

void HeadMasterHlsVideoPlaylistParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool HeadMasterHlsVideoPlaylistParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &HeadMasterHlsVideoPlaylistParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool HeadMasterHlsVideoPlaylistParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool HeadMasterHlsVideoPlaylistParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &HeadMasterHlsVideoPlaylistParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool HeadMasterHlsVideoPlaylistParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool HeadMasterHlsVideoPlaylistParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool HeadMasterHlsVideoPlaylistParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::minSegments() const {
	return m_minSegments.value();
}

void HeadMasterHlsVideoPlaylistParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool HeadMasterHlsVideoPlaylistParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &HeadMasterHlsVideoPlaylistParams::params() const {
	return m_params;
}

void HeadMasterHlsVideoPlaylistParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool HeadMasterHlsVideoPlaylistParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setParamsNull() {
	m_params.clear();
}


const QString &HeadMasterHlsVideoPlaylistParams::playSessionId() const {
	return m_playSessionId;
}

void HeadMasterHlsVideoPlaylistParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool HeadMasterHlsVideoPlaylistParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &HeadMasterHlsVideoPlaylistParams::profile() const {
	return m_profile;
}

void HeadMasterHlsVideoPlaylistParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool HeadMasterHlsVideoPlaylistParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setProfileNull() {
	m_profile.clear();
}


const bool &HeadMasterHlsVideoPlaylistParams::requireAvc() const {
	return m_requireAvc.value();
}

void HeadMasterHlsVideoPlaylistParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool HeadMasterHlsVideoPlaylistParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &HeadMasterHlsVideoPlaylistParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void HeadMasterHlsVideoPlaylistParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool HeadMasterHlsVideoPlaylistParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &HeadMasterHlsVideoPlaylistParams::segmentContainer() const {
	return m_segmentContainer;
}

void HeadMasterHlsVideoPlaylistParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool HeadMasterHlsVideoPlaylistParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &HeadMasterHlsVideoPlaylistParams::segmentLength() const {
	return m_segmentLength.value();
}

void HeadMasterHlsVideoPlaylistParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool HeadMasterHlsVideoPlaylistParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &HeadMasterHlsVideoPlaylistParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void HeadMasterHlsVideoPlaylistParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool HeadMasterHlsVideoPlaylistParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &HeadMasterHlsVideoPlaylistParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void HeadMasterHlsVideoPlaylistParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool HeadMasterHlsVideoPlaylistParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &HeadMasterHlsVideoPlaylistParams::streamOptions() const {
	return m_streamOptions;
}

void HeadMasterHlsVideoPlaylistParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool HeadMasterHlsVideoPlaylistParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void HeadMasterHlsVideoPlaylistParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &HeadMasterHlsVideoPlaylistParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void HeadMasterHlsVideoPlaylistParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool HeadMasterHlsVideoPlaylistParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &HeadMasterHlsVideoPlaylistParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void HeadMasterHlsVideoPlaylistParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool HeadMasterHlsVideoPlaylistParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void HeadMasterHlsVideoPlaylistParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void HeadMasterHlsVideoPlaylistParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool HeadMasterHlsVideoPlaylistParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &HeadMasterHlsVideoPlaylistParams::tag() const {
	return m_tag;
}

void HeadMasterHlsVideoPlaylistParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadMasterHlsVideoPlaylistParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setTagNull() {
	m_tag.clear();
}


const QString &HeadMasterHlsVideoPlaylistParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void HeadMasterHlsVideoPlaylistParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool HeadMasterHlsVideoPlaylistParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &HeadMasterHlsVideoPlaylistParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void HeadMasterHlsVideoPlaylistParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool HeadMasterHlsVideoPlaylistParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void HeadMasterHlsVideoPlaylistParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool HeadMasterHlsVideoPlaylistParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &HeadMasterHlsVideoPlaylistParams::videoCodec() const {
	return m_videoCodec;
}

void HeadMasterHlsVideoPlaylistParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool HeadMasterHlsVideoPlaylistParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void HeadMasterHlsVideoPlaylistParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &HeadMasterHlsVideoPlaylistParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void HeadMasterHlsVideoPlaylistParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool HeadMasterHlsVideoPlaylistParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &HeadMasterHlsVideoPlaylistParams::width() const {
	return m_width.value();
}

void HeadMasterHlsVideoPlaylistParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadMasterHlsVideoPlaylistParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadMasterHlsVideoPlaylistParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
