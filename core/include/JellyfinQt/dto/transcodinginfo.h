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

#ifndef JELLYFIN_DTO_TRANSCODINGINFO_H
#define JELLYFIN_DTO_TRANSCODINGINFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/hardwareaccelerationtype.h"
#include "JellyfinQt/dto/transcodereason.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class TranscodingInfo {
public:
	TranscodingInfo(							
		bool isVideoDirect,			
		bool isAudioDirect,															
		HardwareAccelerationType hardwareAccelerationType,			
		QList<TranscodeReason> transcodeReasons		
	);

	TranscodingInfo(const TranscodingInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(TranscodingInfo &other);
	
	static TranscodingInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the thread count used for encoding.
	 */
	QString audioCodec() const;
	/**
	* @brief Gets or sets the thread count used for encoding.
	*/
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();

	/**
	 * @brief Gets or sets the thread count used for encoding.
	 */
	QString videoCodec() const;
	/**
	* @brief Gets or sets the thread count used for encoding.
	*/
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();

	/**
	 * @brief Gets or sets the thread count used for encoding.
	 */
	QString container() const;
	/**
	* @brief Gets or sets the thread count used for encoding.
	*/
	void setContainer(QString newContainer);
	bool containerNull() const;
	void setContainerNull();

	/**
	 * @brief Gets or sets a value indicating whether the video is passed through.
	 */
	bool isVideoDirect() const;
	/**
	* @brief Gets or sets a value indicating whether the video is passed through.
	*/
	void setIsVideoDirect(bool newIsVideoDirect);

	/**
	 * @brief Gets or sets a value indicating whether the audio is passed through.
	 */
	bool isAudioDirect() const;
	/**
	* @brief Gets or sets a value indicating whether the audio is passed through.
	*/
	void setIsAudioDirect(bool newIsAudioDirect);

	/**
	 * @brief Gets or sets the bitrate.
	 */
	std::optional<qint32> bitrate() const;
	/**
	* @brief Gets or sets the bitrate.
	*/
	void setBitrate(std::optional<qint32> newBitrate);
	bool bitrateNull() const;
	void setBitrateNull();

	/**
	 * @brief Gets or sets the framerate.
	 */
	std::optional<float> framerate() const;
	/**
	* @brief Gets or sets the framerate.
	*/
	void setFramerate(std::optional<float> newFramerate);
	bool framerateNull() const;
	void setFramerateNull();

	/**
	 * @brief Gets or sets the completion percentage.
	 */
	std::optional<double> completionPercentage() const;
	/**
	* @brief Gets or sets the completion percentage.
	*/
	void setCompletionPercentage(std::optional<double> newCompletionPercentage);
	bool completionPercentageNull() const;
	void setCompletionPercentageNull();

	/**
	 * @brief Gets or sets the video width.
	 */
	std::optional<qint32> width() const;
	/**
	* @brief Gets or sets the video width.
	*/
	void setWidth(std::optional<qint32> newWidth);
	bool widthNull() const;
	void setWidthNull();

	/**
	 * @brief Gets or sets the video height.
	 */
	std::optional<qint32> height() const;
	/**
	* @brief Gets or sets the video height.
	*/
	void setHeight(std::optional<qint32> newHeight);
	bool heightNull() const;
	void setHeightNull();

	/**
	 * @brief Gets or sets the audio channels.
	 */
	std::optional<qint32> audioChannels() const;
	/**
	* @brief Gets or sets the audio channels.
	*/
	void setAudioChannels(std::optional<qint32> newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();


	HardwareAccelerationType hardwareAccelerationType() const;

	void setHardwareAccelerationType(HardwareAccelerationType newHardwareAccelerationType);

	/**
	 * @brief Gets or sets the transcode reasons.
	 */
	QList<TranscodeReason> transcodeReasons() const;
	/**
	* @brief Gets or sets the transcode reasons.
	*/
	void setTranscodeReasons(QList<TranscodeReason> newTranscodeReasons);


protected:
	QString m_audioCodec;
	QString m_videoCodec;
	QString m_container;
	bool m_isVideoDirect;
	bool m_isAudioDirect;
	std::optional<qint32> m_bitrate = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<double> m_completionPercentage = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_audioChannels = std::nullopt;
	HardwareAccelerationType m_hardwareAccelerationType;
	QList<TranscodeReason> m_transcodeReasons;

private:
	// Private constructor which generates an invalid object, for use withing TranscodingInfo::fromJson();
	TranscodingInfo();
};


} // NS DTO

namespace Support {

using TranscodingInfo = Jellyfin::DTO::TranscodingInfo;

template <>
TranscodingInfo fromJsonValue(const QJsonValue &source, convertType<TranscodingInfo>);

template<>
QJsonValue toJsonValue(const TranscodingInfo &source, convertType<TranscodingInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_TRANSCODINGINFO_H
