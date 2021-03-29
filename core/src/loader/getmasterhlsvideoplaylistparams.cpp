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

#include "JellyfinQt/loader/getmasterhlsvideoplaylistparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetMasterHlsVideoPlaylistParams

const QString &GetMasterHlsVideoPlaylistParams::itemId() const {
	return m_itemId;
}

void GetMasterHlsVideoPlaylistParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetMasterHlsVideoPlaylistParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetMasterHlsVideoPlaylistParams::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}


const bool &GetMasterHlsVideoPlaylistParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetMasterHlsVideoPlaylistParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetMasterHlsVideoPlaylistParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetMasterHlsVideoPlaylistParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetMasterHlsVideoPlaylistParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetMasterHlsVideoPlaylistParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetMasterHlsVideoPlaylistParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetMasterHlsVideoPlaylistParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetMasterHlsVideoPlaylistParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetMasterHlsVideoPlaylistParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetMasterHlsVideoPlaylistParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetMasterHlsVideoPlaylistParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetMasterHlsVideoPlaylistParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetMasterHlsVideoPlaylistParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetMasterHlsVideoPlaylistParams::audioCodec() const {
	return m_audioCodec;
}

void GetMasterHlsVideoPlaylistParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetMasterHlsVideoPlaylistParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetMasterHlsVideoPlaylistParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetMasterHlsVideoPlaylistParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetMasterHlsVideoPlaylistParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetMasterHlsVideoPlaylistParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetMasterHlsVideoPlaylistParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetMasterHlsVideoPlaylistParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetMasterHlsVideoPlaylistParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetMasterHlsVideoPlaylistParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetMasterHlsVideoPlaylistParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetMasterHlsVideoPlaylistParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetMasterHlsVideoPlaylistParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetMasterHlsVideoPlaylistParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &GetMasterHlsVideoPlaylistParams::context() const {
	return m_context;
}

void GetMasterHlsVideoPlaylistParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetMasterHlsVideoPlaylistParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetMasterHlsVideoPlaylistParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetMasterHlsVideoPlaylistParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetMasterHlsVideoPlaylistParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetMasterHlsVideoPlaylistParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetMasterHlsVideoPlaylistParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetMasterHlsVideoPlaylistParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetMasterHlsVideoPlaylistParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetMasterHlsVideoPlaylistParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetMasterHlsVideoPlaylistParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetMasterHlsVideoPlaylistParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetMasterHlsVideoPlaylistParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetMasterHlsVideoPlaylistParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetMasterHlsVideoPlaylistParams::deviceId() const {
	return m_deviceId;
}

void GetMasterHlsVideoPlaylistParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetMasterHlsVideoPlaylistParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetMasterHlsVideoPlaylistParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetMasterHlsVideoPlaylistParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetMasterHlsVideoPlaylistParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetMasterHlsVideoPlaylistParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetMasterHlsVideoPlaylistParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetMasterHlsVideoPlaylistParams::enableAdaptiveBitrateStreaming() const {
	return m_enableAdaptiveBitrateStreaming.value();
}

void GetMasterHlsVideoPlaylistParams::setEnableAdaptiveBitrateStreaming(bool newEnableAdaptiveBitrateStreaming)  {
	m_enableAdaptiveBitrateStreaming = newEnableAdaptiveBitrateStreaming;
}

bool GetMasterHlsVideoPlaylistParams::enableAdaptiveBitrateStreamingNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableAdaptiveBitrateStreaming.has_value();
}

void GetMasterHlsVideoPlaylistParams::setEnableAdaptiveBitrateStreamingNull() {
	m_enableAdaptiveBitrateStreaming = std::nullopt;
}


const bool &GetMasterHlsVideoPlaylistParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetMasterHlsVideoPlaylistParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetMasterHlsVideoPlaylistParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetMasterHlsVideoPlaylistParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetMasterHlsVideoPlaylistParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetMasterHlsVideoPlaylistParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetMasterHlsVideoPlaylistParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetMasterHlsVideoPlaylistParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetMasterHlsVideoPlaylistParams::framerate() const {
	return m_framerate.value();
}

void GetMasterHlsVideoPlaylistParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetMasterHlsVideoPlaylistParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetMasterHlsVideoPlaylistParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::height() const {
	return m_height.value();
}

void GetMasterHlsVideoPlaylistParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetMasterHlsVideoPlaylistParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetMasterHlsVideoPlaylistParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetMasterHlsVideoPlaylistParams::level() const {
	return m_level;
}

void GetMasterHlsVideoPlaylistParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetMasterHlsVideoPlaylistParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetMasterHlsVideoPlaylistParams::setLevelNull() {
	m_level.clear();
}


const QString &GetMasterHlsVideoPlaylistParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetMasterHlsVideoPlaylistParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetMasterHlsVideoPlaylistParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetMasterHlsVideoPlaylistParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetMasterHlsVideoPlaylistParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetMasterHlsVideoPlaylistParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetMasterHlsVideoPlaylistParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetMasterHlsVideoPlaylistParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetMasterHlsVideoPlaylistParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetMasterHlsVideoPlaylistParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetMasterHlsVideoPlaylistParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetMasterHlsVideoPlaylistParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetMasterHlsVideoPlaylistParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetMasterHlsVideoPlaylistParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetMasterHlsVideoPlaylistParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetMasterHlsVideoPlaylistParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetMasterHlsVideoPlaylistParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetMasterHlsVideoPlaylistParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetMasterHlsVideoPlaylistParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetMasterHlsVideoPlaylistParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetMasterHlsVideoPlaylistParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::minSegments() const {
	return m_minSegments.value();
}

void GetMasterHlsVideoPlaylistParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetMasterHlsVideoPlaylistParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetMasterHlsVideoPlaylistParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetMasterHlsVideoPlaylistParams::params() const {
	return m_params;
}

void GetMasterHlsVideoPlaylistParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetMasterHlsVideoPlaylistParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetMasterHlsVideoPlaylistParams::setParamsNull() {
	m_params.clear();
}


const QString &GetMasterHlsVideoPlaylistParams::playSessionId() const {
	return m_playSessionId;
}

void GetMasterHlsVideoPlaylistParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetMasterHlsVideoPlaylistParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetMasterHlsVideoPlaylistParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetMasterHlsVideoPlaylistParams::profile() const {
	return m_profile;
}

void GetMasterHlsVideoPlaylistParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetMasterHlsVideoPlaylistParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetMasterHlsVideoPlaylistParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetMasterHlsVideoPlaylistParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetMasterHlsVideoPlaylistParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetMasterHlsVideoPlaylistParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetMasterHlsVideoPlaylistParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetMasterHlsVideoPlaylistParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetMasterHlsVideoPlaylistParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetMasterHlsVideoPlaylistParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetMasterHlsVideoPlaylistParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetMasterHlsVideoPlaylistParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetMasterHlsVideoPlaylistParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetMasterHlsVideoPlaylistParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetMasterHlsVideoPlaylistParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetMasterHlsVideoPlaylistParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetMasterHlsVideoPlaylistParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetMasterHlsVideoPlaylistParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetMasterHlsVideoPlaylistParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetMasterHlsVideoPlaylistParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetMasterHlsVideoPlaylistParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetMasterHlsVideoPlaylistParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetMasterHlsVideoPlaylistParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetMasterHlsVideoPlaylistParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetMasterHlsVideoPlaylistParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetMasterHlsVideoPlaylistParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetMasterHlsVideoPlaylistParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetMasterHlsVideoPlaylistParams::streamOptions() const {
	return m_streamOptions;
}

void GetMasterHlsVideoPlaylistParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetMasterHlsVideoPlaylistParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetMasterHlsVideoPlaylistParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetMasterHlsVideoPlaylistParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetMasterHlsVideoPlaylistParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetMasterHlsVideoPlaylistParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetMasterHlsVideoPlaylistParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetMasterHlsVideoPlaylistParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetMasterHlsVideoPlaylistParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetMasterHlsVideoPlaylistParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetMasterHlsVideoPlaylistParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetMasterHlsVideoPlaylistParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetMasterHlsVideoPlaylistParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetMasterHlsVideoPlaylistParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetMasterHlsVideoPlaylistParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetMasterHlsVideoPlaylistParams::tag() const {
	return m_tag;
}

void GetMasterHlsVideoPlaylistParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetMasterHlsVideoPlaylistParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetMasterHlsVideoPlaylistParams::setTagNull() {
	m_tag.clear();
}


const QString &GetMasterHlsVideoPlaylistParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetMasterHlsVideoPlaylistParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetMasterHlsVideoPlaylistParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetMasterHlsVideoPlaylistParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetMasterHlsVideoPlaylistParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetMasterHlsVideoPlaylistParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetMasterHlsVideoPlaylistParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetMasterHlsVideoPlaylistParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetMasterHlsVideoPlaylistParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetMasterHlsVideoPlaylistParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetMasterHlsVideoPlaylistParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetMasterHlsVideoPlaylistParams::videoCodec() const {
	return m_videoCodec;
}

void GetMasterHlsVideoPlaylistParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetMasterHlsVideoPlaylistParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetMasterHlsVideoPlaylistParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetMasterHlsVideoPlaylistParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetMasterHlsVideoPlaylistParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetMasterHlsVideoPlaylistParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetMasterHlsVideoPlaylistParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetMasterHlsVideoPlaylistParams::width() const {
	return m_width.value();
}

void GetMasterHlsVideoPlaylistParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetMasterHlsVideoPlaylistParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetMasterHlsVideoPlaylistParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
