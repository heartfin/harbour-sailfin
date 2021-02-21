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

MetadataEditorInfo::MetadataEditorInfo(QObject *parent) : QObject(parent) {}

MetadataEditorInfo *MetadataEditorInfo::fromJSON(QJsonObject source, QObject *parent) {
	MetadataEditorInfo *instance = new MetadataEditorInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void MetadataEditorInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject MetadataEditorInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QList<ParentalRating *> MetadataEditorInfo::parentalRatingOptions() const { return m_parentalRatingOptions; }
void MetadataEditorInfo::setParentalRatingOptions(QList<ParentalRating *> newParentalRatingOptions) {
	m_parentalRatingOptions = newParentalRatingOptions;
	emit parentalRatingOptionsChanged(newParentalRatingOptions);
}

QList<CountryInfo *> MetadataEditorInfo::countries() const { return m_countries; }
void MetadataEditorInfo::setCountries(QList<CountryInfo *> newCountries) {
	m_countries = newCountries;
	emit countriesChanged(newCountries);
}

QList<CultureDto *> MetadataEditorInfo::cultures() const { return m_cultures; }
void MetadataEditorInfo::setCultures(QList<CultureDto *> newCultures) {
	m_cultures = newCultures;
	emit culturesChanged(newCultures);
}

QList<ExternalIdInfo *> MetadataEditorInfo::externalIdInfos() const { return m_externalIdInfos; }
void MetadataEditorInfo::setExternalIdInfos(QList<ExternalIdInfo *> newExternalIdInfos) {
	m_externalIdInfos = newExternalIdInfos;
	emit externalIdInfosChanged(newExternalIdInfos);
}

QString MetadataEditorInfo::contentType() const { return m_contentType; }
void MetadataEditorInfo::setContentType(QString newContentType) {
	m_contentType = newContentType;
	emit contentTypeChanged(newContentType);
}

QList<NameValuePair *> MetadataEditorInfo::contentTypeOptions() const { return m_contentTypeOptions; }
void MetadataEditorInfo::setContentTypeOptions(QList<NameValuePair *> newContentTypeOptions) {
	m_contentTypeOptions = newContentTypeOptions;
	emit contentTypeOptionsChanged(newContentTypeOptions);
}


} // NS Jellyfin
} // NS DTO
