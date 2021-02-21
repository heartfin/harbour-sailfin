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

#include <JellyfinQt/DTO/livetvserviceinfo.h>

#include <JellyfinQt/DTO/livetvservicestatus.h>

namespace Jellyfin {
namespace DTO {

LiveTvServiceInfo::LiveTvServiceInfo(QObject *parent) : QObject(parent) {}

LiveTvServiceInfo *LiveTvServiceInfo::fromJSON(QJsonObject source, QObject *parent) {
	LiveTvServiceInfo *instance = new LiveTvServiceInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void LiveTvServiceInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject LiveTvServiceInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString LiveTvServiceInfo::name() const { return m_name; }
void LiveTvServiceInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString LiveTvServiceInfo::homePageUrl() const { return m_homePageUrl; }
void LiveTvServiceInfo::setHomePageUrl(QString newHomePageUrl) {
	m_homePageUrl = newHomePageUrl;
	emit homePageUrlChanged(newHomePageUrl);
}

LiveTvServiceStatus LiveTvServiceInfo::status() const { return m_status; }
void LiveTvServiceInfo::setStatus(LiveTvServiceStatus newStatus) {
	m_status = newStatus;
	emit statusChanged(newStatus);
}

QString LiveTvServiceInfo::statusMessage() const { return m_statusMessage; }
void LiveTvServiceInfo::setStatusMessage(QString newStatusMessage) {
	m_statusMessage = newStatusMessage;
	emit statusMessageChanged(newStatusMessage);
}

QString LiveTvServiceInfo::version() const { return m_version; }
void LiveTvServiceInfo::setVersion(QString newVersion) {
	m_version = newVersion;
	emit versionChanged(newVersion);
}

bool LiveTvServiceInfo::hasUpdateAvailable() const { return m_hasUpdateAvailable; }
void LiveTvServiceInfo::setHasUpdateAvailable(bool newHasUpdateAvailable) {
	m_hasUpdateAvailable = newHasUpdateAvailable;
	emit hasUpdateAvailableChanged(newHasUpdateAvailable);
}

bool LiveTvServiceInfo::isVisible() const { return m_isVisible; }
void LiveTvServiceInfo::setIsVisible(bool newIsVisible) {
	m_isVisible = newIsVisible;
	emit isVisibleChanged(newIsVisible);
}

QStringList LiveTvServiceInfo::tuners() const { return m_tuners; }
void LiveTvServiceInfo::setTuners(QStringList newTuners) {
	m_tuners = newTuners;
	emit tunersChanged(newTuners);
}


} // NS Jellyfin
} // NS DTO
