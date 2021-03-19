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

#ifndef JELLYFIN_DTO_QUERYFILTERSLEGACY_H
#define JELLYFIN_DTO_QUERYFILTERSLEGACY_H

#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class QueryFiltersLegacy : public QObject {
	Q_OBJECT
public:
	explicit QueryFiltersLegacy(QObject *parent = nullptr);
	static QueryFiltersLegacy *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(QStringList genres READ genres WRITE setGenres NOTIFY genresChanged)
	Q_PROPERTY(QStringList tags READ tags WRITE setTags NOTIFY tagsChanged)
	Q_PROPERTY(QStringList officialRatings READ officialRatings WRITE setOfficialRatings NOTIFY officialRatingsChanged)
	Q_PROPERTY(QList<qint32> years READ years WRITE setYears NOTIFY yearsChanged)

	QStringList genres() const;
	void setGenres(QStringList newGenres);
	
	QStringList tags() const;
	void setTags(QStringList newTags);
	
	QStringList officialRatings() const;
	void setOfficialRatings(QStringList newOfficialRatings);
	
	QList<qint32> years() const;
	void setYears(QList<qint32> newYears);
	
signals:
	void genresChanged(QStringList newGenres);
	void tagsChanged(QStringList newTags);
	void officialRatingsChanged(QStringList newOfficialRatings);
	void yearsChanged(QList<qint32> newYears);
protected:
	QStringList m_genres;
	QStringList m_tags;
	QStringList m_officialRatings;
	QList<qint32> m_years;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_QUERYFILTERSLEGACY_H
