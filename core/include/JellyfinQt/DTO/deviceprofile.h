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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class CodecProfile;
class ContainerProfile;
class DeviceIdentification;
class DirectPlayProfile;
class ResponseProfile;
class SubtitleProfile;
class TranscodingProfile;
class XmlAttribute;

class DeviceProfile : public QObject {
	Q_OBJECT
public:
	explicit DeviceProfile(QObject *parent = nullptr);
	static DeviceProfile *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the Name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the Id.
	 */
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	Q_PROPERTY(DeviceIdentification * identification READ identification WRITE setIdentification NOTIFY identificationChanged)
	/**
	 * @brief Gets or sets the FriendlyName.
	 */
	Q_PROPERTY(QString friendlyName READ friendlyName WRITE setFriendlyName NOTIFY friendlyNameChanged)
	/**
	 * @brief Gets or sets the Manufacturer.
	 */
	Q_PROPERTY(QString manufacturer READ manufacturer WRITE setManufacturer NOTIFY manufacturerChanged)
	/**
	 * @brief Gets or sets the ManufacturerUrl.
	 */
	Q_PROPERTY(QString manufacturerUrl READ manufacturerUrl WRITE setManufacturerUrl NOTIFY manufacturerUrlChanged)
	/**
	 * @brief Gets or sets the ModelName.
	 */
	Q_PROPERTY(QString modelName READ modelName WRITE setModelName NOTIFY modelNameChanged)
	/**
	 * @brief Gets or sets the ModelDescription.
	 */
	Q_PROPERTY(QString modelDescription READ modelDescription WRITE setModelDescription NOTIFY modelDescriptionChanged)
	/**
	 * @brief Gets or sets the ModelNumber.
	 */
	Q_PROPERTY(QString modelNumber READ modelNumber WRITE setModelNumber NOTIFY modelNumberChanged)
	/**
	 * @brief Gets or sets the ModelUrl.
	 */
	Q_PROPERTY(QString modelUrl READ modelUrl WRITE setModelUrl NOTIFY modelUrlChanged)
	/**
	 * @brief Gets or sets the SerialNumber.
	 */
	Q_PROPERTY(QString serialNumber READ serialNumber WRITE setSerialNumber NOTIFY serialNumberChanged)
	/**
	 * @brief Gets or sets a value indicating whether EnableAlbumArtInDidl.
	 */
	Q_PROPERTY(bool enableAlbumArtInDidl READ enableAlbumArtInDidl WRITE setEnableAlbumArtInDidl NOTIFY enableAlbumArtInDidlChanged)
	/**
	 * @brief Gets or sets a value indicating whether EnableSingleAlbumArtLimit.
	 */
	Q_PROPERTY(bool enableSingleAlbumArtLimit READ enableSingleAlbumArtLimit WRITE setEnableSingleAlbumArtLimit NOTIFY enableSingleAlbumArtLimitChanged)
	/**
	 * @brief Gets or sets a value indicating whether EnableSingleSubtitleLimit.
	 */
	Q_PROPERTY(bool enableSingleSubtitleLimit READ enableSingleSubtitleLimit WRITE setEnableSingleSubtitleLimit NOTIFY enableSingleSubtitleLimitChanged)
	/**
	 * @brief Gets or sets the SupportedMediaTypes.
	 */
	Q_PROPERTY(QString supportedMediaTypes READ supportedMediaTypes WRITE setSupportedMediaTypes NOTIFY supportedMediaTypesChanged)
	/**
	 * @brief Gets or sets the UserId.
	 */
	Q_PROPERTY(QString userId READ userId WRITE setUserId NOTIFY userIdChanged)
	/**
	 * @brief Gets or sets the AlbumArtPn.
	 */
	Q_PROPERTY(QString albumArtPn READ albumArtPn WRITE setAlbumArtPn NOTIFY albumArtPnChanged)
	/**
	 * @brief Gets or sets the MaxAlbumArtWidth.
	 */
	Q_PROPERTY(qint32 maxAlbumArtWidth READ maxAlbumArtWidth WRITE setMaxAlbumArtWidth NOTIFY maxAlbumArtWidthChanged)
	/**
	 * @brief Gets or sets the MaxAlbumArtHeight.
	 */
	Q_PROPERTY(qint32 maxAlbumArtHeight READ maxAlbumArtHeight WRITE setMaxAlbumArtHeight NOTIFY maxAlbumArtHeightChanged)
	/**
	 * @brief Gets or sets the MaxIconWidth.
	 */
	Q_PROPERTY(qint32 maxIconWidth READ maxIconWidth WRITE setMaxIconWidth NOTIFY maxIconWidthChanged)
	/**
	 * @brief Gets or sets the MaxIconHeight.
	 */
	Q_PROPERTY(qint32 maxIconHeight READ maxIconHeight WRITE setMaxIconHeight NOTIFY maxIconHeightChanged)
	/**
	 * @brief Gets or sets the MaxStreamingBitrate.
	 */
	Q_PROPERTY(qint32 maxStreamingBitrate READ maxStreamingBitrate WRITE setMaxStreamingBitrate NOTIFY maxStreamingBitrateChanged)
	/**
	 * @brief Gets or sets the MaxStaticBitrate.
	 */
	Q_PROPERTY(qint32 maxStaticBitrate READ maxStaticBitrate WRITE setMaxStaticBitrate NOTIFY maxStaticBitrateChanged)
	/**
	 * @brief Gets or sets the MusicStreamingTranscodingBitrate.
	 */
	Q_PROPERTY(qint32 musicStreamingTranscodingBitrate READ musicStreamingTranscodingBitrate WRITE setMusicStreamingTranscodingBitrate NOTIFY musicStreamingTranscodingBitrateChanged)
	/**
	 * @brief Gets or sets the MaxStaticMusicBitrate.
	 */
	Q_PROPERTY(qint32 maxStaticMusicBitrate READ maxStaticMusicBitrate WRITE setMaxStaticMusicBitrate NOTIFY maxStaticMusicBitrateChanged)
	/**
	 * @brief Gets or sets the content of the aggregationFlags element in the urn:schemas-sonycom:av namespace.
	 */
	Q_PROPERTY(QString sonyAggregationFlags READ sonyAggregationFlags WRITE setSonyAggregationFlags NOTIFY sonyAggregationFlagsChanged)
	/**
	 * @brief Gets or sets the ProtocolInfo.
	 */
	Q_PROPERTY(QString protocolInfo READ protocolInfo WRITE setProtocolInfo NOTIFY protocolInfoChanged)
	/**
	 * @brief Gets or sets the TimelineOffsetSeconds.
	 */
	Q_PROPERTY(qint32 timelineOffsetSeconds READ timelineOffsetSeconds WRITE setTimelineOffsetSeconds NOTIFY timelineOffsetSecondsChanged)
	/**
	 * @brief Gets or sets a value indicating whether RequiresPlainVideoItems.
	 */
	Q_PROPERTY(bool requiresPlainVideoItems READ requiresPlainVideoItems WRITE setRequiresPlainVideoItems NOTIFY requiresPlainVideoItemsChanged)
	/**
	 * @brief Gets or sets a value indicating whether RequiresPlainFolders.
	 */
	Q_PROPERTY(bool requiresPlainFolders READ requiresPlainFolders WRITE setRequiresPlainFolders NOTIFY requiresPlainFoldersChanged)
	/**
	 * @brief Gets or sets a value indicating whether EnableMSMediaReceiverRegistrar.
	 */
	Q_PROPERTY(bool enableMSMediaReceiverRegistrar READ enableMSMediaReceiverRegistrar WRITE setEnableMSMediaReceiverRegistrar NOTIFY enableMSMediaReceiverRegistrarChanged)
	/**
	 * @brief Gets or sets a value indicating whether IgnoreTranscodeByteRangeRequests.
	 */
	Q_PROPERTY(bool ignoreTranscodeByteRangeRequests READ ignoreTranscodeByteRangeRequests WRITE setIgnoreTranscodeByteRangeRequests NOTIFY ignoreTranscodeByteRangeRequestsChanged)
	/**
	 * @brief Gets or sets the XmlRootAttributes.
	 */
	Q_PROPERTY(QList<XmlAttribute *> xmlRootAttributes READ xmlRootAttributes WRITE setXmlRootAttributes NOTIFY xmlRootAttributesChanged)
	/**
	 * @brief Gets or sets the direct play profiles.
	 */
	Q_PROPERTY(QList<DirectPlayProfile *> directPlayProfiles READ directPlayProfiles WRITE setDirectPlayProfiles NOTIFY directPlayProfilesChanged)
	/**
	 * @brief Gets or sets the transcoding profiles.
	 */
	Q_PROPERTY(QList<TranscodingProfile *> transcodingProfiles READ transcodingProfiles WRITE setTranscodingProfiles NOTIFY transcodingProfilesChanged)
	/**
	 * @brief Gets or sets the ContainerProfiles.
	 */
	Q_PROPERTY(QList<ContainerProfile *> containerProfiles READ containerProfiles WRITE setContainerProfiles NOTIFY containerProfilesChanged)
	/**
	 * @brief Gets or sets the CodecProfiles.
	 */
	Q_PROPERTY(QList<CodecProfile *> codecProfiles READ codecProfiles WRITE setCodecProfiles NOTIFY codecProfilesChanged)
	/**
	 * @brief Gets or sets the ResponseProfiles.
	 */
	Q_PROPERTY(QList<ResponseProfile *> responseProfiles READ responseProfiles WRITE setResponseProfiles NOTIFY responseProfilesChanged)
	/**
	 * @brief Gets or sets the SubtitleProfiles.
	 */
	Q_PROPERTY(QList<SubtitleProfile *> subtitleProfiles READ subtitleProfiles WRITE setSubtitleProfiles NOTIFY subtitleProfilesChanged)

	QString name() const;
	void setName(QString newName);
	
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	DeviceIdentification * identification() const;
	void setIdentification(DeviceIdentification * newIdentification);
	
	QString friendlyName() const;
	void setFriendlyName(QString newFriendlyName);
	
	QString manufacturer() const;
	void setManufacturer(QString newManufacturer);
	
	QString manufacturerUrl() const;
	void setManufacturerUrl(QString newManufacturerUrl);
	
	QString modelName() const;
	void setModelName(QString newModelName);
	
	QString modelDescription() const;
	void setModelDescription(QString newModelDescription);
	
	QString modelNumber() const;
	void setModelNumber(QString newModelNumber);
	
	QString modelUrl() const;
	void setModelUrl(QString newModelUrl);
	
	QString serialNumber() const;
	void setSerialNumber(QString newSerialNumber);
	
	bool enableAlbumArtInDidl() const;
	void setEnableAlbumArtInDidl(bool newEnableAlbumArtInDidl);
	
	bool enableSingleAlbumArtLimit() const;
	void setEnableSingleAlbumArtLimit(bool newEnableSingleAlbumArtLimit);
	
	bool enableSingleSubtitleLimit() const;
	void setEnableSingleSubtitleLimit(bool newEnableSingleSubtitleLimit);
	
