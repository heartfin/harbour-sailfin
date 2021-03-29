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

#include "JellyfinQt/loader/getvarianthlsvideoplaylistparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetVariantHlsVideoPlaylistParams

const QString &GetVariantHlsVideoPlaylistParams::itemId() const {
	return m_itemId;
}

void GetVariantHlsVideoPlaylistParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetVariantHlsVideoPlaylistParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetVariantHlsVideoPlaylistParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetVariantHlsVideoPlaylistParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetVariantHlsVideoPlaylistParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetVariantHlsVideoPlaylistParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetVariantHlsVideoPlaylistParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetVariantHlsVideoPlaylistParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetVariantHlsVideoPlaylistParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetVariantHlsVideoPlaylistParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetVariantHlsVideoPlaylistParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetVariantHlsVideoPlaylistParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetVariantHlsVideoPlaylistParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetVariantHlsVideoPlaylistParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetVariantHlsVideoPlaylistParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetVariantHlsVideoPlaylistParams::audioCodec() const {
	return m_audioCodec;
}

void GetVariantHlsVideoPlaylistParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetVariantHlsVideoPlaylistParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetVariantHlsVideoPlaylistParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetVariantHlsVideoPlaylistParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetVariantHlsVideoPlaylistParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetVariantHlsVideoPlaylistParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetVariantHlsVideoPlaylistParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetVariantHlsVideoPlaylistParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetVariantHlsVideoPlaylistParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetVariantHlsVideoPlaylistParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetVariantHlsVideoPlaylistParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetVariantHlsVideoPlaylistParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetVariantHlsVideoPlaylistParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetVariantHlsVideoPlaylistParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &GetVariantHlsVideoPlaylistParams::context() const {
	return m_context;
}

void GetVariantHlsVideoPlaylistParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetVariantHlsVideoPlaylistParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetVariantHlsVideoPlaylistParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetVariantHlsVideoPlaylistParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetVariantHlsVideoPlaylistParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetVariantHlsVideoPlaylistParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetVariantHlsVideoPlaylistParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetVariantHlsVideoPlaylistParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetVariantHlsVideoPlaylistParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetVariantHlsVideoPlaylistParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetVariantHlsVideoPlaylistParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetVariantHlsVideoPlaylistParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetVariantHlsVideoPlaylistParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetVariantHlsVideoPlaylistParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetVariantHlsVideoPlaylistParams::deviceId() const {
	return m_deviceId;
}

void GetVariantHlsVideoPlaylistParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetVariantHlsVideoPlaylistParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetVariantHlsVideoPlaylistParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetVariantHlsVideoPlaylistParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetVariantHlsVideoPlaylistParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetVariantHlsVideoPlaylistParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetVariantHlsVideoPlaylistParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetVariantHlsVideoPlaylistParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetVariantHlsVideoPlaylistParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetVariantHlsVideoPlaylistParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetVariantHlsVideoPlaylistParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetVariantHlsVideoPlaylistParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetVariantHlsVideoPlaylistParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetVariantHlsVideoPlaylistParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetVariantHlsVideoPlaylistParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetVariantHlsVideoPlaylistParams::framerate() const {
	return m_framerate.value();
}

void GetVariantHlsVideoPlaylistParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetVariantHlsVideoPlaylistParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetVariantHlsVideoPlaylistParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::height() const {
	return m_height.value();
}

void GetVariantHlsVideoPlaylistParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetVariantHlsVideoPlaylistParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetVariantHlsVideoPlaylistParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetVariantHlsVideoPlaylistParams::level() const {
	return m_level;
}

void GetVariantHlsVideoPlaylistParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetVariantHlsVideoPlaylistParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetVariantHlsVideoPlaylistParams::setLevelNull() {
	m_level.clear();
}


const QString &GetVariantHlsVideoPlaylistParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetVariantHlsVideoPlaylistParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetVariantHlsVideoPlaylistParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetVariantHlsVideoPlaylistParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetVariantHlsVideoPlaylistParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetVariantHlsVideoPlaylistParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetVariantHlsVideoPlaylistParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetVariantHlsVideoPlaylistParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetVariantHlsVideoPlaylistParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetVariantHlsVideoPlaylistParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetVariantHlsVideoPlaylistParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetVariantHlsVideoPlaylistParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetVariantHlsVideoPlaylistParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetVariantHlsVideoPlaylistParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetVariantHlsVideoPlaylistParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetVariantHlsVideoPlaylistParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetVariantHlsVideoPlaylistParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetVariantHlsVideoPlaylistParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetVariantHlsVideoPlaylistParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetVariantHlsVideoPlaylistParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetVariantHlsVideoPlaylistParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &GetVariantHlsVideoPlaylistParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetVariantHlsVideoPlaylistParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetVariantHlsVideoPlaylistParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetVariantHlsVideoPlaylistParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &GetVariantHlsVideoPlaylistParams::minSegments() const {
	return m_minSegments.value();
}

void GetVariantHlsVideoPlaylistParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetVariantHlsVideoPlaylistParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetVariantHlsVideoPlaylistParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetVariantHlsVideoPlaylistParams::params() const {
	return m_params;
}

void GetVariantHlsVideoPlaylistParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetVariantHlsVideoPlaylistParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetVariantHlsVideoPlaylistParams::setParamsNull() {
	m_params.clear();
}


const QString &GetVariantHlsVideoPlaylistParams::playSessionId() const {
	return m_playSessionId;
}

void GetVariantHlsVideoPlaylistParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetVariantHlsVideoPlaylistParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetVariantHlsVideoPlaylistParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetVariantHlsVideoPlaylistParams::profile() const {
	return m_profile;
}

void GetVariantHlsVideoPlaylistParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetVariantHlsVideoPlaylistParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetVariantHlsVideoPlaylistParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetVariantHlsVideoPlaylistParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetVariantHlsVideoPlaylistParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetVariantHlsVideoPlaylistParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetVariantHlsVideoPlaylistParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetVariantHlsVideoPlaylistParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetVariantHlsVideoPlaylistParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetVariantHlsVideoPlaylistParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetVariantHlsVideoPlaylistParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetVariantHlsVideoPlaylistParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetVariantHlsVideoPlaylistParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetVariantHlsVideoPlaylistParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetVariantHlsVideoPlaylistParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetVariantHlsVideoPlaylistParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetVariantHlsVideoPlaylistParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetVariantHlsVideoPlaylistParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetVariantHlsVideoPlaylistParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetVariantHlsVideoPlaylistParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetVariantHlsVideoPlaylistParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetVariantHlsVideoPlaylistParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetVariantHlsVideoPlaylistParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetVariantHlsVideoPlaylistParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetVariantHlsVideoPlaylistParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetVariantHlsVideoPlaylistParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetVariantHlsVideoPlaylistParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetVariantHlsVideoPlaylistParams::streamOptions() const {
	return m_streamOptions;
}

void GetVariantHlsVideoPlaylistParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetVariantHlsVideoPlaylistParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetVariantHlsVideoPlaylistParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetVariantHlsVideoPlaylistParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetVariantHlsVideoPlaylistParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetVariantHlsVideoPlaylistParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetVariantHlsVideoPlaylistParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetVariantHlsVideoPlaylistParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetVariantHlsVideoPlaylistParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetVariantHlsVideoPlaylistParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetVariantHlsVideoPlaylistParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetVariantHlsVideoPlaylistParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetVariantHlsVideoPlaylistParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetVariantHlsVideoPlaylistParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetVariantHlsVideoPlaylistParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetVariantHlsVideoPlaylistParams::tag() const {
	return m_tag;
}

void GetVariantHlsVideoPlaylistParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetVariantHlsVideoPlaylistParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetVariantHlsVideoPlaylistParams::setTagNull() {
	m_tag.clear();
}


const QString &GetVariantHlsVideoPlaylistParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetVariantHlsVideoPlaylistParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetVariantHlsVideoPlaylistParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetVariantHlsVideoPlaylistParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetVariantHlsVideoPlaylistParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetVariantHlsVideoPlaylistParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetVariantHlsVideoPlaylistParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetVariantHlsVideoPlaylistParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetVariantHlsVideoPlaylistParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetVariantHlsVideoPlaylistParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetVariantHlsVideoPlaylistParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetVariantHlsVideoPlaylistParams::videoCodec() const {
	return m_videoCodec;
}

void GetVariantHlsVideoPlaylistParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetVariantHlsVideoPlaylistParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetVariantHlsVideoPlaylistParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetVariantHlsVideoPlaylistParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetVariantHlsVideoPlaylistParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetVariantHlsVideoPlaylistParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetVariantHlsVideoPlaylistParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetVariantHlsVideoPlaylistParams::width() const {
	return m_width.value();
}

void GetVariantHlsVideoPlaylistParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetVariantHlsVideoPlaylistParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetVariantHlsVideoPlaylistParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
