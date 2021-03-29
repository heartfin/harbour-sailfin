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

#include "JellyfinQt/loader/gethlsaudiosegmentparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetHlsAudioSegmentParams

const QString &GetHlsAudioSegmentParams::container() const {
	return m_container;
}

void GetHlsAudioSegmentParams::setContainer(QString newContainer) {
	m_container = newContainer;
}


const QString &GetHlsAudioSegmentParams::itemId() const {
	return m_itemId;
}

void GetHlsAudioSegmentParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetHlsAudioSegmentParams::playlistId() const {
	return m_playlistId;
}

void GetHlsAudioSegmentParams::setPlaylistId(QString newPlaylistId) {
	m_playlistId = newPlaylistId;
}


const qint32 &GetHlsAudioSegmentParams::segmentId() const {
	return m_segmentId;
}

void GetHlsAudioSegmentParams::setSegmentId(qint32 newSegmentId) {
	m_segmentId = newSegmentId;
}


const bool &GetHlsAudioSegmentParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetHlsAudioSegmentParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetHlsAudioSegmentParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetHlsAudioSegmentParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetHlsAudioSegmentParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetHlsAudioSegmentParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetHlsAudioSegmentParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetHlsAudioSegmentParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetHlsAudioSegmentParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetHlsAudioSegmentParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetHlsAudioSegmentParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetHlsAudioSegmentParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetHlsAudioSegmentParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetHlsAudioSegmentParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetHlsAudioSegmentParams::audioCodec() const {
	return m_audioCodec;
}

void GetHlsAudioSegmentParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetHlsAudioSegmentParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetHlsAudioSegmentParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetHlsAudioSegmentParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetHlsAudioSegmentParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetHlsAudioSegmentParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetHlsAudioSegmentParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetHlsAudioSegmentParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetHlsAudioSegmentParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetHlsAudioSegmentParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetHlsAudioSegmentParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetHlsAudioSegmentParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetHlsAudioSegmentParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetHlsAudioSegmentParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &GetHlsAudioSegmentParams::context() const {
	return m_context;
}

void GetHlsAudioSegmentParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetHlsAudioSegmentParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetHlsAudioSegmentParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetHlsAudioSegmentParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetHlsAudioSegmentParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetHlsAudioSegmentParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetHlsAudioSegmentParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetHlsAudioSegmentParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetHlsAudioSegmentParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetHlsAudioSegmentParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetHlsAudioSegmentParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetHlsAudioSegmentParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetHlsAudioSegmentParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetHlsAudioSegmentParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetHlsAudioSegmentParams::deviceId() const {
	return m_deviceId;
}

void GetHlsAudioSegmentParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetHlsAudioSegmentParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetHlsAudioSegmentParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetHlsAudioSegmentParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetHlsAudioSegmentParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetHlsAudioSegmentParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetHlsAudioSegmentParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetHlsAudioSegmentParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetHlsAudioSegmentParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetHlsAudioSegmentParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetHlsAudioSegmentParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetHlsAudioSegmentParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetHlsAudioSegmentParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetHlsAudioSegmentParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetHlsAudioSegmentParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetHlsAudioSegmentParams::framerate() const {
	return m_framerate.value();
}

void GetHlsAudioSegmentParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetHlsAudioSegmentParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetHlsAudioSegmentParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::height() const {
	return m_height.value();
}

void GetHlsAudioSegmentParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetHlsAudioSegmentParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetHlsAudioSegmentParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetHlsAudioSegmentParams::level() const {
	return m_level;
}

void GetHlsAudioSegmentParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetHlsAudioSegmentParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetHlsAudioSegmentParams::setLevelNull() {
	m_level.clear();
}


const QString &GetHlsAudioSegmentParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetHlsAudioSegmentParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetHlsAudioSegmentParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetHlsAudioSegmentParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetHlsAudioSegmentParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetHlsAudioSegmentParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetHlsAudioSegmentParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetHlsAudioSegmentParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetHlsAudioSegmentParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetHlsAudioSegmentParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetHlsAudioSegmentParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetHlsAudioSegmentParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetHlsAudioSegmentParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetHlsAudioSegmentParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetHlsAudioSegmentParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetHlsAudioSegmentParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetHlsAudioSegmentParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetHlsAudioSegmentParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::maxStreamingBitrate() const {
	return m_maxStreamingBitrate.value();
}

