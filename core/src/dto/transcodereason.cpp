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

#include <JellyfinQt/dto/transcodereason.h>

namespace Jellyfin {
namespace DTO {

TranscodeReasonClass::TranscodeReasonClass() {}

} // NS DTO

namespace Support {

using TranscodeReason = Jellyfin::DTO::TranscodeReason;

template <>
TranscodeReason fromJsonValue(const QJsonValue &source, convertType<TranscodeReason>) {
	if (!source.isString()) return TranscodeReason::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("ContainerNotSupported")) {
		return TranscodeReason::ContainerNotSupported;
	}
	if (str == QStringLiteral("VideoCodecNotSupported")) {
		return TranscodeReason::VideoCodecNotSupported;
	}
	if (str == QStringLiteral("AudioCodecNotSupported")) {
		return TranscodeReason::AudioCodecNotSupported;
	}
	if (str == QStringLiteral("ContainerBitrateExceedsLimit")) {
		return TranscodeReason::ContainerBitrateExceedsLimit;
	}
	if (str == QStringLiteral("AudioBitrateNotSupported")) {
		return TranscodeReason::AudioBitrateNotSupported;
	}
	if (str == QStringLiteral("AudioChannelsNotSupported")) {
		return TranscodeReason::AudioChannelsNotSupported;
	}
	if (str == QStringLiteral("VideoResolutionNotSupported")) {
		return TranscodeReason::VideoResolutionNotSupported;
	}
	if (str == QStringLiteral("UnknownVideoStreamInfo")) {
		return TranscodeReason::UnknownVideoStreamInfo;
	}
	if (str == QStringLiteral("UnknownAudioStreamInfo")) {
		return TranscodeReason::UnknownAudioStreamInfo;
	}
	if (str == QStringLiteral("AudioProfileNotSupported")) {
		return TranscodeReason::AudioProfileNotSupported;
	}
	if (str == QStringLiteral("AudioSampleRateNotSupported")) {
		return TranscodeReason::AudioSampleRateNotSupported;
	}
	if (str == QStringLiteral("AnamorphicVideoNotSupported")) {
		return TranscodeReason::AnamorphicVideoNotSupported;
	}
	if (str == QStringLiteral("InterlacedVideoNotSupported")) {
		return TranscodeReason::InterlacedVideoNotSupported;
	}
	if (str == QStringLiteral("SecondaryAudioNotSupported")) {
		return TranscodeReason::SecondaryAudioNotSupported;
	}
	if (str == QStringLiteral("RefFramesNotSupported")) {
		return TranscodeReason::RefFramesNotSupported;
	}
	if (str == QStringLiteral("VideoBitDepthNotSupported")) {
		return TranscodeReason::VideoBitDepthNotSupported;
	}
	if (str == QStringLiteral("VideoBitrateNotSupported")) {
		return TranscodeReason::VideoBitrateNotSupported;
	}
	if (str == QStringLiteral("VideoFramerateNotSupported")) {
		return TranscodeReason::VideoFramerateNotSupported;
	}
	if (str == QStringLiteral("VideoLevelNotSupported")) {
		return TranscodeReason::VideoLevelNotSupported;
	}
	if (str == QStringLiteral("VideoProfileNotSupported")) {
		return TranscodeReason::VideoProfileNotSupported;
	}
	if (str == QStringLiteral("AudioBitDepthNotSupported")) {
		return TranscodeReason::AudioBitDepthNotSupported;
	}
	if (str == QStringLiteral("SubtitleCodecNotSupported")) {
		return TranscodeReason::SubtitleCodecNotSupported;
	}
	if (str == QStringLiteral("DirectPlayError")) {
		return TranscodeReason::DirectPlayError;
	}
	
	return TranscodeReason::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const TranscodeReason &source, convertType<TranscodeReason>) {
	switch(source) {
	case TranscodeReason::ContainerNotSupported:
		return QStringLiteral("ContainerNotSupported");
	case TranscodeReason::VideoCodecNotSupported:
		return QStringLiteral("VideoCodecNotSupported");
	case TranscodeReason::AudioCodecNotSupported:
		return QStringLiteral("AudioCodecNotSupported");
	case TranscodeReason::ContainerBitrateExceedsLimit:
		return QStringLiteral("ContainerBitrateExceedsLimit");
	case TranscodeReason::AudioBitrateNotSupported:
		return QStringLiteral("AudioBitrateNotSupported");
	case TranscodeReason::AudioChannelsNotSupported:
		return QStringLiteral("AudioChannelsNotSupported");
	case TranscodeReason::VideoResolutionNotSupported:
		return QStringLiteral("VideoResolutionNotSupported");
	case TranscodeReason::UnknownVideoStreamInfo:
		return QStringLiteral("UnknownVideoStreamInfo");
	case TranscodeReason::UnknownAudioStreamInfo:
		return QStringLiteral("UnknownAudioStreamInfo");
	case TranscodeReason::AudioProfileNotSupported:
		return QStringLiteral("AudioProfileNotSupported");
	case TranscodeReason::AudioSampleRateNotSupported:
		return QStringLiteral("AudioSampleRateNotSupported");
	case TranscodeReason::AnamorphicVideoNotSupported:
		return QStringLiteral("AnamorphicVideoNotSupported");
	case TranscodeReason::InterlacedVideoNotSupported:
		return QStringLiteral("InterlacedVideoNotSupported");
	case TranscodeReason::SecondaryAudioNotSupported:
		return QStringLiteral("SecondaryAudioNotSupported");
	case TranscodeReason::RefFramesNotSupported:
		return QStringLiteral("RefFramesNotSupported");
	case TranscodeReason::VideoBitDepthNotSupported:
		return QStringLiteral("VideoBitDepthNotSupported");
	case TranscodeReason::VideoBitrateNotSupported:
		return QStringLiteral("VideoBitrateNotSupported");
	case TranscodeReason::VideoFramerateNotSupported:
		return QStringLiteral("VideoFramerateNotSupported");
	case TranscodeReason::VideoLevelNotSupported:
		return QStringLiteral("VideoLevelNotSupported");
	case TranscodeReason::VideoProfileNotSupported:
		return QStringLiteral("VideoProfileNotSupported");
	case TranscodeReason::AudioBitDepthNotSupported:
		return QStringLiteral("AudioBitDepthNotSupported");
	case TranscodeReason::SubtitleCodecNotSupported:
		return QStringLiteral("SubtitleCodecNotSupported");
	case TranscodeReason::DirectPlayError:
		return QStringLiteral("DirectPlayError");

	case TranscodeReason::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
