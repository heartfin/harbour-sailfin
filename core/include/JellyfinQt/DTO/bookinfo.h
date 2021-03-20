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

#ifndef JELLYFIN_DTO_BOOKINFO_H
#define JELLYFIN_DTO_BOOKINFO_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class BookInfo {
public:
	explicit BookInfo();
	static BookInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);
	/**
	 * @brief Gets or sets the path.
	 */
	QString path() const;
	/**
	* @brief Gets or sets the path.
	*/
	void setPath(QString newPath);
	/**
	 * @brief Gets or sets the metadata language.
	 */
	QString metadataLanguage() const;
	/**
	* @brief Gets or sets the metadata language.
	*/
	void setMetadataLanguage(QString newMetadataLanguage);
	/**
	 * @brief Gets or sets the metadata country code.
	 */
	QString metadataCountryCode() const;
	/**
	* @brief Gets or sets the metadata country code.
	*/
	void setMetadataCountryCode(QString newMetadataCountryCode);
	/**
	 * @brief Gets or sets the provider ids.
	 */
	QJsonObject providerIds() const;
	/**
	* @brief Gets or sets the provider ids.
	*/
	void setProviderIds(QJsonObject newProviderIds);
	/**
	 * @brief Gets or sets the year.
	 */
	qint32 year() const;
	/**
	* @brief Gets or sets the year.
	*/
	void setYear(qint32 newYear);

	qint32 indexNumber() const;

	void setIndexNumber(qint32 newIndexNumber);

	qint32 parentIndexNumber() const;

	void setParentIndexNumber(qint32 newParentIndexNumber);

	QDateTime premiereDate() const;

	void setPremiereDate(QDateTime newPremiereDate);

	bool isAutomated() const;

	void setIsAutomated(bool newIsAutomated);

	QString seriesName() const;

	void setSeriesName(QString newSeriesName);

protected:
	QString m_name;
	QString m_path;
	QString m_metadataLanguage;
	QString m_metadataCountryCode;
	QJsonObject m_providerIds;
	qint32 m_year;
	qint32 m_indexNumber;
	qint32 m_parentIndexNumber;
	QDateTime m_premiereDate;
	bool m_isAutomated;
	QString m_seriesName;
};

} // NS DTO

namespace Support {

using BookInfo = Jellyfin::DTO::BookInfo;

template <>
BookInfo fromJsonValue<BookInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return BookInfo::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_BOOKINFO_H
