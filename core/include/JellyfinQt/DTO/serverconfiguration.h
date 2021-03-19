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

#ifndef JELLYFIN_DTO_SERVERCONFIGURATION_H
#define JELLYFIN_DTO_SERVERCONFIGURATION_H

#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/imagesavingconvention.h"

namespace Jellyfin {
namespace DTO {

class MetadataOptions;
class NameValuePair;
class PathSubstitution;
class RepositoryInfo;
class Version;

class ServerConfiguration : public QObject {
	Q_OBJECT
public:
	explicit ServerConfiguration(QObject *parent = nullptr);
	static ServerConfiguration *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the number of days we should retain log files.
	 */
	Q_PROPERTY(qint32 logFileRetentionDays READ logFileRetentionDays WRITE setLogFileRetentionDays NOTIFY logFileRetentionDaysChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is first run.
	 */
	Q_PROPERTY(bool isStartupWizardCompleted READ isStartupWizardCompleted WRITE setIsStartupWizardCompleted NOTIFY isStartupWizardCompletedChanged)
	/**
	 * @brief Gets or sets the cache path.
	 */
	Q_PROPERTY(QString cachePath READ cachePath WRITE setCachePath NOTIFY cachePathChanged)
	Q_PROPERTY(Version * previousVersion READ previousVersion WRITE setPreviousVersion NOTIFY previousVersionChanged)
	/**
	 * @brief Gets or sets the stringified PreviousVersion to be stored/loaded,
because System.Version itself isn't xml-serializable.
	 */
	Q_PROPERTY(QString previousVersionStr READ previousVersionStr WRITE setPreviousVersionStr NOTIFY previousVersionStrChanged)
	/**
	 * @brief Gets or sets a value indicating whether to enable automatic port forwarding.
	 */
	Q_PROPERTY(bool enableUPnP READ enableUPnP WRITE setEnableUPnP NOTIFY enableUPnPChanged)
	/**
	 * @brief Gets or sets a value indicating whether to enable prometheus metrics exporting.
	 */
	Q_PROPERTY(bool enableMetrics READ enableMetrics WRITE setEnableMetrics NOTIFY enableMetricsChanged)
	/**
	 * @brief Gets or sets the public mapped port.
	 */
	Q_PROPERTY(qint32 publicPort READ publicPort WRITE setPublicPort NOTIFY publicPortChanged)
	/**
	 * @brief Gets or sets a value indicating whether the http port should be mapped as part of UPnP automatic port forwarding.
	 */
	Q_PROPERTY(bool uPnPCreateHttpPortMap READ uPnPCreateHttpPortMap WRITE setUPnPCreateHttpPortMap NOTIFY uPnPCreateHttpPortMapChanged)
	/**
	 * @brief Gets or sets client udp port range.
	 */
	Q_PROPERTY(QString uDPPortRange READ uDPPortRange WRITE setUDPPortRange NOTIFY uDPPortRangeChanged)
	/**
	 * @brief Gets or sets a value indicating whether IPV6 capability is enabled.
	 */
	Q_PROPERTY(bool enableIPV6 READ enableIPV6 WRITE setEnableIPV6 NOTIFY enableIPV6Changed)
	/**
	 * @brief Gets or sets a value indicating whether IPV4 capability is enabled.
	 */
	Q_PROPERTY(bool enableIPV4 READ enableIPV4 WRITE setEnableIPV4 NOTIFY enableIPV4Changed)
	/**
	 * @brief Gets or sets a value indicating whether detailed ssdp logs are sent to the console/log.
"Emby.Dlna": "Debug" must be set in logging.default.json for this property to work.
	 */
	Q_PROPERTY(bool enableSSDPTracing READ enableSSDPTracing WRITE setEnableSSDPTracing NOTIFY enableSSDPTracingChanged)
	/**
	 * @brief Gets or sets a value indicating whether an IP address is to be used to filter the detailed ssdp logs that are being sent to the console/log.
If the setting "Emby.Dlna": "Debug" msut be set in logging.default.json for this property to work.
	 */
	Q_PROPERTY(QString sSDPTracingFilter READ sSDPTracingFilter WRITE setSSDPTracingFilter NOTIFY sSDPTracingFilterChanged)
	/**
	 * @brief Gets or sets the number of times SSDP UDP messages are sent.
	 */
	Q_PROPERTY(qint32 uDPSendCount READ uDPSendCount WRITE setUDPSendCount NOTIFY uDPSendCountChanged)
	/**
	 * @brief Gets or sets the delay between each groups of SSDP messages (in ms).
	 */
	Q_PROPERTY(qint32 uDPSendDelay READ uDPSendDelay WRITE setUDPSendDelay NOTIFY uDPSendDelayChanged)
	/**
	 * @brief Gets or sets a value indicating whether address names that match MediaBrowser.Model.Configuration.ServerConfiguration.VirtualInterfaceNames should be Ignore for the purposes of binding.
	 */
	Q_PROPERTY(bool ignoreVirtualInterfaces READ ignoreVirtualInterfaces WRITE setIgnoreVirtualInterfaces NOTIFY ignoreVirtualInterfacesChanged)
	/**
	 * @brief Gets or sets a value indicating the interfaces that should be ignored. The list can be comma separated. <seealso cref="P:MediaBrowser.Model.Configuration.ServerConfiguration.IgnoreVirtualInterfaces" />.
	 */
	Q_PROPERTY(QString virtualInterfaceNames READ virtualInterfaceNames WRITE setVirtualInterfaceNames NOTIFY virtualInterfaceNamesChanged)
	/**
	 * @brief Gets or sets the time (in seconds) between the pings of SSDP gateway monitor.
	 */
	Q_PROPERTY(qint32 gatewayMonitorPeriod READ gatewayMonitorPeriod WRITE setGatewayMonitorPeriod NOTIFY gatewayMonitorPeriodChanged)
	/**
	 * @brief Gets a value indicating whether multi-socket binding is available.
	 */
	Q_PROPERTY(bool enableMultiSocketBinding READ enableMultiSocketBinding WRITE setEnableMultiSocketBinding NOTIFY enableMultiSocketBindingChanged)
	/**
	 * @brief Gets or sets a value indicating whether all IPv6 interfaces should be treated as on the internal network.
Depending on the address range implemented ULA ranges might not be used.
	 */
	Q_PROPERTY(bool trustAllIP6Interfaces READ trustAllIP6Interfaces WRITE setTrustAllIP6Interfaces NOTIFY trustAllIP6InterfacesChanged)
	/**
	 * @brief Gets or sets the ports that HDHomerun uses.
	 */
	Q_PROPERTY(QString hDHomerunPortRange READ hDHomerunPortRange WRITE setHDHomerunPortRange NOTIFY hDHomerunPortRangeChanged)
	/**
	 * @brief Gets or sets PublishedServerUri to advertise for specific subnets.
	 */
	Q_PROPERTY(QStringList publishedServerUriBySubnet READ publishedServerUriBySubnet WRITE setPublishedServerUriBySubnet NOTIFY publishedServerUriBySubnetChanged)
	/**
	 * @brief Gets or sets a value indicating whether Autodiscovery tracing is enabled.
	 */
	Q_PROPERTY(bool autoDiscoveryTracing READ autoDiscoveryTracing WRITE setAutoDiscoveryTracing NOTIFY autoDiscoveryTracingChanged)
	/**
	 * @brief Gets or sets a value indicating whether Autodiscovery is enabled.
	 */
	Q_PROPERTY(bool autoDiscovery READ autoDiscovery WRITE setAutoDiscovery NOTIFY autoDiscoveryChanged)
	/**
	 * @brief Gets or sets the public HTTPS port.
	 */
	Q_PROPERTY(qint32 publicHttpsPort READ publicHttpsPort WRITE setPublicHttpsPort NOTIFY publicHttpsPortChanged)
	/**
	 * @brief Gets or sets the HTTP server port number.
	 */
	Q_PROPERTY(qint32 httpServerPortNumber READ httpServerPortNumber WRITE setHttpServerPortNumber NOTIFY httpServerPortNumberChanged)
	/**
	 * @brief Gets or sets the HTTPS server port number.
	 */
	Q_PROPERTY(qint32 httpsPortNumber READ httpsPortNumber WRITE setHttpsPortNumber NOTIFY httpsPortNumberChanged)
	/**
	 * @brief Gets or sets a value indicating whether to use HTTPS.
	 */
	Q_PROPERTY(bool enableHttps READ enableHttps WRITE setEnableHttps NOTIFY enableHttpsChanged)
	Q_PROPERTY(bool enableNormalizedItemByNameIds READ enableNormalizedItemByNameIds WRITE setEnableNormalizedItemByNameIds NOTIFY enableNormalizedItemByNameIdsChanged)
	/**
	 * @brief Gets or sets the filesystem path of an X.509 certificate to use for SSL.
	 */
	Q_PROPERTY(QString certificatePath READ certificatePath WRITE setCertificatePath NOTIFY certificatePathChanged)
	/**
	 * @brief Gets or sets the password required to access the X.509 certificate data in the file specified by MediaBrowser.Model.Configuration.ServerConfiguration.CertificatePath.
	 */
	Q_PROPERTY(QString certificatePassword READ certificatePassword WRITE setCertificatePassword NOTIFY certificatePasswordChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is port authorized.
	 */
	Q_PROPERTY(bool isPortAuthorized READ isPortAuthorized WRITE setIsPortAuthorized NOTIFY isPortAuthorizedChanged)
	/**
	 * @brief Gets or sets a value indicating whether quick connect is available for use on this server.
	 */
	Q_PROPERTY(bool quickConnectAvailable READ quickConnectAvailable WRITE setQuickConnectAvailable NOTIFY quickConnectAvailableChanged)
	/**
	 * @brief Gets or sets a value indicating whether access outside of the LAN is permitted.
	 */
	Q_PROPERTY(bool enableRemoteAccess READ enableRemoteAccess WRITE setEnableRemoteAccess NOTIFY enableRemoteAccessChanged)
	/**
	 * @brief Gets or sets a value indicating whether [enable case sensitive item ids].
	 */
	Q_PROPERTY(bool enableCaseSensitiveItemIds READ enableCaseSensitiveItemIds WRITE setEnableCaseSensitiveItemIds NOTIFY enableCaseSensitiveItemIdsChanged)
	Q_PROPERTY(bool disableLiveTvChannelUserDataName READ disableLiveTvChannelUserDataName WRITE setDisableLiveTvChannelUserDataName NOTIFY disableLiveTvChannelUserDataNameChanged)
	/**
	 * @brief Gets or sets the metadata path.
	 */
	Q_PROPERTY(QString metadataPath READ metadataPath WRITE setMetadataPath NOTIFY metadataPathChanged)
	Q_PROPERTY(QString metadataNetworkPath READ metadataNetworkPath WRITE setMetadataNetworkPath NOTIFY metadataNetworkPathChanged)
	/**
	 * @brief Gets or sets the preferred metadata language.
	 */
	Q_PROPERTY(QString preferredMetadataLanguage READ preferredMetadataLanguage WRITE setPreferredMetadataLanguage NOTIFY preferredMetadataLanguageChanged)
	/**
	 * @brief Gets or sets the metadata country code.
	 */
	Q_PROPERTY(QString metadataCountryCode READ metadataCountryCode WRITE setMetadataCountryCode NOTIFY metadataCountryCodeChanged)
	/**
	 * @brief Gets or sets characters to be replaced with a ' ' in strings to create a sort name.
	 */
	Q_PROPERTY(QStringList sortReplaceCharacters READ sortReplaceCharacters WRITE setSortReplaceCharacters NOTIFY sortReplaceCharactersChanged)
	/**
	 * @brief Gets or sets characters to be removed from strings to create a sort name.
	 */
	Q_PROPERTY(QStringList sortRemoveCharacters READ sortRemoveCharacters WRITE setSortRemoveCharacters NOTIFY sortRemoveCharactersChanged)
	/**
	 * @brief Gets or sets words to be removed from strings to create a sort name.
	 */
	Q_PROPERTY(QStringList sortRemoveWords READ sortRemoveWords WRITE setSortRemoveWords NOTIFY sortRemoveWordsChanged)
	/**
	 * @brief Gets or sets the minimum percentage of an item that must be played in order for playstate to be updated.
	 */
	Q_PROPERTY(qint32 minResumePct READ minResumePct WRITE setMinResumePct NOTIFY minResumePctChanged)
	/**
	 * @brief Gets or sets the maximum percentage of an item that can be played while still saving playstate. If this percentage is crossed playstate will be reset to the beginning and the item will be marked watched.
	 */
	Q_PROPERTY(qint32 maxResumePct READ maxResumePct WRITE setMaxResumePct NOTIFY maxResumePctChanged)
	/**
	 * @brief Gets or sets the minimum duration that an item must have in order to be eligible for playstate updates..
	 */
	Q_PROPERTY(qint32 minResumeDurationSeconds READ minResumeDurationSeconds WRITE setMinResumeDurationSeconds NOTIFY minResumeDurationSecondsChanged)
	/**
	 * @brief Gets or sets the minimum minutes of a book that must be played in order for playstate to be updated.
	 */
	Q_PROPERTY(qint32 minAudiobookResume READ minAudiobookResume WRITE setMinAudiobookResume NOTIFY minAudiobookResumeChanged)
	/**
	 * @brief Gets or sets the remaining minutes of a book that can be played while still saving playstate. If this percentage is crossed playstate will be reset to the beginning and the item will be marked watched.
	 */
	Q_PROPERTY(qint32 maxAudiobookResume READ maxAudiobookResume WRITE setMaxAudiobookResume NOTIFY maxAudiobookResumeChanged)
	/**
	 * @brief Gets or sets the delay in seconds that we will wait after a file system change to try and discover what has been added/removed
Some delay is necessary with some items because their creation is not atomic.  It involves the creation of several
different directories and files.
	 */
	Q_PROPERTY(qint32 libraryMonitorDelay READ libraryMonitorDelay WRITE setLibraryMonitorDelay NOTIFY libraryMonitorDelayChanged)
	/**
	 * @brief Gets or sets a value indicating whether [enable dashboard response caching].
Allows potential contributors without visual studio to modify production dashboard code and test changes.
	 */
	Q_PROPERTY(bool enableDashboardResponseCaching READ enableDashboardResponseCaching WRITE setEnableDashboardResponseCaching NOTIFY enableDashboardResponseCachingChanged)
	Q_PROPERTY(ImageSavingConvention imageSavingConvention READ imageSavingConvention WRITE setImageSavingConvention NOTIFY imageSavingConventionChanged)
	Q_PROPERTY(QList<MetadataOptions *> metadataOptions READ metadataOptions WRITE setMetadataOptions NOTIFY metadataOptionsChanged)
	Q_PROPERTY(bool skipDeserializationForBasicTypes READ skipDeserializationForBasicTypes WRITE setSkipDeserializationForBasicTypes NOTIFY skipDeserializationForBasicTypesChanged)
	Q_PROPERTY(QString serverName READ serverName WRITE setServerName NOTIFY serverNameChanged)
	Q_PROPERTY(QString baseUrl READ baseUrl WRITE setBaseUrl NOTIFY baseUrlChanged)
	Q_PROPERTY(QString uICulture READ uICulture WRITE setUICulture NOTIFY uICultureChanged)
	Q_PROPERTY(bool saveMetadataHidden READ saveMetadataHidden WRITE setSaveMetadataHidden NOTIFY saveMetadataHiddenChanged)
	Q_PROPERTY(QList<NameValuePair *> contentTypes READ contentTypes WRITE setContentTypes NOTIFY contentTypesChanged)
	Q_PROPERTY(qint32 remoteClientBitrateLimit READ remoteClientBitrateLimit WRITE setRemoteClientBitrateLimit NOTIFY remoteClientBitrateLimitChanged)
	Q_PROPERTY(bool enableFolderView READ enableFolderView WRITE setEnableFolderView NOTIFY enableFolderViewChanged)
	Q_PROPERTY(bool enableGroupingIntoCollections READ enableGroupingIntoCollections WRITE setEnableGroupingIntoCollections NOTIFY enableGroupingIntoCollectionsChanged)
	Q_PROPERTY(bool displaySpecialsWithinSeasons READ displaySpecialsWithinSeasons WRITE setDisplaySpecialsWithinSeasons NOTIFY displaySpecialsWithinSeasonsChanged)
	/**
	 * @brief Gets or sets the subnets that are deemed to make up the LAN.
	 */
	Q_PROPERTY(QStringList localNetworkSubnets READ localNetworkSubnets WRITE setLocalNetworkSubnets NOTIFY localNetworkSubnetsChanged)
	/**
	 * @brief Gets or sets the interface addresses which Jellyfin will bind to. If empty, all interfaces will be used.
	 */
	Q_PROPERTY(QStringList localNetworkAddresses READ localNetworkAddresses WRITE setLocalNetworkAddresses NOTIFY localNetworkAddressesChanged)
	Q_PROPERTY(QStringList codecsUsed READ codecsUsed WRITE setCodecsUsed NOTIFY codecsUsedChanged)
	Q_PROPERTY(QList<RepositoryInfo *> pluginRepositories READ pluginRepositories WRITE setPluginRepositories NOTIFY pluginRepositoriesChanged)
	Q_PROPERTY(bool enableExternalContentInSuggestions READ enableExternalContentInSuggestions WRITE setEnableExternalContentInSuggestions NOTIFY enableExternalContentInSuggestionsChanged)
	/**
	 * @brief Gets or sets a value indicating whether the server should force connections over HTTPS.
	 */
	Q_PROPERTY(bool requireHttps READ requireHttps WRITE setRequireHttps NOTIFY requireHttpsChanged)
	Q_PROPERTY(bool enableNewOmdbSupport READ enableNewOmdbSupport WRITE setEnableNewOmdbSupport NOTIFY enableNewOmdbSupportChanged)
	/**
	 * @brief Gets or sets the filter for remote IP connectivity. Used in conjuntion with <seealso cref="P:MediaBrowser.Model.Configuration.ServerConfiguration.IsRemoteIPFilterBlacklist" />.
	 */
	Q_PROPERTY(QStringList remoteIPFilter READ remoteIPFilter WRITE setRemoteIPFilter NOTIFY remoteIPFilterChanged)
	/**
	 * @brief Gets or sets a value indicating whether <seealso cref="P:MediaBrowser.Model.Configuration.ServerConfiguration.RemoteIPFilter" /> contains a blacklist or a whitelist. Default is a whitelist.
	 */
	Q_PROPERTY(bool isRemoteIPFilterBlacklist READ isRemoteIPFilterBlacklist WRITE setIsRemoteIPFilterBlacklist NOTIFY isRemoteIPFilterBlacklistChanged)
	Q_PROPERTY(qint32 imageExtractionTimeoutMs READ imageExtractionTimeoutMs WRITE setImageExtractionTimeoutMs NOTIFY imageExtractionTimeoutMsChanged)
	Q_PROPERTY(QList<PathSubstitution *> pathSubstitutions READ pathSubstitutions WRITE setPathSubstitutions NOTIFY pathSubstitutionsChanged)
	Q_PROPERTY(bool enableSimpleArtistDetection READ enableSimpleArtistDetection WRITE setEnableSimpleArtistDetection NOTIFY enableSimpleArtistDetectionChanged)
	Q_PROPERTY(QStringList uninstalledPlugins READ uninstalledPlugins WRITE setUninstalledPlugins NOTIFY uninstalledPluginsChanged)
	/**
	 * @brief Gets or sets a value indicating whether slow server responses should be logged as a warning.
	 */
	Q_PROPERTY(bool enableSlowResponseWarning READ enableSlowResponseWarning WRITE setEnableSlowResponseWarning NOTIFY enableSlowResponseWarningChanged)
	/**
	 * @brief Gets or sets the threshold for the slow response time warning in ms.
	 */
	Q_PROPERTY(qint64 slowResponseThresholdMs READ slowResponseThresholdMs WRITE setSlowResponseThresholdMs NOTIFY slowResponseThresholdMsChanged)
	/**
	 * @brief Gets or sets the cors hosts.
	 */
	Q_PROPERTY(QStringList corsHosts READ corsHosts WRITE setCorsHosts NOTIFY corsHostsChanged)
	/**
	 * @brief Gets or sets the known proxies.
	 */
	Q_PROPERTY(QStringList knownProxies READ knownProxies WRITE setKnownProxies NOTIFY knownProxiesChanged)
	/**
	 * @brief Gets or sets the number of days we should retain activity logs.
	 */
	Q_PROPERTY(qint32 activityLogRetentionDays READ activityLogRetentionDays WRITE setActivityLogRetentionDays NOTIFY activityLogRetentionDaysChanged)
	/**
	 * @brief Gets or sets the how the library scan fans out.
	 */
	Q_PROPERTY(qint32 libraryScanFanoutConcurrency READ libraryScanFanoutConcurrency WRITE setLibraryScanFanoutConcurrency NOTIFY libraryScanFanoutConcurrencyChanged)
	/**
	 * @brief Gets or sets the how many metadata refreshes can run concurrently.
	 */
	Q_PROPERTY(qint32 libraryMetadataRefreshConcurrency READ libraryMetadataRefreshConcurrency WRITE setLibraryMetadataRefreshConcurrency NOTIFY libraryMetadataRefreshConcurrencyChanged)
	/**
	 * @brief Gets or sets a value indicating whether older plugins should automatically be deleted from the plugin folder.
	 */
	Q_PROPERTY(bool removeOldPlugins READ removeOldPlugins WRITE setRemoveOldPlugins NOTIFY removeOldPluginsChanged)
	/**
	 * @brief Gets or sets a value indicating whether plugin image should be disabled.
	 */
	Q_PROPERTY(bool disablePluginImages READ disablePluginImages WRITE setDisablePluginImages NOTIFY disablePluginImagesChanged)

	qint32 logFileRetentionDays() const;
	void setLogFileRetentionDays(qint32 newLogFileRetentionDays);
	
	bool isStartupWizardCompleted() const;
	void setIsStartupWizardCompleted(bool newIsStartupWizardCompleted);
	
	QString cachePath() const;
	void setCachePath(QString newCachePath);
	
	Version * previousVersion() const;
	void setPreviousVersion(Version * newPreviousVersion);
	
	QString previousVersionStr() const;
	void setPreviousVersionStr(QString newPreviousVersionStr);
	
	bool enableUPnP() const;
	void setEnableUPnP(bool newEnableUPnP);
	
	bool enableMetrics() const;
	void setEnableMetrics(bool newEnableMetrics);
	
	qint32 publicPort() const;
	void setPublicPort(qint32 newPublicPort);
	
	bool uPnPCreateHttpPortMap() const;
	void setUPnPCreateHttpPortMap(bool newUPnPCreateHttpPortMap);
	
	QString uDPPortRange() const;
	void setUDPPortRange(QString newUDPPortRange);
	
	bool enableIPV6() const;
	void setEnableIPV6(bool newEnableIPV6);
	
	bool enableIPV4() const;
	void setEnableIPV4(bool newEnableIPV4);
	
	bool enableSSDPTracing() const;
	void setEnableSSDPTracing(bool newEnableSSDPTracing);
	
	QString sSDPTracingFilter() const;
	void setSSDPTracingFilter(QString newSSDPTracingFilter);
	
	qint32 uDPSendCount() const;
	void setUDPSendCount(qint32 newUDPSendCount);
	
	qint32 uDPSendDelay() const;
	void setUDPSendDelay(qint32 newUDPSendDelay);
	
	bool ignoreVirtualInterfaces() const;
	void setIgnoreVirtualInterfaces(bool newIgnoreVirtualInterfaces);
	
	QString virtualInterfaceNames() const;
	void setVirtualInterfaceNames(QString newVirtualInterfaceNames);
	
	qint32 gatewayMonitorPeriod() const;
	void setGatewayMonitorPeriod(qint32 newGatewayMonitorPeriod);
	
	bool enableMultiSocketBinding() const;
	void setEnableMultiSocketBinding(bool newEnableMultiSocketBinding);
	
	bool trustAllIP6Interfaces() const;
	void setTrustAllIP6Interfaces(bool newTrustAllIP6Interfaces);
	
	QString hDHomerunPortRange() const;
	void setHDHomerunPortRange(QString newHDHomerunPortRange);
	
	QStringList publishedServerUriBySubnet() const;
	void setPublishedServerUriBySubnet(QStringList newPublishedServerUriBySubnet);
	
	bool autoDiscoveryTracing() const;
	void setAutoDiscoveryTracing(bool newAutoDiscoveryTracing);
	
	bool autoDiscovery() const;
	void setAutoDiscovery(bool newAutoDiscovery);
	
	qint32 publicHttpsPort() const;
	void setPublicHttpsPort(qint32 newPublicHttpsPort);
	
	qint32 httpServerPortNumber() const;
	void setHttpServerPortNumber(qint32 newHttpServerPortNumber);
	
	qint32 httpsPortNumber() const;
	void setHttpsPortNumber(qint32 newHttpsPortNumber);
	
	bool enableHttps() const;
	void setEnableHttps(bool newEnableHttps);
	
	bool enableNormalizedItemByNameIds() const;
	void setEnableNormalizedItemByNameIds(bool newEnableNormalizedItemByNameIds);
	
	QString certificatePath() const;
	void setCertificatePath(QString newCertificatePath);
	
	QString certificatePassword() const;
	void setCertificatePassword(QString newCertificatePassword);
	
	bool isPortAuthorized() const;
	void setIsPortAuthorized(bool newIsPortAuthorized);
	
	bool quickConnectAvailable() const;
	void setQuickConnectAvailable(bool newQuickConnectAvailable);
	
	bool enableRemoteAccess() const;
	void setEnableRemoteAccess(bool newEnableRemoteAccess);
	
	bool enableCaseSensitiveItemIds() const;
	void setEnableCaseSensitiveItemIds(bool newEnableCaseSensitiveItemIds);
	
	bool disableLiveTvChannelUserDataName() const;
	void setDisableLiveTvChannelUserDataName(bool newDisableLiveTvChannelUserDataName);
	
	QString metadataPath() const;
	void setMetadataPath(QString newMetadataPath);
	
	QString metadataNetworkPath() const;
	void setMetadataNetworkPath(QString newMetadataNetworkPath);
	
	QString preferredMetadataLanguage() const;
	void setPreferredMetadataLanguage(QString newPreferredMetadataLanguage);
	
	QString metadataCountryCode() const;
	void setMetadataCountryCode(QString newMetadataCountryCode);
	
	QStringList sortReplaceCharacters() const;
	void setSortReplaceCharacters(QStringList newSortReplaceCharacters);
	
	QStringList sortRemoveCharacters() const;
	void setSortRemoveCharacters(QStringList newSortRemoveCharacters);
	
	QStringList sortRemoveWords() const;
	void setSortRemoveWords(QStringList newSortRemoveWords);
	
	qint32 minResumePct() const;
	void setMinResumePct(qint32 newMinResumePct);
	
	qint32 maxResumePct() const;
	void setMaxResumePct(qint32 newMaxResumePct);
	
	qint32 minResumeDurationSeconds() const;
	void setMinResumeDurationSeconds(qint32 newMinResumeDurationSeconds);
	
	qint32 minAudiobookResume() const;
	void setMinAudiobookResume(qint32 newMinAudiobookResume);
	
	qint32 maxAudiobookResume() const;
	void setMaxAudiobookResume(qint32 newMaxAudiobookResume);
	
	qint32 libraryMonitorDelay() const;
	void setLibraryMonitorDelay(qint32 newLibraryMonitorDelay);
	
	bool enableDashboardResponseCaching() const;
	void setEnableDashboardResponseCaching(bool newEnableDashboardResponseCaching);
	
	ImageSavingConvention imageSavingConvention() const;
	void setImageSavingConvention(ImageSavingConvention newImageSavingConvention);
	
	QList<MetadataOptions *> metadataOptions() const;
	void setMetadataOptions(QList<MetadataOptions *> newMetadataOptions);
	
	bool skipDeserializationForBasicTypes() const;
	void setSkipDeserializationForBasicTypes(bool newSkipDeserializationForBasicTypes);
	
	QString serverName() const;
	void setServerName(QString newServerName);
	
	QString baseUrl() const;
	void setBaseUrl(QString newBaseUrl);
	
	QString uICulture() const;
	void setUICulture(QString newUICulture);
	
	bool saveMetadataHidden() const;
	void setSaveMetadataHidden(bool newSaveMetadataHidden);
	
	QList<NameValuePair *> contentTypes() const;
	void setContentTypes(QList<NameValuePair *> newContentTypes);
	
	qint32 remoteClientBitrateLimit() const;
	void setRemoteClientBitrateLimit(qint32 newRemoteClientBitrateLimit);
	
	bool enableFolderView() const;
	void setEnableFolderView(bool newEnableFolderView);
	
	bool enableGroupingIntoCollections() const;
	void setEnableGroupingIntoCollections(bool newEnableGroupingIntoCollections);
	
	bool displaySpecialsWithinSeasons() const;
	void setDisplaySpecialsWithinSeasons(bool newDisplaySpecialsWithinSeasons);
	
	QStringList localNetworkSubnets() const;
	void setLocalNetworkSubnets(QStringList newLocalNetworkSubnets);
	
	QStringList localNetworkAddresses() const;
	void setLocalNetworkAddresses(QStringList newLocalNetworkAddresses);
	
	QStringList codecsUsed() const;
	void setCodecsUsed(QStringList newCodecsUsed);
	
	QList<RepositoryInfo *> pluginRepositories() const;
	void setPluginRepositories(QList<RepositoryInfo *> newPluginRepositories);
	
	bool enableExternalContentInSuggestions() const;
	void setEnableExternalContentInSuggestions(bool newEnableExternalContentInSuggestions);
	
	bool requireHttps() const;
	void setRequireHttps(bool newRequireHttps);
	
	bool enableNewOmdbSupport() const;
	void setEnableNewOmdbSupport(bool newEnableNewOmdbSupport);
	
	QStringList remoteIPFilter() const;
	void setRemoteIPFilter(QStringList newRemoteIPFilter);
	
	bool isRemoteIPFilterBlacklist() const;
	void setIsRemoteIPFilterBlacklist(bool newIsRemoteIPFilterBlacklist);
	
	qint32 imageExtractionTimeoutMs() const;
	void setImageExtractionTimeoutMs(qint32 newImageExtractionTimeoutMs);
	
	QList<PathSubstitution *> pathSubstitutions() const;
	void setPathSubstitutions(QList<PathSubstitution *> newPathSubstitutions);
	
	bool enableSimpleArtistDetection() const;
	void setEnableSimpleArtistDetection(bool newEnableSimpleArtistDetection);
	
	QStringList uninstalledPlugins() const;
	void setUninstalledPlugins(QStringList newUninstalledPlugins);
	
	bool enableSlowResponseWarning() const;
	void setEnableSlowResponseWarning(bool newEnableSlowResponseWarning);
	
	qint64 slowResponseThresholdMs() const;
	void setSlowResponseThresholdMs(qint64 newSlowResponseThresholdMs);
	
	QStringList corsHosts() const;
	void setCorsHosts(QStringList newCorsHosts);
	
	QStringList knownProxies() const;
	void setKnownProxies(QStringList newKnownProxies);
	
	qint32 activityLogRetentionDays() const;
	void setActivityLogRetentionDays(qint32 newActivityLogRetentionDays);
	
	qint32 libraryScanFanoutConcurrency() const;
	void setLibraryScanFanoutConcurrency(qint32 newLibraryScanFanoutConcurrency);
	
	qint32 libraryMetadataRefreshConcurrency() const;
	void setLibraryMetadataRefreshConcurrency(qint32 newLibraryMetadataRefreshConcurrency);
	
	bool removeOldPlugins() const;
	void setRemoveOldPlugins(bool newRemoveOldPlugins);
	
	bool disablePluginImages() const;
	void setDisablePluginImages(bool newDisablePluginImages);
	
signals:
	void logFileRetentionDaysChanged(qint32 newLogFileRetentionDays);
	void isStartupWizardCompletedChanged(bool newIsStartupWizardCompleted);
	void cachePathChanged(QString newCachePath);
	void previousVersionChanged(Version * newPreviousVersion);
	void previousVersionStrChanged(QString newPreviousVersionStr);
	void enableUPnPChanged(bool newEnableUPnP);
	void enableMetricsChanged(bool newEnableMetrics);
	void publicPortChanged(qint32 newPublicPort);
	void uPnPCreateHttpPortMapChanged(bool newUPnPCreateHttpPortMap);
	void uDPPortRangeChanged(QString newUDPPortRange);
	void enableIPV6Changed(bool newEnableIPV6);
	void enableIPV4Changed(bool newEnableIPV4);
	void enableSSDPTracingChanged(bool newEnableSSDPTracing);
	void sSDPTracingFilterChanged(QString newSSDPTracingFilter);
	void uDPSendCountChanged(qint32 newUDPSendCount);
	void uDPSendDelayChanged(qint32 newUDPSendDelay);
	void ignoreVirtualInterfacesChanged(bool newIgnoreVirtualInterfaces);
	void virtualInterfaceNamesChanged(QString newVirtualInterfaceNames);
	void gatewayMonitorPeriodChanged(qint32 newGatewayMonitorPeriod);
	void enableMultiSocketBindingChanged(bool newEnableMultiSocketBinding);
	void trustAllIP6InterfacesChanged(bool newTrustAllIP6Interfaces);
	void hDHomerunPortRangeChanged(QString newHDHomerunPortRange);
	void publishedServerUriBySubnetChanged(QStringList newPublishedServerUriBySubnet);
	void autoDiscoveryTracingChanged(bool newAutoDiscoveryTracing);
	void autoDiscoveryChanged(bool newAutoDiscovery);
	void publicHttpsPortChanged(qint32 newPublicHttpsPort);
	void httpServerPortNumberChanged(qint32 newHttpServerPortNumber);
	void httpsPortNumberChanged(qint32 newHttpsPortNumber);
	void enableHttpsChanged(bool newEnableHttps);
	void enableNormalizedItemByNameIdsChanged(bool newEnableNormalizedItemByNameIds);
	void certificatePathChanged(QString newCertificatePath);
	void certificatePasswordChanged(QString newCertificatePassword);
	void isPortAuthorizedChanged(bool newIsPortAuthorized);
	void quickConnectAvailableChanged(bool newQuickConnectAvailable);
	void enableRemoteAccessChanged(bool newEnableRemoteAccess);
	void enableCaseSensitiveItemIdsChanged(bool newEnableCaseSensitiveItemIds);
	void disableLiveTvChannelUserDataNameChanged(bool newDisableLiveTvChannelUserDataName);
	void metadataPathChanged(QString newMetadataPath);
	void metadataNetworkPathChanged(QString newMetadataNetworkPath);
	void preferredMetadataLanguageChanged(QString newPreferredMetadataLanguage);
	void metadataCountryCodeChanged(QString newMetadataCountryCode);
	void sortReplaceCharactersChanged(QStringList newSortReplaceCharacters);
	void sortRemoveCharactersChanged(QStringList newSortRemoveCharacters);
	void sortRemoveWordsChanged(QStringList newSortRemoveWords);
	void minResumePctChanged(qint32 newMinResumePct);
	void maxResumePctChanged(qint32 newMaxResumePct);
	void minResumeDurationSecondsChanged(qint32 newMinResumeDurationSeconds);
	void minAudiobookResumeChanged(qint32 newMinAudiobookResume);
	void maxAudiobookResumeChanged(qint32 newMaxAudiobookResume);
	void libraryMonitorDelayChanged(qint32 newLibraryMonitorDelay);
	void enableDashboardResponseCachingChanged(bool newEnableDashboardResponseCaching);
	void imageSavingConventionChanged(ImageSavingConvention newImageSavingConvention);
	void metadataOptionsChanged(QList<MetadataOptions *> newMetadataOptions);
	void skipDeserializationForBasicTypesChanged(bool newSkipDeserializationForBasicTypes);
	void serverNameChanged(QString newServerName);
	void baseUrlChanged(QString newBaseUrl);
	void uICultureChanged(QString newUICulture);
	void saveMetadataHiddenChanged(bool newSaveMetadataHidden);
	void contentTypesChanged(QList<NameValuePair *> newContentTypes);
	void remoteClientBitrateLimitChanged(qint32 newRemoteClientBitrateLimit);
	void enableFolderViewChanged(bool newEnableFolderView);
	void enableGroupingIntoCollectionsChanged(bool newEnableGroupingIntoCollections);
	void displaySpecialsWithinSeasonsChanged(bool newDisplaySpecialsWithinSeasons);
	void localNetworkSubnetsChanged(QStringList newLocalNetworkSubnets);
	void localNetworkAddressesChanged(QStringList newLocalNetworkAddresses);
	void codecsUsedChanged(QStringList newCodecsUsed);
	void pluginRepositoriesChanged(QList<RepositoryInfo *> newPluginRepositories);
	void enableExternalContentInSuggestionsChanged(bool newEnableExternalContentInSuggestions);
	void requireHttpsChanged(bool newRequireHttps);
	void enableNewOmdbSupportChanged(bool newEnableNewOmdbSupport);
	void remoteIPFilterChanged(QStringList newRemoteIPFilter);
	void isRemoteIPFilterBlacklistChanged(bool newIsRemoteIPFilterBlacklist);
	void imageExtractionTimeoutMsChanged(qint32 newImageExtractionTimeoutMs);
	void pathSubstitutionsChanged(QList<PathSubstitution *> newPathSubstitutions);
	void enableSimpleArtistDetectionChanged(bool newEnableSimpleArtistDetection);
	void uninstalledPluginsChanged(QStringList newUninstalledPlugins);
	void enableSlowResponseWarningChanged(bool newEnableSlowResponseWarning);
	void slowResponseThresholdMsChanged(qint64 newSlowResponseThresholdMs);
	void corsHostsChanged(QStringList newCorsHosts);
	void knownProxiesChanged(QStringList newKnownProxies);
	void activityLogRetentionDaysChanged(qint32 newActivityLogRetentionDays);
	void libraryScanFanoutConcurrencyChanged(qint32 newLibraryScanFanoutConcurrency);
	void libraryMetadataRefreshConcurrencyChanged(qint32 newLibraryMetadataRefreshConcurrency);
	void removeOldPluginsChanged(bool newRemoveOldPlugins);
	void disablePluginImagesChanged(bool newDisablePluginImages);
protected:
	qint32 m_logFileRetentionDays;
	bool m_isStartupWizardCompleted;
	QString m_cachePath;
	Version * m_previousVersion = nullptr;
	QString m_previousVersionStr;
	bool m_enableUPnP;
	bool m_enableMetrics;
	qint32 m_publicPort;
	bool m_uPnPCreateHttpPortMap;
	QString m_uDPPortRange;
	bool m_enableIPV6;
	bool m_enableIPV4;
	bool m_enableSSDPTracing;
	QString m_sSDPTracingFilter;
	qint32 m_uDPSendCount;
	qint32 m_uDPSendDelay;
	bool m_ignoreVirtualInterfaces;
	QString m_virtualInterfaceNames;
	qint32 m_gatewayMonitorPeriod;
	bool m_enableMultiSocketBinding;
	bool m_trustAllIP6Interfaces;
	QString m_hDHomerunPortRange;
	QStringList m_publishedServerUriBySubnet;
	bool m_autoDiscoveryTracing;
	bool m_autoDiscovery;
	qint32 m_publicHttpsPort;
	qint32 m_httpServerPortNumber;
	qint32 m_httpsPortNumber;
	bool m_enableHttps;
	bool m_enableNormalizedItemByNameIds;
	QString m_certificatePath;
	QString m_certificatePassword;
	bool m_isPortAuthorized;
	bool m_quickConnectAvailable;
	bool m_enableRemoteAccess;
	bool m_enableCaseSensitiveItemIds;
	bool m_disableLiveTvChannelUserDataName;
	QString m_metadataPath;
	QString m_metadataNetworkPath;
	QString m_preferredMetadataLanguage;
	QString m_metadataCountryCode;
	QStringList m_sortReplaceCharacters;
	QStringList m_sortRemoveCharacters;
	QStringList m_sortRemoveWords;
	qint32 m_minResumePct;
	qint32 m_maxResumePct;
	qint32 m_minResumeDurationSeconds;
	qint32 m_minAudiobookResume;
	qint32 m_maxAudiobookResume;
	qint32 m_libraryMonitorDelay;
	bool m_enableDashboardResponseCaching;
	ImageSavingConvention m_imageSavingConvention;
	QList<MetadataOptions *> m_metadataOptions;
	bool m_skipDeserializationForBasicTypes;
	QString m_serverName;
	QString m_baseUrl;
	QString m_uICulture;
	bool m_saveMetadataHidden;
	QList<NameValuePair *> m_contentTypes;
	qint32 m_remoteClientBitrateLimit;
	bool m_enableFolderView;
	bool m_enableGroupingIntoCollections;
	bool m_displaySpecialsWithinSeasons;
	QStringList m_localNetworkSubnets;
	QStringList m_localNetworkAddresses;
	QStringList m_codecsUsed;
	QList<RepositoryInfo *> m_pluginRepositories;
	bool m_enableExternalContentInSuggestions;
	bool m_requireHttps;
	bool m_enableNewOmdbSupport;
	QStringList m_remoteIPFilter;
	bool m_isRemoteIPFilterBlacklist;
	qint32 m_imageExtractionTimeoutMs;
	QList<PathSubstitution *> m_pathSubstitutions;
	bool m_enableSimpleArtistDetection;
	QStringList m_uninstalledPlugins;
	bool m_enableSlowResponseWarning;
	qint64 m_slowResponseThresholdMs;
	QStringList m_corsHosts;
	QStringList m_knownProxies;
	qint32 m_activityLogRetentionDays;
	qint32 m_libraryScanFanoutConcurrency;
	qint32 m_libraryMetadataRefreshConcurrency;
	bool m_removeOldPlugins;
	bool m_disablePluginImages;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_SERVERCONFIGURATION_H
