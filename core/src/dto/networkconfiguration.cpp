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

#include <JellyfinQt/dto/networkconfiguration.h>

namespace Jellyfin {
namespace DTO {

NetworkConfiguration::NetworkConfiguration() {}
NetworkConfiguration::NetworkConfiguration (
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
		) :
	m_baseUrl(baseUrl),
	m_enableHttps(enableHttps),
	m_requireHttps(requireHttps),
	m_certificatePath(certificatePath),
	m_certificatePassword(certificatePassword),
	m_internalHttpPort(internalHttpPort),
	m_internalHttpsPort(internalHttpsPort),
	m_publicHttpPort(publicHttpPort),
	m_publicHttpsPort(publicHttpsPort),
	m_autoDiscovery(autoDiscovery),
	m_enableUPnP(enableUPnP),
	m_enableIPv4(enableIPv4),
	m_enableIPv6(enableIPv6),
	m_enableRemoteAccess(enableRemoteAccess),
	m_localNetworkSubnets(localNetworkSubnets),
	m_localNetworkAddresses(localNetworkAddresses),
	m_knownProxies(knownProxies),
	m_ignoreVirtualInterfaces(ignoreVirtualInterfaces),
	m_virtualInterfaceNames(virtualInterfaceNames),
	m_enablePublishedServerUriByRequest(enablePublishedServerUriByRequest),
	m_publishedServerUriBySubnet(publishedServerUriBySubnet),
	m_remoteIPFilter(remoteIPFilter),
	m_isRemoteIPFilterBlacklist(isRemoteIPFilterBlacklist) { }



NetworkConfiguration::NetworkConfiguration(const NetworkConfiguration &other) :

