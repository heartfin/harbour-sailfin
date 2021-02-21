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

#ifndef JELLYFIN_DTO_BOOKINFOREMOTESEARCHQUERY_H
#define JELLYFIN_DTO_BOOKINFOREMOTESEARCHQUERY_H

#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class BookInfo;

class BookInfoRemoteSearchQuery : public QObject {
	Q_OBJECT
public:
	explicit BookInfoRemoteSearchQuery(QObject *parent = nullptr);
	static BookInfoRemoteSearchQuery *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(BookInfo * searchInfo READ searchInfo WRITE setSearchInfo NOTIFY searchInfoChanged)
	Q_PROPERTY(QString itemId READ itemId WRITE setItemId NOTIFY itemIdChanged)
	/**
	 * @brief Will only search within the given provider when set.
	 */
	Q_PROPERTY(QString searchProviderName READ searchProviderName WRITE setSearchProviderName NOTIFY searchProviderNameChanged)
	/**
	 * @brief Gets or sets a value indicating whether disabled providers should be included.
	 */
	Q_PROPERTY(bool includeDisabledProviders READ includeDisabledProviders WRITE setIncludeDisabledProviders NOTIFY includeDisabledProvidersChanged)

	BookInfo * searchInfo() const;
	void setSearchInfo(BookInfo * newSearchInfo);
	
	QString itemId() const;
	void setItemId(QString newItemId);
	
	QString searchProviderName() const;
	void setSearchProviderName(QString newSearchProviderName);
	
	bool includeDisabledProviders() const;
	void setIncludeDisabledProviders(bool newIncludeDisabledProviders);
	
signals:
	void searchInfoChanged(BookInfo * newSearchInfo);
	void itemIdChanged(QString newItemId);
	void searchProviderNameChanged(QString newSearchProviderName);
	void includeDisabledProvidersChanged(bool newIncludeDisabledProviders);
protected:
	BookInfo * m_searchInfo = nullptr;
	QString m_itemId;
	QString m_searchProviderName;
	bool m_includeDisabledProviders;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_BOOKINFOREMOTESEARCHQUERY_H
