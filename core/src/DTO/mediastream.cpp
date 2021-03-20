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

#include <JellyfinQt/DTO/mediastream.h>

namespace Jellyfin {
namespace DTO {

MediaStream::MediaStream(QObject *parent) {}

MediaStream MediaStream::fromJson(QJsonObject source) {MediaStream instance;
	instance->setFromJson(source, false);
	return instance;
}


void MediaStream::setFromJson(QJsonObject source) {
	m_codec = fromJsonValue<QString>(source["Codec"]);
	m_codecTag = fromJsonValue<QString>(source["CodecTag"]);
	m_language = fromJsonValue<QString>(source["Language"]);
	m_colorRange = fromJsonValue<QString>(source["ColorRange"]);
	m_colorSpace = fromJsonValue<QString>(source["ColorSpace"]);
	m_colorTransfer = fromJsonValue<QString>(source["ColorTransfer"]);
	m_colorPrimaries = fromJsonValue<QString>(source["ColorPrimaries"]);
	m_comment = fromJsonValue<QString>(source["Comment"]);
	m_timeBase = fromJsonValue<QString>(source["TimeBase"]);
	m_codecTimeBase = fromJsonValue<QString>(source["CodecTimeBase"]);
	m_title = fromJsonValue<QString>(source["Title"]);
	m_videoRange = fromJsonValue<QString>(source["VideoRange"]);
	m_localizedUndefined = fromJsonValue<QString>(source["localizedUndefined"]);
	m_localizedDefault = fromJsonValue<QString>(source["localizedDefault"]);
	m_localizedForced = fromJsonValue<QString>(source["localizedForced"]);
	m_displayTitle = fromJsonValue<QString>(source["DisplayTitle"]);
	m_nalLengthSize = fromJsonValue<QString>(source["NalLengthSize"]);
	m_isInterlaced = fromJsonValue<bool>(source["IsInterlaced"]);
	m_isAVC = fromJsonValue<bool>(source["IsAVC"]);
	m_channelLayout = fromJsonValue<QString>(source["ChannelLayout"]);
	m_bitRate = fromJsonValue<qint32>(source["BitRate"]);
	m_bitDepth = fromJsonValue<qint32>(source["BitDepth"]);
	m_refFrames = fromJsonValue<qint32>(source["RefFrames"]);
	m_packetLength = fromJsonValue<qint32>(source["PacketLength"]);
	m_channels = fromJsonValue<qint32>(source["Channels"]);
	m_sampleRate = fromJsonValue<qint32>(source["SampleRate"]);
	m_isDefault = fromJsonValue<bool>(source["IsDefault"]);
	m_isForced = fromJsonValue<bool>(source["IsForced"]);
	m_height = fromJsonValue<qint32>(source["Height"]);
	m_width = fromJsonValue<qint32>(source["Width"]);
	m_averageFrameRate = fromJsonValue<float>(source["AverageFrameRate"]);
	m_realFrameRate = fromJsonValue<float>(source["RealFrameRate"]);
	m_profile = fromJsonValue<QString>(source["Profile"]);
	m_type = fromJsonValue<MediaStreamType>(source["Type"]);
	m_aspectRatio = fromJsonValue<QString>(source["AspectRatio"]);
	m_index = fromJsonValue<qint32>(source["Index"]);
	m_score = fromJsonValue<qint32>(source["Score"]);
	m_isExternal = fromJsonValue<bool>(source["IsExternal"]);
	m_deliveryMethod = fromJsonValue<SubtitleDeliveryMethod>(source["DeliveryMethod"]);
	m_deliveryUrl = fromJsonValue<QString>(source["DeliveryUrl"]);
	m_isExternalUrl = fromJsonValue<bool>(source["IsExternalUrl"]);
	m_isTextSubtitleStream = fromJsonValue<bool>(source["IsTextSubtitleStream"]);
	m_supportsExternalStream = fromJsonValue<bool>(source["SupportsExternalStream"]);
	m_path = fromJsonValue<QString>(source["Path"]);
	m_pixelFormat = fromJsonValue<QString>(source["PixelFormat"]);
	m_level = fromJsonValue<double>(source["Level"]);
	m_isAnamorphic = fromJsonValue<bool>(source["IsAnamorphic"]);

}
	
QJsonObject MediaStream::toJson() {
	QJsonObject result;
	result["Codec"] = toJsonValue<QString>(m_codec);
	result["CodecTag"] = toJsonValue<QString>(m_codecTag);
	result["Language"] = toJsonValue<QString>(m_language);
	result["ColorRange"] = toJsonValue<QString>(m_colorRange);
	result["ColorSpace"] = toJsonValue<QString>(m_colorSpace);
	result["ColorTransfer"] = toJsonValue<QString>(m_colorTransfer);
	result["ColorPrimaries"] = toJsonValue<QString>(m_colorPrimaries);
	result["Comment"] = toJsonValue<QString>(m_comment);
	result["TimeBase"] = toJsonValue<QString>(m_timeBase);
	result["CodecTimeBase"] = toJsonValue<QString>(m_codecTimeBase);
	result["Title"] = toJsonValue<QString>(m_title);
	result["VideoRange"] = toJsonValue<QString>(m_videoRange);
	result["localizedUndefined"] = toJsonValue<QString>(m_localizedUndefined);
	result["localizedDefault"] = toJsonValue<QString>(m_localizedDefault);
	result["localizedForced"] = toJsonValue<QString>(m_localizedForced);
	result["DisplayTitle"] = toJsonValue<QString>(m_displayTitle);
	result["NalLengthSize"] = toJsonValue<QString>(m_nalLengthSize);
	result["IsInterlaced"] = toJsonValue<bool>(m_isInterlaced);
	result["IsAVC"] = toJsonValue<bool>(m_isAVC);
	result["ChannelLayout"] = toJsonValue<QString>(m_channelLayout);
	result["BitRate"] = toJsonValue<qint32>(m_bitRate);
	result["BitDepth"] = toJsonValue<qint32>(m_bitDepth);
	result["RefFrames"] = toJsonValue<qint32>(m_refFrames);
	result["PacketLength"] = toJsonValue<qint32>(m_packetLength);
	result["Channels"] = toJsonValue<qint32>(m_channels);
	result["SampleRate"] = toJsonValue<qint32>(m_sampleRate);
	result["IsDefault"] = toJsonValue<bool>(m_isDefault);
	result["IsForced"] = toJsonValue<bool>(m_isForced);
	result["Height"] = toJsonValue<qint32>(m_height);
	result["Width"] = toJsonValue<qint32>(m_width);
	result["AverageFrameRate"] = toJsonValue<float>(m_averageFrameRate);
	result["RealFrameRate"] = toJsonValue<float>(m_realFrameRate);
	result["Profile"] = toJsonValue<QString>(m_profile);
	result["Type"] = toJsonValue<MediaStreamType>(m_type);
	result["AspectRatio"] = toJsonValue<QString>(m_aspectRatio);
	result["Index"] = toJsonValue<qint32>(m_index);
	result["Score"] = toJsonValue<qint32>(m_score);
	result["IsExternal"] = toJsonValue<bool>(m_isExternal);
	result["DeliveryMethod"] = toJsonValue<SubtitleDeliveryMethod>(m_deliveryMethod);
	result["DeliveryUrl"] = toJsonValue<QString>(m_deliveryUrl);
	result["IsExternalUrl"] = toJsonValue<bool>(m_isExternalUrl);
	result["IsTextSubtitleStream"] = toJsonValue<bool>(m_isTextSubtitleStream);
	result["SupportsExternalStream"] = toJsonValue<bool>(m_supportsExternalStream);
	result["Path"] = toJsonValue<QString>(m_path);
	result["PixelFormat"] = toJsonValue<QString>(m_pixelFormat);
	result["Level"] = toJsonValue<double>(m_level);
	result["IsAnamorphic"] = toJsonValue<bool>(m_isAnamorphic);

	return result;
}

QString MediaStream::codec() const { return m_codec; }

void MediaStream::setCodec(QString newCodec) {
	m_codec = newCodec;
}
QString MediaStream::codecTag() const { return m_codecTag; }

void MediaStream::setCodecTag(QString newCodecTag) {
	m_codecTag = newCodecTag;
}
QString MediaStream::language() const { return m_language; }

void MediaStream::setLanguage(QString newLanguage) {
	m_language = newLanguage;
}
QString MediaStream::colorRange() const { return m_colorRange; }

void MediaStream::setColorRange(QString newColorRange) {
	m_colorRange = newColorRange;
}
QString MediaStream::colorSpace() const { return m_colorSpace; }

void MediaStream::setColorSpace(QString newColorSpace) {
	m_colorSpace = newColorSpace;
}
QString MediaStream::colorTransfer() const { return m_colorTransfer; }

void MediaStream::setColorTransfer(QString newColorTransfer) {
	m_colorTransfer = newColorTransfer;
}
QString MediaStream::colorPrimaries() const { return m_colorPrimaries; }

void MediaStream::setColorPrimaries(QString newColorPrimaries) {
	m_colorPrimaries = newColorPrimaries;
}
QString MediaStream::comment() const { return m_comment; }

void MediaStream::setComment(QString newComment) {
	m_comment = newComment;
}
QString MediaStream::timeBase() const { return m_timeBase; }

void MediaStream::setTimeBase(QString newTimeBase) {
	m_timeBase = newTimeBase;
}
QString MediaStream::codecTimeBase() const { return m_codecTimeBase; }

void MediaStream::setCodecTimeBase(QString newCodecTimeBase) {
	m_codecTimeBase = newCodecTimeBase;
}
QString MediaStream::title() const { return m_title; }

void MediaStream::setTitle(QString newTitle) {
	m_title = newTitle;
}
QString MediaStream::videoRange() const { return m_videoRange; }

void MediaStream::setVideoRange(QString newVideoRange) {
	m_videoRange = newVideoRange;
}
QString MediaStream::localizedUndefined() const { return m_localizedUndefined; }

void MediaStream::setLocalizedUndefined(QString newLocalizedUndefined) {
	m_localizedUndefined = newLocalizedUndefined;
}
QString MediaStream::localizedDefault() const { return m_localizedDefault; }

void MediaStream::setLocalizedDefault(QString newLocalizedDefault) {
	m_localizedDefault = newLocalizedDefault;
}
QString MediaStream::localizedForced() const { return m_localizedForced; }

void MediaStream::setLocalizedForced(QString newLocalizedForced) {
	m_localizedForced = newLocalizedForced;
}
QString MediaStream::displayTitle() const { return m_displayTitle; }

void MediaStream::setDisplayTitle(QString newDisplayTitle) {
	m_displayTitle = newDisplayTitle;
}
QString MediaStream::nalLengthSize() const { return m_nalLengthSize; }

void MediaStream::setNalLengthSize(QString newNalLengthSize) {
	m_nalLengthSize = newNalLengthSize;
}
bool MediaStream::isInterlaced() const { return m_isInterlaced; }

void MediaStream::setIsInterlaced(bool newIsInterlaced) {
	m_isInterlaced = newIsInterlaced;
}
bool MediaStream::isAVC() const { return m_isAVC; }

void MediaStream::setIsAVC(bool newIsAVC) {
	m_isAVC = newIsAVC;
}
QString MediaStream::channelLayout() const { return m_channelLayout; }

void MediaStream::setChannelLayout(QString newChannelLayout) {
	m_channelLayout = newChannelLayout;
}
qint32 MediaStream::bitRate() const { return m_bitRate; }

void MediaStream::setBitRate(qint32 newBitRate) {
	m_bitRate = newBitRate;
}
qint32 MediaStream::bitDepth() const { return m_bitDepth; }

void MediaStream::setBitDepth(qint32 newBitDepth) {
	m_bitDepth = newBitDepth;
}
qint32 MediaStream::refFrames() const { return m_refFrames; }

void MediaStream::setRefFrames(qint32 newRefFrames) {
	m_refFrames = newRefFrames;
}
qint32 MediaStream::packetLength() const { return m_packetLength; }

void MediaStream::setPacketLength(qint32 newPacketLength) {
	m_packetLength = newPacketLength;
}
qint32 MediaStream::channels() const { return m_channels; }

void MediaStream::setChannels(qint32 newChannels) {
	m_channels = newChannels;
}
qint32 MediaStream::sampleRate() const { return m_sampleRate; }

void MediaStream::setSampleRate(qint32 newSampleRate) {
	m_sampleRate = newSampleRate;
}
bool MediaStream::isDefault() const { return m_isDefault; }

void MediaStream::setIsDefault(bool newIsDefault) {
	m_isDefault = newIsDefault;
}
bool MediaStream::isForced() const { return m_isForced; }

void MediaStream::setIsForced(bool newIsForced) {
	m_isForced = newIsForced;
}
qint32 MediaStream::height() const { return m_height; }

void MediaStream::setHeight(qint32 newHeight) {
	m_height = newHeight;
}
qint32 MediaStream::width() const { return m_width; }

void MediaStream::setWidth(qint32 newWidth) {
	m_width = newWidth;
}
float MediaStream::averageFrameRate() const { return m_averageFrameRate; }

void MediaStream::setAverageFrameRate(float newAverageFrameRate) {
	m_averageFrameRate = newAverageFrameRate;
}
float MediaStream::realFrameRate() const { return m_realFrameRate; }

void MediaStream::setRealFrameRate(float newRealFrameRate) {
	m_realFrameRate = newRealFrameRate;
}
QString MediaStream::profile() const { return m_profile; }

void MediaStream::setProfile(QString newProfile) {
	m_profile = newProfile;
}
MediaStreamType MediaStream::type() const { return m_type; }

void MediaStream::setType(MediaStreamType newType) {
	m_type = newType;
}
QString MediaStream::aspectRatio() const { return m_aspectRatio; }

void MediaStream::setAspectRatio(QString newAspectRatio) {
	m_aspectRatio = newAspectRatio;
}
qint32 MediaStream::index() const { return m_index; }

void MediaStream::setIndex(qint32 newIndex) {
	m_index = newIndex;
}
qint32 MediaStream::score() const { return m_score; }

void MediaStream::setScore(qint32 newScore) {
	m_score = newScore;
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
bool MediaStream::isExternalUrl() const { return m_isExternalUrl; }

void MediaStream::setIsExternalUrl(bool newIsExternalUrl) {
	m_isExternalUrl = newIsExternalUrl;
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
QString MediaStream::pixelFormat() const { return m_pixelFormat; }

void MediaStream::setPixelFormat(QString newPixelFormat) {
	m_pixelFormat = newPixelFormat;
}
double MediaStream::level() const { return m_level; }

void MediaStream::setLevel(double newLevel) {
	m_level = newLevel;
}
bool MediaStream::isAnamorphic() const { return m_isAnamorphic; }

void MediaStream::setIsAnamorphic(bool newIsAnamorphic) {
	m_isAnamorphic = newIsAnamorphic;
}


} // NS Jellyfin
} // NS DTO
