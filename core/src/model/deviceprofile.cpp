/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2021 Chris Josten and the Sailfin contributors
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

#include "JellyfinQt/model/deviceprofile.h"

namespace Jellyfin {
namespace Model {

DTO::ProfileCondition createCondition(DTO::ProfileConditionValue property,
                                      DTO::ProfileConditionType condition,
                                      const QString &value,
                                      bool isRequired = true) {
    DTO::ProfileCondition result(condition, property, isRequired);
    result.setValue(value);
    return result;
}

bool DeviceProfile::supportsHls() {
    return true;
}

bool DeviceProfile::canPlayH264() {
    return true;
}

bool DeviceProfile::canPlayAc3() {
    return true;
}

bool DeviceProfile::supportsMp3VideoAudio() {
    qDebug() << "Mp3VideoAudio: " << QMediaPlayer::hasSupport("video/mp4", {"avc1.640029", "mp3"}, QMediaPlayer::StreamPlayback);
    return true;
}

int DeviceProfile::maxStreamingBitrate() {
    return 10 * 1024 * 1024;
}

DTO::DeviceProfile DeviceProfile::generateProfile() {
    QStringList audioCodes = {
        "aac",
        "flac",
        "mp2",
        "mp3",
        "oga"
        "ogg",
        "wav",
        "webma",
        "wma"
    };

    QStringList videoAudioCodecs;
    QStringList mp4VideoCodecs;
    QStringList hlsVideoCodecs;
    QStringList hlsVideoAudioCodecs;

    if (canPlayH264()) {
        mp4VideoCodecs.append("h264");
        hlsVideoCodecs.append("h264");
    }

    if (canPlayAc3()) {
        videoAudioCodecs.append("ac3");
        hlsVideoAudioCodecs.append("ac3");
    }

    if (supportsMp3VideoAudio()) {
        videoAudioCodecs.append("mp3");
        hlsVideoAudioCodecs.append("mp3");
    }
    videoAudioCodecs.append("aac");
    hlsVideoAudioCodecs.append("aac");

    using CondVal = DTO::ProfileConditionValue;
    using Condition = DTO::ProfileConditionType;


    // AAC
    DTO::CodecProfile codecProfile1(
        DTO::CodecType::VideoAudio,
        {
            createCondition(CondVal::IsSecondaryAudio,
                            Condition::Equals,
                            "false",
                            false)
        },
        {}
    );
    codecProfile1.setCodec("aac");

    DTO::CodecProfile codecProfile2(
        DTO::CodecType::Video,
        {
            createCondition(CondVal::IsAnamorphic,
                                    Condition::NotEquals,
                                    "true", false),
            createCondition(CondVal::VideoProfile,
                            Condition::EqualsAny,
                            "baseline|constrained baseline", false), //"high|main|baseline|constrained baseline"
            createCondition(CondVal::VideoLevel,
                            Condition::LessThanEqual,
                            "51", false),
            createCondition(CondVal::IsInterlaced,
                            Condition::NotEquals,
                            "true", false)
        },
        {}
    );
    codecProfile2.setCodec("h264");

    QList<DTO::CodecProfile> codecProfiles = {
        codecProfile1,
        codecProfile2
    };
    // Hard coded nr 1:
    DTO::TranscodingProfile transcoding1(
        QStringLiteral("ts"),
        DTO::DlnaProfileType::Audio,
        QStringLiteral("h264"),
        QStringLiteral("aac"),
        DTO::MediaStreamProtocol::Hls,
        false, // estimeateContentLength
        false,  // enable MPEG2 TS M2 mode
        DTO::TranscodeSeekInfo::Auto,
        false, // copyTimestamps
        DTO::EncodingContext::Streaming,
        false, // enable subtitles in manifest
        0, // minSegments
        0, // minSegmentLength
        true, // set break on nonkeyframes,
        {}, // conditions
        true // Enable audio VBR encoding
    );
    transcoding1.setMaxAudioChannels("2");

    // Hard code nr 2
    DTO::TranscodingProfile transcoding2(
        QStringLiteral("ts"),
        DTO::DlnaProfileType::Video,
        QStringLiteral("h264"),
        QStringLiteral("mp3,aac"),
        DTO::MediaStreamProtocol::Hls,
        false, // estimate content length
        false, // enable MPEG2 ts M2 mode
        DTO::TranscodeSeekInfo::Auto,
        false, // copy timestamps
        DTO::EncodingContext::Streaming,
        false, // enable subtitles in manifest
        0, // minSegments
        0, // minSegmentLength
        true, // set break on non-keyframes
        {}, // conditions
        true// enableAudioVbrEncoding
    );
    transcoding2.setMaxAudioChannels("2");

    // Fallback
    DTO::TranscodingProfile transcoding3(
        QStringLiteral("mp4"),
        DTO::DlnaProfileType::Video,
        QStringLiteral("h264"),
        videoAudioCodecs.join(","),
        DTO::MediaStreamProtocol::Http,
        false, // estimate content length
        false, // enable MPEG2 ts M2 mode
        DTO::TranscodeSeekInfo::Auto,
        false, // copy timestamps
        DTO::EncodingContext::Static,
        false, // enable subtitles in manifest
        0, // minSegments
        0, // minSegmentLength
        true, // set break on non-keyframes
        {},
        true
    );

    QList<DTO::TranscodingProfile> transcodingProfiles = {
        transcoding1, transcoding2, transcoding3
    };

    if (supportsHls() && !hlsVideoAudioCodecs.isEmpty()) {
        DTO::TranscodingProfile transcoding4(
            QStringLiteral("ts"),
            DTO::DlnaProfileType::Video,
            hlsVideoAudioCodecs.join(","),
            hlsVideoAudioCodecs.join(","),
            DTO::MediaStreamProtocol::Hls,
            false, // estimate content length
            false, // enable MPEG2 ts M2 mode
            DTO::TranscodeSeekInfo::Auto,
            false, // copy timestamps
            DTO::EncodingContext::Streaming,
            false, // enable subtitles in manifest
            1, // minSegments
            0, // minSegmentLength
            true, // set break on non-keyframes
            {},
            true
         );
        transcoding4.setMaxAudioChannels("2");
        transcodingProfiles.append(transcoding4);
    }

    // Direct play profiles
    // Video
    DTO::DirectPlayProfile directPlayProfile1("mp4,m4v", DTO::DlnaProfileType::Video);
    directPlayProfile1.setVideoCodec(mp4VideoCodecs.join(','));
    directPlayProfile1.setAudioCodec(videoAudioCodecs.join(','));

    DTO::DirectPlayProfile directPlayProfile2("mkv", DTO::DlnaProfileType::Video);
    directPlayProfile2.setVideoCodec(mp4VideoCodecs.join(','));
    directPlayProfile2.setAudioCodec(videoAudioCodecs.join(','));

    QList<DTO::DirectPlayProfile> directPlayProfiles = {
        directPlayProfile1, directPlayProfile2
    };
    // Audio
    for (auto it = audioCodes.begin(); it != audioCodes.end(); it++) {
        if (*it == "mp2") {
            DTO::DirectPlayProfile profile("mp2,mp3", DTO::DlnaProfileType::Audio);
            profile.setAudioCodec("mp2");
            directPlayProfiles.append(profile);
        } else if(*it == "mp3") {
            DTO::DirectPlayProfile profile("mp3", DTO::DlnaProfileType::Audio);
            profile.setAudioCodec("mp3");
            directPlayProfiles.append(profile);
        } else if (*it == "webma") {
            DTO::DirectPlayProfile profile("webma,webm", DTO::DlnaProfileType::Audio);
            directPlayProfiles.append(profile);
        } else {
            DTO::DirectPlayProfile profile(*it, DTO::DlnaProfileType::Audio);
            directPlayProfiles.append(profile);
        }
    }

    QList<DTO::ContainerProfile> containerProfiles = { };

    QList<DTO::SubtitleProfile> subtitleProfiles = {
        DTO::SubtitleProfile(DTO::SubtitleDeliveryMethodClass::Hls),
        DTO::SubtitleProfile(DTO::SubtitleDeliveryMethodClass::Encode)
    };

    DTO::DeviceProfile profile(
        directPlayProfiles,
        transcodingProfiles,
        containerProfiles,
        codecProfiles,
        subtitleProfiles
    );
    profile.setMaxStreamingBitrate(std::make_optional<qint32>(maxStreamingBitrate()));
    return profile;
}

}
}
