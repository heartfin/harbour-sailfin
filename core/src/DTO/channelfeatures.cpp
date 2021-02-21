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

#include <JellyfinQt/DTO/channelfeatures.h>

#include <JellyfinQt/DTO/channelitemsortfield.h>
#include <JellyfinQt/DTO/channelmediacontenttype.h>
#include <JellyfinQt/DTO/channelmediatype.h>

namespace Jellyfin {
namespace DTO {

ChannelFeatures::ChannelFeatures(QObject *parent) : QObject(parent) {}

ChannelFeatures *ChannelFeatures::fromJSON(QJsonObject source, QObject *parent) {
	ChannelFeatures *instance = new ChannelFeatures(parent);
	instance->updateFromJSON(source);
	return instance;
}

void ChannelFeatures::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject ChannelFeatures::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString ChannelFeatures::name() const { return m_name; }
void ChannelFeatures::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString ChannelFeatures::jellyfinId() const { return m_jellyfinId; }
void ChannelFeatures::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

bool ChannelFeatures::canSearch() const { return m_canSearch; }
void ChannelFeatures::setCanSearch(bool newCanSearch) {
	m_canSearch = newCanSearch;
	emit canSearchChanged(newCanSearch);
}

QList<ChannelMediaType> ChannelFeatures::mediaTypes() const { return m_mediaTypes; }
void ChannelFeatures::setMediaTypes(QList<ChannelMediaType> newMediaTypes) {
	m_mediaTypes = newMediaTypes;
	emit mediaTypesChanged(newMediaTypes);
}

QList<ChannelMediaContentType> ChannelFeatures::contentTypes() const { return m_contentTypes; }
void ChannelFeatures::setContentTypes(QList<ChannelMediaContentType> newContentTypes) {
	m_contentTypes = newContentTypes;
	emit contentTypesChanged(newContentTypes);
}

qint32 ChannelFeatures::maxPageSize() const { return m_maxPageSize; }
void ChannelFeatures::setMaxPageSize(qint32 newMaxPageSize) {
	m_maxPageSize = newMaxPageSize;
	emit maxPageSizeChanged(newMaxPageSize);
}

qint32 ChannelFeatures::autoRefreshLevels() const { return m_autoRefreshLevels; }
void ChannelFeatures::setAutoRefreshLevels(qint32 newAutoRefreshLevels) {
	m_autoRefreshLevels = newAutoRefreshLevels;
	emit autoRefreshLevelsChanged(newAutoRefreshLevels);
}

QList<ChannelItemSortField> ChannelFeatures::defaultSortFields() const { return m_defaultSortFields; }
void ChannelFeatures::setDefaultSortFields(QList<ChannelItemSortField> newDefaultSortFields) {
	m_defaultSortFields = newDefaultSortFields;
	emit defaultSortFieldsChanged(newDefaultSortFields);
}

bool ChannelFeatures::supportsSortOrderToggle() const { return m_supportsSortOrderToggle; }
void ChannelFeatures::setSupportsSortOrderToggle(bool newSupportsSortOrderToggle) {
	m_supportsSortOrderToggle = newSupportsSortOrderToggle;
	emit supportsSortOrderToggleChanged(newSupportsSortOrderToggle);
}

bool ChannelFeatures::supportsLatestMedia() const { return m_supportsLatestMedia; }
void ChannelFeatures::setSupportsLatestMedia(bool newSupportsLatestMedia) {
	m_supportsLatestMedia = newSupportsLatestMedia;
	emit supportsLatestMediaChanged(newSupportsLatestMedia);
}

bool ChannelFeatures::canFilter() const { return m_canFilter; }
void ChannelFeatures::setCanFilter(bool newCanFilter) {
	m_canFilter = newCanFilter;
	emit canFilterChanged(newCanFilter);
}

bool ChannelFeatures::supportsContentDownloading() const { return m_supportsContentDownloading; }
void ChannelFeatures::setSupportsContentDownloading(bool newSupportsContentDownloading) {
	m_supportsContentDownloading = newSupportsContentDownloading;
	emit supportsContentDownloadingChanged(newSupportsContentDownloading);
}


} // NS Jellyfin
} // NS DTO
