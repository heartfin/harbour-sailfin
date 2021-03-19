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

#include <JellyfinQt/DTO/mediastreamtype.h>
#include <JellyfinQt/DTO/subtitledeliverymethod.h>

namespace Jellyfin {
namespace DTO {

MediaStream::MediaStream(QObject *parent) : QObject(parent) {}

MediaStream *MediaStream::fromJSON(QJsonObject source, QObject *parent) {
	MediaStream *instance = new MediaStream(parent);
	instance->updateFromJSON(source);
	return instance;
}

void MediaStream::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject MediaStream::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString MediaStream::codec() const { return m_codec; }
void MediaStream::setCodec(QString newCodec) {
	m_codec = newCodec;
	emit codecChanged(newCodec);
}

QString MediaStream::codecTag() const { return m_codecTag; }
void MediaStream::setCodecTag(QString newCodecTag) {
	m_codecTag = newCodecTag;
	emit codecTagChanged(newCodecTag);
}

QString MediaStream::language() const { return m_language; }
void MediaStream::setLanguage(QString newLanguage) {
	m_language = newLanguage;
	emit languageChanged(newLanguage);
}

QString MediaStream::colorRange() const { return m_colorRange; }
void MediaStream::setColorRange(QString newColorRange) {
	m_colorRange = newColorRange;
	emit colorRangeChanged(newColorRange);
}

QString MediaStream::colorSpace() const { return m_colorSpace; }
void MediaStream::setColorSpace(QString newColorSpace) {
	m_colorSpace = newColorSpace;
	emit colorSpaceChanged(newColorSpace);
}

QString MediaStream::colorTransfer() const { return m_colorTransfer; }
void MediaStream::setColorTransfer(QString newColorTransfer) {
	m_colorTransfer = newColorTransfer;
	emit colorTransferChanged(newColorTransfer);
}

QString MediaStream::colorPrimaries() const { return m_colorPrimaries; }
void MediaStream::setColorPrimaries(QString newColorPrimaries) {
	m_colorPrimaries = newColorPrimaries;
	emit colorPrimariesChanged(newColorPrimaries);
}

QString MediaStream::comment() const { return m_comment; }
void MediaStream::setComment(QString newComment) {
	m_comment = newComment;
	emit commentChanged(newComment);
}

QString MediaStream::timeBase() const { return m_timeBase; }
void MediaStream::setTimeBase(QString newTimeBase) {
	m_timeBase = newTimeBase;
	emit timeBaseChanged(newTimeBase);
}

QString MediaStream::codecTimeBase() const { return m_codecTimeBase; }
void MediaStream::setCodecTimeBase(QString newCodecTimeBase) {
	m_codecTimeBase = newCodecTimeBase;
	emit codecTimeBaseChanged(newCodecTimeBase);
}

QString MediaStream::title() const { return m_title; }
void MediaStream::setTitle(QString newTitle) {
	m_title = newTitle;
	emit titleChanged(newTitle);
}

QString MediaStream::videoRange() const { return m_videoRange; }
void MediaStream::setVideoRange(QString newVideoRange) {
	m_videoRange = newVideoRange;
	emit videoRangeChanged(newVideoRange);
}

QString MediaStream::localizedUndefined() const { return m_localizedUndefined; }
void MediaStream::setLocalizedUndefined(QString newLocalizedUndefined) {
	m_localizedUndefined = newLocalizedUndefined;
	emit localizedUndefinedChanged(newLocalizedUndefined);
}

QString MediaStream::localizedDefault() const { return m_localizedDefault; }
void MediaStream::setLocalizedDefault(QString newLocalizedDefault) {
	m_localizedDefault = newLocalizedDefault;
	emit localizedDefaultChanged(newLocalizedDefault);
}

QString MediaStream::localizedForced() const { return m_localizedForced; }
void MediaStream::setLocalizedForced(QString newLocalizedForced) {
	m_localizedForced = newLocalizedForced;
	emit localizedForcedChanged(newLocalizedForced);
}

QString MediaStream::displayTitle() const { return m_displayTitle; }
void MediaStream::setDisplayTitle(QString newDisplayTitle) {
	m_displayTitle = newDisplayTitle;
	emit displayTitleChanged(newDisplayTitle);
}

QString MediaStream::nalLengthSize() const { return m_nalLengthSize; }
void MediaStream::setNalLengthSize(QString newNalLengthSize) {
	m_nalLengthSize = newNalLengthSize;
	emit nalLengthSizeChanged(newNalLengthSize);
}

bool MediaStream::isInterlaced() const { return m_isInterlaced; }
void MediaStream::setIsInterlaced(bool newIsInterlaced) {
	m_isInterlaced = newIsInterlaced;
	emit isInterlacedChanged(newIsInterlaced);
}

bool MediaStream::isAVC() const { return m_isAVC; }
void MediaStream::setIsAVC(bool newIsAVC) {
	m_isAVC = newIsAVC;
	emit isAVCChanged(newIsAVC);
}

QString MediaStream::channelLayout() const { return m_channelLayout; }
void MediaStream::setChannelLayout(QString newChannelLayout) {
	m_channelLayout = newChannelLayout;
	emit channelLayoutChanged(newChannelLayout);
}

qint32 MediaStream::bitRate() const { return m_bitRate; }
void MediaStream::setBitRate(qint32 newBitRate) {
	m_bitRate = newBitRate;
	emit bitRateChanged(newBitRate);
}

qint32 MediaStream::bitDepth() const { return m_bitDepth; }
void MediaStream::setBitDepth(qint32 newBitDepth) {
	m_bitDepth = newBitDepth;
	emit bitDepthChanged(newBitDepth);
}

qint32 MediaStream::refFrames() const { return m_refFrames; }
void MediaStream::setRefFrames(qint32 newRefFrames) {
	m_refFrames = newRefFrames;
	emit refFramesChanged(newRefFrames);
}

qint32 MediaStream::packetLength() const { return m_packetLength; }
void MediaStream::setPacketLength(qint32 newPacketLength) {
	m_packetLength = newPacketLength;
	emit packetLengthChanged(newPacketLength);
}

qint32 MediaStream::channels() const { return m_channels; }
void MediaStream::setChannels(qint32 newChannels) {
	m_channels = newChannels;
	emit channelsChanged(newChannels);
}

qint32 MediaStream::sampleRate() const { return m_sampleRate; }
void MediaStream::setSampleRate(qint32 newSampleRate) {
	m_sampleRate = newSampleRate;
	emit sampleRateChanged(newSampleRate);
}

bool MediaStream::isDefault() const { return m_isDefault; }
void MediaStream::setIsDefault(bool newIsDefault) {
	m_isDefault = newIsDefault;
	emit isDefaultChanged(newIsDefault);
}

bool MediaStream::isForced() const { return m_isForced; }
void MediaStream::setIsForced(bool newIsForced) {
	m_isForced = newIsForced;
	emit isForcedChanged(newIsForced);
}

qint32 MediaStream::height() const { return m_height; }
void MediaStream::setHeight(qint32 newHeight) {
	m_height = newHeight;
	emit heightChanged(newHeight);
}

qint32 MediaStream::width() const { return m_width; }
void MediaStream::setWidth(qint32 newWidth) {
	m_width = newWidth;
	emit widthChanged(newWidth);
}

float MediaStream::averageFrameRate() const { return m_averageFrameRate; }
void MediaStream::setAverageFrameRate(float newAverageFrameRate) {
	m_averageFrameRate = newAverageFrameRate;
	emit averageFrameRateChanged(newAverageFrameRate);
}

float MediaStream::realFrameRate() const { return m_realFrameRate; }
void MediaStream::setRealFrameRate(float newRealFrameRate) {
	m_realFrameRate = newRealFrameRate;
	emit realFrameRateChanged(newRealFrameRate);
}

QString MediaStream::profile() const { return m_profile; }
void MediaStream::setProfile(QString newProfile) {
	m_profile = newProfile;
	emit profileChanged(newProfile);
}

MediaStreamType MediaStream::type() const { return m_type; }
void MediaStream::setType(MediaStreamType newType) {
	m_type = newType;
	emit typeChanged(newType);
}

QString MediaStream::aspectRatio() const { return m_aspectRatio; }
void MediaStream::setAspectRatio(QString newAspectRatio) {
	m_aspectRatio = newAspectRatio;
	emit aspectRatioChanged(newAspectRatio);
}

qint32 MediaStream::index() const { return m_index; }
void MediaStream::setIndex(qint32 newIndex) {
	m_index = newIndex;
	emit indexChanged(newIndex);
}

qint32 MediaStream::score() const { return m_score; }
void MediaStream::setScore(qint32 newScore) {
	m_score = newScore;
	emit scoreChanged(newScore);
}

bool MediaStream::isExternal() const { return m_isExternal; }
void MediaStream::setIsExternal(bool newIsExternal) {
	m_isExternal = newIsExternal;
	emit isExternalChanged(newIsExternal);
}

SubtitleDeliveryMethod MediaStream::deliveryMethod() const { return m_deliveryMethod; }
void MediaStream::setDeliveryMethod(SubtitleDeliveryMethod newDeliveryMethod) {
	m_deliveryMethod = newDeliveryMethod;
	emit deliveryMethodChanged(newDeliveryMethod);
}

QString MediaStream::deliveryUrl() const { return m_deliveryUrl; }
void MediaStream::setDeliveryUrl(QString newDeliveryUrl) {
	m_deliveryUrl = newDeliveryUrl;
	emit deliveryUrlChanged(newDeliveryUrl);
}

bool MediaStream::isExternalUrl() const { return m_isExternalUrl; }
void MediaStream::setIsExternalUrl(bool newIsExternalUrl) {
	m_isExternalUrl = newIsExternalUrl;
	emit isExternalUrlChanged(newIsExternalUrl);
}

bool MediaStream::isTextSubtitleStream() const { return m_isTextSubtitleStream; }
void MediaStream::setIsTextSubtitleStream(bool newIsTextSubtitleStream) {
	m_isTextSubtitleStream = newIsTextSubtitleStream;
	emit isTextSubtitleStreamChanged(newIsTextSubtitleStream);
}

bool MediaStream::supportsExternalStream() const { return m_supportsExternalStream; }
void MediaStream::setSupportsExternalStream(bool newSupportsExternalStream) {
	m_supportsExternalStream = newSupportsExternalStream;
	emit supportsExternalStreamChanged(newSupportsExternalStream);
}

QString MediaStream::path() const { return m_path; }
void MediaStream::setPath(QString newPath) {
	m_path = newPath;
	emit pathChanged(newPath);
}

QString MediaStream::pixelFormat() const { return m_pixelFormat; }
void MediaStream::setPixelFormat(QString newPixelFormat) {
	m_pixelFormat = newPixelFormat;
	emit pixelFormatChanged(newPixelFormat);
}

double MediaStream::level() const { return m_level; }
void MediaStream::setLevel(double newLevel) {
	m_level = newLevel;
	emit levelChanged(newLevel);
}

bool MediaStream::isAnamorphic() const { return m_isAnamorphic; }
void MediaStream::setIsAnamorphic(bool newIsAnamorphic) {
	m_isAnamorphic = newIsAnamorphic;
	emit isAnamorphicChanged(newIsAnamorphic);
}


} // NS Jellyfin
} // NS DTO
