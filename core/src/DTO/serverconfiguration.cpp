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

#include <JellyfinQt/DTO/imagesavingconvention.h>

namespace Jellyfin {
namespace DTO {

ServerConfiguration::ServerConfiguration(QObject *parent) : QObject(parent) {}

ServerConfiguration *ServerConfiguration::fromJSON(QJsonObject source, QObject *parent) {
	ServerConfiguration *instance = new ServerConfiguration(parent);
	instance->updateFromJSON(source);
	return instance;
}

void ServerConfiguration::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject ServerConfiguration::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
qint32 ServerConfiguration::logFileRetentionDays() const { return m_logFileRetentionDays; }
void ServerConfiguration::setLogFileRetentionDays(qint32 newLogFileRetentionDays) {
	m_logFileRetentionDays = newLogFileRetentionDays;
	emit logFileRetentionDaysChanged(newLogFileRetentionDays);
}

bool ServerConfiguration::isStartupWizardCompleted() const { return m_isStartupWizardCompleted; }
void ServerConfiguration::setIsStartupWizardCompleted(bool newIsStartupWizardCompleted) {
	m_isStartupWizardCompleted = newIsStartupWizardCompleted;
	emit isStartupWizardCompletedChanged(newIsStartupWizardCompleted);
}

QString ServerConfiguration::cachePath() const { return m_cachePath; }
void ServerConfiguration::setCachePath(QString newCachePath) {
	m_cachePath = newCachePath;
	emit cachePathChanged(newCachePath);
}

Version * ServerConfiguration::previousVersion() const { return m_previousVersion; }
void ServerConfiguration::setPreviousVersion(Version * newPreviousVersion) {
	m_previousVersion = newPreviousVersion;
	emit previousVersionChanged(newPreviousVersion);
}

QString ServerConfiguration::previousVersionStr() const { return m_previousVersionStr; }
void ServerConfiguration::setPreviousVersionStr(QString newPreviousVersionStr) {
	m_previousVersionStr = newPreviousVersionStr;
	emit previousVersionStrChanged(newPreviousVersionStr);
}

bool ServerConfiguration::enableUPnP() const { return m_enableUPnP; }
void ServerConfiguration::setEnableUPnP(bool newEnableUPnP) {
	m_enableUPnP = newEnableUPnP;
	emit enableUPnPChanged(newEnableUPnP);
}

bool ServerConfiguration::enableMetrics() const { return m_enableMetrics; }
void ServerConfiguration::setEnableMetrics(bool newEnableMetrics) {
	m_enableMetrics = newEnableMetrics;
	emit enableMetricsChanged(newEnableMetrics);
}

qint32 ServerConfiguration::publicPort() const { return m_publicPort; }
void ServerConfiguration::setPublicPort(qint32 newPublicPort) {
	m_publicPort = newPublicPort;
	emit publicPortChanged(newPublicPort);
}

bool ServerConfiguration::uPnPCreateHttpPortMap() const { return m_uPnPCreateHttpPortMap; }
void ServerConfiguration::setUPnPCreateHttpPortMap(bool newUPnPCreateHttpPortMap) {
	m_uPnPCreateHttpPortMap = newUPnPCreateHttpPortMap;
	emit uPnPCreateHttpPortMapChanged(newUPnPCreateHttpPortMap);
}

QString ServerConfiguration::uDPPortRange() const { return m_uDPPortRange; }
void ServerConfiguration::setUDPPortRange(QString newUDPPortRange) {
	m_uDPPortRange = newUDPPortRange;
	emit uDPPortRangeChanged(newUDPPortRange);
}

bool ServerConfiguration::enableIPV6() const { return m_enableIPV6; }
void ServerConfiguration::setEnableIPV6(bool newEnableIPV6) {
	m_enableIPV6 = newEnableIPV6;
	emit enableIPV6Changed(newEnableIPV6);
}

bool ServerConfiguration::enableIPV4() const { return m_enableIPV4; }
void ServerConfiguration::setEnableIPV4(bool newEnableIPV4) {
	m_enableIPV4 = newEnableIPV4;
	emit enableIPV4Changed(newEnableIPV4);
}

bool ServerConfiguration::enableSSDPTracing() const { return m_enableSSDPTracing; }
void ServerConfiguration::setEnableSSDPTracing(bool newEnableSSDPTracing) {
	m_enableSSDPTracing = newEnableSSDPTracing;
	emit enableSSDPTracingChanged(newEnableSSDPTracing);
}

QString ServerConfiguration::sSDPTracingFilter() const { return m_sSDPTracingFilter; }
void ServerConfiguration::setSSDPTracingFilter(QString newSSDPTracingFilter) {
	m_sSDPTracingFilter = newSSDPTracingFilter;
	emit sSDPTracingFilterChanged(newSSDPTracingFilter);
}

qint32 ServerConfiguration::uDPSendCount() const { return m_uDPSendCount; }
void ServerConfiguration::setUDPSendCount(qint32 newUDPSendCount) {
	m_uDPSendCount = newUDPSendCount;
	emit uDPSendCountChanged(newUDPSendCount);
}

qint32 ServerConfiguration::uDPSendDelay() const { return m_uDPSendDelay; }
void ServerConfiguration::setUDPSendDelay(qint32 newUDPSendDelay) {
	m_uDPSendDelay = newUDPSendDelay;
	emit uDPSendDelayChanged(newUDPSendDelay);
}

bool ServerConfiguration::ignoreVirtualInterfaces() const { return m_ignoreVirtualInterfaces; }
void ServerConfiguration::setIgnoreVirtualInterfaces(bool newIgnoreVirtualInterfaces) {
	m_ignoreVirtualInterfaces = newIgnoreVirtualInterfaces;
	emit ignoreVirtualInterfacesChanged(newIgnoreVirtualInterfaces);
}

QString ServerConfiguration::virtualInterfaceNames() const { return m_virtualInterfaceNames; }
void ServerConfiguration::setVirtualInterfaceNames(QString newVirtualInterfaceNames) {
	m_virtualInterfaceNames = newVirtualInterfaceNames;
	emit virtualInterfaceNamesChanged(newVirtualInterfaceNames);
}

qint32 ServerConfiguration::gatewayMonitorPeriod() const { return m_gatewayMonitorPeriod; }
void ServerConfiguration::setGatewayMonitorPeriod(qint32 newGatewayMonitorPeriod) {
	m_gatewayMonitorPeriod = newGatewayMonitorPeriod;
	emit gatewayMonitorPeriodChanged(newGatewayMonitorPeriod);
}

bool ServerConfiguration::enableMultiSocketBinding() const { return m_enableMultiSocketBinding; }
void ServerConfiguration::setEnableMultiSocketBinding(bool newEnableMultiSocketBinding) {
	m_enableMultiSocketBinding = newEnableMultiSocketBinding;
	emit enableMultiSocketBindingChanged(newEnableMultiSocketBinding);
}

bool ServerConfiguration::trustAllIP6Interfaces() const { return m_trustAllIP6Interfaces; }
void ServerConfiguration::setTrustAllIP6Interfaces(bool newTrustAllIP6Interfaces) {
	m_trustAllIP6Interfaces = newTrustAllIP6Interfaces;
	emit trustAllIP6InterfacesChanged(newTrustAllIP6Interfaces);
}

QString ServerConfiguration::hDHomerunPortRange() const { return m_hDHomerunPortRange; }
void ServerConfiguration::setHDHomerunPortRange(QString newHDHomerunPortRange) {
	m_hDHomerunPortRange = newHDHomerunPortRange;
	emit hDHomerunPortRangeChanged(newHDHomerunPortRange);
}

QStringList ServerConfiguration::publishedServerUriBySubnet() const { return m_publishedServerUriBySubnet; }
void ServerConfiguration::setPublishedServerUriBySubnet(QStringList newPublishedServerUriBySubnet) {
	m_publishedServerUriBySubnet = newPublishedServerUriBySubnet;
	emit publishedServerUriBySubnetChanged(newPublishedServerUriBySubnet);
}

bool ServerConfiguration::autoDiscoveryTracing() const { return m_autoDiscoveryTracing; }
void ServerConfiguration::setAutoDiscoveryTracing(bool newAutoDiscoveryTracing) {
	m_autoDiscoveryTracing = newAutoDiscoveryTracing;
	emit autoDiscoveryTracingChanged(newAutoDiscoveryTracing);
}

bool ServerConfiguration::autoDiscovery() const { return m_autoDiscovery; }
void ServerConfiguration::setAutoDiscovery(bool newAutoDiscovery) {
	m_autoDiscovery = newAutoDiscovery;
	emit autoDiscoveryChanged(newAutoDiscovery);
}

qint32 ServerConfiguration::publicHttpsPort() const { return m_publicHttpsPort; }
void ServerConfiguration::setPublicHttpsPort(qint32 newPublicHttpsPort) {
	m_publicHttpsPort = newPublicHttpsPort;
	emit publicHttpsPortChanged(newPublicHttpsPort);
}

qint32 ServerConfiguration::httpServerPortNumber() const { return m_httpServerPortNumber; }
void ServerConfiguration::setHttpServerPortNumber(qint32 newHttpServerPortNumber) {
	m_httpServerPortNumber = newHttpServerPortNumber;
	emit httpServerPortNumberChanged(newHttpServerPortNumber);
}

qint32 ServerConfiguration::httpsPortNumber() const { return m_httpsPortNumber; }
void ServerConfiguration::setHttpsPortNumber(qint32 newHttpsPortNumber) {
	m_httpsPortNumber = newHttpsPortNumber;
	emit httpsPortNumberChanged(newHttpsPortNumber);
}

bool ServerConfiguration::enableHttps() const { return m_enableHttps; }
void ServerConfiguration::setEnableHttps(bool newEnableHttps) {
	m_enableHttps = newEnableHttps;
	emit enableHttpsChanged(newEnableHttps);
}

bool ServerConfiguration::enableNormalizedItemByNameIds() const { return m_enableNormalizedItemByNameIds; }
void ServerConfiguration::setEnableNormalizedItemByNameIds(bool newEnableNormalizedItemByNameIds) {
	m_enableNormalizedItemByNameIds = newEnableNormalizedItemByNameIds;
	emit enableNormalizedItemByNameIdsChanged(newEnableNormalizedItemByNameIds);
}

QString ServerConfiguration::certificatePath() const { return m_certificatePath; }
void ServerConfiguration::setCertificatePath(QString newCertificatePath) {
	m_certificatePath = newCertificatePath;
	emit certificatePathChanged(newCertificatePath);
}

QString ServerConfiguration::certificatePassword() const { return m_certificatePassword; }
void ServerConfiguration::setCertificatePassword(QString newCertificatePassword) {
	m_certificatePassword = newCertificatePassword;
	emit certificatePasswordChanged(newCertificatePassword);
}

bool ServerConfiguration::isPortAuthorized() const { return m_isPortAuthorized; }
void ServerConfiguration::setIsPortAuthorized(bool newIsPortAuthorized) {
	m_isPortAuthorized = newIsPortAuthorized;
	emit isPortAuthorizedChanged(newIsPortAuthorized);
}

bool ServerConfiguration::quickConnectAvailable() const { return m_quickConnectAvailable; }
void ServerConfiguration::setQuickConnectAvailable(bool newQuickConnectAvailable) {
	m_quickConnectAvailable = newQuickConnectAvailable;
	emit quickConnectAvailableChanged(newQuickConnectAvailable);
}

bool ServerConfiguration::enableRemoteAccess() const { return m_enableRemoteAccess; }
void ServerConfiguration::setEnableRemoteAccess(bool newEnableRemoteAccess) {
	m_enableRemoteAccess = newEnableRemoteAccess;
	emit enableRemoteAccessChanged(newEnableRemoteAccess);
}

bool ServerConfiguration::enableCaseSensitiveItemIds() const { return m_enableCaseSensitiveItemIds; }
void ServerConfiguration::setEnableCaseSensitiveItemIds(bool newEnableCaseSensitiveItemIds) {
	m_enableCaseSensitiveItemIds = newEnableCaseSensitiveItemIds;
	emit enableCaseSensitiveItemIdsChanged(newEnableCaseSensitiveItemIds);
}

bool ServerConfiguration::disableLiveTvChannelUserDataName() const { return m_disableLiveTvChannelUserDataName; }
void ServerConfiguration::setDisableLiveTvChannelUserDataName(bool newDisableLiveTvChannelUserDataName) {
	m_disableLiveTvChannelUserDataName = newDisableLiveTvChannelUserDataName;
	emit disableLiveTvChannelUserDataNameChanged(newDisableLiveTvChannelUserDataName);
}

QString ServerConfiguration::metadataPath() const { return m_metadataPath; }
void ServerConfiguration::setMetadataPath(QString newMetadataPath) {
	m_metadataPath = newMetadataPath;
	emit metadataPathChanged(newMetadataPath);
}

QString ServerConfiguration::metadataNetworkPath() const { return m_metadataNetworkPath; }
void ServerConfiguration::setMetadataNetworkPath(QString newMetadataNetworkPath) {
	m_metadataNetworkPath = newMetadataNetworkPath;
	emit metadataNetworkPathChanged(newMetadataNetworkPath);
}

QString ServerConfiguration::preferredMetadataLanguage() const { return m_preferredMetadataLanguage; }
void ServerConfiguration::setPreferredMetadataLanguage(QString newPreferredMetadataLanguage) {
	m_preferredMetadataLanguage = newPreferredMetadataLanguage;
	emit preferredMetadataLanguageChanged(newPreferredMetadataLanguage);
}

QString ServerConfiguration::metadataCountryCode() const { return m_metadataCountryCode; }
void ServerConfiguration::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
	emit metadataCountryCodeChanged(newMetadataCountryCode);
}

QStringList ServerConfiguration::sortReplaceCharacters() const { return m_sortReplaceCharacters; }
void ServerConfiguration::setSortReplaceCharacters(QStringList newSortReplaceCharacters) {
	m_sortReplaceCharacters = newSortReplaceCharacters;
	emit sortReplaceCharactersChanged(newSortReplaceCharacters);
}

QStringList ServerConfiguration::sortRemoveCharacters() const { return m_sortRemoveCharacters; }
void ServerConfiguration::setSortRemoveCharacters(QStringList newSortRemoveCharacters) {
	m_sortRemoveCharacters = newSortRemoveCharacters;
	emit sortRemoveCharactersChanged(newSortRemoveCharacters);
}

QStringList ServerConfiguration::sortRemoveWords() const { return m_sortRemoveWords; }
void ServerConfiguration::setSortRemoveWords(QStringList newSortRemoveWords) {
	m_sortRemoveWords = newSortRemoveWords;
	emit sortRemoveWordsChanged(newSortRemoveWords);
}

qint32 ServerConfiguration::minResumePct() const { return m_minResumePct; }
void ServerConfiguration::setMinResumePct(qint32 newMinResumePct) {
	m_minResumePct = newMinResumePct;
	emit minResumePctChanged(newMinResumePct);
}

qint32 ServerConfiguration::maxResumePct() const { return m_maxResumePct; }
void ServerConfiguration::setMaxResumePct(qint32 newMaxResumePct) {
	m_maxResumePct = newMaxResumePct;
	emit maxResumePctChanged(newMaxResumePct);
}

qint32 ServerConfiguration::minResumeDurationSeconds() const { return m_minResumeDurationSeconds; }
void ServerConfiguration::setMinResumeDurationSeconds(qint32 newMinResumeDurationSeconds) {
	m_minResumeDurationSeconds = newMinResumeDurationSeconds;
	emit minResumeDurationSecondsChanged(newMinResumeDurationSeconds);
}

qint32 ServerConfiguration::minAudiobookResume() const { return m_minAudiobookResume; }
void ServerConfiguration::setMinAudiobookResume(qint32 newMinAudiobookResume) {
	m_minAudiobookResume = newMinAudiobookResume;
	emit minAudiobookResumeChanged(newMinAudiobookResume);
}

qint32 ServerConfiguration::maxAudiobookResume() const { return m_maxAudiobookResume; }
void ServerConfiguration::setMaxAudiobookResume(qint32 newMaxAudiobookResume) {
	m_maxAudiobookResume = newMaxAudiobookResume;
	emit maxAudiobookResumeChanged(newMaxAudiobookResume);
}

qint32 ServerConfiguration::libraryMonitorDelay() const { return m_libraryMonitorDelay; }
void ServerConfiguration::setLibraryMonitorDelay(qint32 newLibraryMonitorDelay) {
	m_libraryMonitorDelay = newLibraryMonitorDelay;
	emit libraryMonitorDelayChanged(newLibraryMonitorDelay);
}

bool ServerConfiguration::enableDashboardResponseCaching() const { return m_enableDashboardResponseCaching; }
void ServerConfiguration::setEnableDashboardResponseCaching(bool newEnableDashboardResponseCaching) {
	m_enableDashboardResponseCaching = newEnableDashboardResponseCaching;
	emit enableDashboardResponseCachingChanged(newEnableDashboardResponseCaching);
}

ImageSavingConvention ServerConfiguration::imageSavingConvention() const { return m_imageSavingConvention; }
void ServerConfiguration::setImageSavingConvention(ImageSavingConvention newImageSavingConvention) {
	m_imageSavingConvention = newImageSavingConvention;
	emit imageSavingConventionChanged(newImageSavingConvention);
}

QList<MetadataOptions *> ServerConfiguration::metadataOptions() const { return m_metadataOptions; }
void ServerConfiguration::setMetadataOptions(QList<MetadataOptions *> newMetadataOptions) {
	m_metadataOptions = newMetadataOptions;
	emit metadataOptionsChanged(newMetadataOptions);
}

bool ServerConfiguration::skipDeserializationForBasicTypes() const { return m_skipDeserializationForBasicTypes; }
void ServerConfiguration::setSkipDeserializationForBasicTypes(bool newSkipDeserializationForBasicTypes) {
	m_skipDeserializationForBasicTypes = newSkipDeserializationForBasicTypes;
	emit skipDeserializationForBasicTypesChanged(newSkipDeserializationForBasicTypes);
}

QString ServerConfiguration::serverName() const { return m_serverName; }
void ServerConfiguration::setServerName(QString newServerName) {
	m_serverName = newServerName;
	emit serverNameChanged(newServerName);
}

QString ServerConfiguration::baseUrl() const { return m_baseUrl; }
void ServerConfiguration::setBaseUrl(QString newBaseUrl) {
	m_baseUrl = newBaseUrl;
	emit baseUrlChanged(newBaseUrl);
}

QString ServerConfiguration::uICulture() const { return m_uICulture; }
void ServerConfiguration::setUICulture(QString newUICulture) {
	m_uICulture = newUICulture;
	emit uICultureChanged(newUICulture);
}

bool ServerConfiguration::saveMetadataHidden() const { return m_saveMetadataHidden; }
void ServerConfiguration::setSaveMetadataHidden(bool newSaveMetadataHidden) {
	m_saveMetadataHidden = newSaveMetadataHidden;
	emit saveMetadataHiddenChanged(newSaveMetadataHidden);
}

QList<NameValuePair *> ServerConfiguration::contentTypes() const { return m_contentTypes; }
void ServerConfiguration::setContentTypes(QList<NameValuePair *> newContentTypes) {
	m_contentTypes = newContentTypes;
	emit contentTypesChanged(newContentTypes);
}

qint32 ServerConfiguration::remoteClientBitrateLimit() const { return m_remoteClientBitrateLimit; }
void ServerConfiguration::setRemoteClientBitrateLimit(qint32 newRemoteClientBitrateLimit) {
	m_remoteClientBitrateLimit = newRemoteClientBitrateLimit;
	emit remoteClientBitrateLimitChanged(newRemoteClientBitrateLimit);
}

bool ServerConfiguration::enableFolderView() const { return m_enableFolderView; }
void ServerConfiguration::setEnableFolderView(bool newEnableFolderView) {
	m_enableFolderView = newEnableFolderView;
	emit enableFolderViewChanged(newEnableFolderView);
}

bool ServerConfiguration::enableGroupingIntoCollections() const { return m_enableGroupingIntoCollections; }
void ServerConfiguration::setEnableGroupingIntoCollections(bool newEnableGroupingIntoCollections) {
	m_enableGroupingIntoCollections = newEnableGroupingIntoCollections;
	emit enableGroupingIntoCollectionsChanged(newEnableGroupingIntoCollections);
}

bool ServerConfiguration::displaySpecialsWithinSeasons() const { return m_displaySpecialsWithinSeasons; }
void ServerConfiguration::setDisplaySpecialsWithinSeasons(bool newDisplaySpecialsWithinSeasons) {
	m_displaySpecialsWithinSeasons = newDisplaySpecialsWithinSeasons;
	emit displaySpecialsWithinSeasonsChanged(newDisplaySpecialsWithinSeasons);
}

QStringList ServerConfiguration::localNetworkSubnets() const { return m_localNetworkSubnets; }
void ServerConfiguration::setLocalNetworkSubnets(QStringList newLocalNetworkSubnets) {
	m_localNetworkSubnets = newLocalNetworkSubnets;
	emit localNetworkSubnetsChanged(newLocalNetworkSubnets);
}

QStringList ServerConfiguration::localNetworkAddresses() const { return m_localNetworkAddresses; }
void ServerConfiguration::setLocalNetworkAddresses(QStringList newLocalNetworkAddresses) {
	m_localNetworkAddresses = newLocalNetworkAddresses;
	emit localNetworkAddressesChanged(newLocalNetworkAddresses);
}

QStringList ServerConfiguration::codecsUsed() const { return m_codecsUsed; }
void ServerConfiguration::setCodecsUsed(QStringList newCodecsUsed) {
	m_codecsUsed = newCodecsUsed;
	emit codecsUsedChanged(newCodecsUsed);
}

QList<RepositoryInfo *> ServerConfiguration::pluginRepositories() const { return m_pluginRepositories; }
void ServerConfiguration::setPluginRepositories(QList<RepositoryInfo *> newPluginRepositories) {
	m_pluginRepositories = newPluginRepositories;
	emit pluginRepositoriesChanged(newPluginRepositories);
}

bool ServerConfiguration::enableExternalContentInSuggestions() const { return m_enableExternalContentInSuggestions; }
void ServerConfiguration::setEnableExternalContentInSuggestions(bool newEnableExternalContentInSuggestions) {
	m_enableExternalContentInSuggestions = newEnableExternalContentInSuggestions;
	emit enableExternalContentInSuggestionsChanged(newEnableExternalContentInSuggestions);
}

bool ServerConfiguration::requireHttps() const { return m_requireHttps; }
void ServerConfiguration::setRequireHttps(bool newRequireHttps) {
	m_requireHttps = newRequireHttps;
	emit requireHttpsChanged(newRequireHttps);
}

bool ServerConfiguration::enableNewOmdbSupport() const { return m_enableNewOmdbSupport; }
void ServerConfiguration::setEnableNewOmdbSupport(bool newEnableNewOmdbSupport) {
	m_enableNewOmdbSupport = newEnableNewOmdbSupport;
	emit enableNewOmdbSupportChanged(newEnableNewOmdbSupport);
}

QStringList ServerConfiguration::remoteIPFilter() const { return m_remoteIPFilter; }
void ServerConfiguration::setRemoteIPFilter(QStringList newRemoteIPFilter) {
	m_remoteIPFilter = newRemoteIPFilter;
	emit remoteIPFilterChanged(newRemoteIPFilter);
}

bool ServerConfiguration::isRemoteIPFilterBlacklist() const { return m_isRemoteIPFilterBlacklist; }
void ServerConfiguration::setIsRemoteIPFilterBlacklist(bool newIsRemoteIPFilterBlacklist) {
	m_isRemoteIPFilterBlacklist = newIsRemoteIPFilterBlacklist;
	emit isRemoteIPFilterBlacklistChanged(newIsRemoteIPFilterBlacklist);
}

qint32 ServerConfiguration::imageExtractionTimeoutMs() const { return m_imageExtractionTimeoutMs; }
void ServerConfiguration::setImageExtractionTimeoutMs(qint32 newImageExtractionTimeoutMs) {
	m_imageExtractionTimeoutMs = newImageExtractionTimeoutMs;
	emit imageExtractionTimeoutMsChanged(newImageExtractionTimeoutMs);
}

QList<PathSubstitution *> ServerConfiguration::pathSubstitutions() const { return m_pathSubstitutions; }
void ServerConfiguration::setPathSubstitutions(QList<PathSubstitution *> newPathSubstitutions) {
	m_pathSubstitutions = newPathSubstitutions;
	emit pathSubstitutionsChanged(newPathSubstitutions);
}

bool ServerConfiguration::enableSimpleArtistDetection() const { return m_enableSimpleArtistDetection; }
void ServerConfiguration::setEnableSimpleArtistDetection(bool newEnableSimpleArtistDetection) {
	m_enableSimpleArtistDetection = newEnableSimpleArtistDetection;
	emit enableSimpleArtistDetectionChanged(newEnableSimpleArtistDetection);
}

QStringList ServerConfiguration::uninstalledPlugins() const { return m_uninstalledPlugins; }
void ServerConfiguration::setUninstalledPlugins(QStringList newUninstalledPlugins) {
	m_uninstalledPlugins = newUninstalledPlugins;
	emit uninstalledPluginsChanged(newUninstalledPlugins);
}

bool ServerConfiguration::enableSlowResponseWarning() const { return m_enableSlowResponseWarning; }
void ServerConfiguration::setEnableSlowResponseWarning(bool newEnableSlowResponseWarning) {
	m_enableSlowResponseWarning = newEnableSlowResponseWarning;
	emit enableSlowResponseWarningChanged(newEnableSlowResponseWarning);
}

qint64 ServerConfiguration::slowResponseThresholdMs() const { return m_slowResponseThresholdMs; }
void ServerConfiguration::setSlowResponseThresholdMs(qint64 newSlowResponseThresholdMs) {
	m_slowResponseThresholdMs = newSlowResponseThresholdMs;
	emit slowResponseThresholdMsChanged(newSlowResponseThresholdMs);
}

QStringList ServerConfiguration::corsHosts() const { return m_corsHosts; }
void ServerConfiguration::setCorsHosts(QStringList newCorsHosts) {
	m_corsHosts = newCorsHosts;
	emit corsHostsChanged(newCorsHosts);
}

QStringList ServerConfiguration::knownProxies() const { return m_knownProxies; }
void ServerConfiguration::setKnownProxies(QStringList newKnownProxies) {
	m_knownProxies = newKnownProxies;
	emit knownProxiesChanged(newKnownProxies);
}

qint32 ServerConfiguration::activityLogRetentionDays() const { return m_activityLogRetentionDays; }
void ServerConfiguration::setActivityLogRetentionDays(qint32 newActivityLogRetentionDays) {
	m_activityLogRetentionDays = newActivityLogRetentionDays;
	emit activityLogRetentionDaysChanged(newActivityLogRetentionDays);
}

qint32 ServerConfiguration::libraryScanFanoutConcurrency() const { return m_libraryScanFanoutConcurrency; }
void ServerConfiguration::setLibraryScanFanoutConcurrency(qint32 newLibraryScanFanoutConcurrency) {
	m_libraryScanFanoutConcurrency = newLibraryScanFanoutConcurrency;
	emit libraryScanFanoutConcurrencyChanged(newLibraryScanFanoutConcurrency);
}

qint32 ServerConfiguration::libraryMetadataRefreshConcurrency() const { return m_libraryMetadataRefreshConcurrency; }
void ServerConfiguration::setLibraryMetadataRefreshConcurrency(qint32 newLibraryMetadataRefreshConcurrency) {
	m_libraryMetadataRefreshConcurrency = newLibraryMetadataRefreshConcurrency;
	emit libraryMetadataRefreshConcurrencyChanged(newLibraryMetadataRefreshConcurrency);
}

bool ServerConfiguration::removeOldPlugins() const { return m_removeOldPlugins; }
void ServerConfiguration::setRemoveOldPlugins(bool newRemoveOldPlugins) {
	m_removeOldPlugins = newRemoveOldPlugins;
	emit removeOldPluginsChanged(newRemoveOldPlugins);
}

bool ServerConfiguration::disablePluginImages() const { return m_disablePluginImages; }
void ServerConfiguration::setDisablePluginImages(bool newDisablePluginImages) {
	m_disablePluginImages = newDisablePluginImages;
	emit disablePluginImagesChanged(newDisablePluginImages);
}


} // NS Jellyfin
} // NS DTO
