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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/isotype.h"
#include "JellyfinQt/DTO/mediaprotocol.h"
#include "JellyfinQt/DTO/mediasourcetype.h"
#include "JellyfinQt/DTO/transportstreamtimestamp.h"
#include "JellyfinQt/DTO/video3dformat.h"
#include "JellyfinQt/DTO/videotype.h"

namespace Jellyfin {
namespace DTO {

class MediaAttachment;
class MediaStream;

class MediaSourceInfo : public QObject {
	Q_OBJECT
public:
	explicit MediaSourceInfo(QObject *parent = nullptr);
	static MediaSourceInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(MediaProtocol protocol READ protocol WRITE setProtocol NOTIFY protocolChanged)
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	Q_PROPERTY(QString path READ path WRITE setPath NOTIFY pathChanged)
	Q_PROPERTY(QString encoderPath READ encoderPath WRITE setEncoderPath NOTIFY encoderPathChanged)
	Q_PROPERTY(MediaProtocol encoderProtocol READ encoderProtocol WRITE setEncoderProtocol NOTIFY encoderProtocolChanged)
	Q_PROPERTY(MediaSourceType type READ type WRITE setType NOTIFY typeChanged)
	Q_PROPERTY(QString container READ container WRITE setContainer NOTIFY containerChanged)
	Q_PROPERTY(qint64 size READ size WRITE setSize NOTIFY sizeChanged)
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Differentiate internet url vs local network.
	 */
	Q_PROPERTY(bool isRemote READ isRemote WRITE setIsRemote NOTIFY isRemoteChanged)
	Q_PROPERTY(QString eTag READ eTag WRITE setETag NOTIFY eTagChanged)
	Q_PROPERTY(qint64 runTimeTicks READ runTimeTicks WRITE setRunTimeTicks NOTIFY runTimeTicksChanged)
	Q_PROPERTY(bool readAtNativeFramerate READ readAtNativeFramerate WRITE setReadAtNativeFramerate NOTIFY readAtNativeFramerateChanged)
	Q_PROPERTY(bool ignoreDts READ ignoreDts WRITE setIgnoreDts NOTIFY ignoreDtsChanged)
	Q_PROPERTY(bool ignoreIndex READ ignoreIndex WRITE setIgnoreIndex NOTIFY ignoreIndexChanged)
	Q_PROPERTY(bool genPtsInput READ genPtsInput WRITE setGenPtsInput NOTIFY genPtsInputChanged)
	Q_PROPERTY(bool supportsTranscoding READ supportsTranscoding WRITE setSupportsTranscoding NOTIFY supportsTranscodingChanged)
	Q_PROPERTY(bool supportsDirectStream READ supportsDirectStream WRITE setSupportsDirectStream NOTIFY supportsDirectStreamChanged)
	Q_PROPERTY(bool supportsDirectPlay READ supportsDirectPlay WRITE setSupportsDirectPlay NOTIFY supportsDirectPlayChanged)
	Q_PROPERTY(bool isInfiniteStream READ isInfiniteStream WRITE setIsInfiniteStream NOTIFY isInfiniteStreamChanged)
	Q_PROPERTY(bool requiresOpening READ requiresOpening WRITE setRequiresOpening NOTIFY requiresOpeningChanged)
	Q_PROPERTY(QString openToken READ openToken WRITE setOpenToken NOTIFY openTokenChanged)
	Q_PROPERTY(bool requiresClosing READ requiresClosing WRITE setRequiresClosing NOTIFY requiresClosingChanged)
	Q_PROPERTY(QString liveStreamId READ liveStreamId WRITE setLiveStreamId NOTIFY liveStreamIdChanged)
	Q_PROPERTY(qint32 bufferMs READ bufferMs WRITE setBufferMs NOTIFY bufferMsChanged)
	Q_PROPERTY(bool requiresLooping READ requiresLooping WRITE setRequiresLooping NOTIFY requiresLoopingChanged)
	Q_PROPERTY(bool supportsProbing READ supportsProbing WRITE setSupportsProbing NOTIFY supportsProbingChanged)
	Q_PROPERTY(VideoType videoType READ videoType WRITE setVideoType NOTIFY videoTypeChanged)
	Q_PROPERTY(IsoType isoType READ isoType WRITE setIsoType NOTIFY isoTypeChanged)
	Q_PROPERTY(Video3DFormat video3DFormat READ video3DFormat WRITE setVideo3DFormat NOTIFY video3DFormatChanged)
	Q_PROPERTY(QList<MediaStream *> mediaStreams READ mediaStreams WRITE setMediaStreams NOTIFY mediaStreamsChanged)
	Q_PROPERTY(QList<MediaAttachment *> mediaAttachments READ mediaAttachments WRITE setMediaAttachments NOTIFY mediaAttachmentsChanged)
	Q_PROPERTY(QStringList formats READ formats WRITE setFormats NOTIFY formatsChanged)
	Q_PROPERTY(qint32 bitrate READ bitrate WRITE setBitrate NOTIFY bitrateChanged)
	Q_PROPERTY(TransportStreamTimestamp timestamp READ timestamp WRITE setTimestamp NOTIFY timestampChanged)
	Q_PROPERTY(QJsonObject requiredHttpHeaders READ requiredHttpHeaders WRITE setRequiredHttpHeaders NOTIFY requiredHttpHeadersChanged)
	Q_PROPERTY(QString transcodingUrl READ transcodingUrl WRITE setTranscodingUrl NOTIFY transcodingUrlChanged)
	Q_PROPERTY(QString transcodingSubProtocol READ transcodingSubProtocol WRITE setTranscodingSubProtocol NOTIFY transcodingSubProtocolChanged)
	Q_PROPERTY(QString transcodingContainer READ transcodingContainer WRITE setTranscodingContainer NOTIFY transcodingContainerChanged)
	Q_PROPERTY(qint32 analyzeDurationMs READ analyzeDurationMs WRITE setAnalyzeDurationMs NOTIFY analyzeDurationMsChanged)
	Q_PROPERTY(qint32 defaultAudioStreamIndex READ defaultAudioStreamIndex WRITE setDefaultAudioStreamIndex NOTIFY defaultAudioStreamIndexChanged)
	Q_PROPERTY(qint32 defaultSubtitleStreamIndex READ defaultSubtitleStreamIndex WRITE setDefaultSubtitleStreamIndex NOTIFY defaultSubtitleStreamIndexChanged)

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
	
