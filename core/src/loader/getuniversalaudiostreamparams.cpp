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

#include "JellyfinQt/loader/getuniversalaudiostreamparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetUniversalAudioStreamParams

const QString &GetUniversalAudioStreamParams::itemId() const {
	return m_itemId;
}

void GetUniversalAudioStreamParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const qint32 &GetUniversalAudioStreamParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetUniversalAudioStreamParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetUniversalAudioStreamParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetUniversalAudioStreamParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const QString &GetUniversalAudioStreamParams::audioCodec() const {
	return m_audioCodec;
}

void GetUniversalAudioStreamParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetUniversalAudioStreamParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetUniversalAudioStreamParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const bool &GetUniversalAudioStreamParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetUniversalAudioStreamParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetUniversalAudioStreamParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetUniversalAudioStreamParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const QStringList &GetUniversalAudioStreamParams::container() const {
	return m_container;
}

void GetUniversalAudioStreamParams::setContainer(QStringList newContainer)  {
	m_container = newContainer;
}

bool GetUniversalAudioStreamParams::containerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_container.size() == 0;
}

void GetUniversalAudioStreamParams::setContainerNull() {
	m_container.clear();
}


const QString &GetUniversalAudioStreamParams::deviceId() const {
	return m_deviceId;
}

void GetUniversalAudioStreamParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetUniversalAudioStreamParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetUniversalAudioStreamParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const bool &GetUniversalAudioStreamParams::enableRedirection() const {
	return m_enableRedirection.value();
}

void GetUniversalAudioStreamParams::setEnableRedirection(bool newEnableRedirection)  {
	m_enableRedirection = newEnableRedirection;
}

bool GetUniversalAudioStreamParams::enableRedirectionNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_enableRedirection.has_value();
}

void GetUniversalAudioStreamParams::setEnableRedirectionNull() {
	m_enableRedirection = std::nullopt;
}


const bool &GetUniversalAudioStreamParams::enableRemoteMedia() const {
	return m_enableRemoteMedia.value();
}

void GetUniversalAudioStreamParams::setEnableRemoteMedia(bool newEnableRemoteMedia)  {
	m_enableRemoteMedia = newEnableRemoteMedia;
}

bool GetUniversalAudioStreamParams::enableRemoteMediaNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableRemoteMedia.has_value();
}

void GetUniversalAudioStreamParams::setEnableRemoteMediaNull() {
	m_enableRemoteMedia = std::nullopt;
}


const qint32 &GetUniversalAudioStreamParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetUniversalAudioStreamParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetUniversalAudioStreamParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetUniversalAudioStreamParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetUniversalAudioStreamParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetUniversalAudioStreamParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetUniversalAudioStreamParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetUniversalAudioStreamParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const qint32 &GetUniversalAudioStreamParams::maxAudioSampleRate() const {
	return m_maxAudioSampleRate.value();
}

void GetUniversalAudioStreamParams::setMaxAudioSampleRate(qint32 newMaxAudioSampleRate)  {
	m_maxAudioSampleRate = newMaxAudioSampleRate;
}

bool GetUniversalAudioStreamParams::maxAudioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioSampleRate.has_value();
}

void GetUniversalAudioStreamParams::setMaxAudioSampleRateNull() {
	m_maxAudioSampleRate = std::nullopt;
}


const qint32 &GetUniversalAudioStreamParams::maxStreamingBitrate() const {
	return m_maxStreamingBitrate.value();
}

void GetUniversalAudioStreamParams::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate)  {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}

bool GetUniversalAudioStreamParams::maxStreamingBitrateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxStreamingBitrate.has_value();
}

void GetUniversalAudioStreamParams::setMaxStreamingBitrateNull() {
	m_maxStreamingBitrate = std::nullopt;
}


const QString &GetUniversalAudioStreamParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetUniversalAudioStreamParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetUniversalAudioStreamParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetUniversalAudioStreamParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint64 &GetUniversalAudioStreamParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetUniversalAudioStreamParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetUniversalAudioStreamParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetUniversalAudioStreamParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const qint32 &GetUniversalAudioStreamParams::transcodingAudioChannels() const {
	return m_transcodingAudioChannels.value();
}

void GetUniversalAudioStreamParams::setTranscodingAudioChannels(qint32 newTranscodingAudioChannels)  {
	m_transcodingAudioChannels = newTranscodingAudioChannels;
}

bool GetUniversalAudioStreamParams::transcodingAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingAudioChannels.has_value();
}

void GetUniversalAudioStreamParams::setTranscodingAudioChannelsNull() {
	m_transcodingAudioChannels = std::nullopt;
}


const QString &GetUniversalAudioStreamParams::transcodingContainer() const {
	return m_transcodingContainer;
}

void GetUniversalAudioStreamParams::setTranscodingContainer(QString newTranscodingContainer)  {
	m_transcodingContainer = newTranscodingContainer;
}

bool GetUniversalAudioStreamParams::transcodingContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodingContainer.isNull();
}

void GetUniversalAudioStreamParams::setTranscodingContainerNull() {
	m_transcodingContainer.clear();
}


const QString &GetUniversalAudioStreamParams::transcodingProtocol() const {
	return m_transcodingProtocol;
}

void GetUniversalAudioStreamParams::setTranscodingProtocol(QString newTranscodingProtocol)  {
	m_transcodingProtocol = newTranscodingProtocol;
}

bool GetUniversalAudioStreamParams::transcodingProtocolNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodingProtocol.isNull();
}

void GetUniversalAudioStreamParams::setTranscodingProtocolNull() {
	m_transcodingProtocol.clear();
}


const QString &GetUniversalAudioStreamParams::userId() const {
	return m_userId;
}

void GetUniversalAudioStreamParams::setUserId(QString newUserId)  {
	m_userId = newUserId;
}

bool GetUniversalAudioStreamParams::userIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_userId.isNull();
}

void GetUniversalAudioStreamParams::setUserIdNull() {
	m_userId.clear();
}



} // NS Loader
} // NS Jellyfin
