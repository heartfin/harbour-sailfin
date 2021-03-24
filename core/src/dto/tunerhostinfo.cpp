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

#include <JellyfinQt/dto/tunerhostinfo.h>

namespace Jellyfin {
namespace DTO {

TunerHostInfo::TunerHostInfo() {}

TunerHostInfo::TunerHostInfo(const TunerHostInfo &other) :

	m_jellyfinId(other.m_jellyfinId),
	m_url(other.m_url),
	m_type(other.m_type),
	m_deviceId(other.m_deviceId),
	m_friendlyName(other.m_friendlyName),
	m_importFavoritesOnly(other.m_importFavoritesOnly),
	m_allowHWTranscoding(other.m_allowHWTranscoding),
	m_enableStreamLooping(other.m_enableStreamLooping),
	m_source(other.m_source),
	m_tunerCount(other.m_tunerCount),
	m_userAgent(other.m_userAgent){}


void TunerHostInfo::replaceData(TunerHostInfo &other) {
	m_jellyfinId = other.m_jellyfinId;
	m_url = other.m_url;
	m_type = other.m_type;
	m_deviceId = other.m_deviceId;
	m_friendlyName = other.m_friendlyName;
	m_importFavoritesOnly = other.m_importFavoritesOnly;
	m_allowHWTranscoding = other.m_allowHWTranscoding;
	m_enableStreamLooping = other.m_enableStreamLooping;
	m_source = other.m_source;
	m_tunerCount = other.m_tunerCount;
	m_userAgent = other.m_userAgent;
}

TunerHostInfo TunerHostInfo::fromJson(QJsonObject source) {
	TunerHostInfo instance;
	instance.setFromJson(source);
	return instance;
}


void TunerHostInfo::setFromJson(QJsonObject source) {
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_url = Jellyfin::Support::fromJsonValue<QString>(source["Url"]);
	m_type = Jellyfin::Support::fromJsonValue<QString>(source["Type"]);
	m_deviceId = Jellyfin::Support::fromJsonValue<QString>(source["DeviceId"]);
	m_friendlyName = Jellyfin::Support::fromJsonValue<QString>(source["FriendlyName"]);
	m_importFavoritesOnly = Jellyfin::Support::fromJsonValue<bool>(source["ImportFavoritesOnly"]);
	m_allowHWTranscoding = Jellyfin::Support::fromJsonValue<bool>(source["AllowHWTranscoding"]);
	m_enableStreamLooping = Jellyfin::Support::fromJsonValue<bool>(source["EnableStreamLooping"]);
	m_source = Jellyfin::Support::fromJsonValue<QString>(source["Source"]);
	m_tunerCount = Jellyfin::Support::fromJsonValue<qint32>(source["TunerCount"]);
	m_userAgent = Jellyfin::Support::fromJsonValue<QString>(source["UserAgent"]);

}
	
QJsonObject TunerHostInfo::toJson() {
	QJsonObject result;
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	result["Url"] = Jellyfin::Support::toJsonValue<QString>(m_url);
	result["Type"] = Jellyfin::Support::toJsonValue<QString>(m_type);
	result["DeviceId"] = Jellyfin::Support::toJsonValue<QString>(m_deviceId);
	result["FriendlyName"] = Jellyfin::Support::toJsonValue<QString>(m_friendlyName);
	result["ImportFavoritesOnly"] = Jellyfin::Support::toJsonValue<bool>(m_importFavoritesOnly);
	result["AllowHWTranscoding"] = Jellyfin::Support::toJsonValue<bool>(m_allowHWTranscoding);
	result["EnableStreamLooping"] = Jellyfin::Support::toJsonValue<bool>(m_enableStreamLooping);
	result["Source"] = Jellyfin::Support::toJsonValue<QString>(m_source);
	result["TunerCount"] = Jellyfin::Support::toJsonValue<qint32>(m_tunerCount);
	result["UserAgent"] = Jellyfin::Support::toJsonValue<QString>(m_userAgent);

	return result;
}

QString TunerHostInfo::jellyfinId() const { return m_jellyfinId; }

void TunerHostInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool TunerHostInfo::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void TunerHostInfo::setJellyfinIdNull() {
	m_jellyfinId.clear();

}
QString TunerHostInfo::url() const { return m_url; }

void TunerHostInfo::setUrl(QString newUrl) {
	m_url = newUrl;
}
bool TunerHostInfo::urlNull() const {
	return m_url.isNull();
}

void TunerHostInfo::setUrlNull() {
	m_url.clear();

}
QString TunerHostInfo::type() const { return m_type; }

void TunerHostInfo::setType(QString newType) {
	m_type = newType;
}
bool TunerHostInfo::typeNull() const {
	return m_type.isNull();
}

void TunerHostInfo::setTypeNull() {
	m_type.clear();

}
QString TunerHostInfo::deviceId() const { return m_deviceId; }

void TunerHostInfo::setDeviceId(QString newDeviceId) {
	m_deviceId = newDeviceId;
}
bool TunerHostInfo::deviceIdNull() const {
	return m_deviceId.isNull();
}

void TunerHostInfo::setDeviceIdNull() {
	m_deviceId.clear();

}
QString TunerHostInfo::friendlyName() const { return m_friendlyName; }

void TunerHostInfo::setFriendlyName(QString newFriendlyName) {
	m_friendlyName = newFriendlyName;
}
bool TunerHostInfo::friendlyNameNull() const {
	return m_friendlyName.isNull();
}

void TunerHostInfo::setFriendlyNameNull() {
	m_friendlyName.clear();

}
bool TunerHostInfo::importFavoritesOnly() const { return m_importFavoritesOnly; }

void TunerHostInfo::setImportFavoritesOnly(bool newImportFavoritesOnly) {
	m_importFavoritesOnly = newImportFavoritesOnly;
}

bool TunerHostInfo::allowHWTranscoding() const { return m_allowHWTranscoding; }

void TunerHostInfo::setAllowHWTranscoding(bool newAllowHWTranscoding) {
	m_allowHWTranscoding = newAllowHWTranscoding;
}

bool TunerHostInfo::enableStreamLooping() const { return m_enableStreamLooping; }

void TunerHostInfo::setEnableStreamLooping(bool newEnableStreamLooping) {
	m_enableStreamLooping = newEnableStreamLooping;
}

QString TunerHostInfo::source() const { return m_source; }

void TunerHostInfo::setSource(QString newSource) {
	m_source = newSource;
}
bool TunerHostInfo::sourceNull() const {
	return m_source.isNull();
}

void TunerHostInfo::setSourceNull() {
	m_source.clear();

}
qint32 TunerHostInfo::tunerCount() const { return m_tunerCount; }

void TunerHostInfo::setTunerCount(qint32 newTunerCount) {
	m_tunerCount = newTunerCount;
}

QString TunerHostInfo::userAgent() const { return m_userAgent; }

void TunerHostInfo::setUserAgent(QString newUserAgent) {
	m_userAgent = newUserAgent;
}
bool TunerHostInfo::userAgentNull() const {
	return m_userAgent.isNull();
}

void TunerHostInfo::setUserAgentNull() {
	m_userAgent.clear();

}

} // NS DTO

namespace Support {

using TunerHostInfo = Jellyfin::DTO::TunerHostInfo;

template <>
TunerHostInfo fromJsonValue<TunerHostInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return TunerHostInfo::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
