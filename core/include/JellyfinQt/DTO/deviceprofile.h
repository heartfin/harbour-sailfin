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
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/DTO/codecprofile.h"
#include "JellyfinQt/DTO/containerprofile.h"
#include "JellyfinQt/DTO/deviceidentification.h"
#include "JellyfinQt/DTO/directplayprofile.h"
#include "JellyfinQt/DTO/responseprofile.h"
#include "JellyfinQt/DTO/subtitleprofile.h"
#include "JellyfinQt/DTO/transcodingprofile.h"
#include "JellyfinQt/DTO/xmlattribute.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class DeviceProfile {
public:DeviceProfile();DeviceProfile(const DeviceProfile &other);
	
	static DeviceProfile fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the Name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the Name.
	*/
	void setName(QString newName);
	/**
	 * @brief Gets or sets the Id.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets or sets the Id.
	*/
	void setJellyfinId(QString newJellyfinId);

	QSharedPointer<DeviceIdentification> identification() const;

	void setIdentification(QSharedPointer<DeviceIdentification> newIdentification);
	/**
	 * @brief Gets or sets the FriendlyName.
	 */
	QString friendlyName() const;
	/**
	* @brief Gets or sets the FriendlyName.
	*/
	void setFriendlyName(QString newFriendlyName);
	/**
	 * @brief Gets or sets the Manufacturer.
	 */
	QString manufacturer() const;
	/**
	* @brief Gets or sets the Manufacturer.
	*/
	void setManufacturer(QString newManufacturer);
	/**
	 * @brief Gets or sets the ManufacturerUrl.
	 */
	QString manufacturerUrl() const;
	/**
	* @brief Gets or sets the ManufacturerUrl.
	*/
	void setManufacturerUrl(QString newManufacturerUrl);
	/**
	 * @brief Gets or sets the ModelName.
	 */
	QString modelName() const;
	/**
	* @brief Gets or sets the ModelName.
	*/
	void setModelName(QString newModelName);
	/**
	 * @brief Gets or sets the ModelDescription.
	 */
	QString modelDescription() const;
	/**
	* @brief Gets or sets the ModelDescription.
	*/
	void setModelDescription(QString newModelDescription);
	/**
	 * @brief Gets or sets the ModelNumber.
	 */
	QString modelNumber() const;
	/**
	* @brief Gets or sets the ModelNumber.
	*/
	void setModelNumber(QString newModelNumber);
	/**
	 * @brief Gets or sets the ModelUrl.
	 */
	QString modelUrl() const;
	/**
	* @brief Gets or sets the ModelUrl.
	*/
	void setModelUrl(QString newModelUrl);
	/**
	 * @brief Gets or sets the SerialNumber.
	 */
	QString serialNumber() const;
	/**
	* @brief Gets or sets the SerialNumber.
	*/
	void setSerialNumber(QString newSerialNumber);
	/**
	 * @brief Gets or sets a value indicating whether EnableAlbumArtInDidl.
	 */
	bool enableAlbumArtInDidl() const;
	/**
	* @brief Gets or sets a value indicating whether EnableAlbumArtInDidl.
	*/
	void setEnableAlbumArtInDidl(bool newEnableAlbumArtInDidl);
	/**
	 * @brief Gets or sets a value indicating whether EnableSingleAlbumArtLimit.
	 */
	bool enableSingleAlbumArtLimit() const;
	/**
	* @brief Gets or sets a value indicating whether EnableSingleAlbumArtLimit.
	*/
	void setEnableSingleAlbumArtLimit(bool newEnableSingleAlbumArtLimit);
	/**
	 * @brief Gets or sets a value indicating whether EnableSingleSubtitleLimit.
	 */
	bool enableSingleSubtitleLimit() const;
	/**
	* @brief Gets or sets a value indicating whether EnableSingleSubtitleLimit.
	*/
	void setEnableSingleSubtitleLimit(bool newEnableSingleSubtitleLimit);
	/**
	 * @brief Gets or sets the SupportedMediaTypes.
	 */
	QString supportedMediaTypes() const;
	/**
	* @brief Gets or sets the SupportedMediaTypes.
	*/
	void setSupportedMediaTypes(QString newSupportedMediaTypes);
	/**
	 * @brief Gets or sets the UserId.
	 */
	QString userId() const;
	/**
	* @brief Gets or sets the UserId.
	*/
	void setUserId(QString newUserId);
	/**
	 * @brief Gets or sets the AlbumArtPn.
	 */
	QString albumArtPn() const;
	/**
	* @brief Gets or sets the AlbumArtPn.
	*/
	void setAlbumArtPn(QString newAlbumArtPn);
	/**
	 * @brief Gets or sets the MaxAlbumArtWidth.
	 */
	qint32 maxAlbumArtWidth() const;
	/**
	* @brief Gets or sets the MaxAlbumArtWidth.
	*/
	void setMaxAlbumArtWidth(qint32 newMaxAlbumArtWidth);
	/**
	 * @brief Gets or sets the MaxAlbumArtHeight.
	 */
	qint32 maxAlbumArtHeight() const;
	/**
	* @brief Gets or sets the MaxAlbumArtHeight.
	*/
	void setMaxAlbumArtHeight(qint32 newMaxAlbumArtHeight);
	/**
	 * @brief Gets or sets the MaxIconWidth.
	 */
	qint32 maxIconWidth() const;
	/**
	* @brief Gets or sets the MaxIconWidth.
	*/
	void setMaxIconWidth(qint32 newMaxIconWidth);
	/**
	 * @brief Gets or sets the MaxIconHeight.
	 */
	qint32 maxIconHeight() const;
	/**
	* @brief Gets or sets the MaxIconHeight.
	*/
	void setMaxIconHeight(qint32 newMaxIconHeight);
	/**
	 * @brief Gets or sets the MaxStreamingBitrate.
	 */
	qint32 maxStreamingBitrate() const;
	/**
	* @brief Gets or sets the MaxStreamingBitrate.
	*/
	void setMaxStreamingBitrate(qint32 newMaxStreamingBitrate);
	/**
	 * @brief Gets or sets the MaxStaticBitrate.
	 */
	qint32 maxStaticBitrate() const;
	/**
	* @brief Gets or sets the MaxStaticBitrate.
	*/
	void setMaxStaticBitrate(qint32 newMaxStaticBitrate);
	/**
	 * @brief Gets or sets the MusicStreamingTranscodingBitrate.
	 */
	qint32 musicStreamingTranscodingBitrate() const;
	/**
	* @brief Gets or sets the MusicStreamingTranscodingBitrate.
	*/
	void setMusicStreamingTranscodingBitrate(qint32 newMusicStreamingTranscodingBitrate);
	/**
	 * @brief Gets or sets the MaxStaticMusicBitrate.
	 */
	qint32 maxStaticMusicBitrate() const;
	/**
	* @brief Gets or sets the MaxStaticMusicBitrate.
	*/
	void setMaxStaticMusicBitrate(qint32 newMaxStaticMusicBitrate);
	/**
	 * @brief Gets or sets the content of the aggregationFlags element in the urn:schemas-sonycom:av namespace.
	 */
	QString sonyAggregationFlags() const;
	/**
	* @brief Gets or sets the content of the aggregationFlags element in the urn:schemas-sonycom:av namespace.
	*/
	void setSonyAggregationFlags(QString newSonyAggregationFlags);
	/**
	 * @brief Gets or sets the ProtocolInfo.
	 */
	QString protocolInfo() const;
	/**
	* @brief Gets or sets the ProtocolInfo.
	*/
	void setProtocolInfo(QString newProtocolInfo);
	/**
	 * @brief Gets or sets the TimelineOffsetSeconds.
	 */
	qint32 timelineOffsetSeconds() const;
	/**
	* @brief Gets or sets the TimelineOffsetSeconds.
	*/
	void setTimelineOffsetSeconds(qint32 newTimelineOffsetSeconds);
	/**
	 * @brief Gets or sets a value indicating whether RequiresPlainVideoItems.
	 */
	bool requiresPlainVideoItems() const;
	/**
	* @brief Gets or sets a value indicating whether RequiresPlainVideoItems.
	*/
	void setRequiresPlainVideoItems(bool newRequiresPlainVideoItems);
	/**
	 * @brief Gets or sets a value indicating whether RequiresPlainFolders.
	 */
	bool requiresPlainFolders() const;
	/**
	* @brief Gets or sets a value indicating whether RequiresPlainFolders.
	*/
	void setRequiresPlainFolders(bool newRequiresPlainFolders);
	/**
	 * @brief Gets or sets a value indicating whether EnableMSMediaReceiverRegistrar.
	 */
	bool enableMSMediaReceiverRegistrar() const;
	/**
	* @brief Gets or sets a value indicating whether EnableMSMediaReceiverRegistrar.
	*/
	void setEnableMSMediaReceiverRegistrar(bool newEnableMSMediaReceiverRegistrar);
	/**
	 * @brief Gets or sets a value indicating whether IgnoreTranscodeByteRangeRequests.
	 */
	bool ignoreTranscodeByteRangeRequests() const;
	/**
	* @brief Gets or sets a value indicating whether IgnoreTranscodeByteRangeRequests.
	*/
	void setIgnoreTranscodeByteRangeRequests(bool newIgnoreTranscodeByteRangeRequests);
	/**
	 * @brief Gets or sets the XmlRootAttributes.
	 */
	QList<QSharedPointer<XmlAttribute>> xmlRootAttributes() const;
	/**
	* @brief Gets or sets the XmlRootAttributes.
	*/
	void setXmlRootAttributes(QList<QSharedPointer<XmlAttribute>> newXmlRootAttributes);
	/**
	 * @brief Gets or sets the direct play profiles.
	 */
	QList<QSharedPointer<DirectPlayProfile>> directPlayProfiles() const;
	/**
	* @brief Gets or sets the direct play profiles.
	*/
	void setDirectPlayProfiles(QList<QSharedPointer<DirectPlayProfile>> newDirectPlayProfiles);
	/**
	 * @brief Gets or sets the transcoding profiles.
	 */
	QList<QSharedPointer<TranscodingProfile>> transcodingProfiles() const;
	/**
	* @brief Gets or sets the transcoding profiles.
	*/
	void setTranscodingProfiles(QList<QSharedPointer<TranscodingProfile>> newTranscodingProfiles);
	/**
	 * @brief Gets or sets the ContainerProfiles.
	 */
	QList<QSharedPointer<ContainerProfile>> containerProfiles() const;
	/**
	* @brief Gets or sets the ContainerProfiles.
	*/
	void setContainerProfiles(QList<QSharedPointer<ContainerProfile>> newContainerProfiles);
	/**
	 * @brief Gets or sets the CodecProfiles.
	 */
	QList<QSharedPointer<CodecProfile>> codecProfiles() const;
	/**
	* @brief Gets or sets the CodecProfiles.
	*/
	void setCodecProfiles(QList<QSharedPointer<CodecProfile>> newCodecProfiles);
	/**
	 * @brief Gets or sets the ResponseProfiles.
	 */
	QList<QSharedPointer<ResponseProfile>> responseProfiles() const;
	/**
	* @brief Gets or sets the ResponseProfiles.
	*/
	void setResponseProfiles(QList<QSharedPointer<ResponseProfile>> newResponseProfiles);
	/**
	 * @brief Gets or sets the SubtitleProfiles.
	 */
	QList<QSharedPointer<SubtitleProfile>> subtitleProfiles() const;
	/**
	* @brief Gets or sets the SubtitleProfiles.
	*/
	void setSubtitleProfiles(QList<QSharedPointer<SubtitleProfile>> newSubtitleProfiles);

