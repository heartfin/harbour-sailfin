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

#include <JellyfinQt/dto/mediastream.h>

namespace Jellyfin {
namespace DTO {

MediaStream::MediaStream() {}

MediaStream::MediaStream(const MediaStream &other) :

	m_codec(other.m_codec),
	m_codecTag(other.m_codecTag),
	m_language(other.m_language),
	m_colorRange(other.m_colorRange),
	m_colorSpace(other.m_colorSpace),
	m_colorTransfer(other.m_colorTransfer),
	m_colorPrimaries(other.m_colorPrimaries),
	m_comment(other.m_comment),
	m_timeBase(other.m_timeBase),
	m_codecTimeBase(other.m_codecTimeBase),
	m_title(other.m_title),
	m_videoRange(other.m_videoRange),
	m_localizedUndefined(other.m_localizedUndefined),
	m_localizedDefault(other.m_localizedDefault),
	m_localizedForced(other.m_localizedForced),
	m_displayTitle(other.m_displayTitle),
	m_nalLengthSize(other.m_nalLengthSize),
	m_isInterlaced(other.m_isInterlaced),
	m_isAVC(other.m_isAVC),
	m_channelLayout(other.m_channelLayout),
	m_bitRate(other.m_bitRate),
	m_bitDepth(other.m_bitDepth),
	m_refFrames(other.m_refFrames),
	m_packetLength(other.m_packetLength),
	m_channels(other.m_channels),
	m_sampleRate(other.m_sampleRate),
	m_isDefault(other.m_isDefault),
	m_isForced(other.m_isForced),
	m_height(other.m_height),
	m_width(other.m_width),
	m_averageFrameRate(other.m_averageFrameRate),
	m_realFrameRate(other.m_realFrameRate),
	m_profile(other.m_profile),
	m_type(other.m_type),
	m_aspectRatio(other.m_aspectRatio),
	m_index(other.m_index),
	m_score(other.m_score),
	m_isExternal(other.m_isExternal),
	m_deliveryMethod(other.m_deliveryMethod),
	m_deliveryUrl(other.m_deliveryUrl),
	m_isExternalUrl(other.m_isExternalUrl),
	m_isTextSubtitleStream(other.m_isTextSubtitleStream),
	m_supportsExternalStream(other.m_supportsExternalStream),
	m_path(other.m_path),
	m_pixelFormat(other.m_pixelFormat),
	m_level(other.m_level),
	m_isAnamorphic(other.m_isAnamorphic){}


void MediaStream::replaceData(MediaStream &other) {
	m_codec = other.m_codec;
	m_codecTag = other.m_codecTag;
	m_language = other.m_language;
	m_colorRange = other.m_colorRange;
	m_colorSpace = other.m_colorSpace;
	m_colorTransfer = other.m_colorTransfer;
	m_colorPrimaries = other.m_colorPrimaries;
	m_comment = other.m_comment;
	m_timeBase = other.m_timeBase;
	m_codecTimeBase = other.m_codecTimeBase;
	m_title = other.m_title;
	m_videoRange = other.m_videoRange;
	m_localizedUndefined = other.m_localizedUndefined;
	m_localizedDefault = other.m_localizedDefault;
	m_localizedForced = other.m_localizedForced;
	m_displayTitle = other.m_displayTitle;
	m_nalLengthSize = other.m_nalLengthSize;
	m_isInterlaced = other.m_isInterlaced;
	m_isAVC = other.m_isAVC;
	m_channelLayout = other.m_channelLayout;
	m_bitRate = other.m_bitRate;
	m_bitDepth = other.m_bitDepth;
	m_refFrames = other.m_refFrames;
	m_packetLength = other.m_packetLength;
	m_channels = other.m_channels;
	m_sampleRate = other.m_sampleRate;
	m_isDefault = other.m_isDefault;
	m_isForced = other.m_isForced;
	m_height = other.m_height;
	m_width = other.m_width;
	m_averageFrameRate = other.m_averageFrameRate;
	m_realFrameRate = other.m_realFrameRate;
	m_profile = other.m_profile;
	m_type = other.m_type;
	m_aspectRatio = other.m_aspectRatio;
	m_index = other.m_index;
	m_score = other.m_score;
	m_isExternal = other.m_isExternal;
	m_deliveryMethod = other.m_deliveryMethod;
	m_deliveryUrl = other.m_deliveryUrl;
	m_isExternalUrl = other.m_isExternalUrl;
	m_isTextSubtitleStream = other.m_isTextSubtitleStream;
	m_supportsExternalStream = other.m_supportsExternalStream;
	m_path = other.m_path;
	m_pixelFormat = other.m_pixelFormat;
	m_level = other.m_level;
	m_isAnamorphic = other.m_isAnamorphic;
}

MediaStream MediaStream::fromJson(QJsonObject source) {
	MediaStream instance;
	instance.setFromJson(source);
	return instance;
}


void MediaStream::setFromJson(QJsonObject source) {
	m_codec = Jellyfin::Support::fromJsonValue<QString>(source["Codec"]);
	m_codecTag = Jellyfin::Support::fromJsonValue<QString>(source["CodecTag"]);
	m_language = Jellyfin::Support::fromJsonValue<QString>(source["Language"]);
	m_colorRange = Jellyfin::Support::fromJsonValue<QString>(source["ColorRange"]);
	m_colorSpace = Jellyfin::Support::fromJsonValue<QString>(source["ColorSpace"]);
	m_colorTransfer = Jellyfin::Support::fromJsonValue<QString>(source["ColorTransfer"]);
	m_colorPrimaries = Jellyfin::Support::fromJsonValue<QString>(source["ColorPrimaries"]);
	m_comment = Jellyfin::Support::fromJsonValue<QString>(source["Comment"]);
	m_timeBase = Jellyfin::Support::fromJsonValue<QString>(source["TimeBase"]);
	m_codecTimeBase = Jellyfin::Support::fromJsonValue<QString>(source["CodecTimeBase"]);
	m_title = Jellyfin::Support::fromJsonValue<QString>(source["Title"]);
	m_videoRange = Jellyfin::Support::fromJsonValue<QString>(source["VideoRange"]);
	m_localizedUndefined = Jellyfin::Support::fromJsonValue<QString>(source["localizedUndefined"]);
	m_localizedDefault = Jellyfin::Support::fromJsonValue<QString>(source["localizedDefault"]);
	m_localizedForced = Jellyfin::Support::fromJsonValue<QString>(source["localizedForced"]);
	m_displayTitle = Jellyfin::Support::fromJsonValue<QString>(source["DisplayTitle"]);
	m_nalLengthSize = Jellyfin::Support::fromJsonValue<QString>(source["NalLengthSize"]);
	m_isInterlaced = Jellyfin::Support::fromJsonValue<bool>(source["IsInterlaced"]);
	m_isAVC = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsAVC"]);
	m_channelLayout = Jellyfin::Support::fromJsonValue<QString>(source["ChannelLayout"]);
	m_bitRate = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["BitRate"]);
	m_bitDepth = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["BitDepth"]);
	m_refFrames = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["RefFrames"]);
	m_packetLength = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["PacketLength"]);
	m_channels = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Channels"]);
	m_sampleRate = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["SampleRate"]);
	m_isDefault = Jellyfin::Support::fromJsonValue<bool>(source["IsDefault"]);
	m_isForced = Jellyfin::Support::fromJsonValue<bool>(source["IsForced"]);
	m_height = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Height"]);
	m_width = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Width"]);
	m_averageFrameRate = Jellyfin::Support::fromJsonValue<std::optional<float>>(source["AverageFrameRate"]);
	m_realFrameRate = Jellyfin::Support::fromJsonValue<std::optional<float>>(source["RealFrameRate"]);
	m_profile = Jellyfin::Support::fromJsonValue<QString>(source["Profile"]);
	m_type = Jellyfin::Support::fromJsonValue<MediaStreamType>(source["Type"]);
	m_aspectRatio = Jellyfin::Support::fromJsonValue<QString>(source["AspectRatio"]);
	m_index = Jellyfin::Support::fromJsonValue<qint32>(source["Index"]);
	m_score = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Score"]);
	m_isExternal = Jellyfin::Support::fromJsonValue<bool>(source["IsExternal"]);
	m_deliveryMethod = Jellyfin::Support::fromJsonValue<SubtitleDeliveryMethod>(source["DeliveryMethod"]);
	m_deliveryUrl = Jellyfin::Support::fromJsonValue<QString>(source["DeliveryUrl"]);
	m_isExternalUrl = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsExternalUrl"]);
	m_isTextSubtitleStream = Jellyfin::Support::fromJsonValue<bool>(source["IsTextSubtitleStream"]);
	m_supportsExternalStream = Jellyfin::Support::fromJsonValue<bool>(source["SupportsExternalStream"]);
	m_path = Jellyfin::Support::fromJsonValue<QString>(source["Path"]);
	m_pixelFormat = Jellyfin::Support::fromJsonValue<QString>(source["PixelFormat"]);
	m_level = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["Level"]);
	m_isAnamorphic = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsAnamorphic"]);

}
	
