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

#include <JellyfinQt/dto/displaypreferencesdto.h>

namespace Jellyfin {
namespace DTO {

DisplayPreferencesDto::DisplayPreferencesDto() {}

DisplayPreferencesDto::DisplayPreferencesDto(const DisplayPreferencesDto &other) :

	m_jellyfinId(other.m_jellyfinId),
	m_viewType(other.m_viewType),
	m_sortBy(other.m_sortBy),
	m_indexBy(other.m_indexBy),
	m_rememberIndexing(other.m_rememberIndexing),
	m_primaryImageHeight(other.m_primaryImageHeight),
	m_primaryImageWidth(other.m_primaryImageWidth),
	m_customPrefs(other.m_customPrefs),
	m_scrollDirection(other.m_scrollDirection),
	m_showBackdrop(other.m_showBackdrop),
	m_rememberSorting(other.m_rememberSorting),
	m_sortOrder(other.m_sortOrder),
	m_showSidebar(other.m_showSidebar),
	m_client(other.m_client){}


void DisplayPreferencesDto::replaceData(DisplayPreferencesDto &other) {
	m_jellyfinId = other.m_jellyfinId;
	m_viewType = other.m_viewType;
	m_sortBy = other.m_sortBy;
	m_indexBy = other.m_indexBy;
	m_rememberIndexing = other.m_rememberIndexing;
	m_primaryImageHeight = other.m_primaryImageHeight;
	m_primaryImageWidth = other.m_primaryImageWidth;
	m_customPrefs = other.m_customPrefs;
	m_scrollDirection = other.m_scrollDirection;
	m_showBackdrop = other.m_showBackdrop;
	m_rememberSorting = other.m_rememberSorting;
	m_sortOrder = other.m_sortOrder;
	m_showSidebar = other.m_showSidebar;
	m_client = other.m_client;
}

DisplayPreferencesDto DisplayPreferencesDto::fromJson(QJsonObject source) {
	DisplayPreferencesDto instance;
	instance.setFromJson(source);
	return instance;
}


void DisplayPreferencesDto::setFromJson(QJsonObject source) {
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_viewType = Jellyfin::Support::fromJsonValue<QString>(source["ViewType"]);
	m_sortBy = Jellyfin::Support::fromJsonValue<QString>(source["SortBy"]);
	m_indexBy = Jellyfin::Support::fromJsonValue<QString>(source["IndexBy"]);
	m_rememberIndexing = Jellyfin::Support::fromJsonValue<bool>(source["RememberIndexing"]);
	m_primaryImageHeight = Jellyfin::Support::fromJsonValue<qint32>(source["PrimaryImageHeight"]);
	m_primaryImageWidth = Jellyfin::Support::fromJsonValue<qint32>(source["PrimaryImageWidth"]);
	m_customPrefs = Jellyfin::Support::fromJsonValue<std::optional<QJsonObject>>(source["CustomPrefs"]);
	m_scrollDirection = Jellyfin::Support::fromJsonValue<ScrollDirection>(source["ScrollDirection"]);
	m_showBackdrop = Jellyfin::Support::fromJsonValue<bool>(source["ShowBackdrop"]);
	m_rememberSorting = Jellyfin::Support::fromJsonValue<bool>(source["RememberSorting"]);
	m_sortOrder = Jellyfin::Support::fromJsonValue<SortOrder>(source["SortOrder"]);
	m_showSidebar = Jellyfin::Support::fromJsonValue<bool>(source["ShowSidebar"]);
	m_client = Jellyfin::Support::fromJsonValue<QString>(source["Client"]);

}
	
QJsonObject DisplayPreferencesDto::toJson() {
	QJsonObject result;
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	result["ViewType"] = Jellyfin::Support::toJsonValue<QString>(m_viewType);
	result["SortBy"] = Jellyfin::Support::toJsonValue<QString>(m_sortBy);
	result["IndexBy"] = Jellyfin::Support::toJsonValue<QString>(m_indexBy);
	result["RememberIndexing"] = Jellyfin::Support::toJsonValue<bool>(m_rememberIndexing);
	result["PrimaryImageHeight"] = Jellyfin::Support::toJsonValue<qint32>(m_primaryImageHeight);
	result["PrimaryImageWidth"] = Jellyfin::Support::toJsonValue<qint32>(m_primaryImageWidth);
	result["CustomPrefs"] = Jellyfin::Support::toJsonValue<std::optional<QJsonObject>>(m_customPrefs);
	result["ScrollDirection"] = Jellyfin::Support::toJsonValue<ScrollDirection>(m_scrollDirection);
	result["ShowBackdrop"] = Jellyfin::Support::toJsonValue<bool>(m_showBackdrop);
	result["RememberSorting"] = Jellyfin::Support::toJsonValue<bool>(m_rememberSorting);
	result["SortOrder"] = Jellyfin::Support::toJsonValue<SortOrder>(m_sortOrder);
	result["ShowSidebar"] = Jellyfin::Support::toJsonValue<bool>(m_showSidebar);
	result["Client"] = Jellyfin::Support::toJsonValue<QString>(m_client);

	return result;
}

QString DisplayPreferencesDto::jellyfinId() const { return m_jellyfinId; }

void DisplayPreferencesDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool DisplayPreferencesDto::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void DisplayPreferencesDto::setJellyfinIdNull() {
	m_jellyfinId.clear();

}
QString DisplayPreferencesDto::viewType() const { return m_viewType; }

void DisplayPreferencesDto::setViewType(QString newViewType) {
	m_viewType = newViewType;
}
bool DisplayPreferencesDto::viewTypeNull() const {
	return m_viewType.isNull();
}

void DisplayPreferencesDto::setViewTypeNull() {
	m_viewType.clear();

}
QString DisplayPreferencesDto::sortBy() const { return m_sortBy; }

void DisplayPreferencesDto::setSortBy(QString newSortBy) {
	m_sortBy = newSortBy;
}
bool DisplayPreferencesDto::sortByNull() const {
	return m_sortBy.isNull();
}

void DisplayPreferencesDto::setSortByNull() {
	m_sortBy.clear();

}
QString DisplayPreferencesDto::indexBy() const { return m_indexBy; }

void DisplayPreferencesDto::setIndexBy(QString newIndexBy) {
	m_indexBy = newIndexBy;
}
bool DisplayPreferencesDto::indexByNull() const {
	return m_indexBy.isNull();
}

void DisplayPreferencesDto::setIndexByNull() {
	m_indexBy.clear();

}
bool DisplayPreferencesDto::rememberIndexing() const { return m_rememberIndexing; }

void DisplayPreferencesDto::setRememberIndexing(bool newRememberIndexing) {
	m_rememberIndexing = newRememberIndexing;
}

qint32 DisplayPreferencesDto::primaryImageHeight() const { return m_primaryImageHeight; }

void DisplayPreferencesDto::setPrimaryImageHeight(qint32 newPrimaryImageHeight) {
	m_primaryImageHeight = newPrimaryImageHeight;
}

qint32 DisplayPreferencesDto::primaryImageWidth() const { return m_primaryImageWidth; }

void DisplayPreferencesDto::setPrimaryImageWidth(qint32 newPrimaryImageWidth) {
	m_primaryImageWidth = newPrimaryImageWidth;
}

std::optional<QJsonObject> DisplayPreferencesDto::customPrefs() const { return m_customPrefs; }

void DisplayPreferencesDto::setCustomPrefs(std::optional<QJsonObject> newCustomPrefs) {
	m_customPrefs = newCustomPrefs;
}
bool DisplayPreferencesDto::customPrefsNull() const {
	return !m_customPrefs.has_value();
}

void DisplayPreferencesDto::setCustomPrefsNull() {
	m_customPrefs = std::nullopt;

}
ScrollDirection DisplayPreferencesDto::scrollDirection() const { return m_scrollDirection; }

void DisplayPreferencesDto::setScrollDirection(ScrollDirection newScrollDirection) {
	m_scrollDirection = newScrollDirection;
}

bool DisplayPreferencesDto::showBackdrop() const { return m_showBackdrop; }

void DisplayPreferencesDto::setShowBackdrop(bool newShowBackdrop) {
	m_showBackdrop = newShowBackdrop;
}

bool DisplayPreferencesDto::rememberSorting() const { return m_rememberSorting; }

void DisplayPreferencesDto::setRememberSorting(bool newRememberSorting) {
	m_rememberSorting = newRememberSorting;
}

SortOrder DisplayPreferencesDto::sortOrder() const { return m_sortOrder; }

void DisplayPreferencesDto::setSortOrder(SortOrder newSortOrder) {
	m_sortOrder = newSortOrder;
}

bool DisplayPreferencesDto::showSidebar() const { return m_showSidebar; }

void DisplayPreferencesDto::setShowSidebar(bool newShowSidebar) {
	m_showSidebar = newShowSidebar;
}

QString DisplayPreferencesDto::client() const { return m_client; }

void DisplayPreferencesDto::setClient(QString newClient) {
	m_client = newClient;
}
bool DisplayPreferencesDto::clientNull() const {
	return m_client.isNull();
}

void DisplayPreferencesDto::setClientNull() {
	m_client.clear();

}

} // NS DTO

namespace Support {

using DisplayPreferencesDto = Jellyfin::DTO::DisplayPreferencesDto;

template <>
DisplayPreferencesDto fromJsonValue<DisplayPreferencesDto>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return DisplayPreferencesDto::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin
