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
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/DTO/isotype.h"
#include "JellyfinQt/DTO/mediaattachment.h"
#include "JellyfinQt/DTO/mediaprotocol.h"
#include "JellyfinQt/DTO/mediasourcetype.h"
#include "JellyfinQt/DTO/mediastream.h"
#include "JellyfinQt/DTO/transportstreamtimestamp.h"
#include "JellyfinQt/DTO/video3dformat.h"
#include "JellyfinQt/DTO/videotype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class MediaSourceInfo {
public:MediaSourceInfo();MediaSourceInfo(const MediaSourceInfo &other);
	
	static MediaSourceInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties

	MediaProtocol protocol() const;

	void setProtocol(MediaProtocol newProtocol);

	QString jellyfinId() const;

	void setJellyfinId(QString newJellyfinId);

	QString path() const;

	void setPath(QString newPath);

	QString encoderPath() const;

	void setEncoderPath(QString newEncoderPath);

	MediaProtocol encoderProtocol() const;

	void setEncoderProtocol(MediaProtocol newEncoderProtocol);

	MediaSourceType type() const;

	void setType(MediaSourceType newType);

	QString container() const;

	void setContainer(QString newContainer);

	qint64 size() const;

	void setSize(qint64 newSize);

	QString name() const;

	void setName(QString newName);
	/**
	 * @brief Differentiate internet url vs local network.
	 */
	bool isRemote() const;
	/**
	* @brief Differentiate internet url vs local network.
	*/
	void setIsRemote(bool newIsRemote);

	QString eTag() const;

	void setETag(QString newETag);

	qint64 runTimeTicks() const;

	void setRunTimeTicks(qint64 newRunTimeTicks);

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

	bool requiresOpening() const;

	void setRequiresOpening(bool newRequiresOpening);

	QString openToken() const;

	void setOpenToken(QString newOpenToken);

	bool requiresClosing() const;

	void setRequiresClosing(bool newRequiresClosing);

	QString liveStreamId() const;

	void setLiveStreamId(QString newLiveStreamId);

	qint32 bufferMs() const;

	void setBufferMs(qint32 newBufferMs);

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

	QList<QSharedPointer<MediaStream>> mediaStreams() const;

	void setMediaStreams(QList<QSharedPointer<MediaStream>> newMediaStreams);

	QList<QSharedPointer<MediaAttachment>> mediaAttachments() const;

	void setMediaAttachments(QList<QSharedPointer<MediaAttachment>> newMediaAttachments);

	QStringList formats() const;

	void setFormats(QStringList newFormats);

	qint32 bitrate() const;

	void setBitrate(qint32 newBitrate);

	TransportStreamTimestamp timestamp() const;

	void setTimestamp(TransportStreamTimestamp newTimestamp);

	QJsonObject requiredHttpHeaders() const;

	void setRequiredHttpHeaders(QJsonObject newRequiredHttpHeaders);

	QString transcodingUrl() const;

	void setTranscodingUrl(QString newTranscodingUrl);

	QString transcodingSubProtocol() const;

	void setTranscodingSubProtocol(QString newTranscodingSubProtocol);

	QString transcodingContainer() const;

	void setTranscodingContainer(QString newTranscodingContainer);

	qint32 analyzeDurationMs() const;

	void setAnalyzeDurationMs(qint32 newAnalyzeDurationMs);

	qint32 defaultAudioStreamIndex() const;

	void setDefaultAudioStreamIndex(qint32 newDefaultAudioStreamIndex);

	qint32 defaultSubtitleStreamIndex() const;

	void setDefaultSubtitleStreamIndex(qint32 newDefaultSubtitleStreamIndex);

protected:
	MediaProtocol m_protocol;
	QString m_jellyfinId;
	QString m_path;
	QString m_encoderPath;
	MediaProtocol m_encoderProtocol;
	MediaSourceType m_type;
	QString m_container;
	qint64 m_size;
	QString m_name;
	bool m_isRemote;
	QString m_eTag;
	qint64 m_runTimeTicks;
	bool m_readAtNativeFramerate;
	bool m_ignoreDts;
	bool m_ignoreIndex;
	bool m_genPtsInput;
	bool m_supportsTranscoding;
	bool m_supportsDirectStream;
	bool m_supportsDirectPlay;
	bool m_isInfiniteStream;
	bool m_requiresOpening;
	QString m_openToken;
	bool m_requiresClosing;
	QString m_liveStreamId;
	qint32 m_bufferMs;
	bool m_requiresLooping;
	bool m_supportsProbing;
	VideoType m_videoType;
	IsoType m_isoType;
	Video3DFormat m_video3DFormat;
	QList<QSharedPointer<MediaStream>> m_mediaStreams;
	QList<QSharedPointer<MediaAttachment>> m_mediaAttachments;
	QStringList m_formats;
	qint32 m_bitrate;
	TransportStreamTimestamp m_timestamp;
	QJsonObject m_requiredHttpHeaders;
	QString m_transcodingUrl;
	QString m_transcodingSubProtocol;
	QString m_transcodingContainer;
	qint32 m_analyzeDurationMs;
	qint32 m_defaultAudioStreamIndex;
	qint32 m_defaultSubtitleStreamIndex;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_MEDIASOURCEINFO_H
