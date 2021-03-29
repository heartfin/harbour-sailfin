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

#include "JellyfinQt/loader/getlivehlsstreamparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetLiveHlsStreamParams

const QString &GetLiveHlsStreamParams::itemId() const {
	return m_itemId;
}

void GetLiveHlsStreamParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const bool &GetLiveHlsStreamParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetLiveHlsStreamParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetLiveHlsStreamParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetLiveHlsStreamParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetLiveHlsStreamParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetLiveHlsStreamParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetLiveHlsStreamParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetLiveHlsStreamParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetLiveHlsStreamParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetLiveHlsStreamParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetLiveHlsStreamParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetLiveHlsStreamParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetLiveHlsStreamParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetLiveHlsStreamParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetLiveHlsStreamParams::audioCodec() const {
	return m_audioCodec;
}

void GetLiveHlsStreamParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetLiveHlsStreamParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetLiveHlsStreamParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetLiveHlsStreamParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetLiveHlsStreamParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetLiveHlsStreamParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetLiveHlsStreamParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetLiveHlsStreamParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetLiveHlsStreamParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetLiveHlsStreamParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetLiveHlsStreamParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetLiveHlsStreamParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetLiveHlsStreamParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetLiveHlsStreamParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const QString &GetLiveHlsStreamParams::container() const {
	return m_container;
}

void GetLiveHlsStreamParams::setContainer(QString newContainer)  {
	m_container = newContainer;
}

bool GetLiveHlsStreamParams::containerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_container.isNull();
}

void GetLiveHlsStreamParams::setContainerNull() {
	m_container.clear();
}


const EncodingContext &GetLiveHlsStreamParams::context() const {
	return m_context;
}

void GetLiveHlsStreamParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetLiveHlsStreamParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetLiveHlsStreamParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetLiveHlsStreamParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetLiveHlsStreamParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetLiveHlsStreamParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetLiveHlsStreamParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetLiveHlsStreamParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetLiveHlsStreamParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetLiveHlsStreamParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetLiveHlsStreamParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetLiveHlsStreamParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetLiveHlsStreamParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetLiveHlsStreamParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetLiveHlsStreamParams::deviceId() const {
	return m_deviceId;
}

void GetLiveHlsStreamParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetLiveHlsStreamParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetLiveHlsStreamParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetLiveHlsStreamParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetLiveHlsStreamParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetLiveHlsStreamParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetLiveHlsStreamParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetLiveHlsStreamParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetLiveHlsStreamParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetLiveHlsStreamParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetLiveHlsStreamParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetLiveHlsStreamParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetLiveHlsStreamParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetLiveHlsStreamParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetLiveHlsStreamParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const bool &GetLiveHlsStreamParams::enableSubtitlesInManifest() const {
	return m_enableSubtitlesInManifest.value();
}

void GetLiveHlsStreamParams::setEnableSubtitlesInManifest(bool newEnableSubtitlesInManifest)  {
	m_enableSubtitlesInManifest = newEnableSubtitlesInManifest;
}

bool GetLiveHlsStreamParams::enableSubtitlesInManifestNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableSubtitlesInManifest.has_value();
}

void GetLiveHlsStreamParams::setEnableSubtitlesInManifestNull() {
	m_enableSubtitlesInManifest = std::nullopt;
}


const float &GetLiveHlsStreamParams::framerate() const {
	return m_framerate.value();
}

void GetLiveHlsStreamParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetLiveHlsStreamParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetLiveHlsStreamParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::height() const {
	return m_height.value();
}

void GetLiveHlsStreamParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetLiveHlsStreamParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetLiveHlsStreamParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetLiveHlsStreamParams::level() const {
	return m_level;
}

void GetLiveHlsStreamParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetLiveHlsStreamParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetLiveHlsStreamParams::setLevelNull() {
	m_level.clear();
}


const QString &GetLiveHlsStreamParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetLiveHlsStreamParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetLiveHlsStreamParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetLiveHlsStreamParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetLiveHlsStreamParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetLiveHlsStreamParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetLiveHlsStreamParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetLiveHlsStreamParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetLiveHlsStreamParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetLiveHlsStreamParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetLiveHlsStreamParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetLiveHlsStreamParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetLiveHlsStreamParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetLiveHlsStreamParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetLiveHlsStreamParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::maxHeight() const {
	return m_maxHeight.value();
}

