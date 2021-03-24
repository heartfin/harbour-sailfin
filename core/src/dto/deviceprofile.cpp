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

DeviceProfile::DeviceProfile(const DeviceProfile &other) :

	m_name(other.m_name),
	m_jellyfinId(other.m_jellyfinId),
	m_identification(other.m_identification),
	m_friendlyName(other.m_friendlyName),
	m_manufacturer(other.m_manufacturer),
	m_manufacturerUrl(other.m_manufacturerUrl),
	m_modelName(other.m_modelName),
	m_modelDescription(other.m_modelDescription),
	m_modelNumber(other.m_modelNumber),
	m_modelUrl(other.m_modelUrl),
	m_serialNumber(other.m_serialNumber),
	m_enableAlbumArtInDidl(other.m_enableAlbumArtInDidl),
	m_enableSingleAlbumArtLimit(other.m_enableSingleAlbumArtLimit),
	m_enableSingleSubtitleLimit(other.m_enableSingleSubtitleLimit),
	m_supportedMediaTypes(other.m_supportedMediaTypes),
	m_userId(other.m_userId),
	m_albumArtPn(other.m_albumArtPn),
	m_maxAlbumArtWidth(other.m_maxAlbumArtWidth),
	m_maxAlbumArtHeight(other.m_maxAlbumArtHeight),
	m_maxIconWidth(other.m_maxIconWidth),
	m_maxIconHeight(other.m_maxIconHeight),
	m_maxStreamingBitrate(other.m_maxStreamingBitrate),
	m_maxStaticBitrate(other.m_maxStaticBitrate),
	m_musicStreamingTranscodingBitrate(other.m_musicStreamingTranscodingBitrate),
	m_maxStaticMusicBitrate(other.m_maxStaticMusicBitrate),
	m_sonyAggregationFlags(other.m_sonyAggregationFlags),
	m_protocolInfo(other.m_protocolInfo),
	m_timelineOffsetSeconds(other.m_timelineOffsetSeconds),
	m_requiresPlainVideoItems(other.m_requiresPlainVideoItems),
	m_requiresPlainFolders(other.m_requiresPlainFolders),
	m_enableMSMediaReceiverRegistrar(other.m_enableMSMediaReceiverRegistrar),
	m_ignoreTranscodeByteRangeRequests(other.m_ignoreTranscodeByteRangeRequests),
	m_xmlRootAttributes(other.m_xmlRootAttributes),
	m_directPlayProfiles(other.m_directPlayProfiles),
	m_transcodingProfiles(other.m_transcodingProfiles),
	m_containerProfiles(other.m_containerProfiles),
	m_codecProfiles(other.m_codecProfiles),
	m_responseProfiles(other.m_responseProfiles),
	m_subtitleProfiles(other.m_subtitleProfiles){}


