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

#include <JellyfinQt/dto/metadataeditorinfo.h>

namespace Jellyfin {
namespace DTO {

MetadataEditorInfo::MetadataEditorInfo() {}
MetadataEditorInfo::MetadataEditorInfo (
		QList<ParentalRating> parentalRatingOptions, 
		QList<CountryInfo> countries, 
		QList<CultureDto> cultures, 
		QList<ExternalIdInfo> externalIdInfos, 
		CollectionType contentType, 
		QList<NameValuePair> contentTypeOptions 
		) :
	m_parentalRatingOptions(parentalRatingOptions),
	m_countries(countries),
	m_cultures(cultures),
	m_externalIdInfos(externalIdInfos),
	m_contentType(contentType),
	m_contentTypeOptions(contentTypeOptions) { }



MetadataEditorInfo::MetadataEditorInfo(const MetadataEditorInfo &other) :

	m_parentalRatingOptions(other.m_parentalRatingOptions),
	m_countries(other.m_countries),
	m_cultures(other.m_cultures),
	m_externalIdInfos(other.m_externalIdInfos),
	m_contentType(other.m_contentType),
	m_contentTypeOptions(other.m_contentTypeOptions){}


void MetadataEditorInfo::replaceData(MetadataEditorInfo &other) {
	m_parentalRatingOptions = other.m_parentalRatingOptions;
	m_countries = other.m_countries;
	m_cultures = other.m_cultures;
	m_externalIdInfos = other.m_externalIdInfos;
	m_contentType = other.m_contentType;
	m_contentTypeOptions = other.m_contentTypeOptions;
}

MetadataEditorInfo MetadataEditorInfo::fromJson(QJsonObject source) {
	MetadataEditorInfo instance;
	instance.setFromJson(source);
	return instance;
}


void MetadataEditorInfo::setFromJson(QJsonObject source) {
	m_parentalRatingOptions = Jellyfin::Support::fromJsonValue<QList<ParentalRating>>(source["ParentalRatingOptions"]);
	m_countries = Jellyfin::Support::fromJsonValue<QList<CountryInfo>>(source["Countries"]);
	m_cultures = Jellyfin::Support::fromJsonValue<QList<CultureDto>>(source["Cultures"]);
	m_externalIdInfos = Jellyfin::Support::fromJsonValue<QList<ExternalIdInfo>>(source["ExternalIdInfos"]);
	m_contentType = Jellyfin::Support::fromJsonValue<CollectionType>(source["ContentType"]);
	m_contentTypeOptions = Jellyfin::Support::fromJsonValue<QList<NameValuePair>>(source["ContentTypeOptions"]);

}
	
QJsonObject MetadataEditorInfo::toJson() const {
	QJsonObject result;
	
	result["ParentalRatingOptions"] = Jellyfin::Support::toJsonValue<QList<ParentalRating>>(m_parentalRatingOptions);		
	result["Countries"] = Jellyfin::Support::toJsonValue<QList<CountryInfo>>(m_countries);		
	result["Cultures"] = Jellyfin::Support::toJsonValue<QList<CultureDto>>(m_cultures);		
	result["ExternalIdInfos"] = Jellyfin::Support::toJsonValue<QList<ExternalIdInfo>>(m_externalIdInfos);		
	result["ContentType"] = Jellyfin::Support::toJsonValue<CollectionType>(m_contentType);		
	result["ContentTypeOptions"] = Jellyfin::Support::toJsonValue<QList<NameValuePair>>(m_contentTypeOptions);	
	return result;
}

QList<ParentalRating> MetadataEditorInfo::parentalRatingOptions() const { return m_parentalRatingOptions; }

void MetadataEditorInfo::setParentalRatingOptions(QList<ParentalRating> newParentalRatingOptions) {
	m_parentalRatingOptions = newParentalRatingOptions;
}

QList<CountryInfo> MetadataEditorInfo::countries() const { return m_countries; }

void MetadataEditorInfo::setCountries(QList<CountryInfo> newCountries) {
	m_countries = newCountries;
}

QList<CultureDto> MetadataEditorInfo::cultures() const { return m_cultures; }

void MetadataEditorInfo::setCultures(QList<CultureDto> newCultures) {
	m_cultures = newCultures;
}

QList<ExternalIdInfo> MetadataEditorInfo::externalIdInfos() const { return m_externalIdInfos; }

void MetadataEditorInfo::setExternalIdInfos(QList<ExternalIdInfo> newExternalIdInfos) {
	m_externalIdInfos = newExternalIdInfos;
}

CollectionType MetadataEditorInfo::contentType() const { return m_contentType; }

void MetadataEditorInfo::setContentType(CollectionType newContentType) {
	m_contentType = newContentType;
}

QList<NameValuePair> MetadataEditorInfo::contentTypeOptions() const { return m_contentTypeOptions; }

void MetadataEditorInfo::setContentTypeOptions(QList<NameValuePair> newContentTypeOptions) {
	m_contentTypeOptions = newContentTypeOptions;
}


} // NS DTO

namespace Support {

using MetadataEditorInfo = Jellyfin::DTO::MetadataEditorInfo;

template <>
MetadataEditorInfo fromJsonValue(const QJsonValue &source, convertType<MetadataEditorInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return MetadataEditorInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const MetadataEditorInfo &source, convertType<MetadataEditorInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
