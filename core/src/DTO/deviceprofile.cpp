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

#include <JellyfinQt/DTO/deviceprofile.h>

namespace Jellyfin {
namespace DTO {

DeviceProfile::DeviceProfile(QObject *parent) {}

DeviceProfile DeviceProfile::fromJson(QJsonObject source) {DeviceProfile instance;
	instance->setFromJson(source, false);
	return instance;
}


void DeviceProfile::setFromJson(QJsonObject source) {
	m_name = fromJsonValue<QString>(source["Name"]);
	m_jellyfinId = fromJsonValue<QString>(source["Id"]);
	m_identification = fromJsonValue<QSharedPointer<DeviceIdentification>>(source["Identification"]);
	m_friendlyName = fromJsonValue<QString>(source["FriendlyName"]);
	m_manufacturer = fromJsonValue<QString>(source["Manufacturer"]);
	m_manufacturerUrl = fromJsonValue<QString>(source["ManufacturerUrl"]);
	m_modelName = fromJsonValue<QString>(source["ModelName"]);
	m_modelDescription = fromJsonValue<QString>(source["ModelDescription"]);
	m_modelNumber = fromJsonValue<QString>(source["ModelNumber"]);
	m_modelUrl = fromJsonValue<QString>(source["ModelUrl"]);
	m_serialNumber = fromJsonValue<QString>(source["SerialNumber"]);
	m_enableAlbumArtInDidl = fromJsonValue<bool>(source["EnableAlbumArtInDidl"]);
	m_enableSingleAlbumArtLimit = fromJsonValue<bool>(source["EnableSingleAlbumArtLimit"]);
	m_enableSingleSubtitleLimit = fromJsonValue<bool>(source["EnableSingleSubtitleLimit"]);
	m_supportedMediaTypes = fromJsonValue<QString>(source["SupportedMediaTypes"]);
	m_userId = fromJsonValue<QString>(source["UserId"]);
	m_albumArtPn = fromJsonValue<QString>(source["AlbumArtPn"]);
	m_maxAlbumArtWidth = fromJsonValue<qint32>(source["MaxAlbumArtWidth"]);
	m_maxAlbumArtHeight = fromJsonValue<qint32>(source["MaxAlbumArtHeight"]);
	m_maxIconWidth = fromJsonValue<qint32>(source["MaxIconWidth"]);
	m_maxIconHeight = fromJsonValue<qint32>(source["MaxIconHeight"]);
	m_maxStreamingBitrate = fromJsonValue<qint32>(source["MaxStreamingBitrate"]);
	m_maxStaticBitrate = fromJsonValue<qint32>(source["MaxStaticBitrate"]);
	m_musicStreamingTranscodingBitrate = fromJsonValue<qint32>(source["MusicStreamingTranscodingBitrate"]);
	m_maxStaticMusicBitrate = fromJsonValue<qint32>(source["MaxStaticMusicBitrate"]);
	m_sonyAggregationFlags = fromJsonValue<QString>(source["SonyAggregationFlags"]);
	m_protocolInfo = fromJsonValue<QString>(source["ProtocolInfo"]);
	m_timelineOffsetSeconds = fromJsonValue<qint32>(source["TimelineOffsetSeconds"]);
	m_requiresPlainVideoItems = fromJsonValue<bool>(source["RequiresPlainVideoItems"]);
	m_requiresPlainFolders = fromJsonValue<bool>(source["RequiresPlainFolders"]);
	m_enableMSMediaReceiverRegistrar = fromJsonValue<bool>(source["EnableMSMediaReceiverRegistrar"]);
	m_ignoreTranscodeByteRangeRequests = fromJsonValue<bool>(source["IgnoreTranscodeByteRangeRequests"]);
	m_xmlRootAttributes = fromJsonValue<QList<QSharedPointer<XmlAttribute>>>(source["XmlRootAttributes"]);
	m_directPlayProfiles = fromJsonValue<QList<QSharedPointer<DirectPlayProfile>>>(source["DirectPlayProfiles"]);
	m_transcodingProfiles = fromJsonValue<QList<QSharedPointer<TranscodingProfile>>>(source["TranscodingProfiles"]);
	m_containerProfiles = fromJsonValue<QList<QSharedPointer<ContainerProfile>>>(source["ContainerProfiles"]);
	m_codecProfiles = fromJsonValue<QList<QSharedPointer<CodecProfile>>>(source["CodecProfiles"]);
	m_responseProfiles = fromJsonValue<QList<QSharedPointer<ResponseProfile>>>(source["ResponseProfiles"]);
	m_subtitleProfiles = fromJsonValue<QList<QSharedPointer<SubtitleProfile>>>(source["SubtitleProfiles"]);

}
	
QJsonObject DeviceProfile::toJson() {
	QJsonObject result;
	result["Name"] = toJsonValue<QString>(m_name);
	result["Id"] = toJsonValue<QString>(m_jellyfinId);
	result["Identification"] = toJsonValue<QSharedPointer<DeviceIdentification>>(m_identification);
	result["FriendlyName"] = toJsonValue<QString>(m_friendlyName);
	result["Manufacturer"] = toJsonValue<QString>(m_manufacturer);
	result["ManufacturerUrl"] = toJsonValue<QString>(m_manufacturerUrl);
	result["ModelName"] = toJsonValue<QString>(m_modelName);
	result["ModelDescription"] = toJsonValue<QString>(m_modelDescription);
	result["ModelNumber"] = toJsonValue<QString>(m_modelNumber);
	result["ModelUrl"] = toJsonValue<QString>(m_modelUrl);
	result["SerialNumber"] = toJsonValue<QString>(m_serialNumber);
	result["EnableAlbumArtInDidl"] = toJsonValue<bool>(m_enableAlbumArtInDidl);
	result["EnableSingleAlbumArtLimit"] = toJsonValue<bool>(m_enableSingleAlbumArtLimit);
	result["EnableSingleSubtitleLimit"] = toJsonValue<bool>(m_enableSingleSubtitleLimit);
	result["SupportedMediaTypes"] = toJsonValue<QString>(m_supportedMediaTypes);
	result["UserId"] = toJsonValue<QString>(m_userId);
	result["AlbumArtPn"] = toJsonValue<QString>(m_albumArtPn);
	result["MaxAlbumArtWidth"] = toJsonValue<qint32>(m_maxAlbumArtWidth);
	result["MaxAlbumArtHeight"] = toJsonValue<qint32>(m_maxAlbumArtHeight);
	result["MaxIconWidth"] = toJsonValue<qint32>(m_maxIconWidth);
	result["MaxIconHeight"] = toJsonValue<qint32>(m_maxIconHeight);
	result["MaxStreamingBitrate"] = toJsonValue<qint32>(m_maxStreamingBitrate);
	result["MaxStaticBitrate"] = toJsonValue<qint32>(m_maxStaticBitrate);
	result["MusicStreamingTranscodingBitrate"] = toJsonValue<qint32>(m_musicStreamingTranscodingBitrate);
	result["MaxStaticMusicBitrate"] = toJsonValue<qint32>(m_maxStaticMusicBitrate);
	result["SonyAggregationFlags"] = toJsonValue<QString>(m_sonyAggregationFlags);
	result["ProtocolInfo"] = toJsonValue<QString>(m_protocolInfo);
	result["TimelineOffsetSeconds"] = toJsonValue<qint32>(m_timelineOffsetSeconds);
	result["RequiresPlainVideoItems"] = toJsonValue<bool>(m_requiresPlainVideoItems);
	result["RequiresPlainFolders"] = toJsonValue<bool>(m_requiresPlainFolders);
	result["EnableMSMediaReceiverRegistrar"] = toJsonValue<bool>(m_enableMSMediaReceiverRegistrar);
	result["IgnoreTranscodeByteRangeRequests"] = toJsonValue<bool>(m_ignoreTranscodeByteRangeRequests);
	result["XmlRootAttributes"] = toJsonValue<QList<QSharedPointer<XmlAttribute>>>(m_xmlRootAttributes);
	result["DirectPlayProfiles"] = toJsonValue<QList<QSharedPointer<DirectPlayProfile>>>(m_directPlayProfiles);
	result["TranscodingProfiles"] = toJsonValue<QList<QSharedPointer<TranscodingProfile>>>(m_transcodingProfiles);
	result["ContainerProfiles"] = toJsonValue<QList<QSharedPointer<ContainerProfile>>>(m_containerProfiles);
	result["CodecProfiles"] = toJsonValue<QList<QSharedPointer<CodecProfile>>>(m_codecProfiles);
	result["ResponseProfiles"] = toJsonValue<QList<QSharedPointer<ResponseProfile>>>(m_responseProfiles);
	result["SubtitleProfiles"] = toJsonValue<QList<QSharedPointer<SubtitleProfile>>>(m_subtitleProfiles);

	return result;
}

QString DeviceProfile::name() const { return m_name; }

void DeviceProfile::setName(QString newName) {
	m_name = newName;
}
QString DeviceProfile::jellyfinId() const { return m_jellyfinId; }

void DeviceProfile::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
QSharedPointer<DeviceIdentification> DeviceProfile::identification() const { return m_identification; }

void DeviceProfile::setIdentification(QSharedPointer<DeviceIdentification> newIdentification) {
	m_identification = newIdentification;
}
QString DeviceProfile::friendlyName() const { return m_friendlyName; }

void DeviceProfile::setFriendlyName(QString newFriendlyName) {
	m_friendlyName = newFriendlyName;
}
QString DeviceProfile::manufacturer() const { return m_manufacturer; }

void DeviceProfile::setManufacturer(QString newManufacturer) {
	m_manufacturer = newManufacturer;
}
QString DeviceProfile::manufacturerUrl() const { return m_manufacturerUrl; }

void DeviceProfile::setManufacturerUrl(QString newManufacturerUrl) {
	m_manufacturerUrl = newManufacturerUrl;
}
QString DeviceProfile::modelName() const { return m_modelName; }

void DeviceProfile::setModelName(QString newModelName) {
	m_modelName = newModelName;
}
QString DeviceProfile::modelDescription() const { return m_modelDescription; }

void DeviceProfile::setModelDescription(QString newModelDescription) {
	m_modelDescription = newModelDescription;
}
QString DeviceProfile::modelNumber() const { return m_modelNumber; }

void DeviceProfile::setModelNumber(QString newModelNumber) {
	m_modelNumber = newModelNumber;
}
QString DeviceProfile::modelUrl() const { return m_modelUrl; }

void DeviceProfile::setModelUrl(QString newModelUrl) {
	m_modelUrl = newModelUrl;
}
QString DeviceProfile::serialNumber() const { return m_serialNumber; }

void DeviceProfile::setSerialNumber(QString newSerialNumber) {
	m_serialNumber = newSerialNumber;
}
bool DeviceProfile::enableAlbumArtInDidl() const { return m_enableAlbumArtInDidl; }

void DeviceProfile::setEnableAlbumArtInDidl(bool newEnableAlbumArtInDidl) {
	m_enableAlbumArtInDidl = newEnableAlbumArtInDidl;
}
bool DeviceProfile::enableSingleAlbumArtLimit() const { return m_enableSingleAlbumArtLimit; }

void DeviceProfile::setEnableSingleAlbumArtLimit(bool newEnableSingleAlbumArtLimit) {
	m_enableSingleAlbumArtLimit = newEnableSingleAlbumArtLimit;
}
bool DeviceProfile::enableSingleSubtitleLimit() const { return m_enableSingleSubtitleLimit; }

void DeviceProfile::setEnableSingleSubtitleLimit(bool newEnableSingleSubtitleLimit) {
	m_enableSingleSubtitleLimit = newEnableSingleSubtitleLimit;
}
QString DeviceProfile::supportedMediaTypes() const { return m_supportedMediaTypes; }

void DeviceProfile::setSupportedMediaTypes(QString newSupportedMediaTypes) {
	m_supportedMediaTypes = newSupportedMediaTypes;
}
QString DeviceProfile::userId() const { return m_userId; }

void DeviceProfile::setUserId(QString newUserId) {
	m_userId = newUserId;
}
QString DeviceProfile::albumArtPn() const { return m_albumArtPn; }

void DeviceProfile::setAlbumArtPn(QString newAlbumArtPn) {
	m_albumArtPn = newAlbumArtPn;
}
qint32 DeviceProfile::maxAlbumArtWidth() const { return m_maxAlbumArtWidth; }

void DeviceProfile::setMaxAlbumArtWidth(qint32 newMaxAlbumArtWidth) {
	m_maxAlbumArtWidth = newMaxAlbumArtWidth;
}
qint32 DeviceProfile::maxAlbumArtHeight() const { return m_maxAlbumArtHeight; }

void DeviceProfile::setMaxAlbumArtHeight(qint32 newMaxAlbumArtHeight) {
	m_maxAlbumArtHeight = newMaxAlbumArtHeight;
}
qint32 DeviceProfile::maxIconWidth() const { return m_maxIconWidth; }

void DeviceProfile::setMaxIconWidth(qint32 newMaxIconWidth) {
	m_maxIconWidth = newMaxIconWidth;
}
qint32 DeviceProfile::maxIconHeight() const { return m_maxIconHeight; }

void DeviceProfile::setMaxIconHeight(qint32 newMaxIconHeight) {
	m_maxIconHeight = newMaxIconHeight;
}
qint32 DeviceProfile::maxStreamingBitrate() const { return m_maxStreamingBitrate; }

void DeviceProfile::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate) {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}
qint32 DeviceProfile::maxStaticBitrate() const { return m_maxStaticBitrate; }

void DeviceProfile::setMaxStaticBitrate(qint32 newMaxStaticBitrate) {
	m_maxStaticBitrate = newMaxStaticBitrate;
}
qint32 DeviceProfile::musicStreamingTranscodingBitrate() const { return m_musicStreamingTranscodingBitrate; }

void DeviceProfile::setMusicStreamingTranscodingBitrate(qint32 newMusicStreamingTranscodingBitrate) {
	m_musicStreamingTranscodingBitrate = newMusicStreamingTranscodingBitrate;
}
qint32 DeviceProfile::maxStaticMusicBitrate() const { return m_maxStaticMusicBitrate; }

void DeviceProfile::setMaxStaticMusicBitrate(qint32 newMaxStaticMusicBitrate) {
	m_maxStaticMusicBitrate = newMaxStaticMusicBitrate;
}
QString DeviceProfile::sonyAggregationFlags() const { return m_sonyAggregationFlags; }

void DeviceProfile::setSonyAggregationFlags(QString newSonyAggregationFlags) {
	m_sonyAggregationFlags = newSonyAggregationFlags;
}
QString DeviceProfile::protocolInfo() const { return m_protocolInfo; }

void DeviceProfile::setProtocolInfo(QString newProtocolInfo) {
	m_protocolInfo = newProtocolInfo;
}
qint32 DeviceProfile::timelineOffsetSeconds() const { return m_timelineOffsetSeconds; }

void DeviceProfile::setTimelineOffsetSeconds(qint32 newTimelineOffsetSeconds) {
	m_timelineOffsetSeconds = newTimelineOffsetSeconds;
}
bool DeviceProfile::requiresPlainVideoItems() const { return m_requiresPlainVideoItems; }

void DeviceProfile::setRequiresPlainVideoItems(bool newRequiresPlainVideoItems) {
	m_requiresPlainVideoItems = newRequiresPlainVideoItems;
}
bool DeviceProfile::requiresPlainFolders() const { return m_requiresPlainFolders; }

void DeviceProfile::setRequiresPlainFolders(bool newRequiresPlainFolders) {
	m_requiresPlainFolders = newRequiresPlainFolders;
}
bool DeviceProfile::enableMSMediaReceiverRegistrar() const { return m_enableMSMediaReceiverRegistrar; }

void DeviceProfile::setEnableMSMediaReceiverRegistrar(bool newEnableMSMediaReceiverRegistrar) {
	m_enableMSMediaReceiverRegistrar = newEnableMSMediaReceiverRegistrar;
}
bool DeviceProfile::ignoreTranscodeByteRangeRequests() const { return m_ignoreTranscodeByteRangeRequests; }

void DeviceProfile::setIgnoreTranscodeByteRangeRequests(bool newIgnoreTranscodeByteRangeRequests) {
	m_ignoreTranscodeByteRangeRequests = newIgnoreTranscodeByteRangeRequests;
}
QList<QSharedPointer<XmlAttribute>> DeviceProfile::xmlRootAttributes() const { return m_xmlRootAttributes; }

void DeviceProfile::setXmlRootAttributes(QList<QSharedPointer<XmlAttribute>> newXmlRootAttributes) {
	m_xmlRootAttributes = newXmlRootAttributes;
}
QList<QSharedPointer<DirectPlayProfile>> DeviceProfile::directPlayProfiles() const { return m_directPlayProfiles; }

void DeviceProfile::setDirectPlayProfiles(QList<QSharedPointer<DirectPlayProfile>> newDirectPlayProfiles) {
	m_directPlayProfiles = newDirectPlayProfiles;
}
QList<QSharedPointer<TranscodingProfile>> DeviceProfile::transcodingProfiles() const { return m_transcodingProfiles; }

void DeviceProfile::setTranscodingProfiles(QList<QSharedPointer<TranscodingProfile>> newTranscodingProfiles) {
	m_transcodingProfiles = newTranscodingProfiles;
}
QList<QSharedPointer<ContainerProfile>> DeviceProfile::containerProfiles() const { return m_containerProfiles; }

void DeviceProfile::setContainerProfiles(QList<QSharedPointer<ContainerProfile>> newContainerProfiles) {
	m_containerProfiles = newContainerProfiles;
}
QList<QSharedPointer<CodecProfile>> DeviceProfile::codecProfiles() const { return m_codecProfiles; }

void DeviceProfile::setCodecProfiles(QList<QSharedPointer<CodecProfile>> newCodecProfiles) {
	m_codecProfiles = newCodecProfiles;
}
QList<QSharedPointer<ResponseProfile>> DeviceProfile::responseProfiles() const { return m_responseProfiles; }

void DeviceProfile::setResponseProfiles(QList<QSharedPointer<ResponseProfile>> newResponseProfiles) {
	m_responseProfiles = newResponseProfiles;
}
QList<QSharedPointer<SubtitleProfile>> DeviceProfile::subtitleProfiles() const { return m_subtitleProfiles; }

void DeviceProfile::setSubtitleProfiles(QList<QSharedPointer<SubtitleProfile>> newSubtitleProfiles) {
	m_subtitleProfiles = newSubtitleProfiles;
}


} // NS Jellyfin
} // NS DTO