QJsonObject MediaStream::toJson() const {
	QJsonObject result;
	
	
	if (!(m_codec.isNull())) {
		result["Codec"] = Jellyfin::Support::toJsonValue<QString>(m_codec);
	}
			
	
	if (!(m_codecTag.isNull())) {
		result["CodecTag"] = Jellyfin::Support::toJsonValue<QString>(m_codecTag);
	}
			
	
	if (!(m_language.isNull())) {
		result["Language"] = Jellyfin::Support::toJsonValue<QString>(m_language);
	}
			
	
	if (!(m_colorRange.isNull())) {
		result["ColorRange"] = Jellyfin::Support::toJsonValue<QString>(m_colorRange);
	}
			
	
	if (!(m_colorSpace.isNull())) {
		result["ColorSpace"] = Jellyfin::Support::toJsonValue<QString>(m_colorSpace);
	}
			
	
	if (!(m_colorTransfer.isNull())) {
		result["ColorTransfer"] = Jellyfin::Support::toJsonValue<QString>(m_colorTransfer);
	}
			
	
	if (!(m_colorPrimaries.isNull())) {
		result["ColorPrimaries"] = Jellyfin::Support::toJsonValue<QString>(m_colorPrimaries);
	}
			
	
	if (!(m_comment.isNull())) {
		result["Comment"] = Jellyfin::Support::toJsonValue<QString>(m_comment);
	}
			
	
	if (!(m_timeBase.isNull())) {
		result["TimeBase"] = Jellyfin::Support::toJsonValue<QString>(m_timeBase);
	}
			
	
	if (!(m_codecTimeBase.isNull())) {
		result["CodecTimeBase"] = Jellyfin::Support::toJsonValue<QString>(m_codecTimeBase);
	}
			
	
	if (!(m_title.isNull())) {
		result["Title"] = Jellyfin::Support::toJsonValue<QString>(m_title);
	}
			
	
	if (!(m_videoRange.isNull())) {
		result["VideoRange"] = Jellyfin::Support::toJsonValue<QString>(m_videoRange);
	}
			
	
	if (!(m_localizedUndefined.isNull())) {
		result["localizedUndefined"] = Jellyfin::Support::toJsonValue<QString>(m_localizedUndefined);
	}
			
	
	if (!(m_localizedDefault.isNull())) {
		result["localizedDefault"] = Jellyfin::Support::toJsonValue<QString>(m_localizedDefault);
	}
			
	
	if (!(m_localizedForced.isNull())) {
		result["localizedForced"] = Jellyfin::Support::toJsonValue<QString>(m_localizedForced);
	}
			
	
	if (!(m_displayTitle.isNull())) {
		result["DisplayTitle"] = Jellyfin::Support::toJsonValue<QString>(m_displayTitle);
	}
			
	
	if (!(m_nalLengthSize.isNull())) {
		result["NalLengthSize"] = Jellyfin::Support::toJsonValue<QString>(m_nalLengthSize);
	}
			
	result["IsInterlaced"] = Jellyfin::Support::toJsonValue<bool>(m_isInterlaced);		
	
	if (!(!m_isAVC.has_value())) {
		result["IsAVC"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isAVC);
	}
			
	
	if (!(m_channelLayout.isNull())) {
		result["ChannelLayout"] = Jellyfin::Support::toJsonValue<QString>(m_channelLayout);
	}
			
	
	if (!(!m_bitRate.has_value())) {
		result["BitRate"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_bitRate);
	}
			
	
	if (!(!m_bitDepth.has_value())) {
		result["BitDepth"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_bitDepth);
	}
			
	
	if (!(!m_refFrames.has_value())) {
		result["RefFrames"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_refFrames);
	}
			
	
	if (!(!m_packetLength.has_value())) {
		result["PacketLength"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_packetLength);
	}
			
	
	if (!(!m_channels.has_value())) {
		result["Channels"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_channels);
	}
			
	
	if (!(!m_sampleRate.has_value())) {
		result["SampleRate"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_sampleRate);
	}
			
	result["IsDefault"] = Jellyfin::Support::toJsonValue<bool>(m_isDefault);		
	result["IsForced"] = Jellyfin::Support::toJsonValue<bool>(m_isForced);		
	
	if (!(!m_height.has_value())) {
		result["Height"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_height);
	}
			
	
	if (!(!m_width.has_value())) {
		result["Width"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_width);
	}
			
	
	if (!(!m_averageFrameRate.has_value())) {
		result["AverageFrameRate"] = Jellyfin::Support::toJsonValue<std::optional<float>>(m_averageFrameRate);
	}
			
	
	if (!(!m_realFrameRate.has_value())) {
		result["RealFrameRate"] = Jellyfin::Support::toJsonValue<std::optional<float>>(m_realFrameRate);
	}
			
	
	if (!(m_profile.isNull())) {
		result["Profile"] = Jellyfin::Support::toJsonValue<QString>(m_profile);
	}
			
	result["Type"] = Jellyfin::Support::toJsonValue<MediaStreamType>(m_type);		
	
	if (!(m_aspectRatio.isNull())) {
		result["AspectRatio"] = Jellyfin::Support::toJsonValue<QString>(m_aspectRatio);
	}
			
	result["Index"] = Jellyfin::Support::toJsonValue<qint32>(m_index);		
	
	if (!(!m_score.has_value())) {
		result["Score"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_score);
	}
			
	result["IsExternal"] = Jellyfin::Support::toJsonValue<bool>(m_isExternal);		
	result["DeliveryMethod"] = Jellyfin::Support::toJsonValue<SubtitleDeliveryMethod>(m_deliveryMethod);		
	
	if (!(m_deliveryUrl.isNull())) {
		result["DeliveryUrl"] = Jellyfin::Support::toJsonValue<QString>(m_deliveryUrl);
	}
			
	
	if (!(!m_isExternalUrl.has_value())) {
		result["IsExternalUrl"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isExternalUrl);
	}
			
	result["IsTextSubtitleStream"] = Jellyfin::Support::toJsonValue<bool>(m_isTextSubtitleStream);		
	result["SupportsExternalStream"] = Jellyfin::Support::toJsonValue<bool>(m_supportsExternalStream);		
	
	if (!(m_path.isNull())) {
		result["Path"] = Jellyfin::Support::toJsonValue<QString>(m_path);
	}
			
	
	if (!(m_pixelFormat.isNull())) {
		result["PixelFormat"] = Jellyfin::Support::toJsonValue<QString>(m_pixelFormat);
	}
			
	
	if (!(!m_level.has_value())) {
		result["Level"] = Jellyfin::Support::toJsonValue<std::optional<double>>(m_level);
	}
			
	
	if (!(!m_isAnamorphic.has_value())) {
		result["IsAnamorphic"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isAnamorphic);
	}
		
	return result;
}