void DeviceProfile::replaceData(DeviceProfile &other) {
	m_name = other.m_name;
	m_jellyfinId = other.m_jellyfinId;
	m_identification = other.m_identification;
	m_friendlyName = other.m_friendlyName;
	m_manufacturer = other.m_manufacturer;
	m_manufacturerUrl = other.m_manufacturerUrl;
	m_modelName = other.m_modelName;
	m_modelDescription = other.m_modelDescription;
	m_modelNumber = other.m_modelNumber;
	m_modelUrl = other.m_modelUrl;
	m_serialNumber = other.m_serialNumber;
	m_enableAlbumArtInDidl = other.m_enableAlbumArtInDidl;
	m_enableSingleAlbumArtLimit = other.m_enableSingleAlbumArtLimit;
	m_enableSingleSubtitleLimit = other.m_enableSingleSubtitleLimit;
	m_supportedMediaTypes = other.m_supportedMediaTypes;
	m_userId = other.m_userId;
	m_albumArtPn = other.m_albumArtPn;
	m_maxAlbumArtWidth = other.m_maxAlbumArtWidth;
	m_maxAlbumArtHeight = other.m_maxAlbumArtHeight;
	m_maxIconWidth = other.m_maxIconWidth;
	m_maxIconHeight = other.m_maxIconHeight;
	m_maxStreamingBitrate = other.m_maxStreamingBitrate;
	m_maxStaticBitrate = other.m_maxStaticBitrate;
	m_musicStreamingTranscodingBitrate = other.m_musicStreamingTranscodingBitrate;
	m_maxStaticMusicBitrate = other.m_maxStaticMusicBitrate;
	m_sonyAggregationFlags = other.m_sonyAggregationFlags;
	m_protocolInfo = other.m_protocolInfo;
	m_timelineOffsetSeconds = other.m_timelineOffsetSeconds;
	m_requiresPlainVideoItems = other.m_requiresPlainVideoItems;
	m_requiresPlainFolders = other.m_requiresPlainFolders;
	m_enableMSMediaReceiverRegistrar = other.m_enableMSMediaReceiverRegistrar;
	m_ignoreTranscodeByteRangeRequests = other.m_ignoreTranscodeByteRangeRequests;
	m_xmlRootAttributes = other.m_xmlRootAttributes;
	m_directPlayProfiles = other.m_directPlayProfiles;
	m_transcodingProfiles = other.m_transcodingProfiles;
	m_containerProfiles = other.m_containerProfiles;
	m_codecProfiles = other.m_codecProfiles;
	m_responseProfiles = other.m_responseProfiles;
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
	m_identification = Jellyfin::Support::fromJsonValue<QSharedPointer<DeviceIdentification>>(source["Identification"]);
	m_friendlyName = Jellyfin::Support::fromJsonValue<QString>(source["FriendlyName"]);
	m_manufacturer = Jellyfin::Support::fromJsonValue<QString>(source["Manufacturer"]);
	m_manufacturerUrl = Jellyfin::Support::fromJsonValue<QString>(source["ManufacturerUrl"]);
	m_modelName = Jellyfin::Support::fromJsonValue<QString>(source["ModelName"]);
	m_modelDescription = Jellyfin::Support::fromJsonValue<QString>(source["ModelDescription"]);
	m_modelNumber = Jellyfin::Support::fromJsonValue<QString>(source["ModelNumber"]);
	m_modelUrl = Jellyfin::Support::fromJsonValue<QString>(source["ModelUrl"]);
	m_serialNumber = Jellyfin::Support::fromJsonValue<QString>(source["SerialNumber"]);
	m_enableAlbumArtInDidl = Jellyfin::Support::fromJsonValue<bool>(source["EnableAlbumArtInDidl"]);
	m_enableSingleAlbumArtLimit = Jellyfin::Support::fromJsonValue<bool>(source["EnableSingleAlbumArtLimit"]);
	m_enableSingleSubtitleLimit = Jellyfin::Support::fromJsonValue<bool>(source["EnableSingleSubtitleLimit"]);
	m_supportedMediaTypes = Jellyfin::Support::fromJsonValue<QString>(source["SupportedMediaTypes"]);
	m_userId = Jellyfin::Support::fromJsonValue<QString>(source["UserId"]);
	m_albumArtPn = Jellyfin::Support::fromJsonValue<QString>(source["AlbumArtPn"]);
	m_maxAlbumArtWidth = Jellyfin::Support::fromJsonValue<qint32>(source["MaxAlbumArtWidth"]);
	m_maxAlbumArtHeight = Jellyfin::Support::fromJsonValue<qint32>(source["MaxAlbumArtHeight"]);
	m_maxIconWidth = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["MaxIconWidth"]);
	m_maxIconHeight = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["MaxIconHeight"]);
	m_maxStreamingBitrate = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["MaxStreamingBitrate"]);
	m_maxStaticBitrate = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["MaxStaticBitrate"]);
	m_musicStreamingTranscodingBitrate = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["MusicStreamingTranscodingBitrate"]);
	m_maxStaticMusicBitrate = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["MaxStaticMusicBitrate"]);
	m_sonyAggregationFlags = Jellyfin::Support::fromJsonValue<QString>(source["SonyAggregationFlags"]);
	m_protocolInfo = Jellyfin::Support::fromJsonValue<QString>(source["ProtocolInfo"]);
	m_timelineOffsetSeconds = Jellyfin::Support::fromJsonValue<qint32>(source["TimelineOffsetSeconds"]);
	m_requiresPlainVideoItems = Jellyfin::Support::fromJsonValue<bool>(source["RequiresPlainVideoItems"]);
	m_requiresPlainFolders = Jellyfin::Support::fromJsonValue<bool>(source["RequiresPlainFolders"]);
	m_enableMSMediaReceiverRegistrar = Jellyfin::Support::fromJsonValue<bool>(source["EnableMSMediaReceiverRegistrar"]);
	m_ignoreTranscodeByteRangeRequests = Jellyfin::Support::fromJsonValue<bool>(source["IgnoreTranscodeByteRangeRequests"]);
	m_xmlRootAttributes = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<XmlAttribute>>>(source["XmlRootAttributes"]);
	m_directPlayProfiles = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<DirectPlayProfile>>>(source["DirectPlayProfiles"]);
	m_transcodingProfiles = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<TranscodingProfile>>>(source["TranscodingProfiles"]);
	m_containerProfiles = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<ContainerProfile>>>(source["ContainerProfiles"]);
	m_codecProfiles = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<CodecProfile>>>(source["CodecProfiles"]);
	m_responseProfiles = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<ResponseProfile>>>(source["ResponseProfiles"]);
	m_subtitleProfiles = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<SubtitleProfile>>>(source["SubtitleProfiles"]);

}
	