	QString supportedMediaTypes() const;
	void setSupportedMediaTypes(QString newSupportedMediaTypes);
	
	QString userId() const;
	void setUserId(QString newUserId);
	
	QString albumArtPn() const;
	void setAlbumArtPn(QString newAlbumArtPn);
	
	qint32 maxAlbumArtWidth() const;
	void setMaxAlbumArtWidth(qint32 newMaxAlbumArtWidth);
	
	qint32 maxAlbumArtHeight() const;
	void setMaxAlbumArtHeight(qint32 newMaxAlbumArtHeight);
	
	qint32 maxIconWidth() const;
	void setMaxIconWidth(qint32 newMaxIconWidth);
	
	qint32 maxIconHeight() const;
	void setMaxIconHeight(qint32 newMaxIconHeight);
	
	qint32 maxStreamingBitrate() const;
	void setMaxStreamingBitrate(qint32 newMaxStreamingBitrate);
	
	qint32 maxStaticBitrate() const;
	void setMaxStaticBitrate(qint32 newMaxStaticBitrate);
	
	qint32 musicStreamingTranscodingBitrate() const;
	void setMusicStreamingTranscodingBitrate(qint32 newMusicStreamingTranscodingBitrate);
	
	qint32 maxStaticMusicBitrate() const;
	void setMaxStaticMusicBitrate(qint32 newMaxStaticMusicBitrate);
	
	QString sonyAggregationFlags() const;
	void setSonyAggregationFlags(QString newSonyAggregationFlags);
	
	QString protocolInfo() const;
	void setProtocolInfo(QString newProtocolInfo);
	
	qint32 timelineOffsetSeconds() const;
	void setTimelineOffsetSeconds(qint32 newTimelineOffsetSeconds);
	
	bool requiresPlainVideoItems() const;
	void setRequiresPlainVideoItems(bool newRequiresPlainVideoItems);
	
	bool requiresPlainFolders() const;
	void setRequiresPlainFolders(bool newRequiresPlainFolders);
	
	bool enableMSMediaReceiverRegistrar() const;
	void setEnableMSMediaReceiverRegistrar(bool newEnableMSMediaReceiverRegistrar);
	
	bool ignoreTranscodeByteRangeRequests() const;
	void setIgnoreTranscodeByteRangeRequests(bool newIgnoreTranscodeByteRangeRequests);
	
	QList<XmlAttribute *> xmlRootAttributes() const;
	void setXmlRootAttributes(QList<XmlAttribute *> newXmlRootAttributes);
	