QString MediaStream::codec() const { return m_codec; }

void MediaStream::setCodec(QString newCodec) {
	m_codec = newCodec;
}
bool MediaStream::codecNull() const {
	return m_codec.isNull();
}

void MediaStream::setCodecNull() {
	m_codec.clear();

}
QString MediaStream::codecTag() const { return m_codecTag; }

void MediaStream::setCodecTag(QString newCodecTag) {
	m_codecTag = newCodecTag;
}
bool MediaStream::codecTagNull() const {
	return m_codecTag.isNull();
}

void MediaStream::setCodecTagNull() {
	m_codecTag.clear();

}
QString MediaStream::language() const { return m_language; }

void MediaStream::setLanguage(QString newLanguage) {
	m_language = newLanguage;
}
bool MediaStream::languageNull() const {
	return m_language.isNull();
}

void MediaStream::setLanguageNull() {
	m_language.clear();

}
QString MediaStream::colorRange() const { return m_colorRange; }

void MediaStream::setColorRange(QString newColorRange) {
	m_colorRange = newColorRange;
}
bool MediaStream::colorRangeNull() const {
	return m_colorRange.isNull();
}

void MediaStream::setColorRangeNull() {
	m_colorRange.clear();

}
QString MediaStream::colorSpace() const { return m_colorSpace; }

