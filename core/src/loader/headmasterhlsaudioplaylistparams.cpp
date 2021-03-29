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

#include "JellyfinQt/loader/headmasterhlsaudioplaylistparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadMasterHlsAudioPlaylistParams

const QString &HeadMasterHlsAudioPlaylistParams::itemId() const {
	return m_itemId;
}

void HeadMasterHlsAudioPlaylistParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &HeadMasterHlsAudioPlaylistParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void HeadMasterHlsAudioPlaylistParams::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}


const bool &HeadMasterHlsAudioPlaylistParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void HeadMasterHlsAudioPlaylistParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool HeadMasterHlsAudioPlaylistParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &HeadMasterHlsAudioPlaylistParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void HeadMasterHlsAudioPlaylistParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool HeadMasterHlsAudioPlaylistParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void HeadMasterHlsAudioPlaylistParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool HeadMasterHlsAudioPlaylistParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::audioChannels() const {
	return m_audioChannels.value();
}

void HeadMasterHlsAudioPlaylistParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool HeadMasterHlsAudioPlaylistParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &HeadMasterHlsAudioPlaylistParams::audioCodec() const {
	return m_audioCodec;
}

void HeadMasterHlsAudioPlaylistParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool HeadMasterHlsAudioPlaylistParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &HeadMasterHlsAudioPlaylistParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void HeadMasterHlsAudioPlaylistParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool HeadMasterHlsAudioPlaylistParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void HeadMasterHlsAudioPlaylistParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool HeadMasterHlsAudioPlaylistParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &HeadMasterHlsAudioPlaylistParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void HeadMasterHlsAudioPlaylistParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool HeadMasterHlsAudioPlaylistParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &HeadMasterHlsAudioPlaylistParams::context() const {
	return m_context;
}

void HeadMasterHlsAudioPlaylistParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool HeadMasterHlsAudioPlaylistParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void HeadMasterHlsAudioPlaylistParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &HeadMasterHlsAudioPlaylistParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void HeadMasterHlsAudioPlaylistParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool HeadMasterHlsAudioPlaylistParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void HeadMasterHlsAudioPlaylistParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool HeadMasterHlsAudioPlaylistParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &HeadMasterHlsAudioPlaylistParams::deInterlace() const {
	return m_deInterlace.value();
}

void HeadMasterHlsAudioPlaylistParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool HeadMasterHlsAudioPlaylistParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &HeadMasterHlsAudioPlaylistParams::deviceId() const {
	return m_deviceId;
}

void HeadMasterHlsAudioPlaylistParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool HeadMasterHlsAudioPlaylistParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &HeadMasterHlsAudioPlaylistParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void HeadMasterHlsAudioPlaylistParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool HeadMasterHlsAudioPlaylistParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &HeadMasterHlsAudioPlaylistParams::enableAdaptiveBitrateStreaming() const {
	return m_enableAdaptiveBitrateStreaming.value();
}

void HeadMasterHlsAudioPlaylistParams::setEnableAdaptiveBitrateStreaming(bool newEnableAdaptiveBitrateStreaming)  {
	m_enableAdaptiveBitrateStreaming = newEnableAdaptiveBitrateStreaming;
}

bool HeadMasterHlsAudioPlaylistParams::enableAdaptiveBitrateStreamingNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableAdaptiveBitrateStreaming.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setEnableAdaptiveBitrateStreamingNull() {
	m_enableAdaptiveBitrateStreaming = std::nullopt;
}


const bool &HeadMasterHlsAudioPlaylistParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void HeadMasterHlsAudioPlaylistParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool HeadMasterHlsAudioPlaylistParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &HeadMasterHlsAudioPlaylistParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void HeadMasterHlsAudioPlaylistParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool HeadMasterHlsAudioPlaylistParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &HeadMasterHlsAudioPlaylistParams::framerate() const {
	return m_framerate.value();
}

void HeadMasterHlsAudioPlaylistParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool HeadMasterHlsAudioPlaylistParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::height() const {
	return m_height.value();
}

void HeadMasterHlsAudioPlaylistParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadMasterHlsAudioPlaylistParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &HeadMasterHlsAudioPlaylistParams::level() const {
	return m_level;
}

void HeadMasterHlsAudioPlaylistParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool HeadMasterHlsAudioPlaylistParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setLevelNull() {
	m_level.clear();
}


const QString &HeadMasterHlsAudioPlaylistParams::liveStreamId() const {
	return m_liveStreamId;
}

void HeadMasterHlsAudioPlaylistParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool HeadMasterHlsAudioPlaylistParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &HeadMasterHlsAudioPlaylistParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool HeadMasterHlsAudioPlaylistParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool HeadMasterHlsAudioPlaylistParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &HeadMasterHlsAudioPlaylistParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool HeadMasterHlsAudioPlaylistParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool HeadMasterHlsAudioPlaylistParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::maxStreamingBitrate() const {
	return m_maxStreamingBitrate.value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate)  {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}

bool HeadMasterHlsAudioPlaylistParams::maxStreamingBitrateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxStreamingBitrate.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxStreamingBitrateNull() {
	m_maxStreamingBitrate = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool HeadMasterHlsAudioPlaylistParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::minSegments() const {
	return m_minSegments.value();
}

void HeadMasterHlsAudioPlaylistParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool HeadMasterHlsAudioPlaylistParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &HeadMasterHlsAudioPlaylistParams::params() const {
	return m_params;
}

void HeadMasterHlsAudioPlaylistParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool HeadMasterHlsAudioPlaylistParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setParamsNull() {
	m_params.clear();
}


const QString &HeadMasterHlsAudioPlaylistParams::playSessionId() const {
	return m_playSessionId;
}

void HeadMasterHlsAudioPlaylistParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool HeadMasterHlsAudioPlaylistParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &HeadMasterHlsAudioPlaylistParams::profile() const {
	return m_profile;
}

void HeadMasterHlsAudioPlaylistParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool HeadMasterHlsAudioPlaylistParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setProfileNull() {
	m_profile.clear();
}


const bool &HeadMasterHlsAudioPlaylistParams::requireAvc() const {
	return m_requireAvc.value();
}

void HeadMasterHlsAudioPlaylistParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool HeadMasterHlsAudioPlaylistParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &HeadMasterHlsAudioPlaylistParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void HeadMasterHlsAudioPlaylistParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool HeadMasterHlsAudioPlaylistParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &HeadMasterHlsAudioPlaylistParams::segmentContainer() const {
	return m_segmentContainer;
}

void HeadMasterHlsAudioPlaylistParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool HeadMasterHlsAudioPlaylistParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &HeadMasterHlsAudioPlaylistParams::segmentLength() const {
	return m_segmentLength.value();
}

void HeadMasterHlsAudioPlaylistParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool HeadMasterHlsAudioPlaylistParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &HeadMasterHlsAudioPlaylistParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void HeadMasterHlsAudioPlaylistParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool HeadMasterHlsAudioPlaylistParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &HeadMasterHlsAudioPlaylistParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void HeadMasterHlsAudioPlaylistParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool HeadMasterHlsAudioPlaylistParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &HeadMasterHlsAudioPlaylistParams::streamOptions() const {
	return m_streamOptions;
}

void HeadMasterHlsAudioPlaylistParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool HeadMasterHlsAudioPlaylistParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void HeadMasterHlsAudioPlaylistParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &HeadMasterHlsAudioPlaylistParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void HeadMasterHlsAudioPlaylistParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool HeadMasterHlsAudioPlaylistParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &HeadMasterHlsAudioPlaylistParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void HeadMasterHlsAudioPlaylistParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool HeadMasterHlsAudioPlaylistParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void HeadMasterHlsAudioPlaylistParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void HeadMasterHlsAudioPlaylistParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool HeadMasterHlsAudioPlaylistParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &HeadMasterHlsAudioPlaylistParams::tag() const {
	return m_tag;
}

void HeadMasterHlsAudioPlaylistParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadMasterHlsAudioPlaylistParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setTagNull() {
	m_tag.clear();
}


const QString &HeadMasterHlsAudioPlaylistParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void HeadMasterHlsAudioPlaylistParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool HeadMasterHlsAudioPlaylistParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &HeadMasterHlsAudioPlaylistParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void HeadMasterHlsAudioPlaylistParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool HeadMasterHlsAudioPlaylistParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void HeadMasterHlsAudioPlaylistParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool HeadMasterHlsAudioPlaylistParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &HeadMasterHlsAudioPlaylistParams::videoCodec() const {
	return m_videoCodec;
}

void HeadMasterHlsAudioPlaylistParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool HeadMasterHlsAudioPlaylistParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void HeadMasterHlsAudioPlaylistParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &HeadMasterHlsAudioPlaylistParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void HeadMasterHlsAudioPlaylistParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool HeadMasterHlsAudioPlaylistParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &HeadMasterHlsAudioPlaylistParams::width() const {
	return m_width.value();
}

void HeadMasterHlsAudioPlaylistParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadMasterHlsAudioPlaylistParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadMasterHlsAudioPlaylistParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