	QList<DirectPlayProfile *> directPlayProfiles() const;
	void setDirectPlayProfiles(QList<DirectPlayProfile *> newDirectPlayProfiles);
	
	QList<TranscodingProfile *> transcodingProfiles() const;
	void setTranscodingProfiles(QList<TranscodingProfile *> newTranscodingProfiles);
	
	QList<ContainerProfile *> containerProfiles() const;
	void setContainerProfiles(QList<ContainerProfile *> newContainerProfiles);
	
	QList<CodecProfile *> codecProfiles() const;
	void setCodecProfiles(QList<CodecProfile *> newCodecProfiles);
	
	QList<ResponseProfile *> responseProfiles() const;
	void setResponseProfiles(QList<ResponseProfile *> newResponseProfiles);
	
	QList<SubtitleProfile *> subtitleProfiles() const;
	void setSubtitleProfiles(QList<SubtitleProfile *> newSubtitleProfiles);
	
signals:
	void nameChanged(QString newName);
	void jellyfinIdChanged(QString newJellyfinId);
	void identificationChanged(DeviceIdentification * newIdentification);
	void friendlyNameChanged(QString newFriendlyName);
	void manufacturerChanged(QString newManufacturer);
	void manufacturerUrlChanged(QString newManufacturerUrl);
	void modelNameChanged(QString newModelName);
	void modelDescriptionChanged(QString newModelDescription);
	void modelNumberChanged(QString newModelNumber);
	void modelUrlChanged(QString newModelUrl);
	void serialNumberChanged(QString newSerialNumber);
	void enableAlbumArtInDidlChanged(bool newEnableAlbumArtInDidl);
	void enableSingleAlbumArtLimitChanged(bool newEnableSingleAlbumArtLimit);
	void enableSingleSubtitleLimitChanged(bool newEnableSingleSubtitleLimit);
	void supportedMediaTypesChanged(QString newSupportedMediaTypes);
	void userIdChanged(QString newUserId);
	void albumArtPnChanged(QString newAlbumArtPn);
	void maxAlbumArtWidthChanged(qint32 newMaxAlbumArtWidth);
	void maxAlbumArtHeightChanged(qint32 newMaxAlbumArtHeight);
	void maxIconWidthChanged(qint32 newMaxIconWidth);
	void maxIconHeightChanged(qint32 newMaxIconHeight);
	void maxStreamingBitrateChanged(qint32 newMaxStreamingBitrate);
	void maxStaticBitrateChanged(qint32 newMaxStaticBitrate);
	void musicStreamingTranscodingBitrateChanged(qint32 newMusicStreamingTranscodingBitrate);
	void maxStaticMusicBitrateChanged(qint32 newMaxStaticMusicBitrate);
	void sonyAggregationFlagsChanged(QString newSonyAggregationFlags);
	void protocolInfoChanged(QString newProtocolInfo);
	void timelineOffsetSecondsChanged(qint32 newTimelineOffsetSeconds);
	void requiresPlainVideoItemsChanged(bool newRequiresPlainVideoItems);
	void requiresPlainFoldersChanged(bool newRequiresPlainFolders);
	void enableMSMediaReceiverRegistrarChanged(bool newEnableMSMediaReceiverRegistrar);
	void ignoreTranscodeByteRangeRequestsChanged(bool newIgnoreTranscodeByteRangeRequests);
	void xmlRootAttributesChanged(QList<XmlAttribute *> newXmlRootAttributes);
	void directPlayProfilesChanged(QList<DirectPlayProfile *> newDirectPlayProfiles);
	void transcodingProfilesChanged(QList<TranscodingProfile *> newTranscodingProfiles);
	void containerProfilesChanged(QList<ContainerProfile *> newContainerProfiles);
	void codecProfilesChanged(QList<CodecProfile *> newCodecProfiles);
	void responseProfilesChanged(QList<ResponseProfile *> newResponseProfiles);
	void subtitleProfilesChanged(QList<SubtitleProfile *> newSubtitleProfiles);
protected:
	QString m_name;
	QString m_jellyfinId;
	DeviceIdentification * m_identification = nullptr;
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
	QList<XmlAttribute *> m_xmlRootAttributes;
	QList<DirectPlayProfile *> m_directPlayProfiles;
	QList<TranscodingProfile *> m_transcodingProfiles;
	QList<ContainerProfile *> m_containerProfiles;
	QList<CodecProfile *> m_codecProfiles;
	QList<ResponseProfile *> m_responseProfiles;
	QList<SubtitleProfile *> m_subtitleProfiles;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_DEVICEPROFILE_H