void MediaStream::setColorSpace(QString newColorSpace) {
	m_colorSpace = newColorSpace;
}
bool MediaStream::colorSpaceNull() const {
	return m_colorSpace.isNull();
}

void MediaStream::setColorSpaceNull() {
	m_colorSpace.clear();

}
QString MediaStream::colorTransfer() const { return m_colorTransfer; }

void MediaStream::setColorTransfer(QString newColorTransfer) {
	m_colorTransfer = newColorTransfer;
}
bool MediaStream::colorTransferNull() const {
	return m_colorTransfer.isNull();
}

void MediaStream::setColorTransferNull() {
	m_colorTransfer.clear();

}
QString MediaStream::colorPrimaries() const { return m_colorPrimaries; }

void MediaStream::setColorPrimaries(QString newColorPrimaries) {
	m_colorPrimaries = newColorPrimaries;
}
bool MediaStream::colorPrimariesNull() const {
	return m_colorPrimaries.isNull();
}

void MediaStream::setColorPrimariesNull() {
	m_colorPrimaries.clear();

}
QString MediaStream::comment() const { return m_comment; }

void MediaStream::setComment(QString newComment) {
	m_comment = newComment;
}
bool MediaStream::commentNull() const {
	return m_comment.isNull();
}

void MediaStream::setCommentNull() {
	m_comment.clear();

}
QString MediaStream::timeBase() const { return m_timeBase; }

