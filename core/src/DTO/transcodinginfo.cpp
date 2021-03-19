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

#include <JellyfinQt/DTO/transcodinginfo.h>

#include <JellyfinQt/DTO/transcodereason.h>

namespace Jellyfin {
namespace DTO {

TranscodingInfo::TranscodingInfo(QObject *parent) : QObject(parent) {}

TranscodingInfo *TranscodingInfo::fromJSON(QJsonObject source, QObject *parent) {
	TranscodingInfo *instance = new TranscodingInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void TranscodingInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject TranscodingInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString TranscodingInfo::audioCodec() const { return m_audioCodec; }
void TranscodingInfo::setAudioCodec(QString newAudioCodec) {
	m_audioCodec = newAudioCodec;
	emit audioCodecChanged(newAudioCodec);
}

QString TranscodingInfo::videoCodec() const { return m_videoCodec; }
void TranscodingInfo::setVideoCodec(QString newVideoCodec) {
	m_videoCodec = newVideoCodec;
	emit videoCodecChanged(newVideoCodec);
}

QString TranscodingInfo::container() const { return m_container; }
void TranscodingInfo::setContainer(QString newContainer) {
	m_container = newContainer;
	emit containerChanged(newContainer);
}

bool TranscodingInfo::isVideoDirect() const { return m_isVideoDirect; }
void TranscodingInfo::setIsVideoDirect(bool newIsVideoDirect) {
	m_isVideoDirect = newIsVideoDirect;
	emit isVideoDirectChanged(newIsVideoDirect);
}

bool TranscodingInfo::isAudioDirect() const { return m_isAudioDirect; }
void TranscodingInfo::setIsAudioDirect(bool newIsAudioDirect) {
	m_isAudioDirect = newIsAudioDirect;
	emit isAudioDirectChanged(newIsAudioDirect);
}

qint32 TranscodingInfo::bitrate() const { return m_bitrate; }
void TranscodingInfo::setBitrate(qint32 newBitrate) {
	m_bitrate = newBitrate;
	emit bitrateChanged(newBitrate);
}

float TranscodingInfo::framerate() const { return m_framerate; }
void TranscodingInfo::setFramerate(float newFramerate) {
	m_framerate = newFramerate;
	emit framerateChanged(newFramerate);
}

double TranscodingInfo::completionPercentage() const { return m_completionPercentage; }
void TranscodingInfo::setCompletionPercentage(double newCompletionPercentage) {
	m_completionPercentage = newCompletionPercentage;
	emit completionPercentageChanged(newCompletionPercentage);
}

qint32 TranscodingInfo::width() const { return m_width; }
void TranscodingInfo::setWidth(qint32 newWidth) {
	m_width = newWidth;
	emit widthChanged(newWidth);
}

qint32 TranscodingInfo::height() const { return m_height; }
void TranscodingInfo::setHeight(qint32 newHeight) {
	m_height = newHeight;
	emit heightChanged(newHeight);
}

qint32 TranscodingInfo::audioChannels() const { return m_audioChannels; }
void TranscodingInfo::setAudioChannels(qint32 newAudioChannels) {
	m_audioChannels = newAudioChannels;
	emit audioChannelsChanged(newAudioChannels);
}

QList<TranscodeReason> TranscodingInfo::transcodeReasons() const { return m_transcodeReasons; }
void TranscodingInfo::setTranscodeReasons(QList<TranscodeReason> newTranscodeReasons) {
	m_transcodeReasons = newTranscodeReasons;
	emit transcodeReasonsChanged(newTranscodeReasons);
}


} // NS Jellyfin
} // NS DTO
