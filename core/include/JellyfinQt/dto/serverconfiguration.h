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
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/imagesavingconvention.h"
#include "JellyfinQt/dto/metadataoptions.h"
#include "JellyfinQt/dto/namevaluepair.h"
#include "JellyfinQt/dto/pathsubstitution.h"
#include "JellyfinQt/dto/repositoryinfo.h"
#include "JellyfinQt/dto/version.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class ServerConfiguration {
public:
	ServerConfiguration(	
		qint32 logFileRetentionDays,			
		bool isStartupWizardCompleted,					
		QSharedPointer<Version> previousVersion,					
		bool enableUPnP,			
		bool enableMetrics,			
		qint32 publicPort,			
		bool uPnPCreateHttpPortMap,					
		bool enableIPV6,			
		bool enableIPV4,			
		bool enableSSDPTracing,					
		qint32 uDPSendCount,			
		qint32 uDPSendDelay,			
		bool ignoreVirtualInterfaces,					
		qint32 gatewayMonitorPeriod,			
		bool enableMultiSocketBinding,			
		bool trustAllIP6Interfaces,							
		bool autoDiscoveryTracing,			
		bool autoDiscovery,			
		qint32 publicHttpsPort,			
		qint32 httpServerPortNumber,			
		qint32 httpsPortNumber,			
		bool enableHttps,			
		bool enableNormalizedItemByNameIds,							
		bool isPortAuthorized,			
		bool quickConnectAvailable,			
		bool enableRemoteAccess,			
		bool enableCaseSensitiveItemIds,			
		bool disableLiveTvChannelUserDataName,																	
		qint32 minResumePct,			
		qint32 maxResumePct,			
		qint32 minResumeDurationSeconds,			
		qint32 minAudiobookResume,			
		qint32 maxAudiobookResume,			
		qint32 libraryMonitorDelay,			
		bool enableDashboardResponseCaching,			
		ImageSavingConvention imageSavingConvention,					
		bool skipDeserializationForBasicTypes,									
		bool saveMetadataHidden,					
		qint32 remoteClientBitrateLimit,			
		bool enableFolderView,			
		bool enableGroupingIntoCollections,			
		bool displaySpecialsWithinSeasons,											
		bool enableExternalContentInSuggestions,			
		bool requireHttps,			
		bool enableNewOmdbSupport,					
		bool isRemoteIPFilterBlacklist,			
		qint32 imageExtractionTimeoutMs,					
		bool enableSimpleArtistDetection,					
		bool enableSlowResponseWarning,			
		qint64 slowResponseThresholdMs,									
		qint32 libraryScanFanoutConcurrency,			
		qint32 libraryMetadataRefreshConcurrency,			
		bool removeOldPlugins,			
		bool disablePluginImages		
	);

	ServerConfiguration(const ServerConfiguration &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(ServerConfiguration &other);
	
	static ServerConfiguration fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the number of days we should retain log files.
	 */
	qint32 logFileRetentionDays() const;
	/**
	* @brief Gets or sets the number of days we should retain log files.
	*/
	void setLogFileRetentionDays(qint32 newLogFileRetentionDays);

	/**
	 * @brief Gets or sets a value indicating whether this instance is first run.
	 */
	bool isStartupWizardCompleted() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is first run.
	*/
	void setIsStartupWizardCompleted(bool newIsStartupWizardCompleted);

	/**
	 * @brief Gets or sets the cache path.
	 */
	QString cachePath() const;
	/**
	* @brief Gets or sets the cache path.
	*/
	void setCachePath(QString newCachePath);
	bool cachePathNull() const;
	void setCachePathNull();


	QSharedPointer<Version> previousVersion() const;

	void setPreviousVersion(QSharedPointer<Version> newPreviousVersion);

	/**
	 * @brief Gets or sets the stringified PreviousVersion to be stored/loaded,
because System.Version itself isn't xml-serializable.
	 */
	QString previousVersionStr() const;
	/**
	* @brief Gets or sets the stringified PreviousVersion to be stored/loaded,
because System.Version itself isn't xml-serializable.
	*/
	void setPreviousVersionStr(QString newPreviousVersionStr);
	bool previousVersionStrNull() const;
	void setPreviousVersionStrNull();

	/**
	 * @brief Gets or sets a value indicating whether to enable automatic port forwarding.
	 */
	bool enableUPnP() const;
	/**
	* @brief Gets or sets a value indicating whether to enable automatic port forwarding.
	*/
	void setEnableUPnP(bool newEnableUPnP);

	/**
	 * @brief Gets or sets a value indicating whether to enable prometheus metrics exporting.
	 */
	bool enableMetrics() const;
	/**
	* @brief Gets or sets a value indicating whether to enable prometheus metrics exporting.
	*/
	void setEnableMetrics(bool newEnableMetrics);

	/**
	 * @brief Gets or sets the public mapped port.
	 */
	qint32 publicPort() const;
	/**
	* @brief Gets or sets the public mapped port.
	*/
	void setPublicPort(qint32 newPublicPort);

	/**
	 * @brief Gets or sets a value indicating whether the http port should be mapped as part of UPnP automatic port forwarding.
	 */
	bool uPnPCreateHttpPortMap() const;
	/**
	* @brief Gets or sets a value indicating whether the http port should be mapped as part of UPnP automatic port forwarding.
	*/
	void setUPnPCreateHttpPortMap(bool newUPnPCreateHttpPortMap);

	/**
	 * @brief Gets or sets client udp port range.
	 */
	QString uDPPortRange() const;
	/**
	* @brief Gets or sets client udp port range.
	*/
	void setUDPPortRange(QString newUDPPortRange);
	bool uDPPortRangeNull() const;
	void setUDPPortRangeNull();

	/**
	 * @brief Gets or sets a value indicating whether IPV6 capability is enabled.
	 */
	bool enableIPV6() const;
	/**
	* @brief Gets or sets a value indicating whether IPV6 capability is enabled.
	*/
	void setEnableIPV6(bool newEnableIPV6);

	/**
	 * @brief Gets or sets a value indicating whether IPV4 capability is enabled.
	 */
	bool enableIPV4() const;
	/**
	* @brief Gets or sets a value indicating whether IPV4 capability is enabled.
	*/
	void setEnableIPV4(bool newEnableIPV4);

	/**
	 * @brief Gets or sets a value indicating whether detailed ssdp logs are sent to the console/log.
"Emby.Dlna": "Debug" must be set in logging.default.json for this property to work.
	 */
	bool enableSSDPTracing() const;
	/**
	* @brief Gets or sets a value indicating whether detailed ssdp logs are sent to the console/log.
"Emby.Dlna": "Debug" must be set in logging.default.json for this property to work.
	*/
	void setEnableSSDPTracing(bool newEnableSSDPTracing);

	/**
	 * @brief Gets or sets a value indicating whether an IP address is to be used to filter the detailed ssdp logs that are being sent to the console/log.
If the setting "Emby.Dlna": "Debug" msut be set in logging.default.json for this property to work.
	 */
	QString sSDPTracingFilter() const;
	/**
	* @brief Gets or sets a value indicating whether an IP address is to be used to filter the detailed ssdp logs that are being sent to the console/log.
If the setting "Emby.Dlna": "Debug" msut be set in logging.default.json for this property to work.
	*/
	void setSSDPTracingFilter(QString newSSDPTracingFilter);
	bool sSDPTracingFilterNull() const;
	void setSSDPTracingFilterNull();

	/**
	 * @brief Gets or sets the number of times SSDP UDP messages are sent.
	 */
	qint32 uDPSendCount() const;
	/**
	* @brief Gets or sets the number of times SSDP UDP messages are sent.
	*/
	void setUDPSendCount(qint32 newUDPSendCount);

	/**
	 * @brief Gets or sets the delay between each groups of SSDP messages (in ms).
	 */
	qint32 uDPSendDelay() const;
	/**
	* @brief Gets or sets the delay between each groups of SSDP messages (in ms).
	*/
	void setUDPSendDelay(qint32 newUDPSendDelay);

	/**
	 * @brief Gets or sets a value indicating whether address names that match MediaBrowser.Model.Configuration.ServerConfiguration.VirtualInterfaceNames should be Ignore for the purposes of binding.
	 */
	bool ignoreVirtualInterfaces() const;
	/**
	* @brief Gets or sets a value indicating whether address names that match MediaBrowser.Model.Configuration.ServerConfiguration.VirtualInterfaceNames should be Ignore for the purposes of binding.
	*/
	void setIgnoreVirtualInterfaces(bool newIgnoreVirtualInterfaces);

	/**
	 * @brief Gets or sets a value indicating the interfaces that should be ignored. The list can be comma separated. <seealso cref="P:MediaBrowser.Model.Configuration.ServerConfiguration.IgnoreVirtualInterfaces" />.
	 */
	QString virtualInterfaceNames() const;
	/**
	* @brief Gets or sets a value indicating the interfaces that should be ignored. The list can be comma separated. <seealso cref="P:MediaBrowser.Model.Configuration.ServerConfiguration.IgnoreVirtualInterfaces" />.
	*/
	void setVirtualInterfaceNames(QString newVirtualInterfaceNames);
	bool virtualInterfaceNamesNull() const;
	void setVirtualInterfaceNamesNull();

	/**
	 * @brief Gets or sets the time (in seconds) between the pings of SSDP gateway monitor.
	 */
	qint32 gatewayMonitorPeriod() const;
	/**
	* @brief Gets or sets the time (in seconds) between the pings of SSDP gateway monitor.
	*/
	void setGatewayMonitorPeriod(qint32 newGatewayMonitorPeriod);

	/**
	 * @brief Gets a value indicating whether multi-socket binding is available.
	 */
	bool enableMultiSocketBinding() const;
	/**
	* @brief Gets a value indicating whether multi-socket binding is available.
	*/
	void setEnableMultiSocketBinding(bool newEnableMultiSocketBinding);

	/**
	 * @brief Gets or sets a value indicating whether all IPv6 interfaces should be treated as on the internal network.
Depending on the address range implemented ULA ranges might not be used.
	 */
	bool trustAllIP6Interfaces() const;
	/**
	* @brief Gets or sets a value indicating whether all IPv6 interfaces should be treated as on the internal network.
Depending on the address range implemented ULA ranges might not be used.
	*/
	void setTrustAllIP6Interfaces(bool newTrustAllIP6Interfaces);

	/**
	 * @brief Gets or sets the ports that HDHomerun uses.
	 */
	QString hDHomerunPortRange() const;
	/**
	* @brief Gets or sets the ports that HDHomerun uses.
	*/
	void setHDHomerunPortRange(QString newHDHomerunPortRange);
	bool hDHomerunPortRangeNull() const;
	void setHDHomerunPortRangeNull();

	/**
	 * @brief Gets or sets PublishedServerUri to advertise for specific subnets.
	 */
	QStringList publishedServerUriBySubnet() const;
	/**
	* @brief Gets or sets PublishedServerUri to advertise for specific subnets.
	*/
	void setPublishedServerUriBySubnet(QStringList newPublishedServerUriBySubnet);
	bool publishedServerUriBySubnetNull() const;
	void setPublishedServerUriBySubnetNull();

	/**
	 * @brief Gets or sets a value indicating whether Autodiscovery tracing is enabled.
	 */
	bool autoDiscoveryTracing() const;
	/**
	* @brief Gets or sets a value indicating whether Autodiscovery tracing is enabled.
	*/
	void setAutoDiscoveryTracing(bool newAutoDiscoveryTracing);

	/**
	 * @brief Gets or sets a value indicating whether Autodiscovery is enabled.
	 */
	bool autoDiscovery() const;
	/**
	* @brief Gets or sets a value indicating whether Autodiscovery is enabled.
	*/
	void setAutoDiscovery(bool newAutoDiscovery);

	/**
	 * @brief Gets or sets the public HTTPS port.
	 */
	qint32 publicHttpsPort() const;
	/**
	* @brief Gets or sets the public HTTPS port.
	*/
	void setPublicHttpsPort(qint32 newPublicHttpsPort);

	/**
	 * @brief Gets or sets the HTTP server port number.
	 */
	qint32 httpServerPortNumber() const;
	/**
	* @brief Gets or sets the HTTP server port number.
	*/
	void setHttpServerPortNumber(qint32 newHttpServerPortNumber);

	/**
	 * @brief Gets or sets the HTTPS server port number.
	 */
	qint32 httpsPortNumber() const;
	/**
	* @brief Gets or sets the HTTPS server port number.
	*/
	void setHttpsPortNumber(qint32 newHttpsPortNumber);

	/**
	 * @brief Gets or sets a value indicating whether to use HTTPS.
	 */
	bool enableHttps() const;
	/**
	* @brief Gets or sets a value indicating whether to use HTTPS.
	*/
	void setEnableHttps(bool newEnableHttps);


	bool enableNormalizedItemByNameIds() const;

	void setEnableNormalizedItemByNameIds(bool newEnableNormalizedItemByNameIds);

	/**
	 * @brief Gets or sets the filesystem path of an X.509 certificate to use for SSL.
	 */
	QString certificatePath() const;
	/**
	* @brief Gets or sets the filesystem path of an X.509 certificate to use for SSL.
	*/
	void setCertificatePath(QString newCertificatePath);
	bool certificatePathNull() const;
	void setCertificatePathNull();

	/**
	 * @brief Gets or sets the password required to access the X.509 certificate data in the file specified by MediaBrowser.Model.Configuration.ServerConfiguration.CertificatePath.
	 */
	QString certificatePassword() const;
	/**
	* @brief Gets or sets the password required to access the X.509 certificate data in the file specified by MediaBrowser.Model.Configuration.ServerConfiguration.CertificatePath.
	*/
	void setCertificatePassword(QString newCertificatePassword);
	bool certificatePasswordNull() const;
	void setCertificatePasswordNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance is port authorized.
	 */
	bool isPortAuthorized() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is port authorized.
	*/
	void setIsPortAuthorized(bool newIsPortAuthorized);

	/**
	 * @brief Gets or sets a value indicating whether quick connect is available for use on this server.
	 */
	bool quickConnectAvailable() const;
	/**
	* @brief Gets or sets a value indicating whether quick connect is available for use on this server.
	*/
	void setQuickConnectAvailable(bool newQuickConnectAvailable);

	/**
	 * @brief Gets or sets a value indicating whether access outside of the LAN is permitted.
	 */
	bool enableRemoteAccess() const;
	/**
	* @brief Gets or sets a value indicating whether access outside of the LAN is permitted.
	*/
	void setEnableRemoteAccess(bool newEnableRemoteAccess);

	/**
	 * @brief Gets or sets a value indicating whether [enable case sensitive item ids].
	 */
	bool enableCaseSensitiveItemIds() const;
	/**
	* @brief Gets or sets a value indicating whether [enable case sensitive item ids].
	*/
	void setEnableCaseSensitiveItemIds(bool newEnableCaseSensitiveItemIds);


	bool disableLiveTvChannelUserDataName() const;

	void setDisableLiveTvChannelUserDataName(bool newDisableLiveTvChannelUserDataName);

	/**
	 * @brief Gets or sets the metadata path.
	 */
	QString metadataPath() const;
	/**
	* @brief Gets or sets the metadata path.
	*/
	void setMetadataPath(QString newMetadataPath);
	bool metadataPathNull() const;
	void setMetadataPathNull();


	QString metadataNetworkPath() const;

	void setMetadataNetworkPath(QString newMetadataNetworkPath);
	bool metadataNetworkPathNull() const;
	void setMetadataNetworkPathNull();

	/**
	 * @brief Gets or sets the preferred metadata language.
	 */
	QString preferredMetadataLanguage() const;
	/**
	* @brief Gets or sets the preferred metadata language.
	*/
	void setPreferredMetadataLanguage(QString newPreferredMetadataLanguage);
	bool preferredMetadataLanguageNull() const;
	void setPreferredMetadataLanguageNull();

	/**
	 * @brief Gets or sets the metadata country code.
	 */
	QString metadataCountryCode() const;
	/**
	* @brief Gets or sets the metadata country code.
	*/
	void setMetadataCountryCode(QString newMetadataCountryCode);
	bool metadataCountryCodeNull() const;
	void setMetadataCountryCodeNull();

	/**
	 * @brief Gets or sets characters to be replaced with a ' ' in strings to create a sort name.
	 */
	QStringList sortReplaceCharacters() const;
	/**
	* @brief Gets or sets characters to be replaced with a ' ' in strings to create a sort name.
	*/
	void setSortReplaceCharacters(QStringList newSortReplaceCharacters);
	bool sortReplaceCharactersNull() const;
	void setSortReplaceCharactersNull();

	/**
	 * @brief Gets or sets characters to be removed from strings to create a sort name.
	 */
	QStringList sortRemoveCharacters() const;
	/**
	* @brief Gets or sets characters to be removed from strings to create a sort name.
	*/
	void setSortRemoveCharacters(QStringList newSortRemoveCharacters);
	bool sortRemoveCharactersNull() const;
	void setSortRemoveCharactersNull();

	/**
	 * @brief Gets or sets words to be removed from strings to create a sort name.
	 */
	QStringList sortRemoveWords() const;
	/**
	* @brief Gets or sets words to be removed from strings to create a sort name.
	*/
	void setSortRemoveWords(QStringList newSortRemoveWords);
	bool sortRemoveWordsNull() const;
	void setSortRemoveWordsNull();

	/**
	 * @brief Gets or sets the minimum percentage of an item that must be played in order for playstate to be updated.
	 */
	qint32 minResumePct() const;
	/**
	* @brief Gets or sets the minimum percentage of an item that must be played in order for playstate to be updated.
	*/
	void setMinResumePct(qint32 newMinResumePct);

	/**
	 * @brief Gets or sets the maximum percentage of an item that can be played while still saving playstate. If this percentage is crossed playstate will be reset to the beginning and the item will be marked watched.
	 */
	qint32 maxResumePct() const;
	/**
	* @brief Gets or sets the maximum percentage of an item that can be played while still saving playstate. If this percentage is crossed playstate will be reset to the beginning and the item will be marked watched.
	*/
	void setMaxResumePct(qint32 newMaxResumePct);

	/**
	 * @brief Gets or sets the minimum duration that an item must have in order to be eligible for playstate updates..
	 */
	qint32 minResumeDurationSeconds() const;
	/**
	* @brief Gets or sets the minimum duration that an item must have in order to be eligible for playstate updates..
	*/
	void setMinResumeDurationSeconds(qint32 newMinResumeDurationSeconds);

	/**
	 * @brief Gets or sets the minimum minutes of a book that must be played in order for playstate to be updated.
	 */
	qint32 minAudiobookResume() const;
	/**
	* @brief Gets or sets the minimum minutes of a book that must be played in order for playstate to be updated.
	*/
	void setMinAudiobookResume(qint32 newMinAudiobookResume);

	/**
	 * @brief Gets or sets the remaining minutes of a book that can be played while still saving playstate. If this percentage is crossed playstate will be reset to the beginning and the item will be marked watched.
	 */
	qint32 maxAudiobookResume() const;
	/**
	* @brief Gets or sets the remaining minutes of a book that can be played while still saving playstate. If this percentage is crossed playstate will be reset to the beginning and the item will be marked watched.
	*/
	void setMaxAudiobookResume(qint32 newMaxAudiobookResume);

	/**
	 * @brief Gets or sets the delay in seconds that we will wait after a file system change to try and discover what has been added/removed
Some delay is necessary with some items because their creation is not atomic.  It involves the creation of several
different directories and files.
	 */
	qint32 libraryMonitorDelay() const;
	/**
	* @brief Gets or sets the delay in seconds that we will wait after a file system change to try and discover what has been added/removed
Some delay is necessary with some items because their creation is not atomic.  It involves the creation of several
different directories and files.
	*/
	void setLibraryMonitorDelay(qint32 newLibraryMonitorDelay);

	/**
	 * @brief Gets or sets a value indicating whether [enable dashboard response caching].
Allows potential contributors without visual studio to modify production dashboard code and test changes.
	 */
	bool enableDashboardResponseCaching() const;
	/**
	* @brief Gets or sets a value indicating whether [enable dashboard response caching].
Allows potential contributors without visual studio to modify production dashboard code and test changes.
	*/
	void setEnableDashboardResponseCaching(bool newEnableDashboardResponseCaching);


	ImageSavingConvention imageSavingConvention() const;

	void setImageSavingConvention(ImageSavingConvention newImageSavingConvention);


	QList<MetadataOptions> metadataOptions() const;

	void setMetadataOptions(QList<MetadataOptions> newMetadataOptions);
	bool metadataOptionsNull() const;
	void setMetadataOptionsNull();


	bool skipDeserializationForBasicTypes() const;

	void setSkipDeserializationForBasicTypes(bool newSkipDeserializationForBasicTypes);


	QString serverName() const;

	void setServerName(QString newServerName);
	bool serverNameNull() const;
	void setServerNameNull();


	QString baseUrl() const;

	void setBaseUrl(QString newBaseUrl);
	bool baseUrlNull() const;
	void setBaseUrlNull();


	QString uICulture() const;

	void setUICulture(QString newUICulture);
	bool uICultureNull() const;
	void setUICultureNull();


	bool saveMetadataHidden() const;

	void setSaveMetadataHidden(bool newSaveMetadataHidden);


	QList<NameValuePair> contentTypes() const;

	void setContentTypes(QList<NameValuePair> newContentTypes);
	bool contentTypesNull() const;
	void setContentTypesNull();


	qint32 remoteClientBitrateLimit() const;

	void setRemoteClientBitrateLimit(qint32 newRemoteClientBitrateLimit);


	bool enableFolderView() const;

	void setEnableFolderView(bool newEnableFolderView);


	bool enableGroupingIntoCollections() const;

	void setEnableGroupingIntoCollections(bool newEnableGroupingIntoCollections);


	bool displaySpecialsWithinSeasons() const;

	void setDisplaySpecialsWithinSeasons(bool newDisplaySpecialsWithinSeasons);

	/**
	 * @brief Gets or sets the subnets that are deemed to make up the LAN.
	 */
	QStringList localNetworkSubnets() const;
	/**
	* @brief Gets or sets the subnets that are deemed to make up the LAN.
	*/
	void setLocalNetworkSubnets(QStringList newLocalNetworkSubnets);
	bool localNetworkSubnetsNull() const;
	void setLocalNetworkSubnetsNull();

	/**
	 * @brief Gets or sets the interface addresses which Jellyfin will bind to. If empty, all interfaces will be used.
	 */
	QStringList localNetworkAddresses() const;
	/**
	* @brief Gets or sets the interface addresses which Jellyfin will bind to. If empty, all interfaces will be used.
	*/
	void setLocalNetworkAddresses(QStringList newLocalNetworkAddresses);
	bool localNetworkAddressesNull() const;
	void setLocalNetworkAddressesNull();


	QStringList codecsUsed() const;

	void setCodecsUsed(QStringList newCodecsUsed);
	bool codecsUsedNull() const;
	void setCodecsUsedNull();


	QList<RepositoryInfo> pluginRepositories() const;

	void setPluginRepositories(QList<RepositoryInfo> newPluginRepositories);
	bool pluginRepositoriesNull() const;
	void setPluginRepositoriesNull();


	bool enableExternalContentInSuggestions() const;

	void setEnableExternalContentInSuggestions(bool newEnableExternalContentInSuggestions);

	/**
	 * @brief Gets or sets a value indicating whether the server should force connections over HTTPS.
	 */
	bool requireHttps() const;
	/**
	* @brief Gets or sets a value indicating whether the server should force connections over HTTPS.
	*/
	void setRequireHttps(bool newRequireHttps);


	bool enableNewOmdbSupport() const;

	void setEnableNewOmdbSupport(bool newEnableNewOmdbSupport);

	/**
	 * @brief Gets or sets the filter for remote IP connectivity. Used in conjuntion with <seealso cref="P:MediaBrowser.Model.Configuration.ServerConfiguration.IsRemoteIPFilterBlacklist" />.
	 */
	QStringList remoteIPFilter() const;
	/**
	* @brief Gets or sets the filter for remote IP connectivity. Used in conjuntion with <seealso cref="P:MediaBrowser.Model.Configuration.ServerConfiguration.IsRemoteIPFilterBlacklist" />.
	*/
	void setRemoteIPFilter(QStringList newRemoteIPFilter);
	bool remoteIPFilterNull() const;
	void setRemoteIPFilterNull();

	/**
	 * @brief Gets or sets a value indicating whether <seealso cref="P:MediaBrowser.Model.Configuration.ServerConfiguration.RemoteIPFilter" /> contains a blacklist or a whitelist. Default is a whitelist.
	 */
	bool isRemoteIPFilterBlacklist() const;
	/**
	* @brief Gets or sets a value indicating whether <seealso cref="P:MediaBrowser.Model.Configuration.ServerConfiguration.RemoteIPFilter" /> contains a blacklist or a whitelist. Default is a whitelist.
	*/
	void setIsRemoteIPFilterBlacklist(bool newIsRemoteIPFilterBlacklist);


	qint32 imageExtractionTimeoutMs() const;

	void setImageExtractionTimeoutMs(qint32 newImageExtractionTimeoutMs);


	QList<PathSubstitution> pathSubstitutions() const;

	void setPathSubstitutions(QList<PathSubstitution> newPathSubstitutions);
	bool pathSubstitutionsNull() const;
	void setPathSubstitutionsNull();


	bool enableSimpleArtistDetection() const;

	void setEnableSimpleArtistDetection(bool newEnableSimpleArtistDetection);


	QStringList uninstalledPlugins() const;

	void setUninstalledPlugins(QStringList newUninstalledPlugins);
	bool uninstalledPluginsNull() const;
	void setUninstalledPluginsNull();

	/**
	 * @brief Gets or sets a value indicating whether slow server responses should be logged as a warning.
	 */
	bool enableSlowResponseWarning() const;
	/**
	* @brief Gets or sets a value indicating whether slow server responses should be logged as a warning.
	*/
	void setEnableSlowResponseWarning(bool newEnableSlowResponseWarning);

	/**
	 * @brief Gets or sets the threshold for the slow response time warning in ms.
	 */
	qint64 slowResponseThresholdMs() const;
	/**
	* @brief Gets or sets the threshold for the slow response time warning in ms.
	*/
	void setSlowResponseThresholdMs(qint64 newSlowResponseThresholdMs);

	/**
	 * @brief Gets or sets the cors hosts.
	 */
	QStringList corsHosts() const;
	/**
	* @brief Gets or sets the cors hosts.
	*/
	void setCorsHosts(QStringList newCorsHosts);
	bool corsHostsNull() const;
	void setCorsHostsNull();

	/**
	 * @brief Gets or sets the known proxies.
	 */
	QStringList knownProxies() const;
	/**
	* @brief Gets or sets the known proxies.
	*/
	void setKnownProxies(QStringList newKnownProxies);
	bool knownProxiesNull() const;
	void setKnownProxiesNull();

	/**
	 * @brief Gets or sets the number of days we should retain activity logs.
	 */
	std::optional<qint32> activityLogRetentionDays() const;
	/**
	* @brief Gets or sets the number of days we should retain activity logs.
	*/
	void setActivityLogRetentionDays(std::optional<qint32> newActivityLogRetentionDays);
	bool activityLogRetentionDaysNull() const;
	void setActivityLogRetentionDaysNull();

	/**
	 * @brief Gets or sets the how the library scan fans out.
	 */
	qint32 libraryScanFanoutConcurrency() const;
	/**
	* @brief Gets or sets the how the library scan fans out.
	*/
	void setLibraryScanFanoutConcurrency(qint32 newLibraryScanFanoutConcurrency);

	/**
	 * @brief Gets or sets the how many metadata refreshes can run concurrently.
	 */
	qint32 libraryMetadataRefreshConcurrency() const;
	/**
	* @brief Gets or sets the how many metadata refreshes can run concurrently.
	*/
	void setLibraryMetadataRefreshConcurrency(qint32 newLibraryMetadataRefreshConcurrency);

	/**
	 * @brief Gets or sets a value indicating whether older plugins should automatically be deleted from the plugin folder.
	 */
	bool removeOldPlugins() const;
	/**
	* @brief Gets or sets a value indicating whether older plugins should automatically be deleted from the plugin folder.
	*/
	void setRemoveOldPlugins(bool newRemoveOldPlugins);

	/**
	 * @brief Gets or sets a value indicating whether plugin image should be disabled.
	 */
	bool disablePluginImages() const;
	/**
	* @brief Gets or sets a value indicating whether plugin image should be disabled.
	*/
	void setDisablePluginImages(bool newDisablePluginImages);


protected:
	qint32 m_logFileRetentionDays;
	bool m_isStartupWizardCompleted;
	QString m_cachePath;
	QSharedPointer<Version> m_previousVersion = QSharedPointer<Version>();
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
	QList<MetadataOptions> m_metadataOptions;
	bool m_skipDeserializationForBasicTypes;
	QString m_serverName;
	QString m_baseUrl;
	QString m_uICulture;
	bool m_saveMetadataHidden;
	QList<NameValuePair> m_contentTypes;
	qint32 m_remoteClientBitrateLimit;
	bool m_enableFolderView;
	bool m_enableGroupingIntoCollections;
	bool m_displaySpecialsWithinSeasons;
	QStringList m_localNetworkSubnets;
	QStringList m_localNetworkAddresses;
	QStringList m_codecsUsed;
	QList<RepositoryInfo> m_pluginRepositories;
	bool m_enableExternalContentInSuggestions;
	bool m_requireHttps;
	bool m_enableNewOmdbSupport;
	QStringList m_remoteIPFilter;
	bool m_isRemoteIPFilterBlacklist;
	qint32 m_imageExtractionTimeoutMs;
	QList<PathSubstitution> m_pathSubstitutions;
	bool m_enableSimpleArtistDetection;
	QStringList m_uninstalledPlugins;
	bool m_enableSlowResponseWarning;
	qint64 m_slowResponseThresholdMs;
	QStringList m_corsHosts;
	QStringList m_knownProxies;
	std::optional<qint32> m_activityLogRetentionDays = std::nullopt;
	qint32 m_libraryScanFanoutConcurrency;
	qint32 m_libraryMetadataRefreshConcurrency;
	bool m_removeOldPlugins;
	bool m_disablePluginImages;

private:
	// Private constructor which generates an invalid object, for use withing ServerConfiguration::fromJson();
	ServerConfiguration();
};


} // NS DTO

namespace Support {

using ServerConfiguration = Jellyfin::DTO::ServerConfiguration;

template <>
ServerConfiguration fromJsonValue(const QJsonValue &source, convertType<ServerConfiguration>);

template<>
QJsonValue toJsonValue(const ServerConfiguration &source, convertType<ServerConfiguration>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_SERVERCONFIGURATION_H
