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

#ifndef JELLYFIN_DTO_OPENLIVESTREAMDTO_H
#define JELLYFIN_DTO_OPENLIVESTREAMDTO_H

#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/mediaprotocol.h"

namespace Jellyfin {
namespace DTO {

class DeviceProfile;

class OpenLiveStreamDto : public QObject {
	Q_OBJECT
public:
	explicit OpenLiveStreamDto(QObject *parent = nullptr);
	static OpenLiveStreamDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the open token.
	 */
	Q_PROPERTY(QString openToken READ openToken WRITE setOpenToken NOTIFY openTokenChanged)
	/**
	 * @brief Gets or sets the user id.
	 */
	Q_PROPERTY(QString userId READ userId WRITE setUserId NOTIFY userIdChanged)
	/**
	 * @brief Gets or sets the play session id.
	 */
	Q_PROPERTY(QString playSessionId READ playSessionId WRITE setPlaySessionId NOTIFY playSessionIdChanged)
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
	 * @brief Gets or sets the item id.
	 */
	Q_PROPERTY(QString itemId READ itemId WRITE setItemId NOTIFY itemIdChanged)
	/**
	 * @brief Gets or sets a value indicating whether to enable direct play.
	 */
	Q_PROPERTY(bool enableDirectPlay READ enableDirectPlay WRITE setEnableDirectPlay NOTIFY enableDirectPlayChanged)
	/**
	 * @brief Gets or sets a value indicating whether to enale direct stream.
	 */
	Q_PROPERTY(bool enableDirectStream READ enableDirectStream WRITE setEnableDirectStream NOTIFY enableDirectStreamChanged)
	Q_PROPERTY(DeviceProfile * deviceProfile READ deviceProfile WRITE setDeviceProfile NOTIFY deviceProfileChanged)
	/**
	 * @brief Gets or sets the device play protocols.
	 */
	Q_PROPERTY(QList<MediaProtocol> directPlayProtocols READ directPlayProtocols WRITE setDirectPlayProtocols NOTIFY directPlayProtocolsChanged)

	QString openToken() const;
	void setOpenToken(QString newOpenToken);
	
	QString userId() const;
	void setUserId(QString newUserId);
	
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	
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
	
	QString itemId() const;
	void setItemId(QString newItemId);
	
	bool enableDirectPlay() const;
	void setEnableDirectPlay(bool newEnableDirectPlay);
	
	bool enableDirectStream() const;
	void setEnableDirectStream(bool newEnableDirectStream);
	
	DeviceProfile * deviceProfile() const;
	void setDeviceProfile(DeviceProfile * newDeviceProfile);
	
	QList<MediaProtocol> directPlayProtocols() const;
	void setDirectPlayProtocols(QList<MediaProtocol> newDirectPlayProtocols);
	
signals:
	void openTokenChanged(QString newOpenToken);
	void userIdChanged(QString newUserId);
	void playSessionIdChanged(QString newPlaySessionId);
	void maxStreamingBitrateChanged(qint32 newMaxStreamingBitrate);
	void startTimeTicksChanged(qint64 newStartTimeTicks);
	void audioStreamIndexChanged(qint32 newAudioStreamIndex);
	void subtitleStreamIndexChanged(qint32 newSubtitleStreamIndex);
	void maxAudioChannelsChanged(qint32 newMaxAudioChannels);
	void itemIdChanged(QString newItemId);
	void enableDirectPlayChanged(bool newEnableDirectPlay);
	void enableDirectStreamChanged(bool newEnableDirectStream);
	void deviceProfileChanged(DeviceProfile * newDeviceProfile);
	void directPlayProtocolsChanged(QList<MediaProtocol> newDirectPlayProtocols);
protected:
	QString m_openToken;
	QString m_userId;
	QString m_playSessionId;
	qint32 m_maxStreamingBitrate;
	qint64 m_startTimeTicks;
	qint32 m_audioStreamIndex;
	qint32 m_subtitleStreamIndex;
	qint32 m_maxAudioChannels;
	QString m_itemId;
	bool m_enableDirectPlay;
	bool m_enableDirectStream;
	DeviceProfile * m_deviceProfile = nullptr;
	QList<MediaProtocol> m_directPlayProtocols;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_OPENLIVESTREAMDTO_H
