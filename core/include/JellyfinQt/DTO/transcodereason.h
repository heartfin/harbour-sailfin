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

#ifndef JELLYFIN_DTO_TRANSCODEREASON_H
#define JELLYFIN_DTO_TRANSCODEREASON_H

#include <QJsonValue>
#include <QObject>
#include <QString>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {

class TranscodeReasonClass {
	Q_GADGET
public:
	enum Value {
		EnumNotSet,
		ContainerNotSupported,
		VideoCodecNotSupported,
		AudioCodecNotSupported,
		ContainerBitrateExceedsLimit,
		AudioBitrateNotSupported,
		AudioChannelsNotSupported,
		VideoResolutionNotSupported,
		UnknownVideoStreamInfo,
		UnknownAudioStreamInfo,
		AudioProfileNotSupported,
		AudioSampleRateNotSupported,
		AnamorphicVideoNotSupported,
		InterlacedVideoNotSupported,
		SecondaryAudioNotSupported,
		RefFramesNotSupported,
		VideoBitDepthNotSupported,
		VideoBitrateNotSupported,
		VideoFramerateNotSupported,
		VideoLevelNotSupported,
		VideoProfileNotSupported,
		AudioBitDepthNotSupported,
		SubtitleCodecNotSupported,
		DirectPlayError,
	};
	Q_ENUM(Value)
private:
	explicit TranscodeReasonClass();
};

typedef TranscodeReasonClass::Value TranscodeReason;

} // NS DTO

namespace Support {

using TranscodeReason = Jellyfin::DTO::TranscodeReason;
using TranscodeReasonClass = Jellyfin::DTO::TranscodeReasonClass;

template <>
TranscodeReason fromJsonValue<TranscodeReason>(const QJsonValue &source) {
	if (!source.isString()) return TranscodeReasonClass::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("ContainerNotSupported")) {
		return TranscodeReasonClass::ContainerNotSupported;
	}
	if (str == QStringLiteral("VideoCodecNotSupported")) {
		return TranscodeReasonClass::VideoCodecNotSupported;
	}
	if (str == QStringLiteral("AudioCodecNotSupported")) {
		return TranscodeReasonClass::AudioCodecNotSupported;
	}
	if (str == QStringLiteral("ContainerBitrateExceedsLimit")) {
		return TranscodeReasonClass::ContainerBitrateExceedsLimit;
	}
	if (str == QStringLiteral("AudioBitrateNotSupported")) {
		return TranscodeReasonClass::AudioBitrateNotSupported;
	}
	if (str == QStringLiteral("AudioChannelsNotSupported")) {
		return TranscodeReasonClass::AudioChannelsNotSupported;
	}
	if (str == QStringLiteral("VideoResolutionNotSupported")) {
		return TranscodeReasonClass::VideoResolutionNotSupported;
	}
	if (str == QStringLiteral("UnknownVideoStreamInfo")) {
		return TranscodeReasonClass::UnknownVideoStreamInfo;
	}
	if (str == QStringLiteral("UnknownAudioStreamInfo")) {
		return TranscodeReasonClass::UnknownAudioStreamInfo;
	}
	if (str == QStringLiteral("AudioProfileNotSupported")) {
		return TranscodeReasonClass::AudioProfileNotSupported;
	}
	if (str == QStringLiteral("AudioSampleRateNotSupported")) {
		return TranscodeReasonClass::AudioSampleRateNotSupported;
	}
	if (str == QStringLiteral("AnamorphicVideoNotSupported")) {
		return TranscodeReasonClass::AnamorphicVideoNotSupported;
	}
	if (str == QStringLiteral("InterlacedVideoNotSupported")) {
		return TranscodeReasonClass::InterlacedVideoNotSupported;
	}
	if (str == QStringLiteral("SecondaryAudioNotSupported")) {
		return TranscodeReasonClass::SecondaryAudioNotSupported;
	}
	if (str == QStringLiteral("RefFramesNotSupported")) {
		return TranscodeReasonClass::RefFramesNotSupported;
	}
	if (str == QStringLiteral("VideoBitDepthNotSupported")) {
		return TranscodeReasonClass::VideoBitDepthNotSupported;
	}
	if (str == QStringLiteral("VideoBitrateNotSupported")) {
		return TranscodeReasonClass::VideoBitrateNotSupported;
	}
	if (str == QStringLiteral("VideoFramerateNotSupported")) {
		return TranscodeReasonClass::VideoFramerateNotSupported;
	}
	if (str == QStringLiteral("VideoLevelNotSupported")) {
		return TranscodeReasonClass::VideoLevelNotSupported;
	}
	if (str == QStringLiteral("VideoProfileNotSupported")) {
		return TranscodeReasonClass::VideoProfileNotSupported;
	}
	if (str == QStringLiteral("AudioBitDepthNotSupported")) {
		return TranscodeReasonClass::AudioBitDepthNotSupported;
	}
	if (str == QStringLiteral("SubtitleCodecNotSupported")) {
		return TranscodeReasonClass::SubtitleCodecNotSupported;
	}
	if (str == QStringLiteral("DirectPlayError")) {
		return TranscodeReasonClass::DirectPlayError;
	}
	
	return TranscodeReasonClass::EnumNotSet;
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_TRANSCODEREASON_H
