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

#ifndef JELLYFIN_DTO_MEDIASOURCEINFO_H
#define JELLYFIN_DTO_MEDIASOURCEINFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/isotype.h"
#include "JellyfinQt/dto/mediaattachment.h"
#include "JellyfinQt/dto/mediaprotocol.h"
#include "JellyfinQt/dto/mediasourcetype.h"
#include "JellyfinQt/dto/mediastream.h"
#include "JellyfinQt/dto/mediastreamprotocol.h"
#include "JellyfinQt/dto/transportstreamtimestamp.h"
#include "JellyfinQt/dto/video3dformat.h"
#include "JellyfinQt/dto/videotype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class MediaSourceInfo {
public:
	MediaSourceInfo(	
		MediaProtocol protocol,									
		MediaProtocol encoderProtocol,			
		MediaSourceType type,									
		bool isRemote,							
		bool readAtNativeFramerate,			
		bool ignoreDts,			
		bool ignoreIndex,			
		bool genPtsInput,			
		bool supportsTranscoding,			
		bool supportsDirectStream,			
		bool supportsDirectPlay,			
		bool isInfiniteStream,			
		std::optional<bool> useMostCompatibleTranscodingProfile,			
		bool requiresOpening,					
		bool requiresClosing,							
		bool requiresLooping,			
		bool supportsProbing,			
		VideoType videoType,			
		IsoType isoType,			
		Video3DFormat video3DFormat,													
		TransportStreamTimestamp timestamp,							
		MediaStreamProtocol transcodingSubProtocol,											
		bool hasSegments		
	);

	MediaSourceInfo(const MediaSourceInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(MediaSourceInfo &other);
	
	static MediaSourceInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	MediaProtocol protocol() const;

	void setProtocol(MediaProtocol newProtocol);


	QString jellyfinId() const;

	void setJellyfinId(QString newJellyfinId);
	bool jellyfinIdNull() const;
	void setJellyfinIdNull();


	QString path() const;

	void setPath(QString newPath);
	bool pathNull() const;
	void setPathNull();


	QString encoderPath() const;

	void setEncoderPath(QString newEncoderPath);
	bool encoderPathNull() const;
	void setEncoderPathNull();


	MediaProtocol encoderProtocol() const;

	void setEncoderProtocol(MediaProtocol newEncoderProtocol);


	MediaSourceType type() const;

	void setType(MediaSourceType newType);


	QString container() const;

	void setContainer(QString newContainer);
	bool containerNull() const;
	void setContainerNull();


	std::optional<qint64> size() const;

	void setSize(std::optional<qint64> newSize);
	bool sizeNull() const;
	void setSizeNull();


	QString name() const;

	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();

	/**
	 * @brief Gets or sets a value indicating whether the media is remote.
Differentiate internet url vs local network.
	 */
	bool isRemote() const;
	/**
	* @brief Gets or sets a value indicating whether the media is remote.
Differentiate internet url vs local network.
	*/
	void setIsRemote(bool newIsRemote);


	QString eTag() const;

	void setETag(QString newETag);
	bool eTagNull() const;
	void setETagNull();


	std::optional<qint64> runTimeTicks() const;

	void setRunTimeTicks(std::optional<qint64> newRunTimeTicks);
	bool runTimeTicksNull() const;
	void setRunTimeTicksNull();


	bool readAtNativeFramerate() const;

	void setReadAtNativeFramerate(bool newReadAtNativeFramerate);


	bool ignoreDts() const;

	void setIgnoreDts(bool newIgnoreDts);


	bool ignoreIndex() const;

	void setIgnoreIndex(bool newIgnoreIndex);


	bool genPtsInput() const;

	void setGenPtsInput(bool newGenPtsInput);


	bool supportsTranscoding() const;

	void setSupportsTranscoding(bool newSupportsTranscoding);


	bool supportsDirectStream() const;

	void setSupportsDirectStream(bool newSupportsDirectStream);


	bool supportsDirectPlay() const;

	void setSupportsDirectPlay(bool newSupportsDirectPlay);


	bool isInfiniteStream() const;

	void setIsInfiniteStream(bool newIsInfiniteStream);


	std::optional<bool> useMostCompatibleTranscodingProfile() const;

	void setUseMostCompatibleTranscodingProfile(std::optional<bool> newUseMostCompatibleTranscodingProfile);


	bool requiresOpening() const;

	void setRequiresOpening(bool newRequiresOpening);


	QString openToken() const;

	void setOpenToken(QString newOpenToken);
	bool openTokenNull() const;
	void setOpenTokenNull();


	bool requiresClosing() const;

	void setRequiresClosing(bool newRequiresClosing);


	QString liveStreamId() const;

	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();


	std::optional<qint32> bufferMs() const;

	void setBufferMs(std::optional<qint32> newBufferMs);
	bool bufferMsNull() const;
	void setBufferMsNull();


	bool requiresLooping() const;

	void setRequiresLooping(bool newRequiresLooping);


	bool supportsProbing() const;

	void setSupportsProbing(bool newSupportsProbing);


	VideoType videoType() const;

	void setVideoType(VideoType newVideoType);


	IsoType isoType() const;

	void setIsoType(IsoType newIsoType);


	Video3DFormat video3DFormat() const;

	void setVideo3DFormat(Video3DFormat newVideo3DFormat);


	QList<MediaStream> mediaStreams() const;

	void setMediaStreams(QList<MediaStream> newMediaStreams);
	bool mediaStreamsNull() const;
	void setMediaStreamsNull();


	QList<MediaAttachment> mediaAttachments() const;

	void setMediaAttachments(QList<MediaAttachment> newMediaAttachments);
	bool mediaAttachmentsNull() const;
	void setMediaAttachmentsNull();


	QStringList formats() const;

	void setFormats(QStringList newFormats);
	bool formatsNull() const;
	void setFormatsNull();


	std::optional<qint32> bitrate() const;

	void setBitrate(std::optional<qint32> newBitrate);
	bool bitrateNull() const;
	void setBitrateNull();


	std::optional<qint32> fallbackMaxStreamingBitrate() const;

	void setFallbackMaxStreamingBitrate(std::optional<qint32> newFallbackMaxStreamingBitrate);
	bool fallbackMaxStreamingBitrateNull() const;
	void setFallbackMaxStreamingBitrateNull();


	TransportStreamTimestamp timestamp() const;

	void setTimestamp(TransportStreamTimestamp newTimestamp);


	QJsonObject requiredHttpHeaders() const;

	void setRequiredHttpHeaders(QJsonObject newRequiredHttpHeaders);
	bool requiredHttpHeadersNull() const;
	void setRequiredHttpHeadersNull();


	QString transcodingUrl() const;

	void setTranscodingUrl(QString newTranscodingUrl);
	bool transcodingUrlNull() const;
	void setTranscodingUrlNull();


	MediaStreamProtocol transcodingSubProtocol() const;

	void setTranscodingSubProtocol(MediaStreamProtocol newTranscodingSubProtocol);


	QString transcodingContainer() const;

	void setTranscodingContainer(QString newTranscodingContainer);
	bool transcodingContainerNull() const;
	void setTranscodingContainerNull();


	std::optional<qint32> analyzeDurationMs() const;

	void setAnalyzeDurationMs(std::optional<qint32> newAnalyzeDurationMs);
	bool analyzeDurationMsNull() const;
	void setAnalyzeDurationMsNull();


	std::optional<qint32> defaultAudioStreamIndex() const;

	void setDefaultAudioStreamIndex(std::optional<qint32> newDefaultAudioStreamIndex);
	bool defaultAudioStreamIndexNull() const;
	void setDefaultAudioStreamIndexNull();


	std::optional<qint32> defaultSubtitleStreamIndex() const;

	void setDefaultSubtitleStreamIndex(std::optional<qint32> newDefaultSubtitleStreamIndex);
	bool defaultSubtitleStreamIndexNull() const;
	void setDefaultSubtitleStreamIndexNull();


	bool hasSegments() const;

	void setHasSegments(bool newHasSegments);


protected:
	MediaProtocol m_protocol;
	QString m_jellyfinId;
	QString m_path;
	QString m_encoderPath;
	MediaProtocol m_encoderProtocol;
	MediaSourceType m_type;
	QString m_container;
	std::optional<qint64> m_size = std::nullopt;
	QString m_name;
	bool m_isRemote;
	QString m_eTag;
	std::optional<qint64> m_runTimeTicks = std::nullopt;
	bool m_readAtNativeFramerate;
	bool m_ignoreDts;
	bool m_ignoreIndex;
	bool m_genPtsInput;
	bool m_supportsTranscoding;
	bool m_supportsDirectStream;
	bool m_supportsDirectPlay;
	bool m_isInfiniteStream;
	std::optional<bool> m_useMostCompatibleTranscodingProfile = std::nullopt;
	bool m_requiresOpening;
	QString m_openToken;
	bool m_requiresClosing;
	QString m_liveStreamId;
	std::optional<qint32> m_bufferMs = std::nullopt;
	bool m_requiresLooping;
	bool m_supportsProbing;
	VideoType m_videoType;
	IsoType m_isoType;
	Video3DFormat m_video3DFormat;
	QList<MediaStream> m_mediaStreams;
	QList<MediaAttachment> m_mediaAttachments;
	QStringList m_formats;
	std::optional<qint32> m_bitrate = std::nullopt;
	std::optional<qint32> m_fallbackMaxStreamingBitrate = std::nullopt;
	TransportStreamTimestamp m_timestamp;
	QJsonObject m_requiredHttpHeaders;
	QString m_transcodingUrl;
	MediaStreamProtocol m_transcodingSubProtocol;
	QString m_transcodingContainer;
	std::optional<qint32> m_analyzeDurationMs = std::nullopt;
	std::optional<qint32> m_defaultAudioStreamIndex = std::nullopt;
	std::optional<qint32> m_defaultSubtitleStreamIndex = std::nullopt;
	bool m_hasSegments;

private:
	// Private constructor which generates an invalid object, for use withing MediaSourceInfo::fromJson();
	MediaSourceInfo();
};


} // NS DTO

namespace Support {

using MediaSourceInfo = Jellyfin::DTO::MediaSourceInfo;

template <>
MediaSourceInfo fromJsonValue(const QJsonValue &source, convertType<MediaSourceInfo>);

template<>
QJsonValue toJsonValue(const MediaSourceInfo &source, convertType<MediaSourceInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_MEDIASOURCEINFO_H
