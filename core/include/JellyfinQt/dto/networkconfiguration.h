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

#ifndef JELLYFIN_DTO_NETWORKCONFIGURATION_H
#define JELLYFIN_DTO_NETWORKCONFIGURATION_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class NetworkConfiguration {
public:
	NetworkConfiguration(	
		QString baseUrl,			
		bool enableHttps,			
		bool requireHttps,			
		QString certificatePath,			
		QString certificatePassword,			
		qint32 internalHttpPort,			
		qint32 internalHttpsPort,			
		qint32 publicHttpPort,			
		qint32 publicHttpsPort,			
		bool autoDiscovery,			
		bool enableUPnP,			
		bool enableIPv4,			
		bool enableIPv6,			
		bool enableRemoteAccess,			
		QStringList localNetworkSubnets,			
		QStringList localNetworkAddresses,			
		QStringList knownProxies,			
		bool ignoreVirtualInterfaces,			
		QStringList virtualInterfaceNames,			
		bool enablePublishedServerUriByRequest,			
		QStringList publishedServerUriBySubnet,			
		QStringList remoteIPFilter,			
		bool isRemoteIPFilterBlacklist		
	);

	NetworkConfiguration(const NetworkConfiguration &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(NetworkConfiguration &other);
	
	static NetworkConfiguration fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets a value used to specify the URL prefix that your Jellyfin instance can be accessed at.
	 */
	QString baseUrl() const;
	/**
	* @brief Gets or sets a value used to specify the URL prefix that your Jellyfin instance can be accessed at.
	*/
	void setBaseUrl(QString newBaseUrl);

	/**
	 * @brief Gets or sets a value indicating whether to use HTTPS.
	 */
	bool enableHttps() const;
	/**
	* @brief Gets or sets a value indicating whether to use HTTPS.
	*/
	void setEnableHttps(bool newEnableHttps);

	/**
	 * @brief Gets or sets a value indicating whether the server should force connections over HTTPS.
	 */
	bool requireHttps() const;
	/**
	* @brief Gets or sets a value indicating whether the server should force connections over HTTPS.
	*/
	void setRequireHttps(bool newRequireHttps);

	/**
	 * @brief Gets or sets the filesystem path of an X.509 certificate to use for SSL.
	 */
	QString certificatePath() const;
	/**
	* @brief Gets or sets the filesystem path of an X.509 certificate to use for SSL.
	*/
	void setCertificatePath(QString newCertificatePath);

	/**
	 * @brief Gets or sets the password required to access the X.509 certificate data in the file specified by MediaBrowser.Common.Net.NetworkConfiguration.CertificatePath.
	 */
	QString certificatePassword() const;
	/**
	* @brief Gets or sets the password required to access the X.509 certificate data in the file specified by MediaBrowser.Common.Net.NetworkConfiguration.CertificatePath.
	*/
	void setCertificatePassword(QString newCertificatePassword);

	/**
	 * @brief Gets or sets the internal HTTP server port.
	 */
	qint32 internalHttpPort() const;
	/**
	* @brief Gets or sets the internal HTTP server port.
	*/
	void setInternalHttpPort(qint32 newInternalHttpPort);

	/**
	 * @brief Gets or sets the internal HTTPS server port.
	 */
	qint32 internalHttpsPort() const;
	/**
	* @brief Gets or sets the internal HTTPS server port.
	*/
	void setInternalHttpsPort(qint32 newInternalHttpsPort);

	/**
	 * @brief Gets or sets the public HTTP port.
	 */
	qint32 publicHttpPort() const;
	/**
	* @brief Gets or sets the public HTTP port.
	*/
	void setPublicHttpPort(qint32 newPublicHttpPort);

	/**
	 * @brief Gets or sets the public HTTPS port.
	 */
	qint32 publicHttpsPort() const;
	/**
	* @brief Gets or sets the public HTTPS port.
	*/
	void setPublicHttpsPort(qint32 newPublicHttpsPort);

	/**
	 * @brief Gets or sets a value indicating whether Autodiscovery is enabled.
	 */
	bool autoDiscovery() const;
	/**
	* @brief Gets or sets a value indicating whether Autodiscovery is enabled.
	*/
	void setAutoDiscovery(bool newAutoDiscovery);

	/**
	 * @brief Gets or sets a value indicating whether to enable automatic port forwarding.
	 */
	bool enableUPnP() const;
	/**
	* @brief Gets or sets a value indicating whether to enable automatic port forwarding.
	*/
	void setEnableUPnP(bool newEnableUPnP);

	/**
	 * @brief Gets or sets a value indicating whether IPv6 is enabled.
	 */
	bool enableIPv4() const;
	/**
	* @brief Gets or sets a value indicating whether IPv6 is enabled.
	*/
	void setEnableIPv4(bool newEnableIPv4);

	/**
	 * @brief Gets or sets a value indicating whether IPv6 is enabled.
	 */
	bool enableIPv6() const;
	/**
	* @brief Gets or sets a value indicating whether IPv6 is enabled.
	*/
	void setEnableIPv6(bool newEnableIPv6);

	/**
	 * @brief Gets or sets a value indicating whether access from outside of the LAN is permitted.
	 */
	bool enableRemoteAccess() const;
	/**
	* @brief Gets or sets a value indicating whether access from outside of the LAN is permitted.
	*/
	void setEnableRemoteAccess(bool newEnableRemoteAccess);

	/**
	 * @brief Gets or sets the subnets that are deemed to make up the LAN.
	 */
	QStringList localNetworkSubnets() const;
	/**
	* @brief Gets or sets the subnets that are deemed to make up the LAN.
	*/
	void setLocalNetworkSubnets(QStringList newLocalNetworkSubnets);

	/**
	 * @brief Gets or sets the interface addresses which Jellyfin will bind to. If empty, all interfaces will be used.
	 */
	QStringList localNetworkAddresses() const;
	/**
	* @brief Gets or sets the interface addresses which Jellyfin will bind to. If empty, all interfaces will be used.
	*/
	void setLocalNetworkAddresses(QStringList newLocalNetworkAddresses);

	/**
	 * @brief Gets or sets the known proxies.
	 */
	QStringList knownProxies() const;
	/**
	* @brief Gets or sets the known proxies.
	*/
	void setKnownProxies(QStringList newKnownProxies);

	/**
	 * @brief Gets or sets a value indicating whether address names that match MediaBrowser.Common.Net.NetworkConfiguration.VirtualInterfaceNames should be ignored for the purposes of binding.
	 */
	bool ignoreVirtualInterfaces() const;
	/**
	* @brief Gets or sets a value indicating whether address names that match MediaBrowser.Common.Net.NetworkConfiguration.VirtualInterfaceNames should be ignored for the purposes of binding.
	*/
	void setIgnoreVirtualInterfaces(bool newIgnoreVirtualInterfaces);

	/**
	 * @brief Gets or sets a value indicating the interface name prefixes that should be ignored. The list can be comma separated and values are case-insensitive. <seealso cref="P:MediaBrowser.Common.Net.NetworkConfiguration.IgnoreVirtualInterfaces" />.
	 */
	QStringList virtualInterfaceNames() const;
	/**
	* @brief Gets or sets a value indicating the interface name prefixes that should be ignored. The list can be comma separated and values are case-insensitive. <seealso cref="P:MediaBrowser.Common.Net.NetworkConfiguration.IgnoreVirtualInterfaces" />.
	*/
	void setVirtualInterfaceNames(QStringList newVirtualInterfaceNames);

	/**
	 * @brief Gets or sets a value indicating whether the published server uri is based on information in HTTP requests.
	 */
	bool enablePublishedServerUriByRequest() const;
	/**
	* @brief Gets or sets a value indicating whether the published server uri is based on information in HTTP requests.
	*/
	void setEnablePublishedServerUriByRequest(bool newEnablePublishedServerUriByRequest);

	/**
	 * @brief Gets or sets the PublishedServerUriBySubnet
Gets or sets PublishedServerUri to advertise for specific subnets.
	 */
	QStringList publishedServerUriBySubnet() const;
	/**
	* @brief Gets or sets the PublishedServerUriBySubnet
Gets or sets PublishedServerUri to advertise for specific subnets.
	*/
	void setPublishedServerUriBySubnet(QStringList newPublishedServerUriBySubnet);

	/**
	 * @brief Gets or sets the filter for remote IP connectivity. Used in conjunction with <seealso cref="P:MediaBrowser.Common.Net.NetworkConfiguration.IsRemoteIPFilterBlacklist" />.
	 */
	QStringList remoteIPFilter() const;
	/**
	* @brief Gets or sets the filter for remote IP connectivity. Used in conjunction with <seealso cref="P:MediaBrowser.Common.Net.NetworkConfiguration.IsRemoteIPFilterBlacklist" />.
	*/
	void setRemoteIPFilter(QStringList newRemoteIPFilter);

	/**
	 * @brief Gets or sets a value indicating whether <seealso cref="P:MediaBrowser.Common.Net.NetworkConfiguration.RemoteIPFilter" /> contains a blacklist or a whitelist. Default is a whitelist.
	 */
	bool isRemoteIPFilterBlacklist() const;
	/**
	* @brief Gets or sets a value indicating whether <seealso cref="P:MediaBrowser.Common.Net.NetworkConfiguration.RemoteIPFilter" /> contains a blacklist or a whitelist. Default is a whitelist.
	*/
	void setIsRemoteIPFilterBlacklist(bool newIsRemoteIPFilterBlacklist);


protected:
	QString m_baseUrl;
	bool m_enableHttps;
	bool m_requireHttps;
	QString m_certificatePath;
	QString m_certificatePassword;
	qint32 m_internalHttpPort;
	qint32 m_internalHttpsPort;
	qint32 m_publicHttpPort;
	qint32 m_publicHttpsPort;
	bool m_autoDiscovery;
	bool m_enableUPnP;
	bool m_enableIPv4;
	bool m_enableIPv6;
	bool m_enableRemoteAccess;
	QStringList m_localNetworkSubnets;
	QStringList m_localNetworkAddresses;
	QStringList m_knownProxies;
	bool m_ignoreVirtualInterfaces;
	QStringList m_virtualInterfaceNames;
	bool m_enablePublishedServerUriByRequest;
	QStringList m_publishedServerUriBySubnet;
	QStringList m_remoteIPFilter;
	bool m_isRemoteIPFilterBlacklist;

private:
	// Private constructor which generates an invalid object, for use withing NetworkConfiguration::fromJson();
	NetworkConfiguration();
};


} // NS DTO

namespace Support {

using NetworkConfiguration = Jellyfin::DTO::NetworkConfiguration;

template <>
NetworkConfiguration fromJsonValue(const QJsonValue &source, convertType<NetworkConfiguration>);

template<>
QJsonValue toJsonValue(const NetworkConfiguration &source, convertType<NetworkConfiguration>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_NETWORKCONFIGURATION_H
