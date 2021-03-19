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
#include <QObject>
#include <QString>

#include "JellyfinQt/DTO/dlnaprofiletype.h"
#include "JellyfinQt/DTO/encodingcontext.h"
#include "JellyfinQt/DTO/transcodeseekinfo.h"

namespace Jellyfin {
namespace DTO {

class TranscodingProfile : public QObject {
	Q_OBJECT
public:
	explicit TranscodingProfile(QObject *parent = nullptr);
	static TranscodingProfile *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(QString container READ container WRITE setContainer NOTIFY containerChanged)
	Q_PROPERTY(DlnaProfileType type READ type WRITE setType NOTIFY typeChanged)
	Q_PROPERTY(QString videoCodec READ videoCodec WRITE setVideoCodec NOTIFY videoCodecChanged)
	Q_PROPERTY(QString audioCodec READ audioCodec WRITE setAudioCodec NOTIFY audioCodecChanged)
	Q_PROPERTY(QString protocol READ protocol WRITE setProtocol NOTIFY protocolChanged)
	Q_PROPERTY(bool estimateContentLength READ estimateContentLength WRITE setEstimateContentLength NOTIFY estimateContentLengthChanged)
	Q_PROPERTY(bool enableMpegtsM2TsMode READ enableMpegtsM2TsMode WRITE setEnableMpegtsM2TsMode NOTIFY enableMpegtsM2TsModeChanged)
	Q_PROPERTY(TranscodeSeekInfo transcodeSeekInfo READ transcodeSeekInfo WRITE setTranscodeSeekInfo NOTIFY transcodeSeekInfoChanged)
	Q_PROPERTY(bool copyTimestamps READ copyTimestamps WRITE setCopyTimestamps NOTIFY copyTimestampsChanged)
	Q_PROPERTY(EncodingContext context READ context WRITE setContext NOTIFY contextChanged)
	Q_PROPERTY(bool enableSubtitlesInManifest READ enableSubtitlesInManifest WRITE setEnableSubtitlesInManifest NOTIFY enableSubtitlesInManifestChanged)
	Q_PROPERTY(QString maxAudioChannels READ maxAudioChannels WRITE setMaxAudioChannels NOTIFY maxAudioChannelsChanged)
	Q_PROPERTY(qint32 minSegments READ minSegments WRITE setMinSegments NOTIFY minSegmentsChanged)
	Q_PROPERTY(qint32 segmentLength READ segmentLength WRITE setSegmentLength NOTIFY segmentLengthChanged)
	Q_PROPERTY(bool breakOnNonKeyFrames READ breakOnNonKeyFrames WRITE setBreakOnNonKeyFrames NOTIFY breakOnNonKeyFramesChanged)

	QString container() const;
	void setContainer(QString newContainer);
	
	DlnaProfileType type() const;
	void setType(DlnaProfileType newType);
	
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	
	QString protocol() const;
	void setProtocol(QString newProtocol);
	
	bool estimateContentLength() const;
	void setEstimateContentLength(bool newEstimateContentLength);
	
	bool enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode);
	
	TranscodeSeekInfo transcodeSeekInfo() const;
	void setTranscodeSeekInfo(TranscodeSeekInfo newTranscodeSeekInfo);
	
	bool copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	
	EncodingContext context() const;
	void setContext(EncodingContext newContext);
	
	bool enableSubtitlesInManifest() const;
	void setEnableSubtitlesInManifest(bool newEnableSubtitlesInManifest);
	
	QString maxAudioChannels() const;
	void setMaxAudioChannels(QString newMaxAudioChannels);
	
	qint32 minSegments() const;
	void setMinSegments(qint32 newMinSegments);
	
	qint32 segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);
	
	bool breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	
signals:
	void containerChanged(QString newContainer);
	void typeChanged(DlnaProfileType newType);
	void videoCodecChanged(QString newVideoCodec);
	void audioCodecChanged(QString newAudioCodec);
	void protocolChanged(QString newProtocol);
	void estimateContentLengthChanged(bool newEstimateContentLength);
	void enableMpegtsM2TsModeChanged(bool newEnableMpegtsM2TsMode);
	void transcodeSeekInfoChanged(TranscodeSeekInfo newTranscodeSeekInfo);
	void copyTimestampsChanged(bool newCopyTimestamps);
	void contextChanged(EncodingContext newContext);
	void enableSubtitlesInManifestChanged(bool newEnableSubtitlesInManifest);
	void maxAudioChannelsChanged(QString newMaxAudioChannels);
	void minSegmentsChanged(qint32 newMinSegments);
	void segmentLengthChanged(qint32 newSegmentLength);
	void breakOnNonKeyFramesChanged(bool newBreakOnNonKeyFrames);
protected:
	QString m_container;
	DlnaProfileType m_type;
	QString m_videoCodec;
	QString m_audioCodec;
	QString m_protocol;
	bool m_estimateContentLength;
	bool m_enableMpegtsM2TsMode;
	TranscodeSeekInfo m_transcodeSeekInfo;
	bool m_copyTimestamps;
	EncodingContext m_context;
	bool m_enableSubtitlesInManifest;
	QString m_maxAudioChannels;
	qint32 m_minSegments;
	qint32 m_segmentLength;
	bool m_breakOnNonKeyFrames;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_TRANSCODINGPROFILE_H
