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

#ifndef JELLYFIN_DTO_METADATAEDITORINFO_H
#define JELLYFIN_DTO_METADATAEDITORINFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/DTO/countryinfo.h"
#include "JellyfinQt/DTO/culturedto.h"
#include "JellyfinQt/DTO/externalidinfo.h"
#include "JellyfinQt/DTO/namevaluepair.h"
#include "JellyfinQt/DTO/parentalrating.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class MetadataEditorInfo {
public:
	explicit MetadataEditorInfo();
	static MetadataEditorInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties

	QList<QSharedPointer<ParentalRating>> parentalRatingOptions() const;

	void setParentalRatingOptions(QList<QSharedPointer<ParentalRating>> newParentalRatingOptions);

	QList<QSharedPointer<CountryInfo>> countries() const;

	void setCountries(QList<QSharedPointer<CountryInfo>> newCountries);

	QList<QSharedPointer<CultureDto>> cultures() const;

	void setCultures(QList<QSharedPointer<CultureDto>> newCultures);

	QList<QSharedPointer<ExternalIdInfo>> externalIdInfos() const;

	void setExternalIdInfos(QList<QSharedPointer<ExternalIdInfo>> newExternalIdInfos);

	QString contentType() const;

	void setContentType(QString newContentType);

	QList<QSharedPointer<NameValuePair>> contentTypeOptions() const;

	void setContentTypeOptions(QList<QSharedPointer<NameValuePair>> newContentTypeOptions);

protected:
	QList<QSharedPointer<ParentalRating>> m_parentalRatingOptions;
	QList<QSharedPointer<CountryInfo>> m_countries;
	QList<QSharedPointer<CultureDto>> m_cultures;
	QList<QSharedPointer<ExternalIdInfo>> m_externalIdInfos;
	QString m_contentType;
	QList<QSharedPointer<NameValuePair>> m_contentTypeOptions;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_METADATAEDITORINFO_H