protected:
	QString m_name;
	QString m_jellyfinId;
	QSharedPointer<DeviceIdentification> m_identification = nullptr;
	QString m_friendlyName;
	QString m_manufacturer;
	QString m_manufacturerUrl;
	QString m_modelName;
	QString m_modelDescription;
	QString m_modelNumber;
	QString m_modelUrl;
	QString m_serialNumber;
	bool m_enableAlbumArtInDidl;
	bool m_enableSingleAlbumArtLimit;
	bool m_enableSingleSubtitleLimit;
	QString m_supportedMediaTypes;
	QString m_userId;
	QString m_albumArtPn;
	qint32 m_maxAlbumArtWidth;
	qint32 m_maxAlbumArtHeight;
	qint32 m_maxIconWidth;
	qint32 m_maxIconHeight;
	qint32 m_maxStreamingBitrate;
	qint32 m_maxStaticBitrate;
	qint32 m_musicStreamingTranscodingBitrate;
	qint32 m_maxStaticMusicBitrate;
	QString m_sonyAggregationFlags;
	QString m_protocolInfo;
	qint32 m_timelineOffsetSeconds;
	bool m_requiresPlainVideoItems;
	bool m_requiresPlainFolders;
	bool m_enableMSMediaReceiverRegistrar;
	bool m_ignoreTranscodeByteRangeRequests;
	QList<QSharedPointer<XmlAttribute>> m_xmlRootAttributes;
	QList<QSharedPointer<DirectPlayProfile>> m_directPlayProfiles;
	QList<QSharedPointer<TranscodingProfile>> m_transcodingProfiles;
	QList<QSharedPointer<ContainerProfile>> m_containerProfiles;
	QList<QSharedPointer<CodecProfile>> m_codecProfiles;
	QList<QSharedPointer<ResponseProfile>> m_responseProfiles;
	QList<QSharedPointer<SubtitleProfile>> m_subtitleProfiles;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_DEVICEPROFILE_H
