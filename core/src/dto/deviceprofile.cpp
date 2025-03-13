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

#include <JellyfinQt/dto/deviceprofile.h>

namespace Jellyfin {
namespace DTO {

DeviceProfile::DeviceProfile() {}
DeviceProfile::DeviceProfile (
		QList<DirectPlayProfile> directPlayProfiles, 
		QList<TranscodingProfile> transcodingProfiles, 
		QList<ContainerProfile> containerProfiles, 
		QList<CodecProfile> codecProfiles, 
		QList<SubtitleProfile> subtitleProfiles 
		) :
	m_directPlayProfiles(directPlayProfiles),
	m_transcodingProfiles(transcodingProfiles),
	m_containerProfiles(containerProfiles),
	m_codecProfiles(codecProfiles),
	m_subtitleProfiles(subtitleProfiles) { }



DeviceProfile::DeviceProfile(const DeviceProfile &other) :

	m_name(other.m_name),
	m_jellyfinId(other.m_jellyfinId),
	m_maxStreamingBitrate(other.m_maxStreamingBitrate),
	m_maxStaticBitrate(other.m_maxStaticBitrate),
	m_musicStreamingTranscodingBitrate(other.m_musicStreamingTranscodingBitrate),
	m_maxStaticMusicBitrate(other.m_maxStaticMusicBitrate),
	m_directPlayProfiles(other.m_directPlayProfiles),
	m_transcodingProfiles(other.m_transcodingProfiles),
	m_containerProfiles(other.m_containerProfiles),
	m_codecProfiles(other.m_codecProfiles),
	m_subtitleProfiles(other.m_subtitleProfiles){}


void DeviceProfile::replaceData(DeviceProfile &other) {
	m_name = other.m_name;
	m_jellyfinId = other.m_jellyfinId;
	m_maxStreamingBitrate = other.m_maxStreamingBitrate;
	m_maxStaticBitrate = other.m_maxStaticBitrate;
	m_musicStreamingTranscodingBitrate = other.m_musicStreamingTranscodingBitrate;
	m_maxStaticMusicBitrate = other.m_maxStaticMusicBitrate;
	m_directPlayProfiles = other.m_directPlayProfiles;
	m_transcodingProfiles = other.m_transcodingProfiles;
	m_containerProfiles = other.m_containerProfiles;
	m_codecProfiles = other.m_codecProfiles;
	m_subtitleProfiles = other.m_subtitleProfiles;
}

DeviceProfile DeviceProfile::fromJson(QJsonObject source) {
	DeviceProfile instance;
	instance.setFromJson(source);
	return instance;
}


void DeviceProfile::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_maxStreamingBitrate = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["MaxStreamingBitrate"]);
	m_maxStaticBitrate = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["MaxStaticBitrate"]);
	m_musicStreamingTranscodingBitrate = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["MusicStreamingTranscodingBitrate"]);
	m_maxStaticMusicBitrate = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["MaxStaticMusicBitrate"]);
	m_directPlayProfiles = Jellyfin::Support::fromJsonValue<QList<DirectPlayProfile>>(source["DirectPlayProfiles"]);
	m_transcodingProfiles = Jellyfin::Support::fromJsonValue<QList<TranscodingProfile>>(source["TranscodingProfiles"]);
	m_containerProfiles = Jellyfin::Support::fromJsonValue<QList<ContainerProfile>>(source["ContainerProfiles"]);
	m_codecProfiles = Jellyfin::Support::fromJsonValue<QList<CodecProfile>>(source["CodecProfiles"]);
	m_subtitleProfiles = Jellyfin::Support::fromJsonValue<QList<SubtitleProfile>>(source["SubtitleProfiles"]);

}
	
QJsonObject DeviceProfile::toJson() const {
	QJsonObject result;
	
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	
	if (!(m_jellyfinId.isNull())) {
		result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	}
			
	
	if (!(!m_maxStreamingBitrate.has_value())) {
		result["MaxStreamingBitrate"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_maxStreamingBitrate);
	}
			
	
	if (!(!m_maxStaticBitrate.has_value())) {
		result["MaxStaticBitrate"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_maxStaticBitrate);
	}
			
	
	if (!(!m_musicStreamingTranscodingBitrate.has_value())) {
		result["MusicStreamingTranscodingBitrate"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_musicStreamingTranscodingBitrate);
	}
			
	
	if (!(!m_maxStaticMusicBitrate.has_value())) {
		result["MaxStaticMusicBitrate"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_maxStaticMusicBitrate);
	}
			
	result["DirectPlayProfiles"] = Jellyfin::Support::toJsonValue<QList<DirectPlayProfile>>(m_directPlayProfiles);		
	result["TranscodingProfiles"] = Jellyfin::Support::toJsonValue<QList<TranscodingProfile>>(m_transcodingProfiles);		
	result["ContainerProfiles"] = Jellyfin::Support::toJsonValue<QList<ContainerProfile>>(m_containerProfiles);		
	result["CodecProfiles"] = Jellyfin::Support::toJsonValue<QList<CodecProfile>>(m_codecProfiles);		
	result["SubtitleProfiles"] = Jellyfin::Support::toJsonValue<QList<SubtitleProfile>>(m_subtitleProfiles);	
	return result;
}

