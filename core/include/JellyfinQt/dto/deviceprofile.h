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

#ifndef JELLYFIN_DTO_DEVICEPROFILE_H
#define JELLYFIN_DTO_DEVICEPROFILE_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/codecprofile.h"
#include "JellyfinQt/dto/containerprofile.h"
#include "JellyfinQt/dto/directplayprofile.h"
#include "JellyfinQt/dto/subtitleprofile.h"
#include "JellyfinQt/dto/transcodingprofile.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class DeviceProfile {
public:
	DeviceProfile(													
		QList<DirectPlayProfile> directPlayProfiles,			
		QList<TranscodingProfile> transcodingProfiles,			
		QList<ContainerProfile> containerProfiles,			
		QList<CodecProfile> codecProfiles,			
		QList<SubtitleProfile> subtitleProfiles		
	);

	DeviceProfile(const DeviceProfile &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(DeviceProfile &other);
	
	static DeviceProfile fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the name of this device profile. User profiles must have a unique name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name of this device profile. User profiles must have a unique name.
	*/
	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();

	/**
	 * @brief Gets or sets the unique internal identifier.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets or sets the unique internal identifier.
	*/
	void setJellyfinId(QString newJellyfinId);
	bool jellyfinIdNull() const;
	void setJellyfinIdNull();

	/**
	 * @brief Gets or sets the maximum allowed bitrate for all streamed content.
	 */
	std::optional<qint32> maxStreamingBitrate() const;
	/**
	* @brief Gets or sets the maximum allowed bitrate for all streamed content.
	*/
	void setMaxStreamingBitrate(std::optional<qint32> newMaxStreamingBitrate);
	bool maxStreamingBitrateNull() const;
	void setMaxStreamingBitrateNull();

	/**
	 * @brief Gets or sets the maximum allowed bitrate for statically streamed content (= direct played files).
	 */
	std::optional<qint32> maxStaticBitrate() const;
	/**
	* @brief Gets or sets the maximum allowed bitrate for statically streamed content (= direct played files).
	*/
	void setMaxStaticBitrate(std::optional<qint32> newMaxStaticBitrate);
	bool maxStaticBitrateNull() const;
	void setMaxStaticBitrateNull();

	/**
	 * @brief Gets or sets the maximum allowed bitrate for transcoded music streams.
	 */
	std::optional<qint32> musicStreamingTranscodingBitrate() const;
	/**
	* @brief Gets or sets the maximum allowed bitrate for transcoded music streams.
	*/
	void setMusicStreamingTranscodingBitrate(std::optional<qint32> newMusicStreamingTranscodingBitrate);
	bool musicStreamingTranscodingBitrateNull() const;
	void setMusicStreamingTranscodingBitrateNull();

	/**
	 * @brief Gets or sets the maximum allowed bitrate for statically streamed (= direct played) music files.
	 */
	std::optional<qint32> maxStaticMusicBitrate() const;
	/**
	* @brief Gets or sets the maximum allowed bitrate for statically streamed (= direct played) music files.
	*/
	void setMaxStaticMusicBitrate(std::optional<qint32> newMaxStaticMusicBitrate);
	bool maxStaticMusicBitrateNull() const;
	void setMaxStaticMusicBitrateNull();

	/**
	 * @brief Gets or sets the direct play profiles.
	 */
	QList<DirectPlayProfile> directPlayProfiles() const;
	/**
	* @brief Gets or sets the direct play profiles.
	*/
	void setDirectPlayProfiles(QList<DirectPlayProfile> newDirectPlayProfiles);

	/**
	 * @brief Gets or sets the transcoding profiles.
	 */
	QList<TranscodingProfile> transcodingProfiles() const;
	/**
	* @brief Gets or sets the transcoding profiles.
	*/
	void setTranscodingProfiles(QList<TranscodingProfile> newTranscodingProfiles);

	/**
	 * @brief Gets or sets the container profiles. Failing to meet these optional conditions causes transcoding to occur.
	 */
	QList<ContainerProfile> containerProfiles() const;
	/**
	* @brief Gets or sets the container profiles. Failing to meet these optional conditions causes transcoding to occur.
	*/
	void setContainerProfiles(QList<ContainerProfile> newContainerProfiles);

	/**
	 * @brief Gets or sets the codec profiles.
	 */
	QList<CodecProfile> codecProfiles() const;
	/**
	* @brief Gets or sets the codec profiles.
	*/
	void setCodecProfiles(QList<CodecProfile> newCodecProfiles);

	/**
	 * @brief Gets or sets the subtitle profiles.
	 */
	QList<SubtitleProfile> subtitleProfiles() const;
	/**
	* @brief Gets or sets the subtitle profiles.
	*/
	void setSubtitleProfiles(QList<SubtitleProfile> newSubtitleProfiles);


protected:
	QString m_name;
	QString m_jellyfinId;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	std::optional<qint32> m_maxStaticBitrate = std::nullopt;
	std::optional<qint32> m_musicStreamingTranscodingBitrate = std::nullopt;
	std::optional<qint32> m_maxStaticMusicBitrate = std::nullopt;
	QList<DirectPlayProfile> m_directPlayProfiles;
	QList<TranscodingProfile> m_transcodingProfiles;
	QList<ContainerProfile> m_containerProfiles;
	QList<CodecProfile> m_codecProfiles;
	QList<SubtitleProfile> m_subtitleProfiles;

private:
	// Private constructor which generates an invalid object, for use withing DeviceProfile::fromJson();
	DeviceProfile();
};


} // NS DTO

namespace Support {

using DeviceProfile = Jellyfin::DTO::DeviceProfile;

template <>
DeviceProfile fromJsonValue(const QJsonValue &source, convertType<DeviceProfile>);

template<>
QJsonValue toJsonValue(const DeviceProfile &source, convertType<DeviceProfile>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_DEVICEPROFILE_H
