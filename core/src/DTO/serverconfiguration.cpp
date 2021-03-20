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

#include <JellyfinQt/DTO/serverconfiguration.h>

namespace Jellyfin {
namespace DTO {

ServerConfiguration::ServerConfiguration(QObject *parent) {}

ServerConfiguration ServerConfiguration::fromJson(QJsonObject source) {ServerConfiguration instance;
	instance->setFromJson(source, false);
	return instance;
}


void ServerConfiguration::setFromJson(QJsonObject source) {
	m_logFileRetentionDays = fromJsonValue<qint32>(source["LogFileRetentionDays"]);
	m_isStartupWizardCompleted = fromJsonValue<bool>(source["IsStartupWizardCompleted"]);
	m_cachePath = fromJsonValue<QString>(source["CachePath"]);
	m_previousVersion = fromJsonValue<QSharedPointer<Version>>(source["PreviousVersion"]);
	m_previousVersionStr = fromJsonValue<QString>(source["PreviousVersionStr"]);
	m_enableUPnP = fromJsonValue<bool>(source["EnableUPnP"]);
	m_enableMetrics = fromJsonValue<bool>(source["EnableMetrics"]);
	m_publicPort = fromJsonValue<qint32>(source["PublicPort"]);
	m_uPnPCreateHttpPortMap = fromJsonValue<bool>(source["UPnPCreateHttpPortMap"]);
	m_uDPPortRange = fromJsonValue<QString>(source["UDPPortRange"]);
	m_enableIPV6 = fromJsonValue<bool>(source["EnableIPV6"]);
	m_enableIPV4 = fromJsonValue<bool>(source["EnableIPV4"]);
	m_enableSSDPTracing = fromJsonValue<bool>(source["EnableSSDPTracing"]);
	m_sSDPTracingFilter = fromJsonValue<QString>(source["SSDPTracingFilter"]);
	m_uDPSendCount = fromJsonValue<qint32>(source["UDPSendCount"]);
	m_uDPSendDelay = fromJsonValue<qint32>(source["UDPSendDelay"]);
	m_ignoreVirtualInterfaces = fromJsonValue<bool>(source["IgnoreVirtualInterfaces"]);
	m_virtualInterfaceNames = fromJsonValue<QString>(source["VirtualInterfaceNames"]);
	m_gatewayMonitorPeriod = fromJsonValue<qint32>(source["GatewayMonitorPeriod"]);
	m_enableMultiSocketBinding = fromJsonValue<bool>(source["EnableMultiSocketBinding"]);
	m_trustAllIP6Interfaces = fromJsonValue<bool>(source["TrustAllIP6Interfaces"]);
	m_hDHomerunPortRange = fromJsonValue<QString>(source["HDHomerunPortRange"]);
	m_publishedServerUriBySubnet = fromJsonValue<QStringList>(source["PublishedServerUriBySubnet"]);
	m_autoDiscoveryTracing = fromJsonValue<bool>(source["AutoDiscoveryTracing"]);
	m_autoDiscovery = fromJsonValue<bool>(source["AutoDiscovery"]);
	m_publicHttpsPort = fromJsonValue<qint32>(source["PublicHttpsPort"]);
	m_httpServerPortNumber = fromJsonValue<qint32>(source["HttpServerPortNumber"]);
	m_httpsPortNumber = fromJsonValue<qint32>(source["HttpsPortNumber"]);
	m_enableHttps = fromJsonValue<bool>(source["EnableHttps"]);
	m_enableNormalizedItemByNameIds = fromJsonValue<bool>(source["EnableNormalizedItemByNameIds"]);
	m_certificatePath = fromJsonValue<QString>(source["CertificatePath"]);
	m_certificatePassword = fromJsonValue<QString>(source["CertificatePassword"]);
	m_isPortAuthorized = fromJsonValue<bool>(source["IsPortAuthorized"]);
	m_quickConnectAvailable = fromJsonValue<bool>(source["QuickConnectAvailable"]);
	m_enableRemoteAccess = fromJsonValue<bool>(source["EnableRemoteAccess"]);
	m_enableCaseSensitiveItemIds = fromJsonValue<bool>(source["EnableCaseSensitiveItemIds"]);
	m_disableLiveTvChannelUserDataName = fromJsonValue<bool>(source["DisableLiveTvChannelUserDataName"]);
	m_metadataPath = fromJsonValue<QString>(source["MetadataPath"]);
	m_metadataNetworkPath = fromJsonValue<QString>(source["MetadataNetworkPath"]);
	m_preferredMetadataLanguage = fromJsonValue<QString>(source["PreferredMetadataLanguage"]);
	m_metadataCountryCode = fromJsonValue<QString>(source["MetadataCountryCode"]);
	m_sortReplaceCharacters = fromJsonValue<QStringList>(source["SortReplaceCharacters"]);
	m_sortRemoveCharacters = fromJsonValue<QStringList>(source["SortRemoveCharacters"]);
	m_sortRemoveWords = fromJsonValue<QStringList>(source["SortRemoveWords"]);
	m_minResumePct = fromJsonValue<qint32>(source["MinResumePct"]);
	m_maxResumePct = fromJsonValue<qint32>(source["MaxResumePct"]);
	m_minResumeDurationSeconds = fromJsonValue<qint32>(source["MinResumeDurationSeconds"]);
	m_minAudiobookResume = fromJsonValue<qint32>(source["MinAudiobookResume"]);
	m_maxAudiobookResume = fromJsonValue<qint32>(source["MaxAudiobookResume"]);
	m_libraryMonitorDelay = fromJsonValue<qint32>(source["LibraryMonitorDelay"]);
	m_enableDashboardResponseCaching = fromJsonValue<bool>(source["EnableDashboardResponseCaching"]);
	m_imageSavingConvention = fromJsonValue<ImageSavingConvention>(source["ImageSavingConvention"]);
	m_metadataOptions = fromJsonValue<QList<QSharedPointer<MetadataOptions>>>(source["MetadataOptions"]);
	m_skipDeserializationForBasicTypes = fromJsonValue<bool>(source["SkipDeserializationForBasicTypes"]);
	m_serverName = fromJsonValue<QString>(source["ServerName"]);
	m_baseUrl = fromJsonValue<QString>(source["BaseUrl"]);
	m_uICulture = fromJsonValue<QString>(source["UICulture"]);
	m_saveMetadataHidden = fromJsonValue<bool>(source["SaveMetadataHidden"]);
	m_contentTypes = fromJsonValue<QList<QSharedPointer<NameValuePair>>>(source["ContentTypes"]);
	m_remoteClientBitrateLimit = fromJsonValue<qint32>(source["RemoteClientBitrateLimit"]);
	m_enableFolderView = fromJsonValue<bool>(source["EnableFolderView"]);
	m_enableGroupingIntoCollections = fromJsonValue<bool>(source["EnableGroupingIntoCollections"]);
	m_displaySpecialsWithinSeasons = fromJsonValue<bool>(source["DisplaySpecialsWithinSeasons"]);
	m_localNetworkSubnets = fromJsonValue<QStringList>(source["LocalNetworkSubnets"]);
	m_localNetworkAddresses = fromJsonValue<QStringList>(source["LocalNetworkAddresses"]);
	m_codecsUsed = fromJsonValue<QStringList>(source["CodecsUsed"]);
	m_pluginRepositories = fromJsonValue<QList<QSharedPointer<RepositoryInfo>>>(source["PluginRepositories"]);
	m_enableExternalContentInSuggestions = fromJsonValue<bool>(source["EnableExternalContentInSuggestions"]);
	m_requireHttps = fromJsonValue<bool>(source["RequireHttps"]);
	m_enableNewOmdbSupport = fromJsonValue<bool>(source["EnableNewOmdbSupport"]);
	m_remoteIPFilter = fromJsonValue<QStringList>(source["RemoteIPFilter"]);
	m_isRemoteIPFilterBlacklist = fromJsonValue<bool>(source["IsRemoteIPFilterBlacklist"]);
	m_imageExtractionTimeoutMs = fromJsonValue<qint32>(source["ImageExtractionTimeoutMs"]);
	m_pathSubstitutions = fromJsonValue<QList<QSharedPointer<PathSubstitution>>>(source["PathSubstitutions"]);
	m_enableSimpleArtistDetection = fromJsonValue<bool>(source["EnableSimpleArtistDetection"]);
	m_uninstalledPlugins = fromJsonValue<QStringList>(source["UninstalledPlugins"]);
	m_enableSlowResponseWarning = fromJsonValue<bool>(source["EnableSlowResponseWarning"]);
	m_slowResponseThresholdMs = fromJsonValue<qint64>(source["SlowResponseThresholdMs"]);
	m_corsHosts = fromJsonValue<QStringList>(source["CorsHosts"]);
	m_knownProxies = fromJsonValue<QStringList>(source["KnownProxies"]);
	m_activityLogRetentionDays = fromJsonValue<qint32>(source["ActivityLogRetentionDays"]);
	m_libraryScanFanoutConcurrency = fromJsonValue<qint32>(source["LibraryScanFanoutConcurrency"]);
	m_libraryMetadataRefreshConcurrency = fromJsonValue<qint32>(source["LibraryMetadataRefreshConcurrency"]);
	m_removeOldPlugins = fromJsonValue<bool>(source["RemoveOldPlugins"]);
	m_disablePluginImages = fromJsonValue<bool>(source["DisablePluginImages"]);

}
	
QJsonObject ServerConfiguration::toJson() {
	QJsonObject result;
	result["LogFileRetentionDays"] = toJsonValue<qint32>(m_logFileRetentionDays);
	result["IsStartupWizardCompleted"] = toJsonValue<bool>(m_isStartupWizardCompleted);
	result["CachePath"] = toJsonValue<QString>(m_cachePath);
	result["PreviousVersion"] = toJsonValue<QSharedPointer<Version>>(m_previousVersion);
	result["PreviousVersionStr"] = toJsonValue<QString>(m_previousVersionStr);
	result["EnableUPnP"] = toJsonValue<bool>(m_enableUPnP);
	result["EnableMetrics"] = toJsonValue<bool>(m_enableMetrics);
	result["PublicPort"] = toJsonValue<qint32>(m_publicPort);
	result["UPnPCreateHttpPortMap"] = toJsonValue<bool>(m_uPnPCreateHttpPortMap);
	result["UDPPortRange"] = toJsonValue<QString>(m_uDPPortRange);
	result["EnableIPV6"] = toJsonValue<bool>(m_enableIPV6);
	result["EnableIPV4"] = toJsonValue<bool>(m_enableIPV4);
	result["EnableSSDPTracing"] = toJsonValue<bool>(m_enableSSDPTracing);
	result["SSDPTracingFilter"] = toJsonValue<QString>(m_sSDPTracingFilter);
	result["UDPSendCount"] = toJsonValue<qint32>(m_uDPSendCount);
	result["UDPSendDelay"] = toJsonValue<qint32>(m_uDPSendDelay);
	result["IgnoreVirtualInterfaces"] = toJsonValue<bool>(m_ignoreVirtualInterfaces);
	result["VirtualInterfaceNames"] = toJsonValue<QString>(m_virtualInterfaceNames);
	result["GatewayMonitorPeriod"] = toJsonValue<qint32>(m_gatewayMonitorPeriod);
	result["EnableMultiSocketBinding"] = toJsonValue<bool>(m_enableMultiSocketBinding);
	result["TrustAllIP6Interfaces"] = toJsonValue<bool>(m_trustAllIP6Interfaces);
	result["HDHomerunPortRange"] = toJsonValue<QString>(m_hDHomerunPortRange);
	result["PublishedServerUriBySubnet"] = toJsonValue<QStringList>(m_publishedServerUriBySubnet);
	result["AutoDiscoveryTracing"] = toJsonValue<bool>(m_autoDiscoveryTracing);
	result["AutoDiscovery"] = toJsonValue<bool>(m_autoDiscovery);
	result["PublicHttpsPort"] = toJsonValue<qint32>(m_publicHttpsPort);
	result["HttpServerPortNumber"] = toJsonValue<qint32>(m_httpServerPortNumber);
	result["HttpsPortNumber"] = toJsonValue<qint32>(m_httpsPortNumber);
	result["EnableHttps"] = toJsonValue<bool>(m_enableHttps);
	result["EnableNormalizedItemByNameIds"] = toJsonValue<bool>(m_enableNormalizedItemByNameIds);
	result["CertificatePath"] = toJsonValue<QString>(m_certificatePath);
	result["CertificatePassword"] = toJsonValue<QString>(m_certificatePassword);
	result["IsPortAuthorized"] = toJsonValue<bool>(m_isPortAuthorized);
	result["QuickConnectAvailable"] = toJsonValue<bool>(m_quickConnectAvailable);
	result["EnableRemoteAccess"] = toJsonValue<bool>(m_enableRemoteAccess);
	result["EnableCaseSensitiveItemIds"] = toJsonValue<bool>(m_enableCaseSensitiveItemIds);
	result["DisableLiveTvChannelUserDataName"] = toJsonValue<bool>(m_disableLiveTvChannelUserDataName);
	result["MetadataPath"] = toJsonValue<QString>(m_metadataPath);
	result["MetadataNetworkPath"] = toJsonValue<QString>(m_metadataNetworkPath);
	result["PreferredMetadataLanguage"] = toJsonValue<QString>(m_preferredMetadataLanguage);
	result["MetadataCountryCode"] = toJsonValue<QString>(m_metadataCountryCode);
	result["SortReplaceCharacters"] = toJsonValue<QStringList>(m_sortReplaceCharacters);
	result["SortRemoveCharacters"] = toJsonValue<QStringList>(m_sortRemoveCharacters);
	result["SortRemoveWords"] = toJsonValue<QStringList>(m_sortRemoveWords);
	result["MinResumePct"] = toJsonValue<qint32>(m_minResumePct);
	result["MaxResumePct"] = toJsonValue<qint32>(m_maxResumePct);
	result["MinResumeDurationSeconds"] = toJsonValue<qint32>(m_minResumeDurationSeconds);
	result["MinAudiobookResume"] = toJsonValue<qint32>(m_minAudiobookResume);
	result["MaxAudiobookResume"] = toJsonValue<qint32>(m_maxAudiobookResume);
	result["LibraryMonitorDelay"] = toJsonValue<qint32>(m_libraryMonitorDelay);
	result["EnableDashboardResponseCaching"] = toJsonValue<bool>(m_enableDashboardResponseCaching);
	result["ImageSavingConvention"] = toJsonValue<ImageSavingConvention>(m_imageSavingConvention);
	result["MetadataOptions"] = toJsonValue<QList<QSharedPointer<MetadataOptions>>>(m_metadataOptions);
	result["SkipDeserializationForBasicTypes"] = toJsonValue<bool>(m_skipDeserializationForBasicTypes);
	result["ServerName"] = toJsonValue<QString>(m_serverName);
	result["BaseUrl"] = toJsonValue<QString>(m_baseUrl);
	result["UICulture"] = toJsonValue<QString>(m_uICulture);
	result["SaveMetadataHidden"] = toJsonValue<bool>(m_saveMetadataHidden);
	result["ContentTypes"] = toJsonValue<QList<QSharedPointer<NameValuePair>>>(m_contentTypes);
	result["RemoteClientBitrateLimit"] = toJsonValue<qint32>(m_remoteClientBitrateLimit);
	result["EnableFolderView"] = toJsonValue<bool>(m_enableFolderView);
	result["EnableGroupingIntoCollections"] = toJsonValue<bool>(m_enableGroupingIntoCollections);
	result["DisplaySpecialsWithinSeasons"] = toJsonValue<bool>(m_displaySpecialsWithinSeasons);
	result["LocalNetworkSubnets"] = toJsonValue<QStringList>(m_localNetworkSubnets);
	result["LocalNetworkAddresses"] = toJsonValue<QStringList>(m_localNetworkAddresses);
	result["CodecsUsed"] = toJsonValue<QStringList>(m_codecsUsed);
	result["PluginRepositories"] = toJsonValue<QList<QSharedPointer<RepositoryInfo>>>(m_pluginRepositories);
	result["EnableExternalContentInSuggestions"] = toJsonValue<bool>(m_enableExternalContentInSuggestions);
	result["RequireHttps"] = toJsonValue<bool>(m_requireHttps);
	result["EnableNewOmdbSupport"] = toJsonValue<bool>(m_enableNewOmdbSupport);
	result["RemoteIPFilter"] = toJsonValue<QStringList>(m_remoteIPFilter);
	result["IsRemoteIPFilterBlacklist"] = toJsonValue<bool>(m_isRemoteIPFilterBlacklist);
	result["ImageExtractionTimeoutMs"] = toJsonValue<qint32>(m_imageExtractionTimeoutMs);
	result["PathSubstitutions"] = toJsonValue<QList<QSharedPointer<PathSubstitution>>>(m_pathSubstitutions);
	result["EnableSimpleArtistDetection"] = toJsonValue<bool>(m_enableSimpleArtistDetection);
	result["UninstalledPlugins"] = toJsonValue<QStringList>(m_uninstalledPlugins);
	result["EnableSlowResponseWarning"] = toJsonValue<bool>(m_enableSlowResponseWarning);
	result["SlowResponseThresholdMs"] = toJsonValue<qint64>(m_slowResponseThresholdMs);
	result["CorsHosts"] = toJsonValue<QStringList>(m_corsHosts);
	result["KnownProxies"] = toJsonValue<QStringList>(m_knownProxies);
	result["ActivityLogRetentionDays"] = toJsonValue<qint32>(m_activityLogRetentionDays);
	result["LibraryScanFanoutConcurrency"] = toJsonValue<qint32>(m_libraryScanFanoutConcurrency);
	result["LibraryMetadataRefreshConcurrency"] = toJsonValue<qint32>(m_libraryMetadataRefreshConcurrency);
	result["RemoveOldPlugins"] = toJsonValue<bool>(m_removeOldPlugins);
	result["DisablePluginImages"] = toJsonValue<bool>(m_disablePluginImages);

	return result;
}

qint32 ServerConfiguration::logFileRetentionDays() const { return m_logFileRetentionDays; }

void ServerConfiguration::setLogFileRetentionDays(qint32 newLogFileRetentionDays) {
	m_logFileRetentionDays = newLogFileRetentionDays;
}
bool ServerConfiguration::isStartupWizardCompleted() const { return m_isStartupWizardCompleted; }

void ServerConfiguration::setIsStartupWizardCompleted(bool newIsStartupWizardCompleted) {
	m_isStartupWizardCompleted = newIsStartupWizardCompleted;
}
QString ServerConfiguration::cachePath() const { return m_cachePath; }

void ServerConfiguration::setCachePath(QString newCachePath) {
	m_cachePath = newCachePath;
}
QSharedPointer<Version> ServerConfiguration::previousVersion() const { return m_previousVersion; }

void ServerConfiguration::setPreviousVersion(QSharedPointer<Version> newPreviousVersion) {
	m_previousVersion = newPreviousVersion;
}
QString ServerConfiguration::previousVersionStr() const { return m_previousVersionStr; }

void ServerConfiguration::setPreviousVersionStr(QString newPreviousVersionStr) {
	m_previousVersionStr = newPreviousVersionStr;
}
bool ServerConfiguration::enableUPnP() const { return m_enableUPnP; }

void ServerConfiguration::setEnableUPnP(bool newEnableUPnP) {
	m_enableUPnP = newEnableUPnP;
}
bool ServerConfiguration::enableMetrics() const { return m_enableMetrics; }

void ServerConfiguration::setEnableMetrics(bool newEnableMetrics) {
	m_enableMetrics = newEnableMetrics;
}
qint32 ServerConfiguration::publicPort() const { return m_publicPort; }

void ServerConfiguration::setPublicPort(qint32 newPublicPort) {
	m_publicPort = newPublicPort;
}
bool ServerConfiguration::uPnPCreateHttpPortMap() const { return m_uPnPCreateHttpPortMap; }

void ServerConfiguration::setUPnPCreateHttpPortMap(bool newUPnPCreateHttpPortMap) {
	m_uPnPCreateHttpPortMap = newUPnPCreateHttpPortMap;
}
QString ServerConfiguration::uDPPortRange() const { return m_uDPPortRange; }

void ServerConfiguration::setUDPPortRange(QString newUDPPortRange) {
	m_uDPPortRange = newUDPPortRange;
}
bool ServerConfiguration::enableIPV6() const { return m_enableIPV6; }

void ServerConfiguration::setEnableIPV6(bool newEnableIPV6) {
	m_enableIPV6 = newEnableIPV6;
}
bool ServerConfiguration::enableIPV4() const { return m_enableIPV4; }

void ServerConfiguration::setEnableIPV4(bool newEnableIPV4) {
	m_enableIPV4 = newEnableIPV4;
}
bool ServerConfiguration::enableSSDPTracing() const { return m_enableSSDPTracing; }

void ServerConfiguration::setEnableSSDPTracing(bool newEnableSSDPTracing) {
	m_enableSSDPTracing = newEnableSSDPTracing;
}
QString ServerConfiguration::sSDPTracingFilter() const { return m_sSDPTracingFilter; }

void ServerConfiguration::setSSDPTracingFilter(QString newSSDPTracingFilter) {
	m_sSDPTracingFilter = newSSDPTracingFilter;
}
qint32 ServerConfiguration::uDPSendCount() const { return m_uDPSendCount; }

void ServerConfiguration::setUDPSendCount(qint32 newUDPSendCount) {
	m_uDPSendCount = newUDPSendCount;
}
qint32 ServerConfiguration::uDPSendDelay() const { return m_uDPSendDelay; }

void ServerConfiguration::setUDPSendDelay(qint32 newUDPSendDelay) {
	m_uDPSendDelay = newUDPSendDelay;
}
bool ServerConfiguration::ignoreVirtualInterfaces() const { return m_ignoreVirtualInterfaces; }

void ServerConfiguration::setIgnoreVirtualInterfaces(bool newIgnoreVirtualInterfaces) {
	m_ignoreVirtualInterfaces = newIgnoreVirtualInterfaces;
}
QString ServerConfiguration::virtualInterfaceNames() const { return m_virtualInterfaceNames; }

void ServerConfiguration::setVirtualInterfaceNames(QString newVirtualInterfaceNames) {
	m_virtualInterfaceNames = newVirtualInterfaceNames;
}
qint32 ServerConfiguration::gatewayMonitorPeriod() const { return m_gatewayMonitorPeriod; }

void ServerConfiguration::setGatewayMonitorPeriod(qint32 newGatewayMonitorPeriod) {
	m_gatewayMonitorPeriod = newGatewayMonitorPeriod;
}
bool ServerConfiguration::enableMultiSocketBinding() const { return m_enableMultiSocketBinding; }

void ServerConfiguration::setEnableMultiSocketBinding(bool newEnableMultiSocketBinding) {
	m_enableMultiSocketBinding = newEnableMultiSocketBinding;
}
bool ServerConfiguration::trustAllIP6Interfaces() const { return m_trustAllIP6Interfaces; }

void ServerConfiguration::setTrustAllIP6Interfaces(bool newTrustAllIP6Interfaces) {
	m_trustAllIP6Interfaces = newTrustAllIP6Interfaces;
}
QString ServerConfiguration::hDHomerunPortRange() const { return m_hDHomerunPortRange; }

void ServerConfiguration::setHDHomerunPortRange(QString newHDHomerunPortRange) {
	m_hDHomerunPortRange = newHDHomerunPortRange;
}
QStringList ServerConfiguration::publishedServerUriBySubnet() const { return m_publishedServerUriBySubnet; }

void ServerConfiguration::setPublishedServerUriBySubnet(QStringList newPublishedServerUriBySubnet) {
	m_publishedServerUriBySubnet = newPublishedServerUriBySubnet;
}
bool ServerConfiguration::autoDiscoveryTracing() const { return m_autoDiscoveryTracing; }

void ServerConfiguration::setAutoDiscoveryTracing(bool newAutoDiscoveryTracing) {
	m_autoDiscoveryTracing = newAutoDiscoveryTracing;
}
bool ServerConfiguration::autoDiscovery() const { return m_autoDiscovery; }

void ServerConfiguration::setAutoDiscovery(bool newAutoDiscovery) {
	m_autoDiscovery = newAutoDiscovery;
}
qint32 ServerConfiguration::publicHttpsPort() const { return m_publicHttpsPort; }

void ServerConfiguration::setPublicHttpsPort(qint32 newPublicHttpsPort) {
	m_publicHttpsPort = newPublicHttpsPort;
}
qint32 ServerConfiguration::httpServerPortNumber() const { return m_httpServerPortNumber; }

void ServerConfiguration::setHttpServerPortNumber(qint32 newHttpServerPortNumber) {
	m_httpServerPortNumber = newHttpServerPortNumber;
}
qint32 ServerConfiguration::httpsPortNumber() const { return m_httpsPortNumber; }

void ServerConfiguration::setHttpsPortNumber(qint32 newHttpsPortNumber) {
	m_httpsPortNumber = newHttpsPortNumber;
}
bool ServerConfiguration::enableHttps() const { return m_enableHttps; }

void ServerConfiguration::setEnableHttps(bool newEnableHttps) {
	m_enableHttps = newEnableHttps;
}
bool ServerConfiguration::enableNormalizedItemByNameIds() const { return m_enableNormalizedItemByNameIds; }

void ServerConfiguration::setEnableNormalizedItemByNameIds(bool newEnableNormalizedItemByNameIds) {
	m_enableNormalizedItemByNameIds = newEnableNormalizedItemByNameIds;
}
QString ServerConfiguration::certificatePath() const { return m_certificatePath; }

void ServerConfiguration::setCertificatePath(QString newCertificatePath) {
	m_certificatePath = newCertificatePath;
}
QString ServerConfiguration::certificatePassword() const { return m_certificatePassword; }

void ServerConfiguration::setCertificatePassword(QString newCertificatePassword) {
	m_certificatePassword = newCertificatePassword;
}
bool ServerConfiguration::isPortAuthorized() const { return m_isPortAuthorized; }

void ServerConfiguration::setIsPortAuthorized(bool newIsPortAuthorized) {
	m_isPortAuthorized = newIsPortAuthorized;
}
bool ServerConfiguration::quickConnectAvailable() const { return m_quickConnectAvailable; }

void ServerConfiguration::setQuickConnectAvailable(bool newQuickConnectAvailable) {
	m_quickConnectAvailable = newQuickConnectAvailable;
}
bool ServerConfiguration::enableRemoteAccess() const { return m_enableRemoteAccess; }

void ServerConfiguration::setEnableRemoteAccess(bool newEnableRemoteAccess) {
	m_enableRemoteAccess = newEnableRemoteAccess;
}
bool ServerConfiguration::enableCaseSensitiveItemIds() const { return m_enableCaseSensitiveItemIds; }

void ServerConfiguration::setEnableCaseSensitiveItemIds(bool newEnableCaseSensitiveItemIds) {
	m_enableCaseSensitiveItemIds = newEnableCaseSensitiveItemIds;
}
bool ServerConfiguration::disableLiveTvChannelUserDataName() const { return m_disableLiveTvChannelUserDataName; }

void ServerConfiguration::setDisableLiveTvChannelUserDataName(bool newDisableLiveTvChannelUserDataName) {
	m_disableLiveTvChannelUserDataName = newDisableLiveTvChannelUserDataName;
}
QString ServerConfiguration::metadataPath() const { return m_metadataPath; }

void ServerConfiguration::setMetadataPath(QString newMetadataPath) {
	m_metadataPath = newMetadataPath;
}
QString ServerConfiguration::metadataNetworkPath() const { return m_metadataNetworkPath; }

void ServerConfiguration::setMetadataNetworkPath(QString newMetadataNetworkPath) {
	m_metadataNetworkPath = newMetadataNetworkPath;
}
QString ServerConfiguration::preferredMetadataLanguage() const { return m_preferredMetadataLanguage; }

void ServerConfiguration::setPreferredMetadataLanguage(QString newPreferredMetadataLanguage) {
	m_preferredMetadataLanguage = newPreferredMetadataLanguage;
}
QString ServerConfiguration::metadataCountryCode() const { return m_metadataCountryCode; }

void ServerConfiguration::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
}
QStringList ServerConfiguration::sortReplaceCharacters() const { return m_sortReplaceCharacters; }

void ServerConfiguration::setSortReplaceCharacters(QStringList newSortReplaceCharacters) {
	m_sortReplaceCharacters = newSortReplaceCharacters;
}
QStringList ServerConfiguration::sortRemoveCharacters() const { return m_sortRemoveCharacters; }

void ServerConfiguration::setSortRemoveCharacters(QStringList newSortRemoveCharacters) {
	m_sortRemoveCharacters = newSortRemoveCharacters;
}
QStringList ServerConfiguration::sortRemoveWords() const { return m_sortRemoveWords; }

void ServerConfiguration::setSortRemoveWords(QStringList newSortRemoveWords) {
	m_sortRemoveWords = newSortRemoveWords;
}
qint32 ServerConfiguration::minResumePct() const { return m_minResumePct; }

void ServerConfiguration::setMinResumePct(qint32 newMinResumePct) {
	m_minResumePct = newMinResumePct;
}
qint32 ServerConfiguration::maxResumePct() const { return m_maxResumePct; }

void ServerConfiguration::setMaxResumePct(qint32 newMaxResumePct) {
	m_maxResumePct = newMaxResumePct;
}
qint32 ServerConfiguration::minResumeDurationSeconds() const { return m_minResumeDurationSeconds; }

void ServerConfiguration::setMinResumeDurationSeconds(qint32 newMinResumeDurationSeconds) {
	m_minResumeDurationSeconds = newMinResumeDurationSeconds;
}
qint32 ServerConfiguration::minAudiobookResume() const { return m_minAudiobookResume; }

void ServerConfiguration::setMinAudiobookResume(qint32 newMinAudiobookResume) {
	m_minAudiobookResume = newMinAudiobookResume;
}
qint32 ServerConfiguration::maxAudiobookResume() const { return m_maxAudiobookResume; }

void ServerConfiguration::setMaxAudiobookResume(qint32 newMaxAudiobookResume) {
	m_maxAudiobookResume = newMaxAudiobookResume;
}
qint32 ServerConfiguration::libraryMonitorDelay() const { return m_libraryMonitorDelay; }

void ServerConfiguration::setLibraryMonitorDelay(qint32 newLibraryMonitorDelay) {
	m_libraryMonitorDelay = newLibraryMonitorDelay;
}
bool ServerConfiguration::enableDashboardResponseCaching() const { return m_enableDashboardResponseCaching; }

void ServerConfiguration::setEnableDashboardResponseCaching(bool newEnableDashboardResponseCaching) {
	m_enableDashboardResponseCaching = newEnableDashboardResponseCaching;
}
ImageSavingConvention ServerConfiguration::imageSavingConvention() const { return m_imageSavingConvention; }

void ServerConfiguration::setImageSavingConvention(ImageSavingConvention newImageSavingConvention) {
	m_imageSavingConvention = newImageSavingConvention;
}
QList<QSharedPointer<MetadataOptions>> ServerConfiguration::metadataOptions() const { return m_metadataOptions; }

void ServerConfiguration::setMetadataOptions(QList<QSharedPointer<MetadataOptions>> newMetadataOptions) {
	m_metadataOptions = newMetadataOptions;
}
bool ServerConfiguration::skipDeserializationForBasicTypes() const { return m_skipDeserializationForBasicTypes; }

void ServerConfiguration::setSkipDeserializationForBasicTypes(bool newSkipDeserializationForBasicTypes) {
	m_skipDeserializationForBasicTypes = newSkipDeserializationForBasicTypes;
}
QString ServerConfiguration::serverName() const { return m_serverName; }

void ServerConfiguration::setServerName(QString newServerName) {
	m_serverName = newServerName;
}
QString ServerConfiguration::baseUrl() const { return m_baseUrl; }

void ServerConfiguration::setBaseUrl(QString newBaseUrl) {
	m_baseUrl = newBaseUrl;
}
QString ServerConfiguration::uICulture() const { return m_uICulture; }

void ServerConfiguration::setUICulture(QString newUICulture) {
	m_uICulture = newUICulture;
}
bool ServerConfiguration::saveMetadataHidden() const { return m_saveMetadataHidden; }

void ServerConfiguration::setSaveMetadataHidden(bool newSaveMetadataHidden) {
	m_saveMetadataHidden = newSaveMetadataHidden;
}
QList<QSharedPointer<NameValuePair>> ServerConfiguration::contentTypes() const { return m_contentTypes; }

void ServerConfiguration::setContentTypes(QList<QSharedPointer<NameValuePair>> newContentTypes) {
	m_contentTypes = newContentTypes;
}
qint32 ServerConfiguration::remoteClientBitrateLimit() const { return m_remoteClientBitrateLimit; }

void ServerConfiguration::setRemoteClientBitrateLimit(qint32 newRemoteClientBitrateLimit) {
	m_remoteClientBitrateLimit = newRemoteClientBitrateLimit;
}
bool ServerConfiguration::enableFolderView() const { return m_enableFolderView; }

void ServerConfiguration::setEnableFolderView(bool newEnableFolderView) {
	m_enableFolderView = newEnableFolderView;
}
bool ServerConfiguration::enableGroupingIntoCollections() const { return m_enableGroupingIntoCollections; }

void ServerConfiguration::setEnableGroupingIntoCollections(bool newEnableGroupingIntoCollections) {
	m_enableGroupingIntoCollections = newEnableGroupingIntoCollections;
}
bool ServerConfiguration::displaySpecialsWithinSeasons() const { return m_displaySpecialsWithinSeasons; }

void ServerConfiguration::setDisplaySpecialsWithinSeasons(bool newDisplaySpecialsWithinSeasons) {
	m_displaySpecialsWithinSeasons = newDisplaySpecialsWithinSeasons;
}
QStringList ServerConfiguration::localNetworkSubnets() const { return m_localNetworkSubnets; }

void ServerConfiguration::setLocalNetworkSubnets(QStringList newLocalNetworkSubnets) {
	m_localNetworkSubnets = newLocalNetworkSubnets;
}
QStringList ServerConfiguration::localNetworkAddresses() const { return m_localNetworkAddresses; }

void ServerConfiguration::setLocalNetworkAddresses(QStringList newLocalNetworkAddresses) {
	m_localNetworkAddresses = newLocalNetworkAddresses;
}
QStringList ServerConfiguration::codecsUsed() const { return m_codecsUsed; }

void ServerConfiguration::setCodecsUsed(QStringList newCodecsUsed) {
	m_codecsUsed = newCodecsUsed;
}
QList<QSharedPointer<RepositoryInfo>> ServerConfiguration::pluginRepositories() const { return m_pluginRepositories; }

void ServerConfiguration::setPluginRepositories(QList<QSharedPointer<RepositoryInfo>> newPluginRepositories) {
	m_pluginRepositories = newPluginRepositories;
}
bool ServerConfiguration::enableExternalContentInSuggestions() const { return m_enableExternalContentInSuggestions; }

void ServerConfiguration::setEnableExternalContentInSuggestions(bool newEnableExternalContentInSuggestions) {
	m_enableExternalContentInSuggestions = newEnableExternalContentInSuggestions;
}
bool ServerConfiguration::requireHttps() const { return m_requireHttps; }

void ServerConfiguration::setRequireHttps(bool newRequireHttps) {
	m_requireHttps = newRequireHttps;
}
bool ServerConfiguration::enableNewOmdbSupport() const { return m_enableNewOmdbSupport; }

void ServerConfiguration::setEnableNewOmdbSupport(bool newEnableNewOmdbSupport) {
	m_enableNewOmdbSupport = newEnableNewOmdbSupport;
}
QStringList ServerConfiguration::remoteIPFilter() const { return m_remoteIPFilter; }

void ServerConfiguration::setRemoteIPFilter(QStringList newRemoteIPFilter) {
	m_remoteIPFilter = newRemoteIPFilter;
}
bool ServerConfiguration::isRemoteIPFilterBlacklist() const { return m_isRemoteIPFilterBlacklist; }

void ServerConfiguration::setIsRemoteIPFilterBlacklist(bool newIsRemoteIPFilterBlacklist) {
	m_isRemoteIPFilterBlacklist = newIsRemoteIPFilterBlacklist;
}
qint32 ServerConfiguration::imageExtractionTimeoutMs() const { return m_imageExtractionTimeoutMs; }

void ServerConfiguration::setImageExtractionTimeoutMs(qint32 newImageExtractionTimeoutMs) {
	m_imageExtractionTimeoutMs = newImageExtractionTimeoutMs;
}
QList<QSharedPointer<PathSubstitution>> ServerConfiguration::pathSubstitutions() const { return m_pathSubstitutions; }

void ServerConfiguration::setPathSubstitutions(QList<QSharedPointer<PathSubstitution>> newPathSubstitutions) {
	m_pathSubstitutions = newPathSubstitutions;
}
bool ServerConfiguration::enableSimpleArtistDetection() const { return m_enableSimpleArtistDetection; }

void ServerConfiguration::setEnableSimpleArtistDetection(bool newEnableSimpleArtistDetection) {
	m_enableSimpleArtistDetection = newEnableSimpleArtistDetection;
}
QStringList ServerConfiguration::uninstalledPlugins() const { return m_uninstalledPlugins; }

void ServerConfiguration::setUninstalledPlugins(QStringList newUninstalledPlugins) {
	m_uninstalledPlugins = newUninstalledPlugins;
}
bool ServerConfiguration::enableSlowResponseWarning() const { return m_enableSlowResponseWarning; }

void ServerConfiguration::setEnableSlowResponseWarning(bool newEnableSlowResponseWarning) {
	m_enableSlowResponseWarning = newEnableSlowResponseWarning;
}
qint64 ServerConfiguration::slowResponseThresholdMs() const { return m_slowResponseThresholdMs; }

void ServerConfiguration::setSlowResponseThresholdMs(qint64 newSlowResponseThresholdMs) {
	m_slowResponseThresholdMs = newSlowResponseThresholdMs;
}
QStringList ServerConfiguration::corsHosts() const { return m_corsHosts; }

void ServerConfiguration::setCorsHosts(QStringList newCorsHosts) {
	m_corsHosts = newCorsHosts;
}
QStringList ServerConfiguration::knownProxies() const { return m_knownProxies; }

void ServerConfiguration::setKnownProxies(QStringList newKnownProxies) {
	m_knownProxies = newKnownProxies;
}
qint32 ServerConfiguration::activityLogRetentionDays() const { return m_activityLogRetentionDays; }

void ServerConfiguration::setActivityLogRetentionDays(qint32 newActivityLogRetentionDays) {
	m_activityLogRetentionDays = newActivityLogRetentionDays;
}
qint32 ServerConfiguration::libraryScanFanoutConcurrency() const { return m_libraryScanFanoutConcurrency; }

void ServerConfiguration::setLibraryScanFanoutConcurrency(qint32 newLibraryScanFanoutConcurrency) {
	m_libraryScanFanoutConcurrency = newLibraryScanFanoutConcurrency;
}
qint32 ServerConfiguration::libraryMetadataRefreshConcurrency() const { return m_libraryMetadataRefreshConcurrency; }

void ServerConfiguration::setLibraryMetadataRefreshConcurrency(qint32 newLibraryMetadataRefreshConcurrency) {
	m_libraryMetadataRefreshConcurrency = newLibraryMetadataRefreshConcurrency;
}
bool ServerConfiguration::removeOldPlugins() const { return m_removeOldPlugins; }

void ServerConfiguration::setRemoveOldPlugins(bool newRemoveOldPlugins) {
	m_removeOldPlugins = newRemoveOldPlugins;
}
bool ServerConfiguration::disablePluginImages() const { return m_disablePluginImages; }

void ServerConfiguration::setDisablePluginImages(bool newDisablePluginImages) {
	m_disablePluginImages = newDisablePluginImages;
}


} // NS Jellyfin
} // NS DTO
