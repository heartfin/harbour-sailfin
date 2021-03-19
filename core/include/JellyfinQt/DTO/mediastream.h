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

#ifndef JELLYFIN_DTO_MEDIASTREAM_H
#define JELLYFIN_DTO_MEDIASTREAM_H

#include <QJsonObject>
#include <QObject>
#include <QString>

#include "JellyfinQt/DTO/mediastreamtype.h"
#include "JellyfinQt/DTO/subtitledeliverymethod.h"

namespace Jellyfin {
namespace DTO {

class MediaStream : public QObject {
	Q_OBJECT
public:
	explicit MediaStream(QObject *parent = nullptr);
	static MediaStream *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the codec.
	 */
	Q_PROPERTY(QString codec READ codec WRITE setCodec NOTIFY codecChanged)
	/**
	 * @brief Gets or sets the codec tag.
	 */
	Q_PROPERTY(QString codecTag READ codecTag WRITE setCodecTag NOTIFY codecTagChanged)
	/**
	 * @brief Gets or sets the language.
	 */
	Q_PROPERTY(QString language READ language WRITE setLanguage NOTIFY languageChanged)
	/**
	 * @brief Gets or sets the color range.
	 */
	Q_PROPERTY(QString colorRange READ colorRange WRITE setColorRange NOTIFY colorRangeChanged)
	/**
	 * @brief Gets or sets the color space.
	 */
	Q_PROPERTY(QString colorSpace READ colorSpace WRITE setColorSpace NOTIFY colorSpaceChanged)
	/**
	 * @brief Gets or sets the color transfer.
	 */
	Q_PROPERTY(QString colorTransfer READ colorTransfer WRITE setColorTransfer NOTIFY colorTransferChanged)
	/**
	 * @brief Gets or sets the color primaries.
	 */
	Q_PROPERTY(QString colorPrimaries READ colorPrimaries WRITE setColorPrimaries NOTIFY colorPrimariesChanged)
	/**
	 * @brief Gets or sets the comment.
	 */
	Q_PROPERTY(QString comment READ comment WRITE setComment NOTIFY commentChanged)
	/**
	 * @brief Gets or sets the time base.
	 */
	Q_PROPERTY(QString timeBase READ timeBase WRITE setTimeBase NOTIFY timeBaseChanged)
	/**
	 * @brief Gets or sets the codec time base.
	 */
	Q_PROPERTY(QString codecTimeBase READ codecTimeBase WRITE setCodecTimeBase NOTIFY codecTimeBaseChanged)
	/**
	 * @brief Gets or sets the title.
	 */
	Q_PROPERTY(QString title READ title WRITE setTitle NOTIFY titleChanged)
	/**
	 * @brief Gets or sets the video range.
	 */
	Q_PROPERTY(QString videoRange READ videoRange WRITE setVideoRange NOTIFY videoRangeChanged)
	Q_PROPERTY(QString localizedUndefined READ localizedUndefined WRITE setLocalizedUndefined NOTIFY localizedUndefinedChanged)
	Q_PROPERTY(QString localizedDefault READ localizedDefault WRITE setLocalizedDefault NOTIFY localizedDefaultChanged)
	Q_PROPERTY(QString localizedForced READ localizedForced WRITE setLocalizedForced NOTIFY localizedForcedChanged)
	Q_PROPERTY(QString displayTitle READ displayTitle WRITE setDisplayTitle NOTIFY displayTitleChanged)
	Q_PROPERTY(QString nalLengthSize READ nalLengthSize WRITE setNalLengthSize NOTIFY nalLengthSizeChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is interlaced.
	 */
	Q_PROPERTY(bool isInterlaced READ isInterlaced WRITE setIsInterlaced NOTIFY isInterlacedChanged)
	Q_PROPERTY(bool isAVC READ isAVC WRITE setIsAVC NOTIFY isAVCChanged)
	/**
	 * @brief Gets or sets the channel layout.
	 */
	Q_PROPERTY(QString channelLayout READ channelLayout WRITE setChannelLayout NOTIFY channelLayoutChanged)
	/**
	 * @brief Gets or sets the bit rate.
	 */
	Q_PROPERTY(qint32 bitRate READ bitRate WRITE setBitRate NOTIFY bitRateChanged)
	/**
	 * @brief Gets or sets the bit depth.
	 */
	Q_PROPERTY(qint32 bitDepth READ bitDepth WRITE setBitDepth NOTIFY bitDepthChanged)
	/**
	 * @brief Gets or sets the reference frames.
	 */
	Q_PROPERTY(qint32 refFrames READ refFrames WRITE setRefFrames NOTIFY refFramesChanged)
	/**
	 * @brief Gets or sets the length of the packet.
	 */
	Q_PROPERTY(qint32 packetLength READ packetLength WRITE setPacketLength NOTIFY packetLengthChanged)
	/**
	 * @brief Gets or sets the channels.
	 */
	Q_PROPERTY(qint32 channels READ channels WRITE setChannels NOTIFY channelsChanged)
	/**
	 * @brief Gets or sets the sample rate.
	 */
	Q_PROPERTY(qint32 sampleRate READ sampleRate WRITE setSampleRate NOTIFY sampleRateChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is default.
	 */
	Q_PROPERTY(bool isDefault READ isDefault WRITE setIsDefault NOTIFY isDefaultChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is forced.
	 */
	Q_PROPERTY(bool isForced READ isForced WRITE setIsForced NOTIFY isForcedChanged)
	/**
	 * @brief Gets or sets the height.
	 */
	Q_PROPERTY(qint32 height READ height WRITE setHeight NOTIFY heightChanged)
	/**
	 * @brief Gets or sets the width.
	 */
	Q_PROPERTY(qint32 width READ width WRITE setWidth NOTIFY widthChanged)
	/**
	 * @brief Gets or sets the average frame rate.
	 */
	Q_PROPERTY(float averageFrameRate READ averageFrameRate WRITE setAverageFrameRate NOTIFY averageFrameRateChanged)
	/**
	 * @brief Gets or sets the real frame rate.
	 */
	Q_PROPERTY(float realFrameRate READ realFrameRate WRITE setRealFrameRate NOTIFY realFrameRateChanged)
	/**
	 * @brief Gets or sets the profile.
	 */
	Q_PROPERTY(QString profile READ profile WRITE setProfile NOTIFY profileChanged)
	Q_PROPERTY(MediaStreamType type READ type WRITE setType NOTIFY typeChanged)
	/**
	 * @brief Gets or sets the aspect ratio.
	 */
	Q_PROPERTY(QString aspectRatio READ aspectRatio WRITE setAspectRatio NOTIFY aspectRatioChanged)
	/**
	 * @brief Gets or sets the index.
	 */
	Q_PROPERTY(qint32 index READ index WRITE setIndex NOTIFY indexChanged)
	/**
	 * @brief Gets or sets the score.
	 */
	Q_PROPERTY(qint32 score READ score WRITE setScore NOTIFY scoreChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is external.
	 */
	Q_PROPERTY(bool isExternal READ isExternal WRITE setIsExternal NOTIFY isExternalChanged)
	Q_PROPERTY(SubtitleDeliveryMethod deliveryMethod READ deliveryMethod WRITE setDeliveryMethod NOTIFY deliveryMethodChanged)
	/**
	 * @brief Gets or sets the delivery URL.
	 */
	Q_PROPERTY(QString deliveryUrl READ deliveryUrl WRITE setDeliveryUrl NOTIFY deliveryUrlChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is external URL.
	 */
	Q_PROPERTY(bool isExternalUrl READ isExternalUrl WRITE setIsExternalUrl NOTIFY isExternalUrlChanged)
	Q_PROPERTY(bool isTextSubtitleStream READ isTextSubtitleStream WRITE setIsTextSubtitleStream NOTIFY isTextSubtitleStreamChanged)
	/**
	 * @brief Gets or sets a value indicating whether [supports external stream].
	 */
	Q_PROPERTY(bool supportsExternalStream READ supportsExternalStream WRITE setSupportsExternalStream NOTIFY supportsExternalStreamChanged)
	/**
	 * @brief Gets or sets the filename.
	 */
	Q_PROPERTY(QString path READ path WRITE setPath NOTIFY pathChanged)
	/**
	 * @brief Gets or sets the pixel format.
	 */
	Q_PROPERTY(QString pixelFormat READ pixelFormat WRITE setPixelFormat NOTIFY pixelFormatChanged)
	/**
	 * @brief Gets or sets the level.
	 */
	Q_PROPERTY(double level READ level WRITE setLevel NOTIFY levelChanged)
	/**
	 * @brief Gets a value indicating whether this instance is anamorphic.
	 */
	Q_PROPERTY(bool isAnamorphic READ isAnamorphic WRITE setIsAnamorphic NOTIFY isAnamorphicChanged)

	QString codec() const;
	void setCodec(QString newCodec);
	
	QString codecTag() const;
	void setCodecTag(QString newCodecTag);
	
	QString language() const;
	void setLanguage(QString newLanguage);
	
	QString colorRange() const;
	void setColorRange(QString newColorRange);
	
	QString colorSpace() const;
	void setColorSpace(QString newColorSpace);
	
	QString colorTransfer() const;
	void setColorTransfer(QString newColorTransfer);
	
	QString colorPrimaries() const;
	void setColorPrimaries(QString newColorPrimaries);
	
	QString comment() const;
	void setComment(QString newComment);
	
	QString timeBase() const;
	void setTimeBase(QString newTimeBase);
	
	QString codecTimeBase() const;
	void setCodecTimeBase(QString newCodecTimeBase);
	
	QString title() const;
	void setTitle(QString newTitle);
	
	QString videoRange() const;
	void setVideoRange(QString newVideoRange);
	
	QString localizedUndefined() const;
	void setLocalizedUndefined(QString newLocalizedUndefined);
	
	QString localizedDefault() const;
	void setLocalizedDefault(QString newLocalizedDefault);
	
	QString localizedForced() const;
	void setLocalizedForced(QString newLocalizedForced);
	
	QString displayTitle() const;
	void setDisplayTitle(QString newDisplayTitle);
	
	QString nalLengthSize() const;
	void setNalLengthSize(QString newNalLengthSize);
	
	bool isInterlaced() const;
	void setIsInterlaced(bool newIsInterlaced);
	
	bool isAVC() const;
	void setIsAVC(bool newIsAVC);
	
	QString channelLayout() const;
	void setChannelLayout(QString newChannelLayout);
	
	qint32 bitRate() const;
	void setBitRate(qint32 newBitRate);
	
	qint32 bitDepth() const;
	void setBitDepth(qint32 newBitDepth);
	
	qint32 refFrames() const;
	void setRefFrames(qint32 newRefFrames);
	
	qint32 packetLength() const;
	void setPacketLength(qint32 newPacketLength);
	
	qint32 channels() const;
	void setChannels(qint32 newChannels);
	
	qint32 sampleRate() const;
	void setSampleRate(qint32 newSampleRate);
	
	bool isDefault() const;
	void setIsDefault(bool newIsDefault);
	
	bool isForced() const;
	void setIsForced(bool newIsForced);
	
	qint32 height() const;
	void setHeight(qint32 newHeight);
	
	qint32 width() const;
	void setWidth(qint32 newWidth);
	
	float averageFrameRate() const;
	void setAverageFrameRate(float newAverageFrameRate);
	
	float realFrameRate() const;
	void setRealFrameRate(float newRealFrameRate);
	
	QString profile() const;
	void setProfile(QString newProfile);
	
	MediaStreamType type() const;
	void setType(MediaStreamType newType);
	
	QString aspectRatio() const;
	void setAspectRatio(QString newAspectRatio);
	
	qint32 index() const;
	void setIndex(qint32 newIndex);
	
	qint32 score() const;
	void setScore(qint32 newScore);
	
	bool isExternal() const;
	void setIsExternal(bool newIsExternal);
	
	SubtitleDeliveryMethod deliveryMethod() const;
	void setDeliveryMethod(SubtitleDeliveryMethod newDeliveryMethod);
	
	QString deliveryUrl() const;
	void setDeliveryUrl(QString newDeliveryUrl);
	
	bool isExternalUrl() const;
	void setIsExternalUrl(bool newIsExternalUrl);
	
	bool isTextSubtitleStream() const;
	void setIsTextSubtitleStream(bool newIsTextSubtitleStream);
	
	bool supportsExternalStream() const;
	void setSupportsExternalStream(bool newSupportsExternalStream);
	
	QString path() const;
	void setPath(QString newPath);
	
	QString pixelFormat() const;
	void setPixelFormat(QString newPixelFormat);
	
	double level() const;
	void setLevel(double newLevel);
	
	bool isAnamorphic() const;
	void setIsAnamorphic(bool newIsAnamorphic);
	
signals:
	void codecChanged(QString newCodec);
	void codecTagChanged(QString newCodecTag);
	void languageChanged(QString newLanguage);
	void colorRangeChanged(QString newColorRange);
	void colorSpaceChanged(QString newColorSpace);
	void colorTransferChanged(QString newColorTransfer);
	void colorPrimariesChanged(QString newColorPrimaries);
	void commentChanged(QString newComment);
	void timeBaseChanged(QString newTimeBase);
	void codecTimeBaseChanged(QString newCodecTimeBase);
	void titleChanged(QString newTitle);
	void videoRangeChanged(QString newVideoRange);
	void localizedUndefinedChanged(QString newLocalizedUndefined);
	void localizedDefaultChanged(QString newLocalizedDefault);
	void localizedForcedChanged(QString newLocalizedForced);
	void displayTitleChanged(QString newDisplayTitle);
	void nalLengthSizeChanged(QString newNalLengthSize);
	void isInterlacedChanged(bool newIsInterlaced);
	void isAVCChanged(bool newIsAVC);
	void channelLayoutChanged(QString newChannelLayout);
	void bitRateChanged(qint32 newBitRate);
	void bitDepthChanged(qint32 newBitDepth);
	void refFramesChanged(qint32 newRefFrames);
	void packetLengthChanged(qint32 newPacketLength);
	void channelsChanged(qint32 newChannels);
	void sampleRateChanged(qint32 newSampleRate);
	void isDefaultChanged(bool newIsDefault);
	void isForcedChanged(bool newIsForced);
	void heightChanged(qint32 newHeight);
	void widthChanged(qint32 newWidth);
	void averageFrameRateChanged(float newAverageFrameRate);
	void realFrameRateChanged(float newRealFrameRate);
	void profileChanged(QString newProfile);
	void typeChanged(MediaStreamType newType);
	void aspectRatioChanged(QString newAspectRatio);
	void indexChanged(qint32 newIndex);
	void scoreChanged(qint32 newScore);
	void isExternalChanged(bool newIsExternal);
	void deliveryMethodChanged(SubtitleDeliveryMethod newDeliveryMethod);
	void deliveryUrlChanged(QString newDeliveryUrl);
	void isExternalUrlChanged(bool newIsExternalUrl);
	void isTextSubtitleStreamChanged(bool newIsTextSubtitleStream);
	void supportsExternalStreamChanged(bool newSupportsExternalStream);
	void pathChanged(QString newPath);
	void pixelFormatChanged(QString newPixelFormat);
	void levelChanged(double newLevel);
	void isAnamorphicChanged(bool newIsAnamorphic);
protected:
	QString m_codec;
	QString m_codecTag;
	QString m_language;
	QString m_colorRange;
	QString m_colorSpace;
	QString m_colorTransfer;
	QString m_colorPrimaries;
	QString m_comment;
	QString m_timeBase;
	QString m_codecTimeBase;
	QString m_title;
	QString m_videoRange;
	QString m_localizedUndefined;
	QString m_localizedDefault;
	QString m_localizedForced;
	QString m_displayTitle;
	QString m_nalLengthSize;
	bool m_isInterlaced;
	bool m_isAVC;
	QString m_channelLayout;
	qint32 m_bitRate;
	qint32 m_bitDepth;
	qint32 m_refFrames;
	qint32 m_packetLength;
	qint32 m_channels;
	qint32 m_sampleRate;
	bool m_isDefault;
	bool m_isForced;
	qint32 m_height;
	qint32 m_width;
	float m_averageFrameRate;
	float m_realFrameRate;
	QString m_profile;
	MediaStreamType m_type;
	QString m_aspectRatio;
	qint32 m_index;
	qint32 m_score;
	bool m_isExternal;
	SubtitleDeliveryMethod m_deliveryMethod;
	QString m_deliveryUrl;
	bool m_isExternalUrl;
	bool m_isTextSubtitleStream;
	bool m_supportsExternalStream;
	QString m_path;
	QString m_pixelFormat;
	double m_level;
	bool m_isAnamorphic;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_MEDIASTREAM_H
