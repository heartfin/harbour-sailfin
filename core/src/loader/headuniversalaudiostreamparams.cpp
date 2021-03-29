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

#include "JellyfinQt/loader/headuniversalaudiostreamparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// HeadUniversalAudioStreamParams

const QString &HeadUniversalAudioStreamParams::itemId() const {
	return m_itemId;
}

void HeadUniversalAudioStreamParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const qint32 &HeadUniversalAudioStreamParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void HeadUniversalAudioStreamParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool HeadUniversalAudioStreamParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void HeadUniversalAudioStreamParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const QString &HeadUniversalAudioStreamParams::audioCodec() const {
	return m_audioCodec;
}

void HeadUniversalAudioStreamParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool HeadUniversalAudioStreamParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void HeadUniversalAudioStreamParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const bool &HeadUniversalAudioStreamParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void HeadUniversalAudioStreamParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool HeadUniversalAudioStreamParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void HeadUniversalAudioStreamParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const QStringList &HeadUniversalAudioStreamParams::container() const {
	return m_container;
}

void HeadUniversalAudioStreamParams::setContainer(QStringList newContainer)  {
	m_container = newContainer;
}

bool HeadUniversalAudioStreamParams::containerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_container.size() == 0;
}

void HeadUniversalAudioStreamParams::setContainerNull() {
	m_container.clear();
}


const QString &HeadUniversalAudioStreamParams::deviceId() const {
	return m_deviceId;
}

void HeadUniversalAudioStreamParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool HeadUniversalAudioStreamParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void HeadUniversalAudioStreamParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const bool &HeadUniversalAudioStreamParams::enableRedirection() const {
	return m_enableRedirection.value();
}

void HeadUniversalAudioStreamParams::setEnableRedirection(bool newEnableRedirection)  {
	m_enableRedirection = newEnableRedirection;
}

bool HeadUniversalAudioStreamParams::enableRedirectionNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableRedirection.has_value();
}

void HeadUniversalAudioStreamParams::setEnableRedirectionNull() {
	m_enableRedirection = std::nullopt;
}


const bool &HeadUniversalAudioStreamParams::enableRemoteMedia() const {
	return m_enableRemoteMedia.value();
}

void HeadUniversalAudioStreamParams::setEnableRemoteMedia(bool newEnableRemoteMedia)  {
	m_enableRemoteMedia = newEnableRemoteMedia;
}

bool HeadUniversalAudioStreamParams::enableRemoteMediaNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableRemoteMedia.has_value();
}

void HeadUniversalAudioStreamParams::setEnableRemoteMediaNull() {
	m_enableRemoteMedia = std::nullopt;
}


const qint32 &HeadUniversalAudioStreamParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void HeadUniversalAudioStreamParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool HeadUniversalAudioStreamParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void HeadUniversalAudioStreamParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &HeadUniversalAudioStreamParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void HeadUniversalAudioStreamParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool HeadUniversalAudioStreamParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void HeadUniversalAudioStreamParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const qint32 &HeadUniversalAudioStreamParams::maxAudioSampleRate() const {
	return m_maxAudioSampleRate.value();
}

void HeadUniversalAudioStreamParams::setMaxAudioSampleRate(qint32 newMaxAudioSampleRate)  {
	m_maxAudioSampleRate = newMaxAudioSampleRate;
}

bool HeadUniversalAudioStreamParams::maxAudioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioSampleRate.has_value();
}

void HeadUniversalAudioStreamParams::setMaxAudioSampleRateNull() {
	m_maxAudioSampleRate = std::nullopt;
}


const qint32 &HeadUniversalAudioStreamParams::maxStreamingBitrate() const {
	return m_maxStreamingBitrate.value();
}

void HeadUniversalAudioStreamParams::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate)  {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}

bool HeadUniversalAudioStreamParams::maxStreamingBitrateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxStreamingBitrate.has_value();
}

void HeadUniversalAudioStreamParams::setMaxStreamingBitrateNull() {
	m_maxStreamingBitrate = std::nullopt;
}


const QString &HeadUniversalAudioStreamParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void HeadUniversalAudioStreamParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool HeadUniversalAudioStreamParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void HeadUniversalAudioStreamParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint64 &HeadUniversalAudioStreamParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void HeadUniversalAudioStreamParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool HeadUniversalAudioStreamParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void HeadUniversalAudioStreamParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const qint32 &HeadUniversalAudioStreamParams::transcodingAudioChannels() const {
	return m_transcodingAudioChannels.value();
}

void HeadUniversalAudioStreamParams::setTranscodingAudioChannels(qint32 newTranscodingAudioChannels)  {
	m_transcodingAudioChannels = newTranscodingAudioChannels;
}

bool HeadUniversalAudioStreamParams::transcodingAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingAudioChannels.has_value();
}

void HeadUniversalAudioStreamParams::setTranscodingAudioChannelsNull() {
	m_transcodingAudioChannels = std::nullopt;
}


const QString &HeadUniversalAudioStreamParams::transcodingContainer() const {
	return m_transcodingContainer;
}

void HeadUniversalAudioStreamParams::setTranscodingContainer(QString newTranscodingContainer)  {
	m_transcodingContainer = newTranscodingContainer;
}

bool HeadUniversalAudioStreamParams::transcodingContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodingContainer.isNull();
}

void HeadUniversalAudioStreamParams::setTranscodingContainerNull() {
	m_transcodingContainer.clear();
}


const QString &HeadUniversalAudioStreamParams::transcodingProtocol() const {
	return m_transcodingProtocol;
}

void HeadUniversalAudioStreamParams::setTranscodingProtocol(QString newTranscodingProtocol)  {
	m_transcodingProtocol = newTranscodingProtocol;
}

bool HeadUniversalAudioStreamParams::transcodingProtocolNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodingProtocol.isNull();
}

void HeadUniversalAudioStreamParams::setTranscodingProtocolNull() {
	m_transcodingProtocol.clear();
}


const QString &HeadUniversalAudioStreamParams::userId() const {
	return m_userId;
}

void HeadUniversalAudioStreamParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool HeadUniversalAudioStreamParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void HeadUniversalAudioStreamParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
