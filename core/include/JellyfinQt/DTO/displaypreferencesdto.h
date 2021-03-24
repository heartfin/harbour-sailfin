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

#ifndef JELLYFIN_DTO_DISPLAYPREFERENCESDTO_H
#define JELLYFIN_DTO_DISPLAYPREFERENCESDTO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/DTO/scrolldirection.h"
#include "JellyfinQt/DTO/sortorder.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class DisplayPreferencesDto {
public:DisplayPreferencesDto();DisplayPreferencesDto(const DisplayPreferencesDto &other);
	
	static DisplayPreferencesDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the user id.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets or sets the user id.
	*/
	void setJellyfinId(QString newJellyfinId);
	/**
	 * @brief Gets or sets the type of the view.
	 */
	QString viewType() const;
	/**
	* @brief Gets or sets the type of the view.
	*/
	void setViewType(QString newViewType);
	/**
	 * @brief Gets or sets the sort by.
	 */
	QString sortBy() const;
	/**
	* @brief Gets or sets the sort by.
	*/
	void setSortBy(QString newSortBy);
	/**
	 * @brief Gets or sets the index by.
	 */
	QString indexBy() const;
	/**
	* @brief Gets or sets the index by.
	*/
	void setIndexBy(QString newIndexBy);
	/**
	 * @brief Gets or sets a value indicating whether [remember indexing].
	 */
	bool rememberIndexing() const;
	/**
	* @brief Gets or sets a value indicating whether [remember indexing].
	*/
	void setRememberIndexing(bool newRememberIndexing);
	/**
	 * @brief Gets or sets the height of the primary image.
	 */
	qint32 primaryImageHeight() const;
	/**
	* @brief Gets or sets the height of the primary image.
	*/
	void setPrimaryImageHeight(qint32 newPrimaryImageHeight);
	/**
	 * @brief Gets or sets the width of the primary image.
	 */
	qint32 primaryImageWidth() const;
	/**
	* @brief Gets or sets the width of the primary image.
	*/
	void setPrimaryImageWidth(qint32 newPrimaryImageWidth);
	/**
	 * @brief Gets or sets the custom prefs.
	 */
	QJsonObject customPrefs() const;
	/**
	* @brief Gets or sets the custom prefs.
	*/
	void setCustomPrefs(QJsonObject newCustomPrefs);

	ScrollDirection scrollDirection() const;

	void setScrollDirection(ScrollDirection newScrollDirection);
	/**
	 * @brief Gets or sets a value indicating whether to show backdrops on this item.
	 */
	bool showBackdrop() const;
	/**
	* @brief Gets or sets a value indicating whether to show backdrops on this item.
	*/
	void setShowBackdrop(bool newShowBackdrop);
	/**
	 * @brief Gets or sets a value indicating whether [remember sorting].
	 */
	bool rememberSorting() const;
	/**
	* @brief Gets or sets a value indicating whether [remember sorting].
	*/
	void setRememberSorting(bool newRememberSorting);

	SortOrder sortOrder() const;

	void setSortOrder(SortOrder newSortOrder);
	/**
	 * @brief Gets or sets a value indicating whether [show sidebar].
	 */
	bool showSidebar() const;
	/**
	* @brief Gets or sets a value indicating whether [show sidebar].
	*/
	void setShowSidebar(bool newShowSidebar);
	/**
	 * @brief Gets or sets the client.
	 */
	QString client() const;
	/**
	* @brief Gets or sets the client.
	*/
	void setClient(QString newClient);

protected:
	QString m_jellyfinId;
	QString m_viewType;
	QString m_sortBy;
	QString m_indexBy;
	bool m_rememberIndexing;
	qint32 m_primaryImageHeight;
	qint32 m_primaryImageWidth;
	QJsonObject m_customPrefs;
	ScrollDirection m_scrollDirection;
	bool m_showBackdrop;
	bool m_rememberSorting;
	SortOrder m_sortOrder;
	bool m_showSidebar;
	QString m_client;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_DISPLAYPREFERENCESDTO_H
