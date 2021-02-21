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

DeviceProfile::DeviceProfile(QObject *parent) : QObject(parent) {}

DeviceProfile *DeviceProfile::fromJSON(QJsonObject source, QObject *parent) {
	DeviceProfile *instance = new DeviceProfile(parent);
	instance->updateFromJSON(source);
	return instance;
}

void DeviceProfile::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject DeviceProfile::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString DeviceProfile::name() const { return m_name; }
void DeviceProfile::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString DeviceProfile::jellyfinId() const { return m_jellyfinId; }
void DeviceProfile::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

DeviceIdentification * DeviceProfile::identification() const { return m_identification; }
void DeviceProfile::setIdentification(DeviceIdentification * newIdentification) {
	m_identification = newIdentification;
	emit identificationChanged(newIdentification);
}

QString DeviceProfile::friendlyName() const { return m_friendlyName; }
void DeviceProfile::setFriendlyName(QString newFriendlyName) {
	m_friendlyName = newFriendlyName;
	emit friendlyNameChanged(newFriendlyName);
}

QString DeviceProfile::manufacturer() const { return m_manufacturer; }
void DeviceProfile::setManufacturer(QString newManufacturer) {
	m_manufacturer = newManufacturer;
	emit manufacturerChanged(newManufacturer);
}

QString DeviceProfile::manufacturerUrl() const { return m_manufacturerUrl; }
void DeviceProfile::setManufacturerUrl(QString newManufacturerUrl) {
	m_manufacturerUrl = newManufacturerUrl;
	emit manufacturerUrlChanged(newManufacturerUrl);
}

QString DeviceProfile::modelName() const { return m_modelName; }
void DeviceProfile::setModelName(QString newModelName) {
	m_modelName = newModelName;
	emit modelNameChanged(newModelName);
}

QString DeviceProfile::modelDescription() const { return m_modelDescription; }
void DeviceProfile::setModelDescription(QString newModelDescription) {
	m_modelDescription = newModelDescription;
	emit modelDescriptionChanged(newModelDescription);
}

QString DeviceProfile::modelNumber() const { return m_modelNumber; }
void DeviceProfile::setModelNumber(QString newModelNumber) {
	m_modelNumber = newModelNumber;
	emit modelNumberChanged(newModelNumber);
}

QString DeviceProfile::modelUrl() const { return m_modelUrl; }
void DeviceProfile::setModelUrl(QString newModelUrl) {
	m_modelUrl = newModelUrl;
	emit modelUrlChanged(newModelUrl);
}

QString DeviceProfile::serialNumber() const { return m_serialNumber; }
void DeviceProfile::setSerialNumber(QString newSerialNumber) {
	m_serialNumber = newSerialNumber;
	emit serialNumberChanged(newSerialNumber);
}

bool DeviceProfile::enableAlbumArtInDidl() const { return m_enableAlbumArtInDidl; }
void DeviceProfile::setEnableAlbumArtInDidl(bool newEnableAlbumArtInDidl) {
	m_enableAlbumArtInDidl = newEnableAlbumArtInDidl;
	emit enableAlbumArtInDidlChanged(newEnableAlbumArtInDidl);
}

bool DeviceProfile::enableSingleAlbumArtLimit() const { return m_enableSingleAlbumArtLimit; }
void DeviceProfile::setEnableSingleAlbumArtLimit(bool newEnableSingleAlbumArtLimit) {
	m_enableSingleAlbumArtLimit = newEnableSingleAlbumArtLimit;
	emit enableSingleAlbumArtLimitChanged(newEnableSingleAlbumArtLimit);
}

bool DeviceProfile::enableSingleSubtitleLimit() const { return m_enableSingleSubtitleLimit; }
void DeviceProfile::setEnableSingleSubtitleLimit(bool newEnableSingleSubtitleLimit) {
	m_enableSingleSubtitleLimit = newEnableSingleSubtitleLimit;
	emit enableSingleSubtitleLimitChanged(newEnableSingleSubtitleLimit);
}

QString DeviceProfile::supportedMediaTypes() const { return m_supportedMediaTypes; }
void DeviceProfile::setSupportedMediaTypes(QString newSupportedMediaTypes) {
	m_supportedMediaTypes = newSupportedMediaTypes;
	emit supportedMediaTypesChanged(newSupportedMediaTypes);
}

