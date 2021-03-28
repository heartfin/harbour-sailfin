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
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/deviceprofile.h"
#include "JellyfinQt/dto/mediaprotocol.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class OpenLiveStreamDto {
public:
	OpenLiveStreamDto();
	OpenLiveStreamDto(const OpenLiveStreamDto &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(OpenLiveStreamDto &other);
	
	static OpenLiveStreamDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the open token.
	 */
	QString openToken() const;
	/**
	* @brief Gets or sets the open token.
	*/
	void setOpenToken(QString newOpenToken);
	bool openTokenNull() const;
	void setOpenTokenNull();

	/**
	 * @brief Gets or sets the user id.
	 */
	QString userId() const;
	/**
	* @brief Gets or sets the user id.
	*/
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();

	/**
	 * @brief Gets or sets the play session id.
	 */
	QString playSessionId() const;
	/**
	* @brief Gets or sets the play session id.
	*/
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();

	/**
	 * @brief Gets or sets the max streaming bitrate.
	 */
	std::optional<qint32> maxStreamingBitrate() const;
	/**
	* @brief Gets or sets the max streaming bitrate.
	*/
	void setMaxStreamingBitrate(std::optional<qint32> newMaxStreamingBitrate);
	bool maxStreamingBitrateNull() const;
	void setMaxStreamingBitrateNull();

	/**
	 * @brief Gets or sets the start time in ticks.
	 */
	std::optional<qint64> startTimeTicks() const;
	/**
	* @brief Gets or sets the start time in ticks.
	*/
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();

	/**
	 * @brief Gets or sets the audio stream index.
	 */
	std::optional<qint32> audioStreamIndex() const;
	/**
	* @brief Gets or sets the audio stream index.
	*/
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();

	/**
	 * @brief Gets or sets the subtitle stream index.
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	/**
	* @brief Gets or sets the subtitle stream index.
	*/
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();

	/**
	 * @brief Gets or sets the max audio channels.
	 */
	std::optional<qint32> maxAudioChannels() const;
	/**
	* @brief Gets or sets the max audio channels.
	*/
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();

	/**
	 * @brief Gets or sets the item id.
	 */
	QString itemId() const;
	/**
	* @brief Gets or sets the item id.
	*/
	void setItemId(QString newItemId);
	bool itemIdNull() const;
	void setItemIdNull();

	/**
	 * @brief Gets or sets a value indicating whether to enable direct play.
	 */
	std::optional<bool> enableDirectPlay() const;
	/**
	* @brief Gets or sets a value indicating whether to enable direct play.
	*/
	void setEnableDirectPlay(std::optional<bool> newEnableDirectPlay);
	bool enableDirectPlayNull() const;
	void setEnableDirectPlayNull();

	/**
	 * @brief Gets or sets a value indicating whether to enale direct stream.
	 */
	std::optional<bool> enableDirectStream() const;
	/**
	* @brief Gets or sets a value indicating whether to enale direct stream.
	*/
	void setEnableDirectStream(std::optional<bool> newEnableDirectStream);
	bool enableDirectStreamNull() const;
	void setEnableDirectStreamNull();


	QSharedPointer<DeviceProfile> deviceProfile() const;

	void setDeviceProfile(QSharedPointer<DeviceProfile> newDeviceProfile);

	/**
	 * @brief Gets or sets the device play protocols.
	 */
	QList<MediaProtocol> directPlayProtocols() const;
	/**
	* @brief Gets or sets the device play protocols.
	*/
	void setDirectPlayProtocols(QList<MediaProtocol> newDirectPlayProtocols);
	bool directPlayProtocolsNull() const;
	void setDirectPlayProtocolsNull();


protected:
	QString m_openToken;
	QString m_userId;
	QString m_playSessionId;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	QString m_itemId;
	std::optional<bool> m_enableDirectPlay = std::nullopt;
	std::optional<bool> m_enableDirectStream = std::nullopt;
	QSharedPointer<DeviceProfile> m_deviceProfile = nullptr;
	QList<MediaProtocol> m_directPlayProtocols;
};

} // NS DTO

namespace Support {

using OpenLiveStreamDto = Jellyfin::DTO::OpenLiveStreamDto;

template <>
OpenLiveStreamDto fromJsonValue(const QJsonValue &source, convertType<OpenLiveStreamDto>);

template<>
QJsonValue toJsonValue(const OpenLiveStreamDto &source, convertType<OpenLiveStreamDto>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_OPENLIVESTREAMDTO_H
