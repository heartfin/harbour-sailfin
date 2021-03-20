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
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/DTO/mediastreamtype.h"
#include "JellyfinQt/DTO/subtitledeliverymethod.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class MediaStream {
public:
	explicit MediaStream();
	static MediaStream fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the codec.
	 */
	QString codec() const;
	/**
	* @brief Gets or sets the codec.
	*/
	void setCodec(QString newCodec);
	/**
	 * @brief Gets or sets the codec tag.
	 */
	QString codecTag() const;
	/**
	* @brief Gets or sets the codec tag.
	*/
	void setCodecTag(QString newCodecTag);
	/**
	 * @brief Gets or sets the language.
	 */
	QString language() const;
	/**
	* @brief Gets or sets the language.
	*/
	void setLanguage(QString newLanguage);
	/**
	 * @brief Gets or sets the color range.
	 */
	QString colorRange() const;
	/**
	* @brief Gets or sets the color range.
	*/
	void setColorRange(QString newColorRange);
	/**
	 * @brief Gets or sets the color space.
	 */
	QString colorSpace() const;
	/**
	* @brief Gets or sets the color space.
	*/
	void setColorSpace(QString newColorSpace);
	/**
	 * @brief Gets or sets the color transfer.
	 */
	QString colorTransfer() const;
	/**
	* @brief Gets or sets the color transfer.
	*/
	void setColorTransfer(QString newColorTransfer);
	/**
	 * @brief Gets or sets the color primaries.
	 */
	QString colorPrimaries() const;
	/**
	* @brief Gets or sets the color primaries.
	*/
	void setColorPrimaries(QString newColorPrimaries);
	/**
	 * @brief Gets or sets the comment.
	 */
	QString comment() const;
	/**
	* @brief Gets or sets the comment.
	*/
	void setComment(QString newComment);
	/**
	 * @brief Gets or sets the time base.
	 */
	QString timeBase() const;
	/**
	* @brief Gets or sets the time base.
	*/
	void setTimeBase(QString newTimeBase);
	/**
	 * @brief Gets or sets the codec time base.
	 */
	QString codecTimeBase() const;
	/**
	* @brief Gets or sets the codec time base.
	*/
	void setCodecTimeBase(QString newCodecTimeBase);
	/**
	 * @brief Gets or sets the title.
	 */
	QString title() const;
	/**
	* @brief Gets or sets the title.
	*/
	void setTitle(QString newTitle);
	/**
	 * @brief Gets or sets the video range.
	 */
	QString videoRange() const;
	/**
	* @brief Gets or sets the video range.
	*/
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
	/**
	 * @brief Gets or sets a value indicating whether this instance is interlaced.
	 */
	bool isInterlaced() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is interlaced.
	*/
	void setIsInterlaced(bool newIsInterlaced);

	bool isAVC() const;

	void setIsAVC(bool newIsAVC);
	/**
	 * @brief Gets or sets the channel layout.
	 */
	QString channelLayout() const;
	/**
	* @brief Gets or sets the channel layout.
	*/
	void setChannelLayout(QString newChannelLayout);
	/**
	 * @brief Gets or sets the bit rate.
	 */
	qint32 bitRate() const;
	/**
	* @brief Gets or sets the bit rate.
	*/
	void setBitRate(qint32 newBitRate);
	/**
	 * @brief Gets or sets the bit depth.
	 */
	qint32 bitDepth() const;
	/**
	* @brief Gets or sets the bit depth.
	*/
	void setBitDepth(qint32 newBitDepth);
	/**
	 * @brief Gets or sets the reference frames.
	 */
	qint32 refFrames() const;
	/**
	* @brief Gets or sets the reference frames.
	*/
	void setRefFrames(qint32 newRefFrames);
	/**
	 * @brief Gets or sets the length of the packet.
	 */
	qint32 packetLength() const;
	/**
	* @brief Gets or sets the length of the packet.
	*/
	void setPacketLength(qint32 newPacketLength);
	/**
	 * @brief Gets or sets the channels.
	 */
	qint32 channels() const;
	/**
	* @brief Gets or sets the channels.
	*/
	void setChannels(qint32 newChannels);
	/**
	 * @brief Gets or sets the sample rate.
	 */
	qint32 sampleRate() const;
	/**
	* @brief Gets or sets the sample rate.
	*/
	void setSampleRate(qint32 newSampleRate);
	/**
	 * @brief Gets or sets a value indicating whether this instance is default.
	 */
	bool isDefault() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is default.
	*/
	void setIsDefault(bool newIsDefault);
	/**
	 * @brief Gets or sets a value indicating whether this instance is forced.
	 */
	bool isForced() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is forced.
	*/
	void setIsForced(bool newIsForced);
	/**
	 * @brief Gets or sets the height.
	 */
	qint32 height() const;
	/**
	* @brief Gets or sets the height.
	*/
	void setHeight(qint32 newHeight);
	/**
	 * @brief Gets or sets the width.
	 */
	qint32 width() const;
	/**
	* @brief Gets or sets the width.
	*/
	void setWidth(qint32 newWidth);
	/**
	 * @brief Gets or sets the average frame rate.
	 */
	float averageFrameRate() const;
	/**
	* @brief Gets or sets the average frame rate.
	*/
	void setAverageFrameRate(float newAverageFrameRate);
	/**
	 * @brief Gets or sets the real frame rate.
	 */
	float realFrameRate() const;
	/**
	* @brief Gets or sets the real frame rate.
	*/
	void setRealFrameRate(float newRealFrameRate);
	/**
	 * @brief Gets or sets the profile.
	 */
	QString profile() const;
	/**
	* @brief Gets or sets the profile.
	*/
	void setProfile(QString newProfile);

	MediaStreamType type() const;

	void setType(MediaStreamType newType);
	/**
	 * @brief Gets or sets the aspect ratio.
	 */
	QString aspectRatio() const;
	/**
	* @brief Gets or sets the aspect ratio.
	*/
	void setAspectRatio(QString newAspectRatio);
	/**
	 * @brief Gets or sets the index.
	 */
	qint32 index() const;
	/**
	* @brief Gets or sets the index.
	*/
	void setIndex(qint32 newIndex);
	/**
	 * @brief Gets or sets the score.
	 */
	qint32 score() const;
	/**
	* @brief Gets or sets the score.
	*/
	void setScore(qint32 newScore);
	/**
	 * @brief Gets or sets a value indicating whether this instance is external.
	 */
	bool isExternal() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is external.
	*/
	void setIsExternal(bool newIsExternal);

	SubtitleDeliveryMethod deliveryMethod() const;

	void setDeliveryMethod(SubtitleDeliveryMethod newDeliveryMethod);
	/**
	 * @brief Gets or sets the delivery URL.
	 */
	QString deliveryUrl() const;
	/**
	* @brief Gets or sets the delivery URL.
	*/
	void setDeliveryUrl(QString newDeliveryUrl);
	/**
	 * @brief Gets or sets a value indicating whether this instance is external URL.
	 */
	bool isExternalUrl() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is external URL.
	*/
	void setIsExternalUrl(bool newIsExternalUrl);

	bool isTextSubtitleStream() const;

	void setIsTextSubtitleStream(bool newIsTextSubtitleStream);
	/**
	 * @brief Gets or sets a value indicating whether [supports external stream].
	 */
	bool supportsExternalStream() const;
	/**
	* @brief Gets or sets a value indicating whether [supports external stream].
	*/
	void setSupportsExternalStream(bool newSupportsExternalStream);
	/**
	 * @brief Gets or sets the filename.
	 */
	QString path() const;
	/**
	* @brief Gets or sets the filename.
	*/
	void setPath(QString newPath);
	/**
	 * @brief Gets or sets the pixel format.
	 */
	QString pixelFormat() const;
	/**
	* @brief Gets or sets the pixel format.
	*/
	void setPixelFormat(QString newPixelFormat);
	/**
	 * @brief Gets or sets the level.
	 */
	double level() const;
	/**
	* @brief Gets or sets the level.
	*/
	void setLevel(double newLevel);
	/**
	 * @brief Gets a value indicating whether this instance is anamorphic.
	 */
	bool isAnamorphic() const;
	/**
	* @brief Gets a value indicating whether this instance is anamorphic.
	*/
	void setIsAnamorphic(bool newIsAnamorphic);

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

} // NS DTO

namespace Support {

using MediaStream = Jellyfin::DTO::MediaStream;

template <>
MediaStream fromJsonValue<MediaStream>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return MediaStream::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_MEDIASTREAM_H