void GetHlsAudioSegmentParams::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate)  {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}

bool GetHlsAudioSegmentParams::maxStreamingBitrateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxStreamingBitrate.has_value();
}

void GetHlsAudioSegmentParams::setMaxStreamingBitrateNull() {
	m_maxStreamingBitrate = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetHlsAudioSegmentParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetHlsAudioSegmentParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetHlsAudioSegmentParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &GetHlsAudioSegmentParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetHlsAudioSegmentParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetHlsAudioSegmentParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetHlsAudioSegmentParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &GetHlsAudioSegmentParams::minSegments() const {
	return m_minSegments.value();
}

void GetHlsAudioSegmentParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetHlsAudioSegmentParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetHlsAudioSegmentParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetHlsAudioSegmentParams::params() const {
	return m_params;
}

void GetHlsAudioSegmentParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetHlsAudioSegmentParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetHlsAudioSegmentParams::setParamsNull() {
	m_params.clear();
}


const QString &GetHlsAudioSegmentParams::playSessionId() const {
	return m_playSessionId;
}

void GetHlsAudioSegmentParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetHlsAudioSegmentParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetHlsAudioSegmentParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetHlsAudioSegmentParams::profile() const {
	return m_profile;
}

void GetHlsAudioSegmentParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetHlsAudioSegmentParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetHlsAudioSegmentParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetHlsAudioSegmentParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetHlsAudioSegmentParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetHlsAudioSegmentParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetHlsAudioSegmentParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetHlsAudioSegmentParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetHlsAudioSegmentParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetHlsAudioSegmentParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetHlsAudioSegmentParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetHlsAudioSegmentParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetHlsAudioSegmentParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetHlsAudioSegmentParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetHlsAudioSegmentParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetHlsAudioSegmentParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetHlsAudioSegmentParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetHlsAudioSegmentParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetHlsAudioSegmentParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetHlsAudioSegmentParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetHlsAudioSegmentParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetHlsAudioSegmentParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetHlsAudioSegmentParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetHlsAudioSegmentParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetHlsAudioSegmentParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetHlsAudioSegmentParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetHlsAudioSegmentParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetHlsAudioSegmentParams::streamOptions() const {
	return m_streamOptions;
}

void GetHlsAudioSegmentParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetHlsAudioSegmentParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetHlsAudioSegmentParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetHlsAudioSegmentParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetHlsAudioSegmentParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetHlsAudioSegmentParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetHlsAudioSegmentParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetHlsAudioSegmentParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetHlsAudioSegmentParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetHlsAudioSegmentParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetHlsAudioSegmentParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetHlsAudioSegmentParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetHlsAudioSegmentParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetHlsAudioSegmentParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetHlsAudioSegmentParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetHlsAudioSegmentParams::tag() const {
	return m_tag;
}

void GetHlsAudioSegmentParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetHlsAudioSegmentParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetHlsAudioSegmentParams::setTagNull() {
	m_tag.clear();
}


const QString &GetHlsAudioSegmentParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetHlsAudioSegmentParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetHlsAudioSegmentParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetHlsAudioSegmentParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetHlsAudioSegmentParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetHlsAudioSegmentParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetHlsAudioSegmentParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetHlsAudioSegmentParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetHlsAudioSegmentParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetHlsAudioSegmentParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetHlsAudioSegmentParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetHlsAudioSegmentParams::videoCodec() const {
	return m_videoCodec;
}

void GetHlsAudioSegmentParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetHlsAudioSegmentParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetHlsAudioSegmentParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetHlsAudioSegmentParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetHlsAudioSegmentParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetHlsAudioSegmentParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetHlsAudioSegmentParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetHlsAudioSegmentParams::width() const {
	return m_width.value();
}

void GetHlsAudioSegmentParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetHlsAudioSegmentParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetHlsAudioSegmentParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