void MediaStream::setTimeBase(QString newTimeBase) {
	m_timeBase = newTimeBase;
}
bool MediaStream::timeBaseNull() const {
	return m_timeBase.isNull();
}

void MediaStream::setTimeBaseNull() {
	m_timeBase.clear();

}
QString MediaStream::codecTimeBase() const { return m_codecTimeBase; }

void MediaStream::setCodecTimeBase(QString newCodecTimeBase) {
	m_codecTimeBase = newCodecTimeBase;
}
bool MediaStream::codecTimeBaseNull() const {
	return m_codecTimeBase.isNull();
}

void MediaStream::setCodecTimeBaseNull() {
	m_codecTimeBase.clear();

}
QString MediaStream::title() const { return m_title; }

void MediaStream::setTitle(QString newTitle) {
	m_title = newTitle;
}
bool MediaStream::titleNull() const {
	return m_title.isNull();
}

void MediaStream::setTitleNull() {
	m_title.clear();

}
QString MediaStream::videoRange() const { return m_videoRange; }

void MediaStream::setVideoRange(QString newVideoRange) {
	m_videoRange = newVideoRange;
}
bool MediaStream::videoRangeNull() const {
	return m_videoRange.isNull();
}

void MediaStream::setVideoRangeNull() {
	m_videoRange.clear();

}
QString MediaStream::localizedUndefined() const { return m_localizedUndefined; }

