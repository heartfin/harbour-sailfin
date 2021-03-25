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

#include <JellyfinQt/loader/http/getpostedplaybackinfo.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {


GetPostedPlaybackInfo::GetPostedPlaybackInfo(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<Jellyfin::DTO::PlaybackInfoResponse, GetPostedPlaybackInfoParams>(apiClient) {}

QString GetPostedPlaybackInfo::path(const GetPostedPlaybackInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString(params.itemId()) + QStringLiteral("/PlaybackInfo");
}

QUrlQuery GetPostedPlaybackInfo::query(const GetPostedPlaybackInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString(params.userId()));
	}
	if (!params.maxStreamingBitrateNull()) {
		result.addQueryItem("maxStreamingBitrate", Support::toString(params.maxStreamingBitrate()));
	}
	if (!params.startTimeTicksNull()) {
		result.addQueryItem("startTimeTicks", Support::toString(params.startTimeTicks()));
	}
	if (!params.audioStreamIndexNull()) {
		result.addQueryItem("audioStreamIndex", Support::toString(params.audioStreamIndex()));
	}
	if (!params.subtitleStreamIndexNull()) {
		result.addQueryItem("subtitleStreamIndex", Support::toString(params.subtitleStreamIndex()));
	}
	if (!params.maxAudioChannelsNull()) {
		result.addQueryItem("maxAudioChannels", Support::toString(params.maxAudioChannels()));
	}
	if (!params.mediaSourceIdNull()) {
		result.addQueryItem("mediaSourceId", Support::toString(params.mediaSourceId()));
	}
	if (!params.liveStreamIdNull()) {
		result.addQueryItem("liveStreamId", Support::toString(params.liveStreamId()));
	}
	if (!params.autoOpenLiveStreamNull()) {
		result.addQueryItem("autoOpenLiveStream", Support::toString(params.autoOpenLiveStream()));
	}
	if (!params.enableDirectPlayNull()) {
		result.addQueryItem("enableDirectPlay", Support::toString(params.enableDirectPlay()));
	}
	if (!params.enableDirectStreamNull()) {
		result.addQueryItem("enableDirectStream", Support::toString(params.enableDirectStream()));
	}
	if (!params.enableTranscodingNull()) {
		result.addQueryItem("enableTranscoding", Support::toString(params.enableTranscoding()));
	}
	if (!params.allowVideoStreamCopyNull()) {
		result.addQueryItem("allowVideoStreamCopy", Support::toString(params.allowVideoStreamCopy()));
	}
	if (!params.allowAudioStreamCopyNull()) {
		result.addQueryItem("allowAudioStreamCopy", Support::toString(params.allowAudioStreamCopy()));
	}
	
	return result;
}


} // NS HTTP
} // NS Loader
} // NS Jellyfin