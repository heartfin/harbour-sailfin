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

#include <JellyfinQt/DTO/displaypreferencesdto.h>

#include <JellyfinQt/DTO/scrolldirection.h>
#include <JellyfinQt/DTO/sortorder.h>

namespace Jellyfin {
namespace DTO {

DisplayPreferencesDto::DisplayPreferencesDto(QObject *parent) : QObject(parent) {}

DisplayPreferencesDto *DisplayPreferencesDto::fromJSON(QJsonObject source, QObject *parent) {
	DisplayPreferencesDto *instance = new DisplayPreferencesDto(parent);
	instance->updateFromJSON(source);
	return instance;
}

void DisplayPreferencesDto::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject DisplayPreferencesDto::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString DisplayPreferencesDto::jellyfinId() const { return m_jellyfinId; }
void DisplayPreferencesDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

QString DisplayPreferencesDto::viewType() const { return m_viewType; }
void DisplayPreferencesDto::setViewType(QString newViewType) {
	m_viewType = newViewType;
	emit viewTypeChanged(newViewType);
}

QString DisplayPreferencesDto::sortBy() const { return m_sortBy; }
void DisplayPreferencesDto::setSortBy(QString newSortBy) {
	m_sortBy = newSortBy;
	emit sortByChanged(newSortBy);
}

QString DisplayPreferencesDto::indexBy() const { return m_indexBy; }
void DisplayPreferencesDto::setIndexBy(QString newIndexBy) {
	m_indexBy = newIndexBy;
	emit indexByChanged(newIndexBy);
}

bool DisplayPreferencesDto::rememberIndexing() const { return m_rememberIndexing; }
void DisplayPreferencesDto::setRememberIndexing(bool newRememberIndexing) {
	m_rememberIndexing = newRememberIndexing;
	emit rememberIndexingChanged(newRememberIndexing);
}

qint32 DisplayPreferencesDto::primaryImageHeight() const { return m_primaryImageHeight; }
void DisplayPreferencesDto::setPrimaryImageHeight(qint32 newPrimaryImageHeight) {
	m_primaryImageHeight = newPrimaryImageHeight;
	emit primaryImageHeightChanged(newPrimaryImageHeight);
}

qint32 DisplayPreferencesDto::primaryImageWidth() const { return m_primaryImageWidth; }
void DisplayPreferencesDto::setPrimaryImageWidth(qint32 newPrimaryImageWidth) {
	m_primaryImageWidth = newPrimaryImageWidth;
	emit primaryImageWidthChanged(newPrimaryImageWidth);
}

QJsonObject DisplayPreferencesDto::customPrefs() const { return m_customPrefs; }
void DisplayPreferencesDto::setCustomPrefs(QJsonObject newCustomPrefs) {
	m_customPrefs = newCustomPrefs;
	emit customPrefsChanged(newCustomPrefs);
}

ScrollDirection DisplayPreferencesDto::scrollDirection() const { return m_scrollDirection; }
void DisplayPreferencesDto::setScrollDirection(ScrollDirection newScrollDirection) {
	m_scrollDirection = newScrollDirection;
	emit scrollDirectionChanged(newScrollDirection);
}

bool DisplayPreferencesDto::showBackdrop() const { return m_showBackdrop; }
void DisplayPreferencesDto::setShowBackdrop(bool newShowBackdrop) {
	m_showBackdrop = newShowBackdrop;
	emit showBackdropChanged(newShowBackdrop);
}

bool DisplayPreferencesDto::rememberSorting() const { return m_rememberSorting; }
void DisplayPreferencesDto::setRememberSorting(bool newRememberSorting) {
	m_rememberSorting = newRememberSorting;
	emit rememberSortingChanged(newRememberSorting);
}

SortOrder DisplayPreferencesDto::sortOrder() const { return m_sortOrder; }
void DisplayPreferencesDto::setSortOrder(SortOrder newSortOrder) {
	m_sortOrder = newSortOrder;
	emit sortOrderChanged(newSortOrder);
}

bool DisplayPreferencesDto::showSidebar() const { return m_showSidebar; }
void DisplayPreferencesDto::setShowSidebar(bool newShowSidebar) {
	m_showSidebar = newShowSidebar;
	emit showSidebarChanged(newShowSidebar);
}

QString DisplayPreferencesDto::client() const { return m_client; }
void DisplayPreferencesDto::setClient(QString newClient) {
	m_client = newClient;
	emit clientChanged(newClient);
}


} // NS Jellyfin
} // NS DTO
