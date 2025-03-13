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

#include <JellyfinQt/dto/channelfeatures.h>

namespace Jellyfin {
namespace DTO {

ChannelFeatures::ChannelFeatures() {}
ChannelFeatures::ChannelFeatures (
		QString name, 
		QString jellyfinId, 
		bool canSearch, 
		QList<ChannelMediaType> mediaTypes, 
		QList<ChannelMediaContentType> contentTypes, 
		QList<ChannelItemSortField> defaultSortFields, 
		bool supportsSortOrderToggle, 
		bool supportsLatestMedia, 
		bool canFilter, 
		bool supportsContentDownloading 
		) :
	m_name(name),
	m_jellyfinId(jellyfinId),
	m_canSearch(canSearch),
	m_mediaTypes(mediaTypes),
	m_contentTypes(contentTypes),
	m_defaultSortFields(defaultSortFields),
	m_supportsSortOrderToggle(supportsSortOrderToggle),
	m_supportsLatestMedia(supportsLatestMedia),
	m_canFilter(canFilter),
	m_supportsContentDownloading(supportsContentDownloading) { }



ChannelFeatures::ChannelFeatures(const ChannelFeatures &other) :

	m_name(other.m_name),
	m_jellyfinId(other.m_jellyfinId),
	m_canSearch(other.m_canSearch),
	m_mediaTypes(other.m_mediaTypes),
	m_contentTypes(other.m_contentTypes),
	m_maxPageSize(other.m_maxPageSize),
	m_autoRefreshLevels(other.m_autoRefreshLevels),
	m_defaultSortFields(other.m_defaultSortFields),
	m_supportsSortOrderToggle(other.m_supportsSortOrderToggle),
	m_supportsLatestMedia(other.m_supportsLatestMedia),
	m_canFilter(other.m_canFilter),
	m_supportsContentDownloading(other.m_supportsContentDownloading){}


void ChannelFeatures::replaceData(ChannelFeatures &other) {
	m_name = other.m_name;
	m_jellyfinId = other.m_jellyfinId;
	m_canSearch = other.m_canSearch;
	m_mediaTypes = other.m_mediaTypes;
	m_contentTypes = other.m_contentTypes;
	m_maxPageSize = other.m_maxPageSize;
	m_autoRefreshLevels = other.m_autoRefreshLevels;
	m_defaultSortFields = other.m_defaultSortFields;
	m_supportsSortOrderToggle = other.m_supportsSortOrderToggle;
	m_supportsLatestMedia = other.m_supportsLatestMedia;
	m_canFilter = other.m_canFilter;
	m_supportsContentDownloading = other.m_supportsContentDownloading;
}

ChannelFeatures ChannelFeatures::fromJson(QJsonObject source) {
	ChannelFeatures instance;
	instance.setFromJson(source);
	return instance;
}


void ChannelFeatures::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_canSearch = Jellyfin::Support::fromJsonValue<bool>(source["CanSearch"]);
	m_mediaTypes = Jellyfin::Support::fromJsonValue<QList<ChannelMediaType>>(source["MediaTypes"]);
	m_contentTypes = Jellyfin::Support::fromJsonValue<QList<ChannelMediaContentType>>(source["ContentTypes"]);
	m_maxPageSize = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["MaxPageSize"]);
	m_autoRefreshLevels = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["AutoRefreshLevels"]);
	m_defaultSortFields = Jellyfin::Support::fromJsonValue<QList<ChannelItemSortField>>(source["DefaultSortFields"]);
	m_supportsSortOrderToggle = Jellyfin::Support::fromJsonValue<bool>(source["SupportsSortOrderToggle"]);
	m_supportsLatestMedia = Jellyfin::Support::fromJsonValue<bool>(source["SupportsLatestMedia"]);
	m_canFilter = Jellyfin::Support::fromJsonValue<bool>(source["CanFilter"]);
	m_supportsContentDownloading = Jellyfin::Support::fromJsonValue<bool>(source["SupportsContentDownloading"]);

}
	
