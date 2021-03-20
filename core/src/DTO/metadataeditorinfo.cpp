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

#include <JellyfinQt/DTO/metadataeditorinfo.h>

namespace Jellyfin {
namespace DTO {

MetadataEditorInfo::MetadataEditorInfo(QObject *parent) {}

MetadataEditorInfo MetadataEditorInfo::fromJson(QJsonObject source) {MetadataEditorInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void MetadataEditorInfo::setFromJson(QJsonObject source) {
	m_parentalRatingOptions = fromJsonValue<QList<QSharedPointer<ParentalRating>>>(source["ParentalRatingOptions"]);
	m_countries = fromJsonValue<QList<QSharedPointer<CountryInfo>>>(source["Countries"]);
	m_cultures = fromJsonValue<QList<QSharedPointer<CultureDto>>>(source["Cultures"]);
	m_externalIdInfos = fromJsonValue<QList<QSharedPointer<ExternalIdInfo>>>(source["ExternalIdInfos"]);
	m_contentType = fromJsonValue<QString>(source["ContentType"]);
	m_contentTypeOptions = fromJsonValue<QList<QSharedPointer<NameValuePair>>>(source["ContentTypeOptions"]);

}
	
QJsonObject MetadataEditorInfo::toJson() {
	QJsonObject result;
	result["ParentalRatingOptions"] = toJsonValue<QList<QSharedPointer<ParentalRating>>>(m_parentalRatingOptions);
	result["Countries"] = toJsonValue<QList<QSharedPointer<CountryInfo>>>(m_countries);
	result["Cultures"] = toJsonValue<QList<QSharedPointer<CultureDto>>>(m_cultures);
	result["ExternalIdInfos"] = toJsonValue<QList<QSharedPointer<ExternalIdInfo>>>(m_externalIdInfos);
	result["ContentType"] = toJsonValue<QString>(m_contentType);
	result["ContentTypeOptions"] = toJsonValue<QList<QSharedPointer<NameValuePair>>>(m_contentTypeOptions);

	return result;
}

QList<QSharedPointer<ParentalRating>> MetadataEditorInfo::parentalRatingOptions() const { return m_parentalRatingOptions; }

void MetadataEditorInfo::setParentalRatingOptions(QList<QSharedPointer<ParentalRating>> newParentalRatingOptions) {
	m_parentalRatingOptions = newParentalRatingOptions;
}
QList<QSharedPointer<CountryInfo>> MetadataEditorInfo::countries() const { return m_countries; }

void MetadataEditorInfo::setCountries(QList<QSharedPointer<CountryInfo>> newCountries) {
	m_countries = newCountries;
}
QList<QSharedPointer<CultureDto>> MetadataEditorInfo::cultures() const { return m_cultures; }

void MetadataEditorInfo::setCultures(QList<QSharedPointer<CultureDto>> newCultures) {
	m_cultures = newCultures;
}
QList<QSharedPointer<ExternalIdInfo>> MetadataEditorInfo::externalIdInfos() const { return m_externalIdInfos; }

void MetadataEditorInfo::setExternalIdInfos(QList<QSharedPointer<ExternalIdInfo>> newExternalIdInfos) {
	m_externalIdInfos = newExternalIdInfos;
}
QString MetadataEditorInfo::contentType() const { return m_contentType; }

void MetadataEditorInfo::setContentType(QString newContentType) {
	m_contentType = newContentType;
}
QList<QSharedPointer<NameValuePair>> MetadataEditorInfo::contentTypeOptions() const { return m_contentTypeOptions; }

void MetadataEditorInfo::setContentTypeOptions(QList<QSharedPointer<NameValuePair>> newContentTypeOptions) {
	m_contentTypeOptions = newContentTypeOptions;
}


} // NS Jellyfin
} // NS DTO
