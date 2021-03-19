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

#include <JellyfinQt/DTO/tunerhostinfo.h>

namespace Jellyfin {
namespace DTO {

TunerHostInfo::TunerHostInfo(QObject *parent) : QObject(parent) {}

TunerHostInfo *TunerHostInfo::fromJSON(QJsonObject source, QObject *parent) {
	TunerHostInfo *instance = new TunerHostInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void TunerHostInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject TunerHostInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString TunerHostInfo::jellyfinId() const { return m_jellyfinId; }
void TunerHostInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

QString TunerHostInfo::url() const { return m_url; }
void TunerHostInfo::setUrl(QString newUrl) {
	m_url = newUrl;
	emit urlChanged(newUrl);
}

QString TunerHostInfo::type() const { return m_type; }
void TunerHostInfo::setType(QString newType) {
	m_type = newType;
	emit typeChanged(newType);
}

QString TunerHostInfo::deviceId() const { return m_deviceId; }
void TunerHostInfo::setDeviceId(QString newDeviceId) {
	m_deviceId = newDeviceId;
	emit deviceIdChanged(newDeviceId);
}

QString TunerHostInfo::friendlyName() const { return m_friendlyName; }
void TunerHostInfo::setFriendlyName(QString newFriendlyName) {
	m_friendlyName = newFriendlyName;
	emit friendlyNameChanged(newFriendlyName);
}

bool TunerHostInfo::importFavoritesOnly() const { return m_importFavoritesOnly; }
void TunerHostInfo::setImportFavoritesOnly(bool newImportFavoritesOnly) {
	m_importFavoritesOnly = newImportFavoritesOnly;
	emit importFavoritesOnlyChanged(newImportFavoritesOnly);
}

bool TunerHostInfo::allowHWTranscoding() const { return m_allowHWTranscoding; }
void TunerHostInfo::setAllowHWTranscoding(bool newAllowHWTranscoding) {
	m_allowHWTranscoding = newAllowHWTranscoding;
	emit allowHWTranscodingChanged(newAllowHWTranscoding);
}

bool TunerHostInfo::enableStreamLooping() const { return m_enableStreamLooping; }
void TunerHostInfo::setEnableStreamLooping(bool newEnableStreamLooping) {
	m_enableStreamLooping = newEnableStreamLooping;
	emit enableStreamLoopingChanged(newEnableStreamLooping);
}

QString TunerHostInfo::source() const { return m_source; }
void TunerHostInfo::setSource(QString newSource) {
	m_source = newSource;
	emit sourceChanged(newSource);
}

qint32 TunerHostInfo::tunerCount() const { return m_tunerCount; }
void TunerHostInfo::setTunerCount(qint32 newTunerCount) {
	m_tunerCount = newTunerCount;
	emit tunerCountChanged(newTunerCount);
}

QString TunerHostInfo::userAgent() const { return m_userAgent; }
void TunerHostInfo::setUserAgent(QString newUserAgent) {
	m_userAgent = newUserAgent;
	emit userAgentChanged(newUserAgent);
}


} // NS Jellyfin
} // NS DTO