QJsonObject DeviceProfile::toJson() {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	result["Identification"] = Jellyfin::Support::toJsonValue<QSharedPointer<DeviceIdentification>>(m_identification);
	result["FriendlyName"] = Jellyfin::Support::toJsonValue<QString>(m_friendlyName);
	result["Manufacturer"] = Jellyfin::Support::toJsonValue<QString>(m_manufacturer);
	result["ManufacturerUrl"] = Jellyfin::Support::toJsonValue<QString>(m_manufacturerUrl);
	result["ModelName"] = Jellyfin::Support::toJsonValue<QString>(m_modelName);
	result["ModelDescription"] = Jellyfin::Support::toJsonValue<QString>(m_modelDescription);
	result["ModelNumber"] = Jellyfin::Support::toJsonValue<QString>(m_modelNumber);
	result["ModelUrl"] = Jellyfin::Support::toJsonValue<QString>(m_modelUrl);
	result["SerialNumber"] = Jellyfin::Support::toJsonValue<QString>(m_serialNumber);
	result["EnableAlbumArtInDidl"] = Jellyfin::Support::toJsonValue<bool>(m_enableAlbumArtInDidl);
	result["EnableSingleAlbumArtLimit"] = Jellyfin::Support::toJsonValue<bool>(m_enableSingleAlbumArtLimit);
	result["EnableSingleSubtitleLimit"] = Jellyfin::Support::toJsonValue<bool>(m_enableSingleSubtitleLimit);
	result["SupportedMediaTypes"] = Jellyfin::Support::toJsonValue<QString>(m_supportedMediaTypes);
	result["UserId"] = Jellyfin::Support::toJsonValue<QString>(m_userId);
	result["AlbumArtPn"] = Jellyfin::Support::toJsonValue<QString>(m_albumArtPn);
	result["MaxAlbumArtWidth"] = Jellyfin::Support::toJsonValue<qint32>(m_maxAlbumArtWidth);
	result["MaxAlbumArtHeight"] = Jellyfin::Support::toJsonValue<qint32>(m_maxAlbumArtHeight);
	result["MaxIconWidth"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_maxIconWidth);
	result["MaxIconHeight"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_maxIconHeight);
	result["MaxStreamingBitrate"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_maxStreamingBitrate);
	result["MaxStaticBitrate"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_maxStaticBitrate);
	result["MusicStreamingTranscodingBitrate"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_musicStreamingTranscodingBitrate);
	result["MaxStaticMusicBitrate"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_maxStaticMusicBitrate);
	result["SonyAggregationFlags"] = Jellyfin::Support::toJsonValue<QString>(m_sonyAggregationFlags);
	result["ProtocolInfo"] = Jellyfin::Support::toJsonValue<QString>(m_protocolInfo);
	result["TimelineOffsetSeconds"] = Jellyfin::Support::toJsonValue<qint32>(m_timelineOffsetSeconds);
	result["RequiresPlainVideoItems"] = Jellyfin::Support::toJsonValue<bool>(m_requiresPlainVideoItems);
	result["RequiresPlainFolders"] = Jellyfin::Support::toJsonValue<bool>(m_requiresPlainFolders);
	result["EnableMSMediaReceiverRegistrar"] = Jellyfin::Support::toJsonValue<bool>(m_enableMSMediaReceiverRegistrar);
	result["IgnoreTranscodeByteRangeRequests"] = Jellyfin::Support::toJsonValue<bool>(m_ignoreTranscodeByteRangeRequests);
	result["XmlRootAttributes"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<XmlAttribute>>>(m_xmlRootAttributes);
	result["DirectPlayProfiles"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<DirectPlayProfile>>>(m_directPlayProfiles);
	result["TranscodingProfiles"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<TranscodingProfile>>>(m_transcodingProfiles);
	result["ContainerProfiles"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<ContainerProfile>>>(m_containerProfiles);
	result["CodecProfiles"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<CodecProfile>>>(m_codecProfiles);
	result["ResponseProfiles"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<ResponseProfile>>>(m_responseProfiles);
	result["SubtitleProfiles"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<SubtitleProfile>>>(m_subtitleProfiles);

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
QSharedPointer<DeviceIdentification> DeviceProfile::identification() const { return m_identification; }

void DeviceProfile::setIdentification(QSharedPointer<DeviceIdentification> newIdentification) {
	m_identification = newIdentification;
}

QString DeviceProfile::friendlyName() const { return m_friendlyName; }

void DeviceProfile::setFriendlyName(QString newFriendlyName) {
	m_friendlyName = newFriendlyName;
}
bool DeviceProfile::friendlyNameNull() const {
	return m_friendlyName.isNull();
}

void DeviceProfile::setFriendlyNameNull() {
	m_friendlyName.clear();

}
QString DeviceProfile::manufacturer() const { return m_manufacturer; }

void DeviceProfile::setManufacturer(QString newManufacturer) {
	m_manufacturer = newManufacturer;
}
bool DeviceProfile::manufacturerNull() const {
	return m_manufacturer.isNull();
}

void DeviceProfile::setManufacturerNull() {
	m_manufacturer.clear();

}
QString DeviceProfile::manufacturerUrl() const { return m_manufacturerUrl; }

void DeviceProfile::setManufacturerUrl(QString newManufacturerUrl) {
	m_manufacturerUrl = newManufacturerUrl;
}
bool DeviceProfile::manufacturerUrlNull() const {
	return m_manufacturerUrl.isNull();
}

void DeviceProfile::setManufacturerUrlNull() {
	m_manufacturerUrl.clear();

}
QString DeviceProfile::modelName() const { return m_modelName; }

void DeviceProfile::setModelName(QString newModelName) {
	m_modelName = newModelName;
}
bool DeviceProfile::modelNameNull() const {
	return m_modelName.isNull();
}

void DeviceProfile::setModelNameNull() {
	m_modelName.clear();

}
QString DeviceProfile::modelDescription() const { return m_modelDescription; }

void DeviceProfile::setModelDescription(QString newModelDescription) {
	m_modelDescription = newModelDescription;
}
bool DeviceProfile::modelDescriptionNull() const {
	return m_modelDescription.isNull();
}

void DeviceProfile::setModelDescriptionNull() {
	m_modelDescription.clear();

}
QString DeviceProfile::modelNumber() const { return m_modelNumber; }

void DeviceProfile::setModelNumber(QString newModelNumber) {
	m_modelNumber = newModelNumber;
}
bool DeviceProfile::modelNumberNull() const {
	return m_modelNumber.isNull();
}

void DeviceProfile::setModelNumberNull() {
	m_modelNumber.clear();

}
QString DeviceProfile::modelUrl() const { return m_modelUrl; }

void DeviceProfile::setModelUrl(QString newModelUrl) {
	m_modelUrl = newModelUrl;
}
bool DeviceProfile::modelUrlNull() const {
	return m_modelUrl.isNull();
}

void DeviceProfile::setModelUrlNull() {
	m_modelUrl.clear();

}
QString DeviceProfile::serialNumber() const { return m_serialNumber; }

void DeviceProfile::setSerialNumber(QString newSerialNumber) {
	m_serialNumber = newSerialNumber;
}
bool DeviceProfile::serialNumberNull() const {
	return m_serialNumber.isNull();
}

void DeviceProfile::setSerialNumberNull() {
	m_serialNumber.clear();

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
bool DeviceProfile::supportedMediaTypesNull() const {
	return m_supportedMediaTypes.isNull();
}

void DeviceProfile::setSupportedMediaTypesNull() {
	m_supportedMediaTypes.clear();

}
QString DeviceProfile::userId() const { return m_userId; }

void DeviceProfile::setUserId(QString newUserId) {
	m_userId = newUserId;
}
bool DeviceProfile::userIdNull() const {
	return m_userId.isNull();
}

void DeviceProfile::setUserIdNull() {
	m_userId.clear();

}
QString DeviceProfile::albumArtPn() const { return m_albumArtPn; }

void DeviceProfile::setAlbumArtPn(QString newAlbumArtPn) {
	m_albumArtPn = newAlbumArtPn;
}
bool DeviceProfile::albumArtPnNull() const {
	return m_albumArtPn.isNull();
}

void DeviceProfile::setAlbumArtPnNull() {
	m_albumArtPn.clear();

}
qint32 DeviceProfile::maxAlbumArtWidth() const { return m_maxAlbumArtWidth; }

void DeviceProfile::setMaxAlbumArtWidth(qint32 newMaxAlbumArtWidth) {
	m_maxAlbumArtWidth = newMaxAlbumArtWidth;
}

qint32 DeviceProfile::maxAlbumArtHeight() const { return m_maxAlbumArtHeight; }

void DeviceProfile::setMaxAlbumArtHeight(qint32 newMaxAlbumArtHeight) {
	m_maxAlbumArtHeight = newMaxAlbumArtHeight;
}

std::optional<qint32> DeviceProfile::maxIconWidth() const { return m_maxIconWidth; }

void DeviceProfile::setMaxIconWidth(std::optional<qint32> newMaxIconWidth) {
	m_maxIconWidth = newMaxIconWidth;
}
bool DeviceProfile::maxIconWidthNull() const {
	return !m_maxIconWidth.has_value();
}

void DeviceProfile::setMaxIconWidthNull() {
	m_maxIconWidth = std::nullopt;

}
std::optional<qint32> DeviceProfile::maxIconHeight() const { return m_maxIconHeight; }

void DeviceProfile::setMaxIconHeight(std::optional<qint32> newMaxIconHeight) {
	m_maxIconHeight = newMaxIconHeight;
}
bool DeviceProfile::maxIconHeightNull() const {
	return !m_maxIconHeight.has_value();
}

void DeviceProfile::setMaxIconHeightNull() {
	m_maxIconHeight = std::nullopt;

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
QString DeviceProfile::sonyAggregationFlags() const { return m_sonyAggregationFlags; }

void DeviceProfile::setSonyAggregationFlags(QString newSonyAggregationFlags) {
	m_sonyAggregationFlags = newSonyAggregationFlags;
}
bool DeviceProfile::sonyAggregationFlagsNull() const {
	return m_sonyAggregationFlags.isNull();
}

void DeviceProfile::setSonyAggregationFlagsNull() {
	m_sonyAggregationFlags.clear();

}
QString DeviceProfile::protocolInfo() const { return m_protocolInfo; }

void DeviceProfile::setProtocolInfo(QString newProtocolInfo) {
	m_protocolInfo = newProtocolInfo;
}
bool DeviceProfile::protocolInfoNull() const {
	return m_protocolInfo.isNull();
}

void DeviceProfile::setProtocolInfoNull() {
	m_protocolInfo.clear();

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
bool DeviceProfile::xmlRootAttributesNull() const {
	return m_xmlRootAttributes.size() == 0;
}

void DeviceProfile::setXmlRootAttributesNull() {
	m_xmlRootAttributes.clear();

}
QList<QSharedPointer<DirectPlayProfile>> DeviceProfile::directPlayProfiles() const { return m_directPlayProfiles; }

void DeviceProfile::setDirectPlayProfiles(QList<QSharedPointer<DirectPlayProfile>> newDirectPlayProfiles) {
	m_directPlayProfiles = newDirectPlayProfiles;
}
bool DeviceProfile::directPlayProfilesNull() const {
	return m_directPlayProfiles.size() == 0;
}

void DeviceProfile::setDirectPlayProfilesNull() {
	m_directPlayProfiles.clear();

}
QList<QSharedPointer<TranscodingProfile>> DeviceProfile::transcodingProfiles() const { return m_transcodingProfiles; }

void DeviceProfile::setTranscodingProfiles(QList<QSharedPointer<TranscodingProfile>> newTranscodingProfiles) {
	m_transcodingProfiles = newTranscodingProfiles;
}
bool DeviceProfile::transcodingProfilesNull() const {
	return m_transcodingProfiles.size() == 0;
}

void DeviceProfile::setTranscodingProfilesNull() {
	m_transcodingProfiles.clear();

}
QList<QSharedPointer<ContainerProfile>> DeviceProfile::containerProfiles() const { return m_containerProfiles; }

void DeviceProfile::setContainerProfiles(QList<QSharedPointer<ContainerProfile>> newContainerProfiles) {
	m_containerProfiles = newContainerProfiles;
}
bool DeviceProfile::containerProfilesNull() const {
	return m_containerProfiles.size() == 0;
}

void DeviceProfile::setContainerProfilesNull() {
	m_containerProfiles.clear();

}
QList<QSharedPointer<CodecProfile>> DeviceProfile::codecProfiles() const { return m_codecProfiles; }

void DeviceProfile::setCodecProfiles(QList<QSharedPointer<CodecProfile>> newCodecProfiles) {
	m_codecProfiles = newCodecProfiles;
}
bool DeviceProfile::codecProfilesNull() const {
	return m_codecProfiles.size() == 0;
}

void DeviceProfile::setCodecProfilesNull() {
	m_codecProfiles.clear();

}
QList<QSharedPointer<ResponseProfile>> DeviceProfile::responseProfiles() const { return m_responseProfiles; }

void DeviceProfile::setResponseProfiles(QList<QSharedPointer<ResponseProfile>> newResponseProfiles) {
	m_responseProfiles = newResponseProfiles;
}
bool DeviceProfile::responseProfilesNull() const {
	return m_responseProfiles.size() == 0;
}

void DeviceProfile::setResponseProfilesNull() {
	m_responseProfiles.clear();

}
QList<QSharedPointer<SubtitleProfile>> DeviceProfile::subtitleProfiles() const { return m_subtitleProfiles; }

void DeviceProfile::setSubtitleProfiles(QList<QSharedPointer<SubtitleProfile>> newSubtitleProfiles) {
	m_subtitleProfiles = newSubtitleProfiles;
}
bool DeviceProfile::subtitleProfilesNull() const {
	return m_subtitleProfiles.size() == 0;
}

void DeviceProfile::setSubtitleProfilesNull() {
	m_subtitleProfiles.clear();

}

} // NS DTO

namespace Support {

using DeviceProfile = Jellyfin::DTO::DeviceProfile;

template <>
DeviceProfile fromJsonValue<DeviceProfile>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return DeviceProfile::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
