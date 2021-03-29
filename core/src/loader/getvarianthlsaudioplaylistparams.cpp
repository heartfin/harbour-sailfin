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

#include "JellyfinQt/loader/getvarianthlsaudioplaylistparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetVariantHlsAudioPlaylistParams

const QString &GetVariantHlsAudioPlaylistParams::itemId() const {
	return m_itemId;
}

void GetVariantHlsAudioPlaylistParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetVariantHlsAudioPlaylistParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetVariantHlsAudioPlaylistParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetVariantHlsAudioPlaylistParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetVariantHlsAudioPlaylistParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetVariantHlsAudioPlaylistParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetVariantHlsAudioPlaylistParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetVariantHlsAudioPlaylistParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetVariantHlsAudioPlaylistParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetVariantHlsAudioPlaylistParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetVariantHlsAudioPlaylistParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetVariantHlsAudioPlaylistParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetVariantHlsAudioPlaylistParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetVariantHlsAudioPlaylistParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetVariantHlsAudioPlaylistParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetVariantHlsAudioPlaylistParams::audioCodec() const {
	return m_audioCodec;
}

void GetVariantHlsAudioPlaylistParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetVariantHlsAudioPlaylistParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetVariantHlsAudioPlaylistParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetVariantHlsAudioPlaylistParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetVariantHlsAudioPlaylistParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetVariantHlsAudioPlaylistParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetVariantHlsAudioPlaylistParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetVariantHlsAudioPlaylistParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetVariantHlsAudioPlaylistParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetVariantHlsAudioPlaylistParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetVariantHlsAudioPlaylistParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetVariantHlsAudioPlaylistParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetVariantHlsAudioPlaylistParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetVariantHlsAudioPlaylistParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &GetVariantHlsAudioPlaylistParams::context() const {
	return m_context;
}

void GetVariantHlsAudioPlaylistParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetVariantHlsAudioPlaylistParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetVariantHlsAudioPlaylistParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetVariantHlsAudioPlaylistParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetVariantHlsAudioPlaylistParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetVariantHlsAudioPlaylistParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetVariantHlsAudioPlaylistParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetVariantHlsAudioPlaylistParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetVariantHlsAudioPlaylistParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetVariantHlsAudioPlaylistParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetVariantHlsAudioPlaylistParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetVariantHlsAudioPlaylistParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetVariantHlsAudioPlaylistParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetVariantHlsAudioPlaylistParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetVariantHlsAudioPlaylistParams::deviceId() const {
	return m_deviceId;
}

void GetVariantHlsAudioPlaylistParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetVariantHlsAudioPlaylistParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetVariantHlsAudioPlaylistParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetVariantHlsAudioPlaylistParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetVariantHlsAudioPlaylistParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetVariantHlsAudioPlaylistParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetVariantHlsAudioPlaylistParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetVariantHlsAudioPlaylistParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetVariantHlsAudioPlaylistParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetVariantHlsAudioPlaylistParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetVariantHlsAudioPlaylistParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetVariantHlsAudioPlaylistParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetVariantHlsAudioPlaylistParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetVariantHlsAudioPlaylistParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetVariantHlsAudioPlaylistParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetVariantHlsAudioPlaylistParams::framerate() const {
	return m_framerate.value();
}

void GetVariantHlsAudioPlaylistParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetVariantHlsAudioPlaylistParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetVariantHlsAudioPlaylistParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::height() const {
	return m_height.value();
}

void GetVariantHlsAudioPlaylistParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetVariantHlsAudioPlaylistParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetVariantHlsAudioPlaylistParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetVariantHlsAudioPlaylistParams::level() const {
	return m_level;
}

void GetVariantHlsAudioPlaylistParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetVariantHlsAudioPlaylistParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetVariantHlsAudioPlaylistParams::setLevelNull() {
	m_level.clear();
}


const QString &GetVariantHlsAudioPlaylistParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetVariantHlsAudioPlaylistParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetVariantHlsAudioPlaylistParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetVariantHlsAudioPlaylistParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetVariantHlsAudioPlaylistParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetVariantHlsAudioPlaylistParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetVariantHlsAudioPlaylistParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetVariantHlsAudioPlaylistParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetVariantHlsAudioPlaylistParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetVariantHlsAudioPlaylistParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetVariantHlsAudioPlaylistParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetVariantHlsAudioPlaylistParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetVariantHlsAudioPlaylistParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetVariantHlsAudioPlaylistParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetVariantHlsAudioPlaylistParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetVariantHlsAudioPlaylistParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetVariantHlsAudioPlaylistParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetVariantHlsAudioPlaylistParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::maxStreamingBitrate() const {
	return m_maxStreamingBitrate.value();
}