	m_baseUrl(other.m_baseUrl),
	m_enableHttps(other.m_enableHttps),
	m_requireHttps(other.m_requireHttps),
	m_certificatePath(other.m_certificatePath),
	m_certificatePassword(other.m_certificatePassword),
	m_internalHttpPort(other.m_internalHttpPort),
	m_internalHttpsPort(other.m_internalHttpsPort),
	m_publicHttpPort(other.m_publicHttpPort),
	m_publicHttpsPort(other.m_publicHttpsPort),
	m_autoDiscovery(other.m_autoDiscovery),
	m_enableUPnP(other.m_enableUPnP),
	m_enableIPv4(other.m_enableIPv4),
	m_enableIPv6(other.m_enableIPv6),
	m_enableRemoteAccess(other.m_enableRemoteAccess),
	m_localNetworkSubnets(other.m_localNetworkSubnets),
	m_localNetworkAddresses(other.m_localNetworkAddresses),
	m_knownProxies(other.m_knownProxies),
	m_ignoreVirtualInterfaces(other.m_ignoreVirtualInterfaces),
	m_virtualInterfaceNames(other.m_virtualInterfaceNames),
	m_enablePublishedServerUriByRequest(other.m_enablePublishedServerUriByRequest),
	m_publishedServerUriBySubnet(other.m_publishedServerUriBySubnet),
	m_remoteIPFilter(other.m_remoteIPFilter),
	m_isRemoteIPFilterBlacklist(other.m_isRemoteIPFilterBlacklist){}


void NetworkConfiguration::replaceData(NetworkConfiguration &other) {
	m_baseUrl = other.m_baseUrl;
	m_enableHttps = other.m_enableHttps;
	m_requireHttps = other.m_requireHttps;
	m_certificatePath = other.m_certificatePath;
	m_certificatePassword = other.m_certificatePassword;
	m_internalHttpPort = other.m_internalHttpPort;
	m_internalHttpsPort = other.m_internalHttpsPort;
	m_publicHttpPort = other.m_publicHttpPort;
	m_publicHttpsPort = other.m_publicHttpsPort;
	m_autoDiscovery = other.m_autoDiscovery;
	m_enableUPnP = other.m_enableUPnP;
	m_enableIPv4 = other.m_enableIPv4;
	m_enableIPv6 = other.m_enableIPv6;
	m_enableRemoteAccess = other.m_enableRemoteAccess;
	m_localNetworkSubnets = other.m_localNetworkSubnets;
	m_localNetworkAddresses = other.m_localNetworkAddresses;
	m_knownProxies = other.m_knownProxies;
	m_ignoreVirtualInterfaces = other.m_ignoreVirtualInterfaces;
	m_virtualInterfaceNames = other.m_virtualInterfaceNames;
	m_enablePublishedServerUriByRequest = other.m_enablePublishedServerUriByRequest;
	m_publishedServerUriBySubnet = other.m_publishedServerUriBySubnet;
	m_remoteIPFilter = other.m_remoteIPFilter;
	m_isRemoteIPFilterBlacklist = other.m_isRemoteIPFilterBlacklist;
}

NetworkConfiguration NetworkConfiguration::fromJson(QJsonObject source) {
	NetworkConfiguration instance;
	instance.setFromJson(source);
	return instance;
}


void NetworkConfiguration::setFromJson(QJsonObject source) {
	m_baseUrl = Jellyfin::Support::fromJsonValue<QString>(source["BaseUrl"]);
	m_enableHttps = Jellyfin::Support::fromJsonValue<bool>(source["EnableHttps"]);
	m_requireHttps = Jellyfin::Support::fromJsonValue<bool>(source["RequireHttps"]);
	m_certificatePath = Jellyfin::Support::fromJsonValue<QString>(source["CertificatePath"]);
	m_certificatePassword = Jellyfin::Support::fromJsonValue<QString>(source["CertificatePassword"]);
	m_internalHttpPort = Jellyfin::Support::fromJsonValue<qint32>(source["InternalHttpPort"]);
	m_internalHttpsPort = Jellyfin::Support::fromJsonValue<qint32>(source["InternalHttpsPort"]);
	m_publicHttpPort = Jellyfin::Support::fromJsonValue<qint32>(source["PublicHttpPort"]);
	m_publicHttpsPort = Jellyfin::Support::fromJsonValue<qint32>(source["PublicHttpsPort"]);
	m_autoDiscovery = Jellyfin::Support::fromJsonValue<bool>(source["AutoDiscovery"]);
	m_enableUPnP = Jellyfin::Support::fromJsonValue<bool>(source["EnableUPnP"]);
	m_enableIPv4 = Jellyfin::Support::fromJsonValue<bool>(source["EnableIPv4"]);
	m_enableIPv6 = Jellyfin::Support::fromJsonValue<bool>(source["EnableIPv6"]);
	m_enableRemoteAccess = Jellyfin::Support::fromJsonValue<bool>(source["EnableRemoteAccess"]);
	m_localNetworkSubnets = Jellyfin::Support::fromJsonValue<QStringList>(source["LocalNetworkSubnets"]);
	m_localNetworkAddresses = Jellyfin::Support::fromJsonValue<QStringList>(source["LocalNetworkAddresses"]);
	m_knownProxies = Jellyfin::Support::fromJsonValue<QStringList>(source["KnownProxies"]);
	m_ignoreVirtualInterfaces = Jellyfin::Support::fromJsonValue<bool>(source["IgnoreVirtualInterfaces"]);
	m_virtualInterfaceNames = Jellyfin::Support::fromJsonValue<QStringList>(source["VirtualInterfaceNames"]);
	m_enablePublishedServerUriByRequest = Jellyfin::Support::fromJsonValue<bool>(source["EnablePublishedServerUriByRequest"]);
	m_publishedServerUriBySubnet = Jellyfin::Support::fromJsonValue<QStringList>(source["PublishedServerUriBySubnet"]);
	m_remoteIPFilter = Jellyfin::Support::fromJsonValue<QStringList>(source["RemoteIPFilter"]);
	m_isRemoteIPFilterBlacklist = Jellyfin::Support::fromJsonValue<bool>(source["IsRemoteIPFilterBlacklist"]);

}
	
QJsonObject NetworkConfiguration::toJson() const {
	QJsonObject result;
	
	result["BaseUrl"] = Jellyfin::Support::toJsonValue<QString>(m_baseUrl);		
	result["EnableHttps"] = Jellyfin::Support::toJsonValue<bool>(m_enableHttps);		
	result["RequireHttps"] = Jellyfin::Support::toJsonValue<bool>(m_requireHttps);		
	result["CertificatePath"] = Jellyfin::Support::toJsonValue<QString>(m_certificatePath);		
	result["CertificatePassword"] = Jellyfin::Support::toJsonValue<QString>(m_certificatePassword);		
	result["InternalHttpPort"] = Jellyfin::Support::toJsonValue<qint32>(m_internalHttpPort);		
	result["InternalHttpsPort"] = Jellyfin::Support::toJsonValue<qint32>(m_internalHttpsPort);		
	result["PublicHttpPort"] = Jellyfin::Support::toJsonValue<qint32>(m_publicHttpPort);		
	result["PublicHttpsPort"] = Jellyfin::Support::toJsonValue<qint32>(m_publicHttpsPort);		
	result["AutoDiscovery"] = Jellyfin::Support::toJsonValue<bool>(m_autoDiscovery);		
	result["EnableUPnP"] = Jellyfin::Support::toJsonValue<bool>(m_enableUPnP);		
	result["EnableIPv4"] = Jellyfin::Support::toJsonValue<bool>(m_enableIPv4);		
	result["EnableIPv6"] = Jellyfin::Support::toJsonValue<bool>(m_enableIPv6);		
	result["EnableRemoteAccess"] = Jellyfin::Support::toJsonValue<bool>(m_enableRemoteAccess);		
	result["LocalNetworkSubnets"] = Jellyfin::Support::toJsonValue<QStringList>(m_localNetworkSubnets);		
	result["LocalNetworkAddresses"] = Jellyfin::Support::toJsonValue<QStringList>(m_localNetworkAddresses);		
	result["KnownProxies"] = Jellyfin::Support::toJsonValue<QStringList>(m_knownProxies);		
	result["IgnoreVirtualInterfaces"] = Jellyfin::Support::toJsonValue<bool>(m_ignoreVirtualInterfaces);		
	result["VirtualInterfaceNames"] = Jellyfin::Support::toJsonValue<QStringList>(m_virtualInterfaceNames);		
	result["EnablePublishedServerUriByRequest"] = Jellyfin::Support::toJsonValue<bool>(m_enablePublishedServerUriByRequest);		
	result["PublishedServerUriBySubnet"] = Jellyfin::Support::toJsonValue<QStringList>(m_publishedServerUriBySubnet);		
	result["RemoteIPFilter"] = Jellyfin::Support::toJsonValue<QStringList>(m_remoteIPFilter);		
	result["IsRemoteIPFilterBlacklist"] = Jellyfin::Support::toJsonValue<bool>(m_isRemoteIPFilterBlacklist);	
	return result;
}

QString NetworkConfiguration::baseUrl() const { return m_baseUrl; }

void NetworkConfiguration::setBaseUrl(QString newBaseUrl) {
	m_baseUrl = newBaseUrl;
}

bool NetworkConfiguration::enableHttps() const { return m_enableHttps; }

void NetworkConfiguration::setEnableHttps(bool newEnableHttps) {
	m_enableHttps = newEnableHttps;
}

bool NetworkConfiguration::requireHttps() const { return m_requireHttps; }

void NetworkConfiguration::setRequireHttps(bool newRequireHttps) {
	m_requireHttps = newRequireHttps;
}

QString NetworkConfiguration::certificatePath() const { return m_certificatePath; }

void NetworkConfiguration::setCertificatePath(QString newCertificatePath) {
	m_certificatePath = newCertificatePath;
}

QString NetworkConfiguration::certificatePassword() const { return m_certificatePassword; }

void NetworkConfiguration::setCertificatePassword(QString newCertificatePassword) {
	m_certificatePassword = newCertificatePassword;
}

qint32 NetworkConfiguration::internalHttpPort() const { return m_internalHttpPort; }

void NetworkConfiguration::setInternalHttpPort(qint32 newInternalHttpPort) {
	m_internalHttpPort = newInternalHttpPort;
}

qint32 NetworkConfiguration::internalHttpsPort() const { return m_internalHttpsPort; }

void NetworkConfiguration::setInternalHttpsPort(qint32 newInternalHttpsPort) {
	m_internalHttpsPort = newInternalHttpsPort;
}

qint32 NetworkConfiguration::publicHttpPort() const { return m_publicHttpPort; }

void NetworkConfiguration::setPublicHttpPort(qint32 newPublicHttpPort) {
	m_publicHttpPort = newPublicHttpPort;
}

qint32 NetworkConfiguration::publicHttpsPort() const { return m_publicHttpsPort; }

void NetworkConfiguration::setPublicHttpsPort(qint32 newPublicHttpsPort) {
	m_publicHttpsPort = newPublicHttpsPort;
}

bool NetworkConfiguration::autoDiscovery() const { return m_autoDiscovery; }

void NetworkConfiguration::setAutoDiscovery(bool newAutoDiscovery) {
	m_autoDiscovery = newAutoDiscovery;
}

bool NetworkConfiguration::enableUPnP() const { return m_enableUPnP; }

void NetworkConfiguration::setEnableUPnP(bool newEnableUPnP) {
	m_enableUPnP = newEnableUPnP;
}

bool NetworkConfiguration::enableIPv4() const { return m_enableIPv4; }

void NetworkConfiguration::setEnableIPv4(bool newEnableIPv4) {
	m_enableIPv4 = newEnableIPv4;
}

bool NetworkConfiguration::enableIPv6() const { return m_enableIPv6; }

void NetworkConfiguration::setEnableIPv6(bool newEnableIPv6) {
	m_enableIPv6 = newEnableIPv6;
}

bool NetworkConfiguration::enableRemoteAccess() const { return m_enableRemoteAccess; }

void NetworkConfiguration::setEnableRemoteAccess(bool newEnableRemoteAccess) {
	m_enableRemoteAccess = newEnableRemoteAccess;
}

QStringList NetworkConfiguration::localNetworkSubnets() const { return m_localNetworkSubnets; }

void NetworkConfiguration::setLocalNetworkSubnets(QStringList newLocalNetworkSubnets) {
	m_localNetworkSubnets = newLocalNetworkSubnets;
}

QStringList NetworkConfiguration::localNetworkAddresses() const { return m_localNetworkAddresses; }

void NetworkConfiguration::setLocalNetworkAddresses(QStringList newLocalNetworkAddresses) {
	m_localNetworkAddresses = newLocalNetworkAddresses;
}

QStringList NetworkConfiguration::knownProxies() const { return m_knownProxies; }

void NetworkConfiguration::setKnownProxies(QStringList newKnownProxies) {
	m_knownProxies = newKnownProxies;
}

bool NetworkConfiguration::ignoreVirtualInterfaces() const { return m_ignoreVirtualInterfaces; }

void NetworkConfiguration::setIgnoreVirtualInterfaces(bool newIgnoreVirtualInterfaces) {
	m_ignoreVirtualInterfaces = newIgnoreVirtualInterfaces;
}

QStringList NetworkConfiguration::virtualInterfaceNames() const { return m_virtualInterfaceNames; }

void NetworkConfiguration::setVirtualInterfaceNames(QStringList newVirtualInterfaceNames) {
	m_virtualInterfaceNames = newVirtualInterfaceNames;
}

bool NetworkConfiguration::enablePublishedServerUriByRequest() const { return m_enablePublishedServerUriByRequest; }

void NetworkConfiguration::setEnablePublishedServerUriByRequest(bool newEnablePublishedServerUriByRequest) {
	m_enablePublishedServerUriByRequest = newEnablePublishedServerUriByRequest;
}

QStringList NetworkConfiguration::publishedServerUriBySubnet() const { return m_publishedServerUriBySubnet; }

void NetworkConfiguration::setPublishedServerUriBySubnet(QStringList newPublishedServerUriBySubnet) {
	m_publishedServerUriBySubnet = newPublishedServerUriBySubnet;
}

QStringList NetworkConfiguration::remoteIPFilter() const { return m_remoteIPFilter; }

void NetworkConfiguration::setRemoteIPFilter(QStringList newRemoteIPFilter) {
	m_remoteIPFilter = newRemoteIPFilter;
}

bool NetworkConfiguration::isRemoteIPFilterBlacklist() const { return m_isRemoteIPFilterBlacklist; }

void NetworkConfiguration::setIsRemoteIPFilterBlacklist(bool newIsRemoteIPFilterBlacklist) {
	m_isRemoteIPFilterBlacklist = newIsRemoteIPFilterBlacklist;
}


} // NS DTO

namespace Support {

using NetworkConfiguration = Jellyfin::DTO::NetworkConfiguration;

template <>
NetworkConfiguration fromJsonValue(const QJsonValue &source, convertType<NetworkConfiguration>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return NetworkConfiguration::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const NetworkConfiguration &source, convertType<NetworkConfiguration>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