QString DeviceProfile::name() const { return m_name; }

void DeviceProfile::setName(QString newName) {
	m_name = newName;
}
bool DeviceProfile::nameNull() const {
	return m_name.isNull();
}

void DeviceProfile::setNameNull() {
	m_name.clear();

}
QString DeviceProfile::jellyfinId() const { return m_jellyfinId; }

void DeviceProfile::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool DeviceProfile::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void DeviceProfile::setJellyfinIdNull() {
	m_jellyfinId.clear();

}
std::optional<qint32> DeviceProfile::maxStreamingBitrate() const { return m_maxStreamingBitrate; }

void DeviceProfile::setMaxStreamingBitrate(std::optional<qint32> newMaxStreamingBitrate) {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}
bool DeviceProfile::maxStreamingBitrateNull() const {
	return !m_maxStreamingBitrate.has_value();
}

void DeviceProfile::setMaxStreamingBitrateNull() {
	m_maxStreamingBitrate = std::nullopt;

}
std::optional<qint32> DeviceProfile::maxStaticBitrate() const { return m_maxStaticBitrate; }

void DeviceProfile::setMaxStaticBitrate(std::optional<qint32> newMaxStaticBitrate) {
	m_maxStaticBitrate = newMaxStaticBitrate;
}
bool DeviceProfile::maxStaticBitrateNull() const {
	return !m_maxStaticBitrate.has_value();
}

void DeviceProfile::setMaxStaticBitrateNull() {
	m_maxStaticBitrate = std::nullopt;

}
std::optional<qint32> DeviceProfile::musicStreamingTranscodingBitrate() const { return m_musicStreamingTranscodingBitrate; }

void DeviceProfile::setMusicStreamingTranscodingBitrate(std::optional<qint32> newMusicStreamingTranscodingBitrate) {
	m_musicStreamingTranscodingBitrate = newMusicStreamingTranscodingBitrate;
}
bool DeviceProfile::musicStreamingTranscodingBitrateNull() const {
	return !m_musicStreamingTranscodingBitrate.has_value();
}

void DeviceProfile::setMusicStreamingTranscodingBitrateNull() {
	m_musicStreamingTranscodingBitrate = std::nullopt;

}
std::optional<qint32> DeviceProfile::maxStaticMusicBitrate() const { return m_maxStaticMusicBitrate; }

void DeviceProfile::setMaxStaticMusicBitrate(std::optional<qint32> newMaxStaticMusicBitrate) {
	m_maxStaticMusicBitrate = newMaxStaticMusicBitrate;
}
bool DeviceProfile::maxStaticMusicBitrateNull() const {
	return !m_maxStaticMusicBitrate.has_value();
}

void DeviceProfile::setMaxStaticMusicBitrateNull() {
	m_maxStaticMusicBitrate = std::nullopt;

}
QList<DirectPlayProfile> DeviceProfile::directPlayProfiles() const { return m_directPlayProfiles; }

void DeviceProfile::setDirectPlayProfiles(QList<DirectPlayProfile> newDirectPlayProfiles) {
	m_directPlayProfiles = newDirectPlayProfiles;
}

QList<TranscodingProfile> DeviceProfile::transcodingProfiles() const { return m_transcodingProfiles; }

void DeviceProfile::setTranscodingProfiles(QList<TranscodingProfile> newTranscodingProfiles) {
	m_transcodingProfiles = newTranscodingProfiles;
}

QList<ContainerProfile> DeviceProfile::containerProfiles() const { return m_containerProfiles; }

void DeviceProfile::setContainerProfiles(QList<ContainerProfile> newContainerProfiles) {
	m_containerProfiles = newContainerProfiles;
}

QList<CodecProfile> DeviceProfile::codecProfiles() const { return m_codecProfiles; }

void DeviceProfile::setCodecProfiles(QList<CodecProfile> newCodecProfiles) {
	m_codecProfiles = newCodecProfiles;
}

QList<SubtitleProfile> DeviceProfile::subtitleProfiles() const { return m_subtitleProfiles; }

void DeviceProfile::setSubtitleProfiles(QList<SubtitleProfile> newSubtitleProfiles) {
	m_subtitleProfiles = newSubtitleProfiles;
}


} // NS DTO

namespace Support {

using DeviceProfile = Jellyfin::DTO::DeviceProfile;

template <>
DeviceProfile fromJsonValue(const QJsonValue &source, convertType<DeviceProfile>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return DeviceProfile::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const DeviceProfile &source, convertType<DeviceProfile>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