QString DeviceProfile::userId() const { return m_userId; }
void DeviceProfile::setUserId(QString newUserId) {
	m_userId = newUserId;
	emit userIdChanged(newUserId);
}

QString DeviceProfile::albumArtPn() const { return m_albumArtPn; }
void DeviceProfile::setAlbumArtPn(QString newAlbumArtPn) {
	m_albumArtPn = newAlbumArtPn;
	emit albumArtPnChanged(newAlbumArtPn);
}

qint32 DeviceProfile::maxAlbumArtWidth() const { return m_maxAlbumArtWidth; }
void DeviceProfile::setMaxAlbumArtWidth(qint32 newMaxAlbumArtWidth) {
	m_maxAlbumArtWidth = newMaxAlbumArtWidth;
	emit maxAlbumArtWidthChanged(newMaxAlbumArtWidth);
}

qint32 DeviceProfile::maxAlbumArtHeight() const { return m_maxAlbumArtHeight; }
void DeviceProfile::setMaxAlbumArtHeight(qint32 newMaxAlbumArtHeight) {
	m_maxAlbumArtHeight = newMaxAlbumArtHeight;
	emit maxAlbumArtHeightChanged(newMaxAlbumArtHeight);
}

qint32 DeviceProfile::maxIconWidth() const { return m_maxIconWidth; }
void DeviceProfile::setMaxIconWidth(qint32 newMaxIconWidth) {
	m_maxIconWidth = newMaxIconWidth;
	emit maxIconWidthChanged(newMaxIconWidth);
}

qint32 DeviceProfile::maxIconHeight() const { return m_maxIconHeight; }
void DeviceProfile::setMaxIconHeight(qint32 newMaxIconHeight) {
	m_maxIconHeight = newMaxIconHeight;
	emit maxIconHeightChanged(newMaxIconHeight);
}

qint32 DeviceProfile::maxStreamingBitrate() const { return m_maxStreamingBitrate; }
void DeviceProfile::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate) {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
	emit maxStreamingBitrateChanged(newMaxStreamingBitrate);
}

qint32 DeviceProfile::maxStaticBitrate() const { return m_maxStaticBitrate; }
void DeviceProfile::setMaxStaticBitrate(qint32 newMaxStaticBitrate) {
	m_maxStaticBitrate = newMaxStaticBitrate;
	emit maxStaticBitrateChanged(newMaxStaticBitrate);
}

qint32 DeviceProfile::musicStreamingTranscodingBitrate() const { return m_musicStreamingTranscodingBitrate; }
void DeviceProfile::setMusicStreamingTranscodingBitrate(qint32 newMusicStreamingTranscodingBitrate) {
	m_musicStreamingTranscodingBitrate = newMusicStreamingTranscodingBitrate;
	emit musicStreamingTranscodingBitrateChanged(newMusicStreamingTranscodingBitrate);
}

qint32 DeviceProfile::maxStaticMusicBitrate() const { return m_maxStaticMusicBitrate; }
void DeviceProfile::setMaxStaticMusicBitrate(qint32 newMaxStaticMusicBitrate) {
	m_maxStaticMusicBitrate = newMaxStaticMusicBitrate;
	emit maxStaticMusicBitrateChanged(newMaxStaticMusicBitrate);
}

QString DeviceProfile::sonyAggregationFlags() const { return m_sonyAggregationFlags; }
void DeviceProfile::setSonyAggregationFlags(QString newSonyAggregationFlags) {
	m_sonyAggregationFlags = newSonyAggregationFlags;
	emit sonyAggregationFlagsChanged(newSonyAggregationFlags);
}

QString DeviceProfile::protocolInfo() const { return m_protocolInfo; }
void DeviceProfile::setProtocolInfo(QString newProtocolInfo) {
	m_protocolInfo = newProtocolInfo;
	emit protocolInfoChanged(newProtocolInfo);
}

qint32 DeviceProfile::timelineOffsetSeconds() const { return m_timelineOffsetSeconds; }
void DeviceProfile::setTimelineOffsetSeconds(qint32 newTimelineOffsetSeconds) {
	m_timelineOffsetSeconds = newTimelineOffsetSeconds;
	emit timelineOffsetSecondsChanged(newTimelineOffsetSeconds);
}

