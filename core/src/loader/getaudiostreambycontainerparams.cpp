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

#include "JellyfinQt/loader/getaudiostreambycontainerparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetAudioStreamByContainerParams

const QString &GetAudioStreamByContainerParams::container() const {
	return m_container;
}

void GetAudioStreamByContainerParams::setContainer(QString newContainer) {
	m_container = newContainer;
}


const QString &GetAudioStreamByContainerParams::itemId() const {
	return m_itemId;
}

void GetAudioStreamByContainerParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetAudioStreamByContainerParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetAudioStreamByContainerParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetAudioStreamByContainerParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetAudioStreamByContainerParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetAudioStreamByContainerParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetAudioStreamByContainerParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetAudioStreamByContainerParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetAudioStreamByContainerParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetAudioStreamByContainerParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetAudioStreamByContainerParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetAudioStreamByContainerParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetAudioStreamByContainerParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetAudioStreamByContainerParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetAudioStreamByContainerParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetAudioStreamByContainerParams::audioCodec() const {
	return m_audioCodec;
}

void GetAudioStreamByContainerParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetAudioStreamByContainerParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetAudioStreamByContainerParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetAudioStreamByContainerParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetAudioStreamByContainerParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetAudioStreamByContainerParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetAudioStreamByContainerParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetAudioStreamByContainerParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetAudioStreamByContainerParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetAudioStreamByContainerParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetAudioStreamByContainerParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetAudioStreamByContainerParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetAudioStreamByContainerParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetAudioStreamByContainerParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &GetAudioStreamByContainerParams::context() const {
	return m_context;
}

void GetAudioStreamByContainerParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetAudioStreamByContainerParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetAudioStreamByContainerParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetAudioStreamByContainerParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetAudioStreamByContainerParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetAudioStreamByContainerParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetAudioStreamByContainerParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetAudioStreamByContainerParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetAudioStreamByContainerParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetAudioStreamByContainerParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetAudioStreamByContainerParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetAudioStreamByContainerParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetAudioStreamByContainerParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetAudioStreamByContainerParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetAudioStreamByContainerParams::deviceId() const {
	return m_deviceId;
}

void GetAudioStreamByContainerParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetAudioStreamByContainerParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetAudioStreamByContainerParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetAudioStreamByContainerParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetAudioStreamByContainerParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetAudioStreamByContainerParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetAudioStreamByContainerParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetAudioStreamByContainerParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetAudioStreamByContainerParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetAudioStreamByContainerParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetAudioStreamByContainerParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetAudioStreamByContainerParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetAudioStreamByContainerParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetAudioStreamByContainerParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetAudioStreamByContainerParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetAudioStreamByContainerParams::framerate() const {
	return m_framerate.value();
}

void GetAudioStreamByContainerParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetAudioStreamByContainerParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetAudioStreamByContainerParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::height() const {
	return m_height.value();
}

void GetAudioStreamByContainerParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetAudioStreamByContainerParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetAudioStreamByContainerParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetAudioStreamByContainerParams::level() const {
	return m_level;
}

void GetAudioStreamByContainerParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetAudioStreamByContainerParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetAudioStreamByContainerParams::setLevelNull() {
	m_level.clear();
}


const QString &GetAudioStreamByContainerParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetAudioStreamByContainerParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetAudioStreamByContainerParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetAudioStreamByContainerParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetAudioStreamByContainerParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetAudioStreamByContainerParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetAudioStreamByContainerParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetAudioStreamByContainerParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetAudioStreamByContainerParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetAudioStreamByContainerParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetAudioStreamByContainerParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetAudioStreamByContainerParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetAudioStreamByContainerParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetAudioStreamByContainerParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetAudioStreamByContainerParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetAudioStreamByContainerParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetAudioStreamByContainerParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetAudioStreamByContainerParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetAudioStreamByContainerParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetAudioStreamByContainerParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetAudioStreamByContainerParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &GetAudioStreamByContainerParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetAudioStreamByContainerParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetAudioStreamByContainerParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetAudioStreamByContainerParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &GetAudioStreamByContainerParams::minSegments() const {
	return m_minSegments.value();
}

void GetAudioStreamByContainerParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetAudioStreamByContainerParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetAudioStreamByContainerParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetAudioStreamByContainerParams::params() const {
	return m_params;
}

void GetAudioStreamByContainerParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetAudioStreamByContainerParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetAudioStreamByContainerParams::setParamsNull() {
	m_params.clear();
}


const QString &GetAudioStreamByContainerParams::playSessionId() const {
	return m_playSessionId;
}

void GetAudioStreamByContainerParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetAudioStreamByContainerParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetAudioStreamByContainerParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetAudioStreamByContainerParams::profile() const {
	return m_profile;
}

void GetAudioStreamByContainerParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetAudioStreamByContainerParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetAudioStreamByContainerParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetAudioStreamByContainerParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetAudioStreamByContainerParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetAudioStreamByContainerParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetAudioStreamByContainerParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetAudioStreamByContainerParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetAudioStreamByContainerParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetAudioStreamByContainerParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetAudioStreamByContainerParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetAudioStreamByContainerParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetAudioStreamByContainerParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetAudioStreamByContainerParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetAudioStreamByContainerParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetAudioStreamByContainerParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetAudioStreamByContainerParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetAudioStreamByContainerParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetAudioStreamByContainerParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetAudioStreamByContainerParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetAudioStreamByContainerParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetAudioStreamByContainerParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetAudioStreamByContainerParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetAudioStreamByContainerParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetAudioStreamByContainerParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetAudioStreamByContainerParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetAudioStreamByContainerParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetAudioStreamByContainerParams::streamOptions() const {
	return m_streamOptions;
}

void GetAudioStreamByContainerParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetAudioStreamByContainerParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetAudioStreamByContainerParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetAudioStreamByContainerParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetAudioStreamByContainerParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetAudioStreamByContainerParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetAudioStreamByContainerParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetAudioStreamByContainerParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetAudioStreamByContainerParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetAudioStreamByContainerParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetAudioStreamByContainerParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetAudioStreamByContainerParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetAudioStreamByContainerParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetAudioStreamByContainerParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetAudioStreamByContainerParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetAudioStreamByContainerParams::tag() const {
	return m_tag;
}

void GetAudioStreamByContainerParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetAudioStreamByContainerParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetAudioStreamByContainerParams::setTagNull() {
	m_tag.clear();
}


const QString &GetAudioStreamByContainerParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetAudioStreamByContainerParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetAudioStreamByContainerParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetAudioStreamByContainerParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetAudioStreamByContainerParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetAudioStreamByContainerParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetAudioStreamByContainerParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetAudioStreamByContainerParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetAudioStreamByContainerParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetAudioStreamByContainerParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetAudioStreamByContainerParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetAudioStreamByContainerParams::videoCodec() const {
	return m_videoCodec;
}

void GetAudioStreamByContainerParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetAudioStreamByContainerParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetAudioStreamByContainerParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetAudioStreamByContainerParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetAudioStreamByContainerParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetAudioStreamByContainerParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetAudioStreamByContainerParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetAudioStreamByContainerParams::width() const {
	return m_width.value();
}

void GetAudioStreamByContainerParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetAudioStreamByContainerParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetAudioStreamByContainerParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
