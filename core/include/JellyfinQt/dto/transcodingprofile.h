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

#ifndef JELLYFIN_DTO_TRANSCODINGPROFILE_H
#define JELLYFIN_DTO_TRANSCODINGPROFILE_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/dlnaprofiletype.h"
#include "JellyfinQt/dto/encodingcontext.h"
#include "JellyfinQt/dto/mediastreamprotocol.h"
#include "JellyfinQt/dto/profilecondition.h"
#include "JellyfinQt/dto/transcodeseekinfo.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class TranscodingProfile {
public:
	TranscodingProfile(	
		QString container,			
		DlnaProfileType type,			
		QString videoCodec,			
		QString audioCodec,			
		MediaStreamProtocol protocol,			
		std::optional<bool> estimateContentLength,			
		std::optional<bool> enableMpegtsM2TsMode,			
		TranscodeSeekInfo transcodeSeekInfo,			
		std::optional<bool> copyTimestamps,			
		EncodingContext context,			
		std::optional<bool> enableSubtitlesInManifest,					
		std::optional<qint32> minSegments,			
		std::optional<qint32> segmentLength,			
		std::optional<bool> breakOnNonKeyFrames,			
		QList<ProfileCondition> conditions,			
		std::optional<bool> enableAudioVbrEncoding		
	);

	TranscodingProfile(const TranscodingProfile &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(TranscodingProfile &other);
	
	static TranscodingProfile fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the container.
	 */
	QString container() const;
	/**
	* @brief Gets or sets the container.
	*/
	void setContainer(QString newContainer);


	DlnaProfileType type() const;

	void setType(DlnaProfileType newType);

	/**
	 * @brief Gets or sets the video codec.
	 */
	QString videoCodec() const;
	/**
	* @brief Gets or sets the video codec.
	*/
	void setVideoCodec(QString newVideoCodec);

	/**
	 * @brief Gets or sets the audio codec.
	 */
	QString audioCodec() const;
	/**
	* @brief Gets or sets the audio codec.
	*/
	void setAudioCodec(QString newAudioCodec);


	MediaStreamProtocol protocol() const;

	void setProtocol(MediaStreamProtocol newProtocol);

	/**
	 * @brief Gets or sets a value indicating whether the content length should be estimated.
	 */
	std::optional<bool> estimateContentLength() const;
	/**
	* @brief Gets or sets a value indicating whether the content length should be estimated.
	*/
	void setEstimateContentLength(std::optional<bool> newEstimateContentLength);

	/**
	 * @brief Gets or sets a value indicating whether M2TS mode is enabled.
	 */
	std::optional<bool> enableMpegtsM2TsMode() const;
	/**
	* @brief Gets or sets a value indicating whether M2TS mode is enabled.
	*/
	void setEnableMpegtsM2TsMode(std::optional<bool> newEnableMpegtsM2TsMode);


	TranscodeSeekInfo transcodeSeekInfo() const;

	void setTranscodeSeekInfo(TranscodeSeekInfo newTranscodeSeekInfo);

	/**
	 * @brief Gets or sets a value indicating whether timestamps should be copied.
	 */
	std::optional<bool> copyTimestamps() const;
	/**
	* @brief Gets or sets a value indicating whether timestamps should be copied.
	*/
	void setCopyTimestamps(std::optional<bool> newCopyTimestamps);


	EncodingContext context() const;

	void setContext(EncodingContext newContext);

	/**
	 * @brief Gets or sets a value indicating whether subtitles are allowed in the manifest.
	 */
	std::optional<bool> enableSubtitlesInManifest() const;
	/**
	* @brief Gets or sets a value indicating whether subtitles are allowed in the manifest.
	*/
	void setEnableSubtitlesInManifest(std::optional<bool> newEnableSubtitlesInManifest);

	/**
	 * @brief Gets or sets the maximum audio channels.
	 */
	QString maxAudioChannels() const;
	/**
	* @brief Gets or sets the maximum audio channels.
	*/
	void setMaxAudioChannels(QString newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();

	/**
	 * @brief Gets or sets the minimum amount of segments.
	 */
	std::optional<qint32> minSegments() const;
	/**
	* @brief Gets or sets the minimum amount of segments.
	*/
	void setMinSegments(std::optional<qint32> newMinSegments);

	/**
	 * @brief Gets or sets the segment length.
	 */
	std::optional<qint32> segmentLength() const;
	/**
	* @brief Gets or sets the segment length.
	*/
	void setSegmentLength(std::optional<qint32> newSegmentLength);

	/**
	 * @brief Gets or sets a value indicating whether breaking the video stream on non-keyframes is supported.
	 */
	std::optional<bool> breakOnNonKeyFrames() const;
	/**
	* @brief Gets or sets a value indicating whether breaking the video stream on non-keyframes is supported.
	*/
	void setBreakOnNonKeyFrames(std::optional<bool> newBreakOnNonKeyFrames);

	/**
	 * @brief Gets or sets the profile conditions.
	 */
	QList<ProfileCondition> conditions() const;
	/**
	* @brief Gets or sets the profile conditions.
	*/
	void setConditions(QList<ProfileCondition> newConditions);

	/**
	 * @brief Gets or sets a value indicating whether variable bitrate encoding is supported.
	 */
	std::optional<bool> enableAudioVbrEncoding() const;
	/**
	* @brief Gets or sets a value indicating whether variable bitrate encoding is supported.
	*/
	void setEnableAudioVbrEncoding(std::optional<bool> newEnableAudioVbrEncoding);


protected:
	QString m_container;
	DlnaProfileType m_type;
	QString m_videoCodec;
	QString m_audioCodec;
	MediaStreamProtocol m_protocol;
	std::optional<bool> m_estimateContentLength = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	TranscodeSeekInfo m_transcodeSeekInfo;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_enableSubtitlesInManifest = std::nullopt;
	QString m_maxAudioChannels;
	std::optional<qint32> m_minSegments = std::nullopt;
	std::optional<qint32> m_segmentLength = std::nullopt;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	QList<ProfileCondition> m_conditions;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;

private:
	// Private constructor which generates an invalid object, for use withing TranscodingProfile::fromJson();
	TranscodingProfile();
};


} // NS DTO

namespace Support {

using TranscodingProfile = Jellyfin::DTO::TranscodingProfile;

template <>
TranscodingProfile fromJsonValue(const QJsonValue &source, convertType<TranscodingProfile>);

template<>
QJsonValue toJsonValue(const TranscodingProfile &source, convertType<TranscodingProfile>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_TRANSCODINGPROFILE_H
