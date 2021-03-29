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

#include "JellyfinQt/loader/headaudiostreambycontainerparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadAudioStreamByContainerParams

const QString &HeadAudioStreamByContainerParams::container() const {
	return m_container;
}

void HeadAudioStreamByContainerParams::setContainer(QString newContainer) {
	m_container = newContainer;
}


const QString &HeadAudioStreamByContainerParams::itemId() const {
	return m_itemId;
}

void HeadAudioStreamByContainerParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &HeadAudioStreamByContainerParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void HeadAudioStreamByContainerParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool HeadAudioStreamByContainerParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void HeadAudioStreamByContainerParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &HeadAudioStreamByContainerParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void HeadAudioStreamByContainerParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool HeadAudioStreamByContainerParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void HeadAudioStreamByContainerParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void HeadAudioStreamByContainerParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool HeadAudioStreamByContainerParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void HeadAudioStreamByContainerParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::audioChannels() const {
	return m_audioChannels.value();
}

void HeadAudioStreamByContainerParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool HeadAudioStreamByContainerParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void HeadAudioStreamByContainerParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &HeadAudioStreamByContainerParams::audioCodec() const {
	return m_audioCodec;
}

void HeadAudioStreamByContainerParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool HeadAudioStreamByContainerParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void HeadAudioStreamByContainerParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &HeadAudioStreamByContainerParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void HeadAudioStreamByContainerParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool HeadAudioStreamByContainerParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void HeadAudioStreamByContainerParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void HeadAudioStreamByContainerParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool HeadAudioStreamByContainerParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void HeadAudioStreamByContainerParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &HeadAudioStreamByContainerParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void HeadAudioStreamByContainerParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool HeadAudioStreamByContainerParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void HeadAudioStreamByContainerParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &HeadAudioStreamByContainerParams::context() const {
	return m_context;
}

void HeadAudioStreamByContainerParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool HeadAudioStreamByContainerParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void HeadAudioStreamByContainerParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &HeadAudioStreamByContainerParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void HeadAudioStreamByContainerParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool HeadAudioStreamByContainerParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void HeadAudioStreamByContainerParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void HeadAudioStreamByContainerParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool HeadAudioStreamByContainerParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void HeadAudioStreamByContainerParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &HeadAudioStreamByContainerParams::deInterlace() const {
	return m_deInterlace.value();
}

void HeadAudioStreamByContainerParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool HeadAudioStreamByContainerParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void HeadAudioStreamByContainerParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &HeadAudioStreamByContainerParams::deviceId() const {
	return m_deviceId;
}

void HeadAudioStreamByContainerParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool HeadAudioStreamByContainerParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void HeadAudioStreamByContainerParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &HeadAudioStreamByContainerParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void HeadAudioStreamByContainerParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool HeadAudioStreamByContainerParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void HeadAudioStreamByContainerParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &HeadAudioStreamByContainerParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void HeadAudioStreamByContainerParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool HeadAudioStreamByContainerParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void HeadAudioStreamByContainerParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &HeadAudioStreamByContainerParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void HeadAudioStreamByContainerParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool HeadAudioStreamByContainerParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void HeadAudioStreamByContainerParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &HeadAudioStreamByContainerParams::framerate() const {
	return m_framerate.value();
}

void HeadAudioStreamByContainerParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool HeadAudioStreamByContainerParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void HeadAudioStreamByContainerParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::height() const {
	return m_height.value();
}

void HeadAudioStreamByContainerParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool HeadAudioStreamByContainerParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void HeadAudioStreamByContainerParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &HeadAudioStreamByContainerParams::level() const {
	return m_level;
}

void HeadAudioStreamByContainerParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool HeadAudioStreamByContainerParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void HeadAudioStreamByContainerParams::setLevelNull() {
	m_level.clear();
}


const QString &HeadAudioStreamByContainerParams::liveStreamId() const {
	return m_liveStreamId;
}

void HeadAudioStreamByContainerParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool HeadAudioStreamByContainerParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void HeadAudioStreamByContainerParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &HeadAudioStreamByContainerParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void HeadAudioStreamByContainerParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool HeadAudioStreamByContainerParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void HeadAudioStreamByContainerParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void HeadAudioStreamByContainerParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool HeadAudioStreamByContainerParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void HeadAudioStreamByContainerParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &HeadAudioStreamByContainerParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void HeadAudioStreamByContainerParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool HeadAudioStreamByContainerParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void HeadAudioStreamByContainerParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void HeadAudioStreamByContainerParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool HeadAudioStreamByContainerParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void HeadAudioStreamByContainerParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void HeadAudioStreamByContainerParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool HeadAudioStreamByContainerParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void HeadAudioStreamByContainerParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &HeadAudioStreamByContainerParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void HeadAudioStreamByContainerParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool HeadAudioStreamByContainerParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void HeadAudioStreamByContainerParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &HeadAudioStreamByContainerParams::minSegments() const {
	return m_minSegments.value();
}

void HeadAudioStreamByContainerParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool HeadAudioStreamByContainerParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void HeadAudioStreamByContainerParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &HeadAudioStreamByContainerParams::params() const {
	return m_params;
}

void HeadAudioStreamByContainerParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool HeadAudioStreamByContainerParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void HeadAudioStreamByContainerParams::setParamsNull() {
	m_params.clear();
}


const QString &HeadAudioStreamByContainerParams::playSessionId() const {
	return m_playSessionId;
}

void HeadAudioStreamByContainerParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool HeadAudioStreamByContainerParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void HeadAudioStreamByContainerParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &HeadAudioStreamByContainerParams::profile() const {
	return m_profile;
}

void HeadAudioStreamByContainerParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool HeadAudioStreamByContainerParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void HeadAudioStreamByContainerParams::setProfileNull() {
	m_profile.clear();
}


const bool &HeadAudioStreamByContainerParams::requireAvc() const {
	return m_requireAvc.value();
}

void HeadAudioStreamByContainerParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool HeadAudioStreamByContainerParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void HeadAudioStreamByContainerParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &HeadAudioStreamByContainerParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void HeadAudioStreamByContainerParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool HeadAudioStreamByContainerParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void HeadAudioStreamByContainerParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &HeadAudioStreamByContainerParams::segmentContainer() const {
	return m_segmentContainer;
}

void HeadAudioStreamByContainerParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool HeadAudioStreamByContainerParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void HeadAudioStreamByContainerParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &HeadAudioStreamByContainerParams::segmentLength() const {
	return m_segmentLength.value();
}

void HeadAudioStreamByContainerParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool HeadAudioStreamByContainerParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void HeadAudioStreamByContainerParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &HeadAudioStreamByContainerParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void HeadAudioStreamByContainerParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool HeadAudioStreamByContainerParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void HeadAudioStreamByContainerParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &HeadAudioStreamByContainerParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void HeadAudioStreamByContainerParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool HeadAudioStreamByContainerParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void HeadAudioStreamByContainerParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &HeadAudioStreamByContainerParams::streamOptions() const {
	return m_streamOptions;
}

void HeadAudioStreamByContainerParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool HeadAudioStreamByContainerParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void HeadAudioStreamByContainerParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &HeadAudioStreamByContainerParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void HeadAudioStreamByContainerParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool HeadAudioStreamByContainerParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void HeadAudioStreamByContainerParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &HeadAudioStreamByContainerParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void HeadAudioStreamByContainerParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool HeadAudioStreamByContainerParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void HeadAudioStreamByContainerParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &HeadAudioStreamByContainerParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void HeadAudioStreamByContainerParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool HeadAudioStreamByContainerParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void HeadAudioStreamByContainerParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &HeadAudioStreamByContainerParams::tag() const {
	return m_tag;
}

void HeadAudioStreamByContainerParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool HeadAudioStreamByContainerParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void HeadAudioStreamByContainerParams::setTagNull() {
	m_tag.clear();
}


const QString &HeadAudioStreamByContainerParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void HeadAudioStreamByContainerParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool HeadAudioStreamByContainerParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void HeadAudioStreamByContainerParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &HeadAudioStreamByContainerParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void HeadAudioStreamByContainerParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool HeadAudioStreamByContainerParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void HeadAudioStreamByContainerParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void HeadAudioStreamByContainerParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool HeadAudioStreamByContainerParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void HeadAudioStreamByContainerParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &HeadAudioStreamByContainerParams::videoCodec() const {
	return m_videoCodec;
}

void HeadAudioStreamByContainerParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool HeadAudioStreamByContainerParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void HeadAudioStreamByContainerParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &HeadAudioStreamByContainerParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void HeadAudioStreamByContainerParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool HeadAudioStreamByContainerParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void HeadAudioStreamByContainerParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &HeadAudioStreamByContainerParams::width() const {
	return m_width.value();
}

void HeadAudioStreamByContainerParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool HeadAudioStreamByContainerParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void HeadAudioStreamByContainerParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
