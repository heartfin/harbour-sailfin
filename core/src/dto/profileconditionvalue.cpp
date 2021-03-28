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

#include <JellyfinQt/dto/profileconditionvalue.h>

namespace Jellyfin {
namespace DTO {

ProfileConditionValueClass::ProfileConditionValueClass() {}

} // NS DTO

namespace Support {

using ProfileConditionValue = Jellyfin::DTO::ProfileConditionValue;

template <>
ProfileConditionValue fromJsonValue(const QJsonValue &source, convertType<ProfileConditionValue>) {
	if (!source.isString()) return ProfileConditionValue::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("AudioChannels")) {
		return ProfileConditionValue::AudioChannels;
	}
	if (str == QStringLiteral("AudioBitrate")) {
		return ProfileConditionValue::AudioBitrate;
	}
	if (str == QStringLiteral("AudioProfile")) {
		return ProfileConditionValue::AudioProfile;
	}
	if (str == QStringLiteral("Width")) {
		return ProfileConditionValue::Width;
	}
	if (str == QStringLiteral("Height")) {
		return ProfileConditionValue::Height;
	}
	if (str == QStringLiteral("Has64BitOffsets")) {
		return ProfileConditionValue::Has64BitOffsets;
	}
	if (str == QStringLiteral("PacketLength")) {
		return ProfileConditionValue::PacketLength;
	}
	if (str == QStringLiteral("VideoBitDepth")) {
		return ProfileConditionValue::VideoBitDepth;
	}
	if (str == QStringLiteral("VideoBitrate")) {
		return ProfileConditionValue::VideoBitrate;
	}
	if (str == QStringLiteral("VideoFramerate")) {
		return ProfileConditionValue::VideoFramerate;
	}
	if (str == QStringLiteral("VideoLevel")) {
		return ProfileConditionValue::VideoLevel;
	}
	if (str == QStringLiteral("VideoProfile")) {
		return ProfileConditionValue::VideoProfile;
	}
	if (str == QStringLiteral("VideoTimestamp")) {
		return ProfileConditionValue::VideoTimestamp;
	}
	if (str == QStringLiteral("IsAnamorphic")) {
		return ProfileConditionValue::IsAnamorphic;
	}
	if (str == QStringLiteral("RefFrames")) {
		return ProfileConditionValue::RefFrames;
	}
	if (str == QStringLiteral("NumAudioStreams")) {
		return ProfileConditionValue::NumAudioStreams;
	}
	if (str == QStringLiteral("NumVideoStreams")) {
		return ProfileConditionValue::NumVideoStreams;
	}
	if (str == QStringLiteral("IsSecondaryAudio")) {
		return ProfileConditionValue::IsSecondaryAudio;
	}
	if (str == QStringLiteral("VideoCodecTag")) {
		return ProfileConditionValue::VideoCodecTag;
	}
	if (str == QStringLiteral("IsAvc")) {
		return ProfileConditionValue::IsAvc;
	}
	if (str == QStringLiteral("IsInterlaced")) {
		return ProfileConditionValue::IsInterlaced;
	}
	if (str == QStringLiteral("AudioSampleRate")) {
		return ProfileConditionValue::AudioSampleRate;
	}
	if (str == QStringLiteral("AudioBitDepth")) {
		return ProfileConditionValue::AudioBitDepth;
	}
	
	return ProfileConditionValue::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const ProfileConditionValue &source, convertType<ProfileConditionValue>) {
	switch(source) {
	case ProfileConditionValue::AudioChannels:
		return QStringLiteral("AudioChannels");
	case ProfileConditionValue::AudioBitrate:
		return QStringLiteral("AudioBitrate");
	case ProfileConditionValue::AudioProfile:
		return QStringLiteral("AudioProfile");
	case ProfileConditionValue::Width:
		return QStringLiteral("Width");
	case ProfileConditionValue::Height:
		return QStringLiteral("Height");
	case ProfileConditionValue::Has64BitOffsets:
		return QStringLiteral("Has64BitOffsets");
	case ProfileConditionValue::PacketLength:
		return QStringLiteral("PacketLength");
	case ProfileConditionValue::VideoBitDepth:
		return QStringLiteral("VideoBitDepth");
	case ProfileConditionValue::VideoBitrate:
		return QStringLiteral("VideoBitrate");
	case ProfileConditionValue::VideoFramerate:
		return QStringLiteral("VideoFramerate");
	case ProfileConditionValue::VideoLevel:
		return QStringLiteral("VideoLevel");
	case ProfileConditionValue::VideoProfile:
		return QStringLiteral("VideoProfile");
	case ProfileConditionValue::VideoTimestamp:
		return QStringLiteral("VideoTimestamp");
	case ProfileConditionValue::IsAnamorphic:
		return QStringLiteral("IsAnamorphic");
	case ProfileConditionValue::RefFrames:
		return QStringLiteral("RefFrames");
	case ProfileConditionValue::NumAudioStreams:
		return QStringLiteral("NumAudioStreams");
	case ProfileConditionValue::NumVideoStreams:
		return QStringLiteral("NumVideoStreams");
	case ProfileConditionValue::IsSecondaryAudio:
		return QStringLiteral("IsSecondaryAudio");
	case ProfileConditionValue::VideoCodecTag:
		return QStringLiteral("VideoCodecTag");
	case ProfileConditionValue::IsAvc:
		return QStringLiteral("IsAvc");
	case ProfileConditionValue::IsInterlaced:
		return QStringLiteral("IsInterlaced");
	case ProfileConditionValue::AudioSampleRate:
		return QStringLiteral("AudioSampleRate");
	case ProfileConditionValue::AudioBitDepth:
		return QStringLiteral("AudioBitDepth");

	case ProfileConditionValue::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