bool DeviceProfile::requiresPlainVideoItems() const { return m_requiresPlainVideoItems; }
void DeviceProfile::setRequiresPlainVideoItems(bool newRequiresPlainVideoItems) {
	m_requiresPlainVideoItems = newRequiresPlainVideoItems;
	emit requiresPlainVideoItemsChanged(newRequiresPlainVideoItems);
}

bool DeviceProfile::requiresPlainFolders() const { return m_requiresPlainFolders; }
void DeviceProfile::setRequiresPlainFolders(bool newRequiresPlainFolders) {
	m_requiresPlainFolders = newRequiresPlainFolders;
	emit requiresPlainFoldersChanged(newRequiresPlainFolders);
}

bool DeviceProfile::enableMSMediaReceiverRegistrar() const { return m_enableMSMediaReceiverRegistrar; }
void DeviceProfile::setEnableMSMediaReceiverRegistrar(bool newEnableMSMediaReceiverRegistrar) {
	m_enableMSMediaReceiverRegistrar = newEnableMSMediaReceiverRegistrar;
	emit enableMSMediaReceiverRegistrarChanged(newEnableMSMediaReceiverRegistrar);
}

bool DeviceProfile::ignoreTranscodeByteRangeRequests() const { return m_ignoreTranscodeByteRangeRequests; }
void DeviceProfile::setIgnoreTranscodeByteRangeRequests(bool newIgnoreTranscodeByteRangeRequests) {
	m_ignoreTranscodeByteRangeRequests = newIgnoreTranscodeByteRangeRequests;
	emit ignoreTranscodeByteRangeRequestsChanged(newIgnoreTranscodeByteRangeRequests);
}

QList<XmlAttribute *> DeviceProfile::xmlRootAttributes() const { return m_xmlRootAttributes; }
void DeviceProfile::setXmlRootAttributes(QList<XmlAttribute *> newXmlRootAttributes) {
	m_xmlRootAttributes = newXmlRootAttributes;
	emit xmlRootAttributesChanged(newXmlRootAttributes);
}

QList<DirectPlayProfile *> DeviceProfile::directPlayProfiles() const { return m_directPlayProfiles; }
void DeviceProfile::setDirectPlayProfiles(QList<DirectPlayProfile *> newDirectPlayProfiles) {
	m_directPlayProfiles = newDirectPlayProfiles;
	emit directPlayProfilesChanged(newDirectPlayProfiles);
}

QList<TranscodingProfile *> DeviceProfile::transcodingProfiles() const { return m_transcodingProfiles; }
void DeviceProfile::setTranscodingProfiles(QList<TranscodingProfile *> newTranscodingProfiles) {
	m_transcodingProfiles = newTranscodingProfiles;
	emit transcodingProfilesChanged(newTranscodingProfiles);
}

QList<ContainerProfile *> DeviceProfile::containerProfiles() const { return m_containerProfiles; }
void DeviceProfile::setContainerProfiles(QList<ContainerProfile *> newContainerProfiles) {
	m_containerProfiles = newContainerProfiles;
	emit containerProfilesChanged(newContainerProfiles);
}

QList<CodecProfile *> DeviceProfile::codecProfiles() const { return m_codecProfiles; }
void DeviceProfile::setCodecProfiles(QList<CodecProfile *> newCodecProfiles) {
	m_codecProfiles = newCodecProfiles;
	emit codecProfilesChanged(newCodecProfiles);
}

QList<ResponseProfile *> DeviceProfile::responseProfiles() const { return m_responseProfiles; }
void DeviceProfile::setResponseProfiles(QList<ResponseProfile *> newResponseProfiles) {
	m_responseProfiles = newResponseProfiles;
	emit responseProfilesChanged(newResponseProfiles);
}

QList<SubtitleProfile *> DeviceProfile::subtitleProfiles() const { return m_subtitleProfiles; }
void DeviceProfile::setSubtitleProfiles(QList<SubtitleProfile *> newSubtitleProfiles) {
	m_subtitleProfiles = newSubtitleProfiles;
	emit subtitleProfilesChanged(newSubtitleProfiles);
}


} // NS Jellyfin
} // NS DTO
