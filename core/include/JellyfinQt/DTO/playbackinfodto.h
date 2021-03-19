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

#ifndef JELLYFIN_DTO_PLAYBACKINFODTO_H
#define JELLYFIN_DTO_PLAYBACKINFODTO_H

#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class DeviceProfile;

class PlaybackInfoDto : public QObject {
	Q_OBJECT
public:
	explicit PlaybackInfoDto(QObject *parent = nullptr);
	static PlaybackInfoDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the playback userId.
	 */
	Q_PROPERTY(QString userId READ userId WRITE setUserId NOTIFY userIdChanged)
	/**
	 * @brief Gets or sets the max streaming bitrate.
	 */
	Q_PROPERTY(qint32 maxStreamingBitrate READ maxStreamingBitrate WRITE setMaxStreamingBitrate NOTIFY maxStreamingBitrateChanged)
	/**
	 * @brief Gets or sets the start time in ticks.
	 */
	Q_PROPERTY(qint64 startTimeTicks READ startTimeTicks WRITE setStartTimeTicks NOTIFY startTimeTicksChanged)
	/**
	 * @brief Gets or sets the audio stream index.
	 */
	Q_PROPERTY(qint32 audioStreamIndex READ audioStreamIndex WRITE setAudioStreamIndex NOTIFY audioStreamIndexChanged)
	/**
	 * @brief Gets or sets the subtitle stream index.
	 */
	Q_PROPERTY(qint32 subtitleStreamIndex READ subtitleStreamIndex WRITE setSubtitleStreamIndex NOTIFY subtitleStreamIndexChanged)
	/**
	 * @brief Gets or sets the max audio channels.
	 */
	Q_PROPERTY(qint32 maxAudioChannels READ maxAudioChannels WRITE setMaxAudioChannels NOTIFY maxAudioChannelsChanged)
	/**
	 * @brief Gets or sets the media source id.
	 */
	Q_PROPERTY(QString mediaSourceId READ mediaSourceId WRITE setMediaSourceId NOTIFY mediaSourceIdChanged)
	/**
	 * @brief Gets or sets the live stream id.
	 */
	Q_PROPERTY(QString liveStreamId READ liveStreamId WRITE setLiveStreamId NOTIFY liveStreamIdChanged)
	Q_PROPERTY(DeviceProfile * deviceProfile READ deviceProfile WRITE setDeviceProfile NOTIFY deviceProfileChanged)
	/**
	 * @brief Gets or sets a value indicating whether to enable direct play.
	 */
	Q_PROPERTY(bool enableDirectPlay READ enableDirectPlay WRITE setEnableDirectPlay NOTIFY enableDirectPlayChanged)
	/**
	 * @brief Gets or sets a value indicating whether to enable direct stream.
	 */
	Q_PROPERTY(bool enableDirectStream READ enableDirectStream WRITE setEnableDirectStream NOTIFY enableDirectStreamChanged)
	/**
	 * @brief Gets or sets a value indicating whether to enable transcoding.
	 */
	Q_PROPERTY(bool enableTranscoding READ enableTranscoding WRITE setEnableTranscoding NOTIFY enableTranscodingChanged)
	/**
	 * @brief Gets or sets a value indicating whether to enable video stream copy.
	 */
	Q_PROPERTY(bool allowVideoStreamCopy READ allowVideoStreamCopy WRITE setAllowVideoStreamCopy NOTIFY allowVideoStreamCopyChanged)
	/**
	 * @brief Gets or sets a value indicating whether to allow audio stream copy.
	 */
	Q_PROPERTY(bool allowAudioStreamCopy READ allowAudioStreamCopy WRITE setAllowAudioStreamCopy NOTIFY allowAudioStreamCopyChanged)
	/**
	 * @brief Gets or sets a value indicating whether to auto open the live stream.
	 */
	Q_PROPERTY(bool autoOpenLiveStream READ autoOpenLiveStream WRITE setAutoOpenLiveStream NOTIFY autoOpenLiveStreamChanged)

	QString userId() const;
	void setUserId(QString newUserId);
	
	qint32 maxStreamingBitrate() const;
	void setMaxStreamingBitrate(qint32 newMaxStreamingBitrate);
	
	qint64 startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	
	qint32 audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	
	qint32 subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	
	qint32 maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	
	DeviceProfile * deviceProfile() const;
	void setDeviceProfile(DeviceProfile * newDeviceProfile);
	
	bool enableDirectPlay() const;
	void setEnableDirectPlay(bool newEnableDirectPlay);
	
	bool enableDirectStream() const;
	void setEnableDirectStream(bool newEnableDirectStream);
	
	bool enableTranscoding() const;
	void setEnableTranscoding(bool newEnableTranscoding);
	
	bool allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	
	bool allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	
	bool autoOpenLiveStream() const;
	void setAutoOpenLiveStream(bool newAutoOpenLiveStream);
	
signals:
	void userIdChanged(QString newUserId);
	void maxStreamingBitrateChanged(qint32 newMaxStreamingBitrate);
	void startTimeTicksChanged(qint64 newStartTimeTicks);
	void audioStreamIndexChanged(qint32 newAudioStreamIndex);
	void subtitleStreamIndexChanged(qint32 newSubtitleStreamIndex);
	void maxAudioChannelsChanged(qint32 newMaxAudioChannels);
	void mediaSourceIdChanged(QString newMediaSourceId);
	void liveStreamIdChanged(QString newLiveStreamId);
	void deviceProfileChanged(DeviceProfile * newDeviceProfile);
	void enableDirectPlayChanged(bool newEnableDirectPlay);
	void enableDirectStreamChanged(bool newEnableDirectStream);
	void enableTranscodingChanged(bool newEnableTranscoding);
	void allowVideoStreamCopyChanged(bool newAllowVideoStreamCopy);
	void allowAudioStreamCopyChanged(bool newAllowAudioStreamCopy);
	void autoOpenLiveStreamChanged(bool newAutoOpenLiveStream);
protected:
	QString m_userId;
	qint32 m_maxStreamingBitrate;
	qint64 m_startTimeTicks;
	qint32 m_audioStreamIndex;
	qint32 m_subtitleStreamIndex;
	qint32 m_maxAudioChannels;
	QString m_mediaSourceId;
	QString m_liveStreamId;
	DeviceProfile * m_deviceProfile = nullptr;
	bool m_enableDirectPlay;
	bool m_enableDirectStream;
	bool m_enableTranscoding;
	bool m_allowVideoStreamCopy;
	bool m_allowAudioStreamCopy;
	bool m_autoOpenLiveStream;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PLAYBACKINFODTO_H