void GetLiveHlsStreamParams::setMaxHeight(qint32 newMaxHeight)  {
	m_maxHeight = newMaxHeight;
}

bool GetLiveHlsStreamParams::maxHeightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxHeight.has_value();
}

void GetLiveHlsStreamParams::setMaxHeightNull() {
	m_maxHeight = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetLiveHlsStreamParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetLiveHlsStreamParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetLiveHlsStreamParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetLiveHlsStreamParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetLiveHlsStreamParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetLiveHlsStreamParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::maxWidth() const {
	return m_maxWidth.value();
}

void GetLiveHlsStreamParams::setMaxWidth(qint32 newMaxWidth)  {
	m_maxWidth = newMaxWidth;
}

bool GetLiveHlsStreamParams::maxWidthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxWidth.has_value();
}

void GetLiveHlsStreamParams::setMaxWidthNull() {
	m_maxWidth = std::nullopt;
}


const QString &GetLiveHlsStreamParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetLiveHlsStreamParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetLiveHlsStreamParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetLiveHlsStreamParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &GetLiveHlsStreamParams::minSegments() const {
	return m_minSegments.value();
}

void GetLiveHlsStreamParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetLiveHlsStreamParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetLiveHlsStreamParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetLiveHlsStreamParams::params() const {
	return m_params;
}

void GetLiveHlsStreamParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetLiveHlsStreamParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetLiveHlsStreamParams::setParamsNull() {
	m_params.clear();
}


const QString &GetLiveHlsStreamParams::playSessionId() const {
	return m_playSessionId;
}

void GetLiveHlsStreamParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetLiveHlsStreamParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetLiveHlsStreamParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetLiveHlsStreamParams::profile() const {
	return m_profile;
}

void GetLiveHlsStreamParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetLiveHlsStreamParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetLiveHlsStreamParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetLiveHlsStreamParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetLiveHlsStreamParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetLiveHlsStreamParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetLiveHlsStreamParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetLiveHlsStreamParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetLiveHlsStreamParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetLiveHlsStreamParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetLiveHlsStreamParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetLiveHlsStreamParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetLiveHlsStreamParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetLiveHlsStreamParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetLiveHlsStreamParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetLiveHlsStreamParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetLiveHlsStreamParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetLiveHlsStreamParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetLiveHlsStreamParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetLiveHlsStreamParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetLiveHlsStreamParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetLiveHlsStreamParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetLiveHlsStreamParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetLiveHlsStreamParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetLiveHlsStreamParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetLiveHlsStreamParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetLiveHlsStreamParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetLiveHlsStreamParams::streamOptions() const {
	return m_streamOptions;
}

void GetLiveHlsStreamParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetLiveHlsStreamParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetLiveHlsStreamParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetLiveHlsStreamParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetLiveHlsStreamParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetLiveHlsStreamParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetLiveHlsStreamParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetLiveHlsStreamParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetLiveHlsStreamParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetLiveHlsStreamParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetLiveHlsStreamParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetLiveHlsStreamParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetLiveHlsStreamParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetLiveHlsStreamParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetLiveHlsStreamParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetLiveHlsStreamParams::tag() const {
	return m_tag;
}

void GetLiveHlsStreamParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetLiveHlsStreamParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetLiveHlsStreamParams::setTagNull() {
	m_tag.clear();
}


const QString &GetLiveHlsStreamParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetLiveHlsStreamParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetLiveHlsStreamParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetLiveHlsStreamParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetLiveHlsStreamParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetLiveHlsStreamParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetLiveHlsStreamParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetLiveHlsStreamParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetLiveHlsStreamParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetLiveHlsStreamParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetLiveHlsStreamParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetLiveHlsStreamParams::videoCodec() const {
	return m_videoCodec;
}

void GetLiveHlsStreamParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetLiveHlsStreamParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetLiveHlsStreamParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetLiveHlsStreamParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetLiveHlsStreamParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetLiveHlsStreamParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetLiveHlsStreamParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetLiveHlsStreamParams::width() const {
	return m_width.value();
}

void GetLiveHlsStreamParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetLiveHlsStreamParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetLiveHlsStreamParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