QJsonObject ChannelFeatures::toJson() const {
	QJsonObject result;
	
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);		
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);		
	result["CanSearch"] = Jellyfin::Support::toJsonValue<bool>(m_canSearch);		
	result["MediaTypes"] = Jellyfin::Support::toJsonValue<QList<ChannelMediaType>>(m_mediaTypes);		
	result["ContentTypes"] = Jellyfin::Support::toJsonValue<QList<ChannelMediaContentType>>(m_contentTypes);		
	
	if (!(!m_maxPageSize.has_value())) {
		result["MaxPageSize"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_maxPageSize);
	}
			
	
	if (!(!m_autoRefreshLevels.has_value())) {
		result["AutoRefreshLevels"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_autoRefreshLevels);
	}
			
	result["DefaultSortFields"] = Jellyfin::Support::toJsonValue<QList<ChannelItemSortField>>(m_defaultSortFields);		
	result["SupportsSortOrderToggle"] = Jellyfin::Support::toJsonValue<bool>(m_supportsSortOrderToggle);		
	result["SupportsLatestMedia"] = Jellyfin::Support::toJsonValue<bool>(m_supportsLatestMedia);		
	result["CanFilter"] = Jellyfin::Support::toJsonValue<bool>(m_canFilter);		
	result["SupportsContentDownloading"] = Jellyfin::Support::toJsonValue<bool>(m_supportsContentDownloading);	
	return result;
}

QString ChannelFeatures::name() const { return m_name; }

void ChannelFeatures::setName(QString newName) {
	m_name = newName;
}

QString ChannelFeatures::jellyfinId() const { return m_jellyfinId; }

void ChannelFeatures::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}

bool ChannelFeatures::canSearch() const { return m_canSearch; }

void ChannelFeatures::setCanSearch(bool newCanSearch) {
	m_canSearch = newCanSearch;
}

QList<ChannelMediaType> ChannelFeatures::mediaTypes() const { return m_mediaTypes; }

void ChannelFeatures::setMediaTypes(QList<ChannelMediaType> newMediaTypes) {
	m_mediaTypes = newMediaTypes;
}

QList<ChannelMediaContentType> ChannelFeatures::contentTypes() const { return m_contentTypes; }

void ChannelFeatures::setContentTypes(QList<ChannelMediaContentType> newContentTypes) {
	m_contentTypes = newContentTypes;
}

std::optional<qint32> ChannelFeatures::maxPageSize() const { return m_maxPageSize; }

void ChannelFeatures::setMaxPageSize(std::optional<qint32> newMaxPageSize) {
	m_maxPageSize = newMaxPageSize;
}
bool ChannelFeatures::maxPageSizeNull() const {
	return !m_maxPageSize.has_value();
}

void ChannelFeatures::setMaxPageSizeNull() {
	m_maxPageSize = std::nullopt;

}
std::optional<qint32> ChannelFeatures::autoRefreshLevels() const { return m_autoRefreshLevels; }

void ChannelFeatures::setAutoRefreshLevels(std::optional<qint32> newAutoRefreshLevels) {
	m_autoRefreshLevels = newAutoRefreshLevels;
}
bool ChannelFeatures::autoRefreshLevelsNull() const {
	return !m_autoRefreshLevels.has_value();
}

void ChannelFeatures::setAutoRefreshLevelsNull() {
	m_autoRefreshLevels = std::nullopt;

}
QList<ChannelItemSortField> ChannelFeatures::defaultSortFields() const { return m_defaultSortFields; }

void ChannelFeatures::setDefaultSortFields(QList<ChannelItemSortField> newDefaultSortFields) {
	m_defaultSortFields = newDefaultSortFields;
}

bool ChannelFeatures::supportsSortOrderToggle() const { return m_supportsSortOrderToggle; }

void ChannelFeatures::setSupportsSortOrderToggle(bool newSupportsSortOrderToggle) {
	m_supportsSortOrderToggle = newSupportsSortOrderToggle;
}

bool ChannelFeatures::supportsLatestMedia() const { return m_supportsLatestMedia; }

void ChannelFeatures::setSupportsLatestMedia(bool newSupportsLatestMedia) {
	m_supportsLatestMedia = newSupportsLatestMedia;
}

bool ChannelFeatures::canFilter() const { return m_canFilter; }

void ChannelFeatures::setCanFilter(bool newCanFilter) {
	m_canFilter = newCanFilter;
}

bool ChannelFeatures::supportsContentDownloading() const { return m_supportsContentDownloading; }

void ChannelFeatures::setSupportsContentDownloading(bool newSupportsContentDownloading) {
	m_supportsContentDownloading = newSupportsContentDownloading;
}


} // NS DTO

namespace Support {

using ChannelFeatures = Jellyfin::DTO::ChannelFeatures;

template <>
ChannelFeatures fromJsonValue(const QJsonValue &source, convertType<ChannelFeatures>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ChannelFeatures::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ChannelFeatures &source, convertType<ChannelFeatures>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
