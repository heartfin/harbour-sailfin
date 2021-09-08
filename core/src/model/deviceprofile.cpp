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
    DTO::ProfileCondition result;
    result.setProperty(property);
    result.setCondition(condition);
    result.setValue(value);
    result.setIsRequired(isRequired);

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
    return 5000000;
}

DTO::DeviceProfile DeviceProfile::generateProfile() {
    using JsonPair = QPair<QString, QJsonValue>;
    DTO::DeviceProfile profile;

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
    DTO::CodecProfile codecProfile1;
    codecProfile1.setCodec("aac");
    QList<DTO::ProfileCondition> codecProfile1Conditions;
    codecProfile1Conditions.append(createCondition(CondVal::IsSecondaryAudio,
                                                   Condition::Equals,
                                                   "false",
                                                   false));
    codecProfile1.setConditions(codecProfile1Conditions);
    codecProfile1.setType(DTO::CodecType::VideoAudio);


    DTO::CodecProfile codecProfile2;
    codecProfile2.setCodec("h264");
    codecProfile2.setConditions({
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
                });
    codecProfile2.setType(DTO::CodecType::Video);
    QList<DTO::CodecProfile> codecProfiles = {
        codecProfile1,
        codecProfile2
    };
    // Hard coded nr 1:
    DTO::TranscodingProfile transcoding1;
    transcoding1.setAudioCodec("aac");
    transcoding1.setBreakOnNonKeyFrames(true);
    transcoding1.setContainer("ts");
    transcoding1.setContext(DTO::EncodingContext::Streaming);
    transcoding1.setMaxAudioChannels("2");
    transcoding1.setMinSegments(1);
    transcoding1.setProtocol("hls");
    transcoding1.setType(DTO::DlnaProfileType::Audio);
    // Hard code nr 2
    DTO::TranscodingProfile transcoding2;
    transcoding2.setAudioCodec("mp3,aac");
    transcoding2.setBreakOnNonKeyFrames(true);
    transcoding2.setContainer("ts");
    transcoding2.setContext(DTO::EncodingContext::Streaming);
    transcoding2.setMaxAudioChannels("2");
    transcoding2.setMinSegments(1);
    transcoding2.setProtocol("hls");
    transcoding2.setType(DTO::DlnaProfileType::Video);
    transcoding2.setVideoCodec("h264");

    // Fallback
    DTO::TranscodingProfile transcoding3;
    transcoding3.setContainer("mp4");
    transcoding3.setType(DTO::DlnaProfileType::Video);
    transcoding3.setAudioCodec(videoAudioCodecs.join(','));
    transcoding3.setVideoCodec("h264");
    transcoding3.setContext(DTO::EncodingContext::Static);
    transcoding3.setProtocol("http");

    QList<DTO::TranscodingProfile> transcodingProfiles = {
        transcoding1, transcoding2, transcoding3
    };

    if (supportsHls() && !hlsVideoAudioCodecs.isEmpty()) {
        DTO::TranscodingProfile transcoding4;
        transcoding4.setContainer("ts");
        transcoding4.setType(DTO::DlnaProfileType::Video);
        transcoding4.setAudioCodec(hlsVideoAudioCodecs.join(','));
        transcoding4.setVideoCodec(hlsVideoCodecs.join(','));
        transcoding4.setContext(DTO::EncodingContext::Streaming);
        transcoding4.setProtocol("hls");
        transcoding4.setMaxAudioChannels("2");
        transcoding4.setMinSegments(1);
        transcoding4.setBreakOnNonKeyFrames(true);
        transcodingProfiles.append(transcoding4);
    }

    // Response profiles (or whatever it actually does?)
    DTO::ResponseProfile responseProfile1;
    responseProfile1.setType(DTO::DlnaProfileType::Video);
    responseProfile1.setContainer("m4v");
    responseProfile1.setMimeType("video/mp4");
    QList<DTO::ResponseProfile> responseProfiles = {
        responseProfile1
    };

    // Direct play profiles
    // Video
    DTO::DirectPlayProfile directPlayProfile1;
    directPlayProfile1.setContainer("mp4,m4v");
    directPlayProfile1.setType(DTO::DlnaProfileType::Video);
    directPlayProfile1.setVideoCodec(mp4VideoCodecs.join(','));
    directPlayProfile1.setAudioCodec(videoAudioCodecs.join(','));

    DTO::DirectPlayProfile directPlayProfile2;
    directPlayProfile2.setContainer("mkv");
    directPlayProfile2.setType(DTO::DlnaProfileType::Video);
    directPlayProfile2.setVideoCodec(mp4VideoCodecs.join(','));
    directPlayProfile2.setAudioCodec(videoAudioCodecs.join(','));

    QList<DTO::DirectPlayProfile> directPlayProfiles = {
        directPlayProfile1, directPlayProfile2
    };
    // Audio
    for (auto it = audioCodes.begin(); it != audioCodes.end(); it++) {
        if (*it == "mp2") {
            DTO::DirectPlayProfile profile;
            profile.setContainer("mp2,mp3");
            profile.setType(DTO::DlnaProfileType::Audio);
            profile.setAudioCodec("mp2");
            directPlayProfiles.append(profile);
        } else if(*it == "mp3") {
            DTO::DirectPlayProfile profile;
            profile.setContainer("mp3");
            profile.setType(DTO::DlnaProfileType::Audio);
            profile.setAudioCodec("mp3");
            directPlayProfiles.append(profile);
        } else if (*it == "webma") {
            DTO::DirectPlayProfile profile;
            profile.setContainer("webma,webm");
            profile.setType(DTO::DlnaProfileType::Audio);
            directPlayProfiles.append(profile);
        } else {
            DTO::DirectPlayProfile profile;
            profile.setContainer(*it);
            profile.setType(DTO::DlnaProfileType::Audio);
            directPlayProfiles.append(profile);
        }
    }

    profile.setCodecProfiles(codecProfiles);
    //profile["ContainerProfiles"] = QJsonArray();
    profile.setDirectPlayProfiles(directPlayProfiles);
    profile.setResponseProfiles(responseProfiles);
    //profile["SubtitleProfiles"] = QJsonArray();
    profile.setTranscodingProfiles(transcodingProfiles);
    profile.setMaxStreamingBitrate(std::make_optional<qint32>(maxStreamingBitrate()));
    return profile;
}

}
}