void MediaStream::setLocalizedUndefined(QString newLocalizedUndefined) {
	m_localizedUndefined = newLocalizedUndefined;
}
bool MediaStream::localizedUndefinedNull() const {
	return m_localizedUndefined.isNull();
}

void MediaStream::setLocalizedUndefinedNull() {
	m_localizedUndefined.clear();

}
QString MediaStream::localizedDefault() const { return m_localizedDefault; }

void MediaStream::setLocalizedDefault(QString newLocalizedDefault) {
	m_localizedDefault = newLocalizedDefault;
}
bool MediaStream::localizedDefaultNull() const {
	return m_localizedDefault.isNull();
}

void MediaStream::setLocalizedDefaultNull() {
	m_localizedDefault.clear();

}
QString MediaStream::localizedForced() const { return m_localizedForced; }

void MediaStream::setLocalizedForced(QString newLocalizedForced) {
	m_localizedForced = newLocalizedForced;
}
bool MediaStream::localizedForcedNull() const {
	return m_localizedForced.isNull();
}

void MediaStream::setLocalizedForcedNull() {
	m_localizedForced.clear();

}
QString MediaStream::displayTitle() const { return m_displayTitle; }

void MediaStream::setDisplayTitle(QString newDisplayTitle) {
	m_displayTitle = newDisplayTitle;
}
bool MediaStream::displayTitleNull() const {
	return m_displayTitle.isNull();
}

void MediaStream::setDisplayTitleNull() {
	m_displayTitle.clear();

}
QString MediaStream::nalLengthSize() const { return m_nalLengthSize; }

void MediaStream::setNalLengthSize(QString newNalLengthSize) {
	m_nalLengthSize = newNalLengthSize;
}
bool MediaStream::nalLengthSizeNull() const {
	return m_nalLengthSize.isNull();
}

void MediaStream::setNalLengthSizeNull() {
	m_nalLengthSize.clear();

}
bool MediaStream::isInterlaced() const { return m_isInterlaced; }

void MediaStream::setIsInterlaced(bool newIsInterlaced) {
	m_isInterlaced = newIsInterlaced;
}

std::optional<bool> MediaStream::isAVC() const { return m_isAVC; }

void MediaStream::setIsAVC(std::optional<bool> newIsAVC) {
	m_isAVC = newIsAVC;
}
bool MediaStream::isAVCNull() const {
	return !m_isAVC.has_value();
}

void MediaStream::setIsAVCNull() {
	m_isAVC = std::nullopt;

}
QString MediaStream::channelLayout() const { return m_channelLayout; }

void MediaStream::setChannelLayout(QString newChannelLayout) {
	m_channelLayout = newChannelLayout;
}
bool MediaStream::channelLayoutNull() const {
	return m_channelLayout.isNull();
}

void MediaStream::setChannelLayoutNull() {
	m_channelLayout.clear();

}
std::optional<qint32> MediaStream::bitRate() const { return m_bitRate; }

void MediaStream::setBitRate(std::optional<qint32> newBitRate) {
	m_bitRate = newBitRate;
}
bool MediaStream::bitRateNull() const {
	return !m_bitRate.has_value();
}

void MediaStream::setBitRateNull() {
	m_bitRate = std::nullopt;

}
std::optional<qint32> MediaStream::bitDepth() const { return m_bitDepth; }

void MediaStream::setBitDepth(std::optional<qint32> newBitDepth) {
	m_bitDepth = newBitDepth;
}
bool MediaStream::bitDepthNull() const {
	return !m_bitDepth.has_value();
}

void MediaStream::setBitDepthNull() {
	m_bitDepth = std::nullopt;

}
std::optional<qint32> MediaStream::refFrames() const { return m_refFrames; }