void GetVariantHlsAudioPlaylistParams::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate)  {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}

bool GetVariantHlsAudioPlaylistParams::maxStreamingBitrateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxStreamingBitrate.has_value();
}

void GetVariantHlsAudioPlaylistParams::setMaxStreamingBitrateNull() {
	m_maxStreamingBitrate = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetVariantHlsAudioPlaylistParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetVariantHlsAudioPlaylistParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetVariantHlsAudioPlaylistParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &GetVariantHlsAudioPlaylistParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetVariantHlsAudioPlaylistParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetVariantHlsAudioPlaylistParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetVariantHlsAudioPlaylistParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &GetVariantHlsAudioPlaylistParams::minSegments() const {
	return m_minSegments.value();
}

void GetVariantHlsAudioPlaylistParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetVariantHlsAudioPlaylistParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetVariantHlsAudioPlaylistParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetVariantHlsAudioPlaylistParams::params() const {
	return m_params;
}

void GetVariantHlsAudioPlaylistParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetVariantHlsAudioPlaylistParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetVariantHlsAudioPlaylistParams::setParamsNull() {
	m_params.clear();
}


const QString &GetVariantHlsAudioPlaylistParams::playSessionId() const {
	return m_playSessionId;
}

void GetVariantHlsAudioPlaylistParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetVariantHlsAudioPlaylistParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetVariantHlsAudioPlaylistParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetVariantHlsAudioPlaylistParams::profile() const {
	return m_profile;
}

void GetVariantHlsAudioPlaylistParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetVariantHlsAudioPlaylistParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetVariantHlsAudioPlaylistParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetVariantHlsAudioPlaylistParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetVariantHlsAudioPlaylistParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetVariantHlsAudioPlaylistParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetVariantHlsAudioPlaylistParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetVariantHlsAudioPlaylistParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetVariantHlsAudioPlaylistParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetVariantHlsAudioPlaylistParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetVariantHlsAudioPlaylistParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetVariantHlsAudioPlaylistParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetVariantHlsAudioPlaylistParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetVariantHlsAudioPlaylistParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetVariantHlsAudioPlaylistParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetVariantHlsAudioPlaylistParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetVariantHlsAudioPlaylistParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetVariantHlsAudioPlaylistParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetVariantHlsAudioPlaylistParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetVariantHlsAudioPlaylistParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetVariantHlsAudioPlaylistParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetVariantHlsAudioPlaylistParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetVariantHlsAudioPlaylistParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetVariantHlsAudioPlaylistParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetVariantHlsAudioPlaylistParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetVariantHlsAudioPlaylistParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetVariantHlsAudioPlaylistParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetVariantHlsAudioPlaylistParams::streamOptions() const {
	return m_streamOptions;
}

void GetVariantHlsAudioPlaylistParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetVariantHlsAudioPlaylistParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetVariantHlsAudioPlaylistParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetVariantHlsAudioPlaylistParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetVariantHlsAudioPlaylistParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetVariantHlsAudioPlaylistParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetVariantHlsAudioPlaylistParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetVariantHlsAudioPlaylistParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetVariantHlsAudioPlaylistParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetVariantHlsAudioPlaylistParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetVariantHlsAudioPlaylistParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetVariantHlsAudioPlaylistParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetVariantHlsAudioPlaylistParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetVariantHlsAudioPlaylistParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetVariantHlsAudioPlaylistParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetVariantHlsAudioPlaylistParams::tag() const {
	return m_tag;
}

void GetVariantHlsAudioPlaylistParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetVariantHlsAudioPlaylistParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetVariantHlsAudioPlaylistParams::setTagNull() {
	m_tag.clear();
}


const QString &GetVariantHlsAudioPlaylistParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetVariantHlsAudioPlaylistParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetVariantHlsAudioPlaylistParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetVariantHlsAudioPlaylistParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetVariantHlsAudioPlaylistParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetVariantHlsAudioPlaylistParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetVariantHlsAudioPlaylistParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetVariantHlsAudioPlaylistParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetVariantHlsAudioPlaylistParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetVariantHlsAudioPlaylistParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetVariantHlsAudioPlaylistParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetVariantHlsAudioPlaylistParams::videoCodec() const {
	return m_videoCodec;
}

void GetVariantHlsAudioPlaylistParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetVariantHlsAudioPlaylistParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetVariantHlsAudioPlaylistParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetVariantHlsAudioPlaylistParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetVariantHlsAudioPlaylistParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetVariantHlsAudioPlaylistParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetVariantHlsAudioPlaylistParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetVariantHlsAudioPlaylistParams::width() const {
	return m_width.value();
}

void GetVariantHlsAudioPlaylistParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetVariantHlsAudioPlaylistParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetVariantHlsAudioPlaylistParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
