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
#include <QObject>
#include <QString>

#include "JellyfinQt/DTO/scrolldirection.h"
#include "JellyfinQt/DTO/sortorder.h"

namespace Jellyfin {
namespace DTO {

class DisplayPreferencesDto : public QObject {
	Q_OBJECT
public:
	explicit DisplayPreferencesDto(QObject *parent = nullptr);
	static DisplayPreferencesDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the user id.
	 */
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	/**
	 * @brief Gets or sets the type of the view.
	 */
	Q_PROPERTY(QString viewType READ viewType WRITE setViewType NOTIFY viewTypeChanged)
	/**
	 * @brief Gets or sets the sort by.
	 */
	Q_PROPERTY(QString sortBy READ sortBy WRITE setSortBy NOTIFY sortByChanged)
	/**
	 * @brief Gets or sets the index by.
	 */
	Q_PROPERTY(QString indexBy READ indexBy WRITE setIndexBy NOTIFY indexByChanged)
	/**
	 * @brief Gets or sets a value indicating whether [remember indexing].
	 */
	Q_PROPERTY(bool rememberIndexing READ rememberIndexing WRITE setRememberIndexing NOTIFY rememberIndexingChanged)
	/**
	 * @brief Gets or sets the height of the primary image.
	 */
	Q_PROPERTY(qint32 primaryImageHeight READ primaryImageHeight WRITE setPrimaryImageHeight NOTIFY primaryImageHeightChanged)
	/**
	 * @brief Gets or sets the width of the primary image.
	 */
	Q_PROPERTY(qint32 primaryImageWidth READ primaryImageWidth WRITE setPrimaryImageWidth NOTIFY primaryImageWidthChanged)
	/**
	 * @brief Gets or sets the custom prefs.
	 */
	Q_PROPERTY(QJsonObject customPrefs READ customPrefs WRITE setCustomPrefs NOTIFY customPrefsChanged)
	Q_PROPERTY(ScrollDirection scrollDirection READ scrollDirection WRITE setScrollDirection NOTIFY scrollDirectionChanged)
	/**
	 * @brief Gets or sets a value indicating whether to show backdrops on this item.
	 */
	Q_PROPERTY(bool showBackdrop READ showBackdrop WRITE setShowBackdrop NOTIFY showBackdropChanged)
	/**
	 * @brief Gets or sets a value indicating whether [remember sorting].
	 */
	Q_PROPERTY(bool rememberSorting READ rememberSorting WRITE setRememberSorting NOTIFY rememberSortingChanged)
	Q_PROPERTY(SortOrder sortOrder READ sortOrder WRITE setSortOrder NOTIFY sortOrderChanged)
	/**
	 * @brief Gets or sets a value indicating whether [show sidebar].
	 */
	Q_PROPERTY(bool showSidebar READ showSidebar WRITE setShowSidebar NOTIFY showSidebarChanged)
	/**
	 * @brief Gets or sets the client.
	 */
	Q_PROPERTY(QString client READ client WRITE setClient NOTIFY clientChanged)

	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	QString viewType() const;
	void setViewType(QString newViewType);
	
	QString sortBy() const;
	void setSortBy(QString newSortBy);
	
	QString indexBy() const;
	void setIndexBy(QString newIndexBy);
	
	bool rememberIndexing() const;
	void setRememberIndexing(bool newRememberIndexing);
	
	qint32 primaryImageHeight() const;
	void setPrimaryImageHeight(qint32 newPrimaryImageHeight);
	
	qint32 primaryImageWidth() const;
	void setPrimaryImageWidth(qint32 newPrimaryImageWidth);
	
	QJsonObject customPrefs() const;
	void setCustomPrefs(QJsonObject newCustomPrefs);
	
	ScrollDirection scrollDirection() const;
	void setScrollDirection(ScrollDirection newScrollDirection);
	
	bool showBackdrop() const;
	void setShowBackdrop(bool newShowBackdrop);
	
	bool rememberSorting() const;
	void setRememberSorting(bool newRememberSorting);
	
	SortOrder sortOrder() const;
	void setSortOrder(SortOrder newSortOrder);
	
	bool showSidebar() const;
	void setShowSidebar(bool newShowSidebar);
	
	QString client() const;
	void setClient(QString newClient);
	
signals:
	void jellyfinIdChanged(QString newJellyfinId);
	void viewTypeChanged(QString newViewType);
	void sortByChanged(QString newSortBy);
	void indexByChanged(QString newIndexBy);
	void rememberIndexingChanged(bool newRememberIndexing);
	void primaryImageHeightChanged(qint32 newPrimaryImageHeight);
	void primaryImageWidthChanged(qint32 newPrimaryImageWidth);
	void customPrefsChanged(QJsonObject newCustomPrefs);
	void scrollDirectionChanged(ScrollDirection newScrollDirection);
	void showBackdropChanged(bool newShowBackdrop);
	void rememberSortingChanged(bool newRememberSorting);
	void sortOrderChanged(SortOrder newSortOrder);
	void showSidebarChanged(bool newShowSidebar);
	void clientChanged(QString newClient);
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
