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

#ifndef JELLYFIN_DTO_PROFILECONDITIONVALUE_H
#define JELLYFIN_DTO_PROFILECONDITIONVALUE_H

#include <QJsonValue>
#include <QObject>
#include <QString>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {

class ProfileConditionValueClass {
	Q_GADGET
public:
	enum Value {
		EnumNotSet,
		AudioChannels,
		AudioBitrate,
		AudioProfile,
		Width,
		Height,
		Has64BitOffsets,
		PacketLength,
		VideoBitDepth,
		VideoBitrate,
		VideoFramerate,
		VideoLevel,
		VideoProfile,
		VideoTimestamp,
		IsAnamorphic,
		RefFrames,
		NumAudioStreams,
		NumVideoStreams,
		IsSecondaryAudio,
		VideoCodecTag,
		IsAvc,
		IsInterlaced,
		AudioSampleRate,
		AudioBitDepth,
	};
	Q_ENUM(Value)
private:
	explicit ProfileConditionValueClass();
};

typedef ProfileConditionValueClass::Value ProfileConditionValue;

} // NS DTO

namespace Support {

using ProfileConditionValue = Jellyfin::DTO::ProfileConditionValue;
using ProfileConditionValueClass = Jellyfin::DTO::ProfileConditionValueClass;

template <>
ProfileConditionValue fromJsonValue<ProfileConditionValue>(const QJsonValue &source) {
	if (!source.isString()) return ProfileConditionValueClass::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("AudioChannels")) {
		return ProfileConditionValueClass::AudioChannels;
	}
	if (str == QStringLiteral("AudioBitrate")) {
		return ProfileConditionValueClass::AudioBitrate;
	}
	if (str == QStringLiteral("AudioProfile")) {
		return ProfileConditionValueClass::AudioProfile;
	}
	if (str == QStringLiteral("Width")) {
		return ProfileConditionValueClass::Width;
	}
	if (str == QStringLiteral("Height")) {
		return ProfileConditionValueClass::Height;
	}
	if (str == QStringLiteral("Has64BitOffsets")) {
		return ProfileConditionValueClass::Has64BitOffsets;
	}
	if (str == QStringLiteral("PacketLength")) {
		return ProfileConditionValueClass::PacketLength;
	}
	if (str == QStringLiteral("VideoBitDepth")) {
		return ProfileConditionValueClass::VideoBitDepth;
	}
	if (str == QStringLiteral("VideoBitrate")) {
		return ProfileConditionValueClass::VideoBitrate;
	}
	if (str == QStringLiteral("VideoFramerate")) {
		return ProfileConditionValueClass::VideoFramerate;
	}
	if (str == QStringLiteral("VideoLevel")) {
		return ProfileConditionValueClass::VideoLevel;
	}
	if (str == QStringLiteral("VideoProfile")) {
		return ProfileConditionValueClass::VideoProfile;
	}
	if (str == QStringLiteral("VideoTimestamp")) {
		return ProfileConditionValueClass::VideoTimestamp;
	}
	if (str == QStringLiteral("IsAnamorphic")) {
		return ProfileConditionValueClass::IsAnamorphic;
	}
	if (str == QStringLiteral("RefFrames")) {
		return ProfileConditionValueClass::RefFrames;
	}
	if (str == QStringLiteral("NumAudioStreams")) {
		return ProfileConditionValueClass::NumAudioStreams;
	}
	if (str == QStringLiteral("NumVideoStreams")) {
		return ProfileConditionValueClass::NumVideoStreams;
	}
	if (str == QStringLiteral("IsSecondaryAudio")) {
		return ProfileConditionValueClass::IsSecondaryAudio;
	}
	if (str == QStringLiteral("VideoCodecTag")) {
		return ProfileConditionValueClass::VideoCodecTag;
	}
	if (str == QStringLiteral("IsAvc")) {
		return ProfileConditionValueClass::IsAvc;
	}
	if (str == QStringLiteral("IsInterlaced")) {
		return ProfileConditionValueClass::IsInterlaced;
	}
	if (str == QStringLiteral("AudioSampleRate")) {
		return ProfileConditionValueClass::AudioSampleRate;
	}
	if (str == QStringLiteral("AudioBitDepth")) {
		return ProfileConditionValueClass::AudioBitDepth;
	}
	
	return ProfileConditionValueClass::EnumNotSet;
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PROFILECONDITIONVALUE_H
