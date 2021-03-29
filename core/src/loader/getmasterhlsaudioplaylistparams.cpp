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

#include "JellyfinQt/loader/getmasterhlsaudioplaylistparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetMasterHlsAudioPlaylistParams

const QString &GetMasterHlsAudioPlaylistParams::itemId() const {
	return m_itemId;
}

void GetMasterHlsAudioPlaylistParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetMasterHlsAudioPlaylistParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetMasterHlsAudioPlaylistParams::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}


const bool &GetMasterHlsAudioPlaylistParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetMasterHlsAudioPlaylistParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetMasterHlsAudioPlaylistParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetMasterHlsAudioPlaylistParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetMasterHlsAudioPlaylistParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetMasterHlsAudioPlaylistParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetMasterHlsAudioPlaylistParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetMasterHlsAudioPlaylistParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetMasterHlsAudioPlaylistParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetMasterHlsAudioPlaylistParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetMasterHlsAudioPlaylistParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetMasterHlsAudioPlaylistParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetMasterHlsAudioPlaylistParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetMasterHlsAudioPlaylistParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetMasterHlsAudioPlaylistParams::audioCodec() const {
	return m_audioCodec;
}

void GetMasterHlsAudioPlaylistParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetMasterHlsAudioPlaylistParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetMasterHlsAudioPlaylistParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetMasterHlsAudioPlaylistParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetMasterHlsAudioPlaylistParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetMasterHlsAudioPlaylistParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetMasterHlsAudioPlaylistParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetMasterHlsAudioPlaylistParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetMasterHlsAudioPlaylistParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetMasterHlsAudioPlaylistParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetMasterHlsAudioPlaylistParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetMasterHlsAudioPlaylistParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetMasterHlsAudioPlaylistParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetMasterHlsAudioPlaylistParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &GetMasterHlsAudioPlaylistParams::context() const {
	return m_context;
}

void GetMasterHlsAudioPlaylistParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetMasterHlsAudioPlaylistParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetMasterHlsAudioPlaylistParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetMasterHlsAudioPlaylistParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetMasterHlsAudioPlaylistParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetMasterHlsAudioPlaylistParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetMasterHlsAudioPlaylistParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetMasterHlsAudioPlaylistParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetMasterHlsAudioPlaylistParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetMasterHlsAudioPlaylistParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetMasterHlsAudioPlaylistParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetMasterHlsAudioPlaylistParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetMasterHlsAudioPlaylistParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetMasterHlsAudioPlaylistParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetMasterHlsAudioPlaylistParams::deviceId() const {
	return m_deviceId;
}

void GetMasterHlsAudioPlaylistParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetMasterHlsAudioPlaylistParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetMasterHlsAudioPlaylistParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetMasterHlsAudioPlaylistParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetMasterHlsAudioPlaylistParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetMasterHlsAudioPlaylistParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetMasterHlsAudioPlaylistParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetMasterHlsAudioPlaylistParams::enableAdaptiveBitrateStreaming() const {
	return m_enableAdaptiveBitrateStreaming.value();
}

void GetMasterHlsAudioPlaylistParams::setEnableAdaptiveBitrateStreaming(bool newEnableAdaptiveBitrateStreaming)  {
	m_enableAdaptiveBitrateStreaming = newEnableAdaptiveBitrateStreaming;
}

bool GetMasterHlsAudioPlaylistParams::enableAdaptiveBitrateStreamingNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableAdaptiveBitrateStreaming.has_value();
}

void GetMasterHlsAudioPlaylistParams::setEnableAdaptiveBitrateStreamingNull() {
	m_enableAdaptiveBitrateStreaming = std::nullopt;
}


const bool &GetMasterHlsAudioPlaylistParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetMasterHlsAudioPlaylistParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetMasterHlsAudioPlaylistParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetMasterHlsAudioPlaylistParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetMasterHlsAudioPlaylistParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetMasterHlsAudioPlaylistParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetMasterHlsAudioPlaylistParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetMasterHlsAudioPlaylistParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetMasterHlsAudioPlaylistParams::framerate() const {
	return m_framerate.value();
}

void GetMasterHlsAudioPlaylistParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetMasterHlsAudioPlaylistParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetMasterHlsAudioPlaylistParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::height() const {
	return m_height.value();
}

void GetMasterHlsAudioPlaylistParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetMasterHlsAudioPlaylistParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetMasterHlsAudioPlaylistParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetMasterHlsAudioPlaylistParams::level() const {
	return m_level;
}

void GetMasterHlsAudioPlaylistParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetMasterHlsAudioPlaylistParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetMasterHlsAudioPlaylistParams::setLevelNull() {
	m_level.clear();
}


const QString &GetMasterHlsAudioPlaylistParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetMasterHlsAudioPlaylistParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetMasterHlsAudioPlaylistParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetMasterHlsAudioPlaylistParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetMasterHlsAudioPlaylistParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetMasterHlsAudioPlaylistParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetMasterHlsAudioPlaylistParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetMasterHlsAudioPlaylistParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetMasterHlsAudioPlaylistParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetMasterHlsAudioPlaylistParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetMasterHlsAudioPlaylistParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetMasterHlsAudioPlaylistParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetMasterHlsAudioPlaylistParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetMasterHlsAudioPlaylistParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetMasterHlsAudioPlaylistParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetMasterHlsAudioPlaylistParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetMasterHlsAudioPlaylistParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetMasterHlsAudioPlaylistParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::maxStreamingBitrate() const {
	return m_maxStreamingBitrate.value();
}

void GetMasterHlsAudioPlaylistParams::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate)  {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}

bool GetMasterHlsAudioPlaylistParams::maxStreamingBitrateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxStreamingBitrate.has_value();
}

void GetMasterHlsAudioPlaylistParams::setMaxStreamingBitrateNull() {
	m_maxStreamingBitrate = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetMasterHlsAudioPlaylistParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetMasterHlsAudioPlaylistParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetMasterHlsAudioPlaylistParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::minSegments() const {
	return m_minSegments.value();
}

void GetMasterHlsAudioPlaylistParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetMasterHlsAudioPlaylistParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetMasterHlsAudioPlaylistParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetMasterHlsAudioPlaylistParams::params() const {
	return m_params;
}

void GetMasterHlsAudioPlaylistParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetMasterHlsAudioPlaylistParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetMasterHlsAudioPlaylistParams::setParamsNull() {
	m_params.clear();
}


const QString &GetMasterHlsAudioPlaylistParams::playSessionId() const {
	return m_playSessionId;
}

void GetMasterHlsAudioPlaylistParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetMasterHlsAudioPlaylistParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetMasterHlsAudioPlaylistParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetMasterHlsAudioPlaylistParams::profile() const {
	return m_profile;
}

void GetMasterHlsAudioPlaylistParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetMasterHlsAudioPlaylistParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetMasterHlsAudioPlaylistParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetMasterHlsAudioPlaylistParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetMasterHlsAudioPlaylistParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetMasterHlsAudioPlaylistParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetMasterHlsAudioPlaylistParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetMasterHlsAudioPlaylistParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetMasterHlsAudioPlaylistParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetMasterHlsAudioPlaylistParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetMasterHlsAudioPlaylistParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetMasterHlsAudioPlaylistParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetMasterHlsAudioPlaylistParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetMasterHlsAudioPlaylistParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetMasterHlsAudioPlaylistParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetMasterHlsAudioPlaylistParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetMasterHlsAudioPlaylistParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetMasterHlsAudioPlaylistParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetMasterHlsAudioPlaylistParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetMasterHlsAudioPlaylistParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetMasterHlsAudioPlaylistParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetMasterHlsAudioPlaylistParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetMasterHlsAudioPlaylistParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetMasterHlsAudioPlaylistParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetMasterHlsAudioPlaylistParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetMasterHlsAudioPlaylistParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetMasterHlsAudioPlaylistParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetMasterHlsAudioPlaylistParams::streamOptions() const {
	return m_streamOptions;
}

void GetMasterHlsAudioPlaylistParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetMasterHlsAudioPlaylistParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetMasterHlsAudioPlaylistParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetMasterHlsAudioPlaylistParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetMasterHlsAudioPlaylistParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetMasterHlsAudioPlaylistParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetMasterHlsAudioPlaylistParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetMasterHlsAudioPlaylistParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetMasterHlsAudioPlaylistParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetMasterHlsAudioPlaylistParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetMasterHlsAudioPlaylistParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetMasterHlsAudioPlaylistParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetMasterHlsAudioPlaylistParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetMasterHlsAudioPlaylistParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetMasterHlsAudioPlaylistParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetMasterHlsAudioPlaylistParams::tag() const {
	return m_tag;
}

void GetMasterHlsAudioPlaylistParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetMasterHlsAudioPlaylistParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetMasterHlsAudioPlaylistParams::setTagNull() {
	m_tag.clear();
}


const QString &GetMasterHlsAudioPlaylistParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetMasterHlsAudioPlaylistParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetMasterHlsAudioPlaylistParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetMasterHlsAudioPlaylistParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetMasterHlsAudioPlaylistParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetMasterHlsAudioPlaylistParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetMasterHlsAudioPlaylistParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetMasterHlsAudioPlaylistParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetMasterHlsAudioPlaylistParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetMasterHlsAudioPlaylistParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetMasterHlsAudioPlaylistParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetMasterHlsAudioPlaylistParams::videoCodec() const {
	return m_videoCodec;
}

void GetMasterHlsAudioPlaylistParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetMasterHlsAudioPlaylistParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetMasterHlsAudioPlaylistParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetMasterHlsAudioPlaylistParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetMasterHlsAudioPlaylistParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetMasterHlsAudioPlaylistParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetMasterHlsAudioPlaylistParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetMasterHlsAudioPlaylistParams::width() const {
	return m_width.value();
}

void GetMasterHlsAudioPlaylistParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetMasterHlsAudioPlaylistParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetMasterHlsAudioPlaylistParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
