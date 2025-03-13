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

#include "JellyfinQt/dto/audiospatialformat.h"
#include "JellyfinQt/dto/mediastreamtype.h"
#include "JellyfinQt/dto/subtitledeliverymethod.h"
#include "JellyfinQt/dto/videorange.h"
#include "JellyfinQt/dto/videorangetype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class MediaStream {
public:
	MediaStream(																																									
		VideoRange videoRange,			
		VideoRangeType videoRangeType,					
		AudioSpatialFormat audioSpatialFormat,																	
		bool isInterlaced,																			
		bool isDefault,			
		bool isForced,			
		bool isHearingImpaired,															
		MediaStreamType type,					
		qint32 index,					
		bool isExternal,			
		SubtitleDeliveryMethod deliveryMethod,							
		bool isTextSubtitleStream,			
		bool supportsExternalStream										
	);

	MediaStream(const MediaStream &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(MediaStream &other);
	
	static MediaStream fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the codec.
	 */
	QString codec() const;
	/**
	* @brief Gets or sets the codec.
	*/
	void setCodec(QString newCodec);
	bool codecNull() const;
	void setCodecNull();

	/**
	 * @brief Gets or sets the codec tag.
	 */
	QString codecTag() const;
	/**
	* @brief Gets or sets the codec tag.
	*/
	void setCodecTag(QString newCodecTag);
	bool codecTagNull() const;
	void setCodecTagNull();

	/**
	 * @brief Gets or sets the language.
	 */
	QString language() const;
	/**
	* @brief Gets or sets the language.
	*/
	void setLanguage(QString newLanguage);
	bool languageNull() const;
	void setLanguageNull();

	/**
	 * @brief Gets or sets the color range.
	 */
	QString colorRange() const;
	/**
	* @brief Gets or sets the color range.
	*/
	void setColorRange(QString newColorRange);
	bool colorRangeNull() const;
	void setColorRangeNull();

	/**
	 * @brief Gets or sets the color space.
	 */
	QString colorSpace() const;
	/**
	* @brief Gets or sets the color space.
	*/
	void setColorSpace(QString newColorSpace);
	bool colorSpaceNull() const;
	void setColorSpaceNull();

	/**
	 * @brief Gets or sets the color transfer.
	 */
	QString colorTransfer() const;
	/**
	* @brief Gets or sets the color transfer.
	*/
	void setColorTransfer(QString newColorTransfer);
	bool colorTransferNull() const;
	void setColorTransferNull();

	/**
	 * @brief Gets or sets the color primaries.
	 */
	QString colorPrimaries() const;
	/**
	* @brief Gets or sets the color primaries.
	*/
	void setColorPrimaries(QString newColorPrimaries);
	bool colorPrimariesNull() const;
	void setColorPrimariesNull();

	/**
	 * @brief Gets or sets the Dolby Vision version major.
	 */
	std::optional<qint32> dvVersionMajor() const;
	/**
	* @brief Gets or sets the Dolby Vision version major.
	*/
	void setDvVersionMajor(std::optional<qint32> newDvVersionMajor);
	bool dvVersionMajorNull() const;
	void setDvVersionMajorNull();

	/**
	 * @brief Gets or sets the Dolby Vision version minor.
	 */
	std::optional<qint32> dvVersionMinor() const;
	/**
	* @brief Gets or sets the Dolby Vision version minor.
	*/
	void setDvVersionMinor(std::optional<qint32> newDvVersionMinor);
	bool dvVersionMinorNull() const;
	void setDvVersionMinorNull();

	/**
	 * @brief Gets or sets the Dolby Vision profile.
	 */
	std::optional<qint32> dvProfile() const;
	/**
	* @brief Gets or sets the Dolby Vision profile.
	*/
	void setDvProfile(std::optional<qint32> newDvProfile);
	bool dvProfileNull() const;
	void setDvProfileNull();

	/**
	 * @brief Gets or sets the Dolby Vision level.
	 */
	std::optional<qint32> dvLevel() const;
	/**
	* @brief Gets or sets the Dolby Vision level.
	*/
	void setDvLevel(std::optional<qint32> newDvLevel);
	bool dvLevelNull() const;
	void setDvLevelNull();

	/**
	 * @brief Gets or sets the Dolby Vision rpu present flag.
	 */
	std::optional<qint32> rpuPresentFlag() const;
	/**
	* @brief Gets or sets the Dolby Vision rpu present flag.
	*/
	void setRpuPresentFlag(std::optional<qint32> newRpuPresentFlag);
	bool rpuPresentFlagNull() const;
	void setRpuPresentFlagNull();

	/**
	 * @brief Gets or sets the Dolby Vision el present flag.
	 */
	std::optional<qint32> elPresentFlag() const;
	/**
	* @brief Gets or sets the Dolby Vision el present flag.
	*/
	void setElPresentFlag(std::optional<qint32> newElPresentFlag);
	bool elPresentFlagNull() const;
	void setElPresentFlagNull();

	/**
	 * @brief Gets or sets the Dolby Vision bl present flag.
	 */
	std::optional<qint32> blPresentFlag() const;
	/**
	* @brief Gets or sets the Dolby Vision bl present flag.
	*/
	void setBlPresentFlag(std::optional<qint32> newBlPresentFlag);
	bool blPresentFlagNull() const;
	void setBlPresentFlagNull();

	/**
	 * @brief Gets or sets the Dolby Vision bl signal compatibility id.
	 */
	std::optional<qint32> dvBlSignalCompatibilityId() const;
	/**
	* @brief Gets or sets the Dolby Vision bl signal compatibility id.
	*/
	void setDvBlSignalCompatibilityId(std::optional<qint32> newDvBlSignalCompatibilityId);
	bool dvBlSignalCompatibilityIdNull() const;
	void setDvBlSignalCompatibilityIdNull();

	/**
	 * @brief Gets or sets the Rotation in degrees.
	 */
	std::optional<qint32> rotation() const;
	/**
	* @brief Gets or sets the Rotation in degrees.
	*/
	void setRotation(std::optional<qint32> newRotation);
	bool rotationNull() const;
	void setRotationNull();

	/**
	 * @brief Gets or sets the comment.
	 */
	QString comment() const;
	/**
	* @brief Gets or sets the comment.
	*/
	void setComment(QString newComment);
	bool commentNull() const;
	void setCommentNull();

	/**
	 * @brief Gets or sets the time base.
	 */
	QString timeBase() const;
	/**
	* @brief Gets or sets the time base.
	*/
	void setTimeBase(QString newTimeBase);
	bool timeBaseNull() const;
	void setTimeBaseNull();

	/**
	 * @brief Gets or sets the codec time base.
	 */
	QString codecTimeBase() const;
	/**
	* @brief Gets or sets the codec time base.
	*/
	void setCodecTimeBase(QString newCodecTimeBase);
	bool codecTimeBaseNull() const;
	void setCodecTimeBaseNull();

	/**
	 * @brief Gets or sets the title.
	 */
	QString title() const;
	/**
	* @brief Gets or sets the title.
	*/
	void setTitle(QString newTitle);
	bool titleNull() const;
	void setTitleNull();


	VideoRange videoRange() const;

	void setVideoRange(VideoRange newVideoRange);


	VideoRangeType videoRangeType() const;

	void setVideoRangeType(VideoRangeType newVideoRangeType);

	/**
	 * @brief Gets the video dovi title.
	 */
	QString videoDoViTitle() const;
	/**
	* @brief Gets the video dovi title.
	*/
	void setVideoDoViTitle(QString newVideoDoViTitle);
	bool videoDoViTitleNull() const;
	void setVideoDoViTitleNull();


	AudioSpatialFormat audioSpatialFormat() const;

	void setAudioSpatialFormat(AudioSpatialFormat newAudioSpatialFormat);


	QString localizedUndefined() const;

	void setLocalizedUndefined(QString newLocalizedUndefined);
	bool localizedUndefinedNull() const;
	void setLocalizedUndefinedNull();


	QString localizedDefault() const;

	void setLocalizedDefault(QString newLocalizedDefault);
	bool localizedDefaultNull() const;
	void setLocalizedDefaultNull();


	QString localizedForced() const;

	void setLocalizedForced(QString newLocalizedForced);
	bool localizedForcedNull() const;
	void setLocalizedForcedNull();


	QString localizedExternal() const;

	void setLocalizedExternal(QString newLocalizedExternal);
	bool localizedExternalNull() const;
	void setLocalizedExternalNull();


	QString localizedHearingImpaired() const;

	void setLocalizedHearingImpaired(QString newLocalizedHearingImpaired);
	bool localizedHearingImpairedNull() const;
	void setLocalizedHearingImpairedNull();


	QString displayTitle() const;

	void setDisplayTitle(QString newDisplayTitle);
	bool displayTitleNull() const;
	void setDisplayTitleNull();


	QString nalLengthSize() const;

	void setNalLengthSize(QString newNalLengthSize);
	bool nalLengthSizeNull() const;
	void setNalLengthSizeNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance is interlaced.
	 */
	bool isInterlaced() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is interlaced.
	*/
	void setIsInterlaced(bool newIsInterlaced);


	std::optional<bool> isAVC() const;

	void setIsAVC(std::optional<bool> newIsAVC);
	bool isAVCNull() const;
	void setIsAVCNull();

	/**
	 * @brief Gets or sets the channel layout.
	 */
	QString channelLayout() const;
	/**
	* @brief Gets or sets the channel layout.
	*/
	void setChannelLayout(QString newChannelLayout);
	bool channelLayoutNull() const;
	void setChannelLayoutNull();

	/**
	 * @brief Gets or sets the bit rate.
	 */
	std::optional<qint32> bitRate() const;
	/**
	* @brief Gets or sets the bit rate.
	*/
	void setBitRate(std::optional<qint32> newBitRate);
	bool bitRateNull() const;
	void setBitRateNull();

	/**
	 * @brief Gets or sets the bit depth.
	 */
	std::optional<qint32> bitDepth() const;
	/**
	* @brief Gets or sets the bit depth.
	*/
	void setBitDepth(std::optional<qint32> newBitDepth);
	bool bitDepthNull() const;
	void setBitDepthNull();

	/**
	 * @brief Gets or sets the reference frames.
	 */
	std::optional<qint32> refFrames() const;
	/**
	* @brief Gets or sets the reference frames.
	*/
	void setRefFrames(std::optional<qint32> newRefFrames);
	bool refFramesNull() const;
	void setRefFramesNull();

	/**
	 * @brief Gets or sets the length of the packet.
	 */
	std::optional<qint32> packetLength() const;
	/**
	* @brief Gets or sets the length of the packet.
	*/
	void setPacketLength(std::optional<qint32> newPacketLength);
	bool packetLengthNull() const;
	void setPacketLengthNull();

	/**
	 * @brief Gets or sets the channels.
	 */
	std::optional<qint32> channels() const;
	/**
	* @brief Gets or sets the channels.
	*/
	void setChannels(std::optional<qint32> newChannels);
	bool channelsNull() const;
	void setChannelsNull();

	/**
	 * @brief Gets or sets the sample rate.
	 */
	std::optional<qint32> sampleRate() const;
	/**
	* @brief Gets or sets the sample rate.
	*/
	void setSampleRate(std::optional<qint32> newSampleRate);
	bool sampleRateNull() const;
	void setSampleRateNull();

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
	 * @brief Gets or sets a value indicating whether this instance is for the hearing impaired.
	 */
	bool isHearingImpaired() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is for the hearing impaired.
	*/
	void setIsHearingImpaired(bool newIsHearingImpaired);

	/**
	 * @brief Gets or sets the height.
	 */
	std::optional<qint32> height() const;
	/**
	* @brief Gets or sets the height.
	*/
	void setHeight(std::optional<qint32> newHeight);
	bool heightNull() const;
	void setHeightNull();

	/**
	 * @brief Gets or sets the width.
	 */
	std::optional<qint32> width() const;
	/**
	* @brief Gets or sets the width.
	*/
	void setWidth(std::optional<qint32> newWidth);
	bool widthNull() const;
	void setWidthNull();

	/**
	 * @brief Gets or sets the average frame rate.
	 */
	std::optional<float> averageFrameRate() const;
	/**
	* @brief Gets or sets the average frame rate.
	*/
	void setAverageFrameRate(std::optional<float> newAverageFrameRate);
	bool averageFrameRateNull() const;
	void setAverageFrameRateNull();

	/**
	 * @brief Gets or sets the real frame rate.
	 */
	std::optional<float> realFrameRate() const;
	/**
	* @brief Gets or sets the real frame rate.
	*/
	void setRealFrameRate(std::optional<float> newRealFrameRate);
	bool realFrameRateNull() const;
	void setRealFrameRateNull();

	/**
	 * @brief Gets the framerate used as reference.
Prefer AverageFrameRate, if that is null or an unrealistic value
then fallback to RealFrameRate.
	 */
	std::optional<float> referenceFrameRate() const;
	/**
	* @brief Gets the framerate used as reference.
Prefer AverageFrameRate, if that is null or an unrealistic value
then fallback to RealFrameRate.
	*/
	void setReferenceFrameRate(std::optional<float> newReferenceFrameRate);
	bool referenceFrameRateNull() const;
	void setReferenceFrameRateNull();

	/**
	 * @brief Gets or sets the profile.
	 */
	QString profile() const;
	/**
	* @brief Gets or sets the profile.
	*/
	void setProfile(QString newProfile);
	bool profileNull() const;
	void setProfileNull();


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
	bool aspectRatioNull() const;
	void setAspectRatioNull();

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
	std::optional<qint32> score() const;
	/**
	* @brief Gets or sets the score.
	*/
	void setScore(std::optional<qint32> newScore);
	bool scoreNull() const;
	void setScoreNull();

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
	bool deliveryUrlNull() const;
	void setDeliveryUrlNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance is external URL.
	 */
	std::optional<bool> isExternalUrl() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is external URL.
	*/
	void setIsExternalUrl(std::optional<bool> newIsExternalUrl);
	bool isExternalUrlNull() const;
	void setIsExternalUrlNull();


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
	bool pathNull() const;
	void setPathNull();

	/**
	 * @brief Gets or sets the pixel format.
	 */
	QString pixelFormat() const;
	/**
	* @brief Gets or sets the pixel format.
	*/
	void setPixelFormat(QString newPixelFormat);
	bool pixelFormatNull() const;
	void setPixelFormatNull();

	/**
	 * @brief Gets or sets the level.
	 */
	std::optional<double> level() const;
	/**
	* @brief Gets or sets the level.
	*/
	void setLevel(std::optional<double> newLevel);
	bool levelNull() const;
	void setLevelNull();

	/**
	 * @brief Gets or sets whether this instance is anamorphic.
	 */
	std::optional<bool> isAnamorphic() const;
	/**
	* @brief Gets or sets whether this instance is anamorphic.
	*/
	void setIsAnamorphic(std::optional<bool> newIsAnamorphic);
	bool isAnamorphicNull() const;
	void setIsAnamorphicNull();


protected:
	QString m_codec;
	QString m_codecTag;
	QString m_language;
	QString m_colorRange;
	QString m_colorSpace;
	QString m_colorTransfer;
	QString m_colorPrimaries;
	std::optional<qint32> m_dvVersionMajor = std::nullopt;
	std::optional<qint32> m_dvVersionMinor = std::nullopt;
	std::optional<qint32> m_dvProfile = std::nullopt;
	std::optional<qint32> m_dvLevel = std::nullopt;
	std::optional<qint32> m_rpuPresentFlag = std::nullopt;
	std::optional<qint32> m_elPresentFlag = std::nullopt;
	std::optional<qint32> m_blPresentFlag = std::nullopt;
	std::optional<qint32> m_dvBlSignalCompatibilityId = std::nullopt;
	std::optional<qint32> m_rotation = std::nullopt;
	QString m_comment;
	QString m_timeBase;
	QString m_codecTimeBase;
	QString m_title;
	VideoRange m_videoRange;
	VideoRangeType m_videoRangeType;
	QString m_videoDoViTitle;
	AudioSpatialFormat m_audioSpatialFormat;
	QString m_localizedUndefined;
	QString m_localizedDefault;
	QString m_localizedForced;
	QString m_localizedExternal;
	QString m_localizedHearingImpaired;
	QString m_displayTitle;
	QString m_nalLengthSize;
	bool m_isInterlaced;
	std::optional<bool> m_isAVC = std::nullopt;
	QString m_channelLayout;
	std::optional<qint32> m_bitRate = std::nullopt;
	std::optional<qint32> m_bitDepth = std::nullopt;
	std::optional<qint32> m_refFrames = std::nullopt;
	std::optional<qint32> m_packetLength = std::nullopt;
	std::optional<qint32> m_channels = std::nullopt;
	std::optional<qint32> m_sampleRate = std::nullopt;
	bool m_isDefault;
	bool m_isForced;
	bool m_isHearingImpaired;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;
	std::optional<float> m_averageFrameRate = std::nullopt;
	std::optional<float> m_realFrameRate = std::nullopt;
	std::optional<float> m_referenceFrameRate = std::nullopt;
	QString m_profile;
	MediaStreamType m_type;
	QString m_aspectRatio;
	qint32 m_index;
	std::optional<qint32> m_score = std::nullopt;
	bool m_isExternal;
	SubtitleDeliveryMethod m_deliveryMethod;
	QString m_deliveryUrl;
	std::optional<bool> m_isExternalUrl = std::nullopt;
	bool m_isTextSubtitleStream;
	bool m_supportsExternalStream;
	QString m_path;
	QString m_pixelFormat;
	std::optional<double> m_level = std::nullopt;
	std::optional<bool> m_isAnamorphic = std::nullopt;

private:
	// Private constructor which generates an invalid object, for use withing MediaStream::fromJson();
	MediaStream();
};


} // NS DTO

namespace Support {

using MediaStream = Jellyfin::DTO::MediaStream;

template <>
MediaStream fromJsonValue(const QJsonValue &source, convertType<MediaStream>);

template<>
QJsonValue toJsonValue(const MediaStream &source, convertType<MediaStream>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_MEDIASTREAM_H