void MediaStream::setRefFrames(std::optional<qint32> newRefFrames) {
	m_refFrames = newRefFrames;
}
bool MediaStream::refFramesNull() const {
	return !m_refFrames.has_value();
}

void MediaStream::setRefFramesNull() {
	m_refFrames = std::nullopt;

}
std::optional<qint32> MediaStream::packetLength() const { return m_packetLength; }

void MediaStream::setPacketLength(std::optional<qint32> newPacketLength) {
	m_packetLength = newPacketLength;
}
bool MediaStream::packetLengthNull() const {
	return !m_packetLength.has_value();
}

void MediaStream::setPacketLengthNull() {
	m_packetLength = std::nullopt;

}
std::optional<qint32> MediaStream::channels() const { return m_channels; }

void MediaStream::setChannels(std::optional<qint32> newChannels) {
	m_channels = newChannels;
}
bool MediaStream::channelsNull() const {
	return !m_channels.has_value();
}

void MediaStream::setChannelsNull() {
	m_channels = std::nullopt;

}
std::optional<qint32> MediaStream::sampleRate() const { return m_sampleRate; }

void MediaStream::setSampleRate(std::optional<qint32> newSampleRate) {
	m_sampleRate = newSampleRate;
}
bool MediaStream::sampleRateNull() const {
	return !m_sampleRate.has_value();
}

void MediaStream::setSampleRateNull() {
	m_sampleRate = std::nullopt;

}
bool MediaStream::isDefault() const { return m_isDefault; }

void MediaStream::setIsDefault(bool newIsDefault) {
	m_isDefault = newIsDefault;
}

bool MediaStream::isForced() const { return m_isForced; }

void MediaStream::setIsForced(bool newIsForced) {
	m_isForced = newIsForced;
}

std::optional<qint32> MediaStream::height() const { return m_height; }

void MediaStream::setHeight(std::optional<qint32> newHeight) {
	m_height = newHeight;
}
bool MediaStream::heightNull() const {
	return !m_height.has_value();
}

void MediaStream::setHeightNull() {
	m_height = std::nullopt;

}
std::optional<qint32> MediaStream::width() const { return m_width; }

void MediaStream::setWidth(std::optional<qint32> newWidth) {
	m_width = newWidth;
}
bool MediaStream::widthNull() const {
	return !m_width.has_value();
}

void MediaStream::setWidthNull() {
	m_width = std::nullopt;

}
std::optional<float> MediaStream::averageFrameRate() const { return m_averageFrameRate; }

void MediaStream::setAverageFrameRate(std::optional<float> newAverageFrameRate) {
	m_averageFrameRate = newAverageFrameRate;
}
bool MediaStream::averageFrameRateNull() const {
	return !m_averageFrameRate.has_value();
}

void MediaStream::setAverageFrameRateNull() {
	m_averageFrameRate = std::nullopt;

}
std::optional<float> MediaStream::realFrameRate() const { return m_realFrameRate; }

void MediaStream::setRealFrameRate(std::optional<float> newRealFrameRate) {
	m_realFrameRate = newRealFrameRate;
}
bool MediaStream::realFrameRateNull() const {
	return !m_realFrameRate.has_value();
}

void MediaStream::setRealFrameRateNull() {
	m_realFrameRate = std::nullopt;

}
QString MediaStream::profile() const { return m_profile; }

void MediaStream::setProfile(QString newProfile) {
	m_profile = newProfile;
}
bool MediaStream::profileNull() const {
	return m_profile.isNull();
}

void MediaStream::setProfileNull() {
	m_profile.clear();

}
MediaStreamType MediaStream::type() const { return m_type; }

void MediaStream::setType(MediaStreamType newType) {
	m_type = newType;
}

QString MediaStream::aspectRatio() const { return m_aspectRatio; }

void MediaStream::setAspectRatio(QString newAspectRatio) {
	m_aspectRatio = newAspectRatio;
}
bool MediaStream::aspectRatioNull() const {
	return m_aspectRatio.isNull();
}

