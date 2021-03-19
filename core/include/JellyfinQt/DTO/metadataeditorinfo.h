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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class CountryInfo;
class CultureDto;
class ExternalIdInfo;
class NameValuePair;
class ParentalRating;

class MetadataEditorInfo : public QObject {
	Q_OBJECT
public:
	explicit MetadataEditorInfo(QObject *parent = nullptr);
	static MetadataEditorInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(QList<ParentalRating *> parentalRatingOptions READ parentalRatingOptions WRITE setParentalRatingOptions NOTIFY parentalRatingOptionsChanged)
	Q_PROPERTY(QList<CountryInfo *> countries READ countries WRITE setCountries NOTIFY countriesChanged)
	Q_PROPERTY(QList<CultureDto *> cultures READ cultures WRITE setCultures NOTIFY culturesChanged)
	Q_PROPERTY(QList<ExternalIdInfo *> externalIdInfos READ externalIdInfos WRITE setExternalIdInfos NOTIFY externalIdInfosChanged)
	Q_PROPERTY(QString contentType READ contentType WRITE setContentType NOTIFY contentTypeChanged)
	Q_PROPERTY(QList<NameValuePair *> contentTypeOptions READ contentTypeOptions WRITE setContentTypeOptions NOTIFY contentTypeOptionsChanged)

	QList<ParentalRating *> parentalRatingOptions() const;
	void setParentalRatingOptions(QList<ParentalRating *> newParentalRatingOptions);
	
	QList<CountryInfo *> countries() const;
	void setCountries(QList<CountryInfo *> newCountries);
	
	QList<CultureDto *> cultures() const;
	void setCultures(QList<CultureDto *> newCultures);
	
	QList<ExternalIdInfo *> externalIdInfos() const;
	void setExternalIdInfos(QList<ExternalIdInfo *> newExternalIdInfos);
	
	QString contentType() const;
	void setContentType(QString newContentType);
	
	QList<NameValuePair *> contentTypeOptions() const;
	void setContentTypeOptions(QList<NameValuePair *> newContentTypeOptions);
	
signals:
	void parentalRatingOptionsChanged(QList<ParentalRating *> newParentalRatingOptions);
	void countriesChanged(QList<CountryInfo *> newCountries);
	void culturesChanged(QList<CultureDto *> newCultures);
	void externalIdInfosChanged(QList<ExternalIdInfo *> newExternalIdInfos);
	void contentTypeChanged(QString newContentType);
	void contentTypeOptionsChanged(QList<NameValuePair *> newContentTypeOptions);
protected:
	QList<ParentalRating *> m_parentalRatingOptions;
	QList<CountryInfo *> m_countries;
	QList<CultureDto *> m_cultures;
	QList<ExternalIdInfo *> m_externalIdInfos;
	QString m_contentType;
	QList<NameValuePair *> m_contentTypeOptions;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_METADATAEDITORINFO_H
