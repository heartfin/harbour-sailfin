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
#include <QString>
#include <optional>

#include "JellyfinQt/DTO/dlnaprofiletype.h"
#include "JellyfinQt/DTO/encodingcontext.h"
#include "JellyfinQt/DTO/transcodeseekinfo.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class TranscodingProfile {
public:TranscodingProfile();TranscodingProfile(const TranscodingProfile &other);
	
	static TranscodingProfile fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties

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