void MediaStream::setAspectRatioNull() {
	m_aspectRatio.clear();

}
qint32 MediaStream::index() const { return m_index; }

void MediaStream::setIndex(qint32 newIndex) {
	m_index = newIndex;
}

std::optional<qint32> MediaStream::score() const { return m_score; }

void MediaStream::setScore(std::optional<qint32> newScore) {
	m_score = newScore;
}
bool MediaStream::scoreNull() const {
	return !m_score.has_value();
}

void MediaStream::setScoreNull() {
	m_score = std::nullopt;

}
bool MediaStream::isExternal() const { return m_isExternal; }

void MediaStream::setIsExternal(bool newIsExternal) {
	m_isExternal = newIsExternal;
}

SubtitleDeliveryMethod MediaStream::deliveryMethod() const { return m_deliveryMethod; }

void MediaStream::setDeliveryMethod(SubtitleDeliveryMethod newDeliveryMethod) {
	m_deliveryMethod = newDeliveryMethod;
}

QString MediaStream::deliveryUrl() const { return m_deliveryUrl; }

void MediaStream::setDeliveryUrl(QString newDeliveryUrl) {
	m_deliveryUrl = newDeliveryUrl;
}
bool MediaStream::deliveryUrlNull() const {
	return m_deliveryUrl.isNull();
}

void MediaStream::setDeliveryUrlNull() {
	m_deliveryUrl.clear();

}
std::optional<bool> MediaStream::isExternalUrl() const { return m_isExternalUrl; }

void MediaStream::setIsExternalUrl(std::optional<bool> newIsExternalUrl) {
	m_isExternalUrl = newIsExternalUrl;
}
bool MediaStream::isExternalUrlNull() const {
	return !m_isExternalUrl.has_value();
}

void MediaStream::setIsExternalUrlNull() {
	m_isExternalUrl = std::nullopt;

}
bool MediaStream::isTextSubtitleStream() const { return m_isTextSubtitleStream; }

void MediaStream::setIsTextSubtitleStream(bool newIsTextSubtitleStream) {
	m_isTextSubtitleStream = newIsTextSubtitleStream;
}

bool MediaStream::supportsExternalStream() const { return m_supportsExternalStream; }

void MediaStream::setSupportsExternalStream(bool newSupportsExternalStream) {
	m_supportsExternalStream = newSupportsExternalStream;
}

QString MediaStream::path() const { return m_path; }

void MediaStream::setPath(QString newPath) {
	m_path = newPath;
}
bool MediaStream::pathNull() const {
	return m_path.isNull();
}

void MediaStream::setPathNull() {
	m_path.clear();

}
QString MediaStream::pixelFormat() const { return m_pixelFormat; }

void MediaStream::setPixelFormat(QString newPixelFormat) {
	m_pixelFormat = newPixelFormat;
}
bool MediaStream::pixelFormatNull() const {
	return m_pixelFormat.isNull();
}

void MediaStream::setPixelFormatNull() {
	m_pixelFormat.clear();

}
std::optional<double> MediaStream::level() const { return m_level; }

void MediaStream::setLevel(std::optional<double> newLevel) {
	m_level = newLevel;
}
bool MediaStream::levelNull() const {
	return !m_level.has_value();
}

void MediaStream::setLevelNull() {
	m_level = std::nullopt;

}
std::optional<bool> MediaStream::isAnamorphic() const { return m_isAnamorphic; }

void MediaStream::setIsAnamorphic(std::optional<bool> newIsAnamorphic) {
	m_isAnamorphic = newIsAnamorphic;
}
bool MediaStream::isAnamorphicNull() const {
	return !m_isAnamorphic.has_value();
}

void MediaStream::setIsAnamorphicNull() {
	m_isAnamorphic = std::nullopt;

}

} // NS DTO

namespace Support {

using MediaStream = Jellyfin::DTO::MediaStream;

template <>
MediaStream fromJsonValue(const QJsonValue &source, convertType<MediaStream>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return MediaStream::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const MediaStream &source, convertType<MediaStream>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
