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
		bool isAudioDirect																
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

	QString audioCodec() const;

	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();


	QString videoCodec() const;

	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();


	QString container() const;

	void setContainer(QString newContainer);
	bool containerNull() const;
	void setContainerNull();


	bool isVideoDirect() const;

	void setIsVideoDirect(bool newIsVideoDirect);


	bool isAudioDirect() const;

	void setIsAudioDirect(bool newIsAudioDirect);


	std::optional<qint32> bitrate() const;

	void setBitrate(std::optional<qint32> newBitrate);
	bool bitrateNull() const;
	void setBitrateNull();


	std::optional<float> framerate() const;

	void setFramerate(std::optional<float> newFramerate);
	bool framerateNull() const;
	void setFramerateNull();


	std::optional<double> completionPercentage() const;

	void setCompletionPercentage(std::optional<double> newCompletionPercentage);
	bool completionPercentageNull() const;
	void setCompletionPercentageNull();


	std::optional<qint32> width() const;

	void setWidth(std::optional<qint32> newWidth);
	bool widthNull() const;
	void setWidthNull();


	std::optional<qint32> height() const;

	void setHeight(std::optional<qint32> newHeight);
	bool heightNull() const;
	void setHeightNull();


	std::optional<qint32> audioChannels() const;

	void setAudioChannels(std::optional<qint32> newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();


	QList<TranscodeReason> transcodeReasons() const;

	void setTranscodeReasons(QList<TranscodeReason> newTranscodeReasons);
	bool transcodeReasonsNull() const;
	void setTranscodeReasonsNull();


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