	bool isRemote() const;
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
	
	QList<MediaStream *> mediaStreams() const;
	void setMediaStreams(QList<MediaStream *> newMediaStreams);
	
	QList<MediaAttachment *> mediaAttachments() const;
	void setMediaAttachments(QList<MediaAttachment *> newMediaAttachments);
	
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
	
signals:
	void protocolChanged(MediaProtocol newProtocol);
	void jellyfinIdChanged(QString newJellyfinId);
	void pathChanged(QString newPath);
	void encoderPathChanged(QString newEncoderPath);
	void encoderProtocolChanged(MediaProtocol newEncoderProtocol);
	void typeChanged(MediaSourceType newType);
	void containerChanged(QString newContainer);
	void sizeChanged(qint64 newSize);
	void nameChanged(QString newName);
	void isRemoteChanged(bool newIsRemote);
	void eTagChanged(QString newETag);
	void runTimeTicksChanged(qint64 newRunTimeTicks);
	void readAtNativeFramerateChanged(bool newReadAtNativeFramerate);
	void ignoreDtsChanged(bool newIgnoreDts);
	void ignoreIndexChanged(bool newIgnoreIndex);
	void genPtsInputChanged(bool newGenPtsInput);
	void supportsTranscodingChanged(bool newSupportsTranscoding);
	void supportsDirectStreamChanged(bool newSupportsDirectStream);
	void supportsDirectPlayChanged(bool newSupportsDirectPlay);
	void isInfiniteStreamChanged(bool newIsInfiniteStream);
	void requiresOpeningChanged(bool newRequiresOpening);
	void openTokenChanged(QString newOpenToken);
	void requiresClosingChanged(bool newRequiresClosing);
	void liveStreamIdChanged(QString newLiveStreamId);
	void bufferMsChanged(qint32 newBufferMs);
	void requiresLoopingChanged(bool newRequiresLooping);
	void supportsProbingChanged(bool newSupportsProbing);
	void videoTypeChanged(VideoType newVideoType);
	void isoTypeChanged(IsoType newIsoType);
	void video3DFormatChanged(Video3DFormat newVideo3DFormat);
	void mediaStreamsChanged(QList<MediaStream *> newMediaStreams);
	void mediaAttachmentsChanged(QList<MediaAttachment *> newMediaAttachments);
	void formatsChanged(QStringList newFormats);
	void bitrateChanged(qint32 newBitrate);
	void timestampChanged(TransportStreamTimestamp newTimestamp);
	void requiredHttpHeadersChanged(QJsonObject newRequiredHttpHeaders);
	void transcodingUrlChanged(QString newTranscodingUrl);
	void transcodingSubProtocolChanged(QString newTranscodingSubProtocol);
	void transcodingContainerChanged(QString newTranscodingContainer);
	void analyzeDurationMsChanged(qint32 newAnalyzeDurationMs);
	void defaultAudioStreamIndexChanged(qint32 newDefaultAudioStreamIndex);
	void defaultSubtitleStreamIndexChanged(qint32 newDefaultSubtitleStreamIndex);
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
	QList<MediaStream *> m_mediaStreams;
	QList<MediaAttachment *> m_mediaAttachments;
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
