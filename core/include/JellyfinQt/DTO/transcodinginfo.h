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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/transcodereason.h"

namespace Jellyfin {
namespace DTO {

class TranscodingInfo : public QObject {
	Q_OBJECT
public:
	explicit TranscodingInfo(QObject *parent = nullptr);
	static TranscodingInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(QString audioCodec READ audioCodec WRITE setAudioCodec NOTIFY audioCodecChanged)
	Q_PROPERTY(QString videoCodec READ videoCodec WRITE setVideoCodec NOTIFY videoCodecChanged)
	Q_PROPERTY(QString container READ container WRITE setContainer NOTIFY containerChanged)
	Q_PROPERTY(bool isVideoDirect READ isVideoDirect WRITE setIsVideoDirect NOTIFY isVideoDirectChanged)
	Q_PROPERTY(bool isAudioDirect READ isAudioDirect WRITE setIsAudioDirect NOTIFY isAudioDirectChanged)
	Q_PROPERTY(qint32 bitrate READ bitrate WRITE setBitrate NOTIFY bitrateChanged)
	Q_PROPERTY(float framerate READ framerate WRITE setFramerate NOTIFY framerateChanged)
	Q_PROPERTY(double completionPercentage READ completionPercentage WRITE setCompletionPercentage NOTIFY completionPercentageChanged)
	Q_PROPERTY(qint32 width READ width WRITE setWidth NOTIFY widthChanged)
	Q_PROPERTY(qint32 height READ height WRITE setHeight NOTIFY heightChanged)
	Q_PROPERTY(qint32 audioChannels READ audioChannels WRITE setAudioChannels NOTIFY audioChannelsChanged)
	Q_PROPERTY(QList<TranscodeReason> transcodeReasons READ transcodeReasons WRITE setTranscodeReasons NOTIFY transcodeReasonsChanged)

	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	
	QString container() const;
	void setContainer(QString newContainer);
	
	bool isVideoDirect() const;
	void setIsVideoDirect(bool newIsVideoDirect);
	
	bool isAudioDirect() const;
	void setIsAudioDirect(bool newIsAudioDirect);
	
	qint32 bitrate() const;
	void setBitrate(qint32 newBitrate);
	
	float framerate() const;
	void setFramerate(float newFramerate);
	
	double completionPercentage() const;
	void setCompletionPercentage(double newCompletionPercentage);
	
	qint32 width() const;
	void setWidth(qint32 newWidth);
	
	qint32 height() const;
	void setHeight(qint32 newHeight);
	
	qint32 audioChannels() const;
	void setAudioChannels(qint32 newAudioChannels);
	
	QList<TranscodeReason> transcodeReasons() const;
	void setTranscodeReasons(QList<TranscodeReason> newTranscodeReasons);
	
signals:
	void audioCodecChanged(QString newAudioCodec);
	void videoCodecChanged(QString newVideoCodec);
	void containerChanged(QString newContainer);
	void isVideoDirectChanged(bool newIsVideoDirect);
	void isAudioDirectChanged(bool newIsAudioDirect);
	void bitrateChanged(qint32 newBitrate);
	void framerateChanged(float newFramerate);
	void completionPercentageChanged(double newCompletionPercentage);
	void widthChanged(qint32 newWidth);
	void heightChanged(qint32 newHeight);
	void audioChannelsChanged(qint32 newAudioChannels);
	void transcodeReasonsChanged(QList<TranscodeReason> newTranscodeReasons);
protected:
	QString m_audioCodec;
	QString m_videoCodec;
	QString m_container;
	bool m_isVideoDirect;
	bool m_isAudioDirect;
	qint32 m_bitrate;
	float m_framerate;
	double m_completionPercentage;
	qint32 m_width;
	qint32 m_height;
	qint32 m_audioChannels;
	QList<TranscodeReason> m_transcodeReasons;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_TRANSCODINGINFO_H
