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
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/countryinfo.h"
#include "JellyfinQt/dto/culturedto.h"
#include "JellyfinQt/dto/externalidinfo.h"
#include "JellyfinQt/dto/namevaluepair.h"
#include "JellyfinQt/dto/parentalrating.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class MetadataEditorInfo {
public:	MetadataEditorInfo();
	MetadataEditorInfo(const MetadataEditorInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(MetadataEditorInfo &other);
	
	static MetadataEditorInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	QList<ParentalRating> parentalRatingOptions() const;

	void setParentalRatingOptions(QList<ParentalRating> newParentalRatingOptions);
	bool parentalRatingOptionsNull() const;
	void setParentalRatingOptionsNull();


	QList<CountryInfo> countries() const;

	void setCountries(QList<CountryInfo> newCountries);
	bool countriesNull() const;
	void setCountriesNull();


	QList<CultureDto> cultures() const;

	void setCultures(QList<CultureDto> newCultures);
	bool culturesNull() const;
	void setCulturesNull();


	QList<ExternalIdInfo> externalIdInfos() const;

	void setExternalIdInfos(QList<ExternalIdInfo> newExternalIdInfos);
	bool externalIdInfosNull() const;
	void setExternalIdInfosNull();


	QString contentType() const;

	void setContentType(QString newContentType);
	bool contentTypeNull() const;
	void setContentTypeNull();


	QList<NameValuePair> contentTypeOptions() const;

	void setContentTypeOptions(QList<NameValuePair> newContentTypeOptions);
	bool contentTypeOptionsNull() const;
	void setContentTypeOptionsNull();


protected:
	QList<ParentalRating> m_parentalRatingOptions;
	QList<CountryInfo> m_countries;
	QList<CultureDto> m_cultures;
	QList<ExternalIdInfo> m_externalIdInfos;
	QString m_contentType;
	QList<NameValuePair> m_contentTypeOptions;


};


} // NS DTO

namespace Support {

using MetadataEditorInfo = Jellyfin::DTO::MetadataEditorInfo;

template <>
MetadataEditorInfo fromJsonValue(const QJsonValue &source, convertType<MetadataEditorInfo>);

template<>
QJsonValue toJsonValue(const MetadataEditorInfo &source, convertType<MetadataEditorInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_METADATAEDITORINFO_H
