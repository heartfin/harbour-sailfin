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

#ifndef JELLYFIN_DTO_PERSONLOOKUPINFO_H
#define JELLYFIN_DTO_PERSONLOOKUPINFO_H

#include <QDateTime>
#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class PersonLookupInfo : public QObject {
	Q_OBJECT
public:
	explicit PersonLookupInfo(QObject *parent = nullptr);
	static PersonLookupInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the path.
	 */
	Q_PROPERTY(QString path READ path WRITE setPath NOTIFY pathChanged)
	/**
	 * @brief Gets or sets the metadata language.
	 */
	Q_PROPERTY(QString metadataLanguage READ metadataLanguage WRITE setMetadataLanguage NOTIFY metadataLanguageChanged)
	/**
	 * @brief Gets or sets the metadata country code.
	 */
	Q_PROPERTY(QString metadataCountryCode READ metadataCountryCode WRITE setMetadataCountryCode NOTIFY metadataCountryCodeChanged)
	/**
	 * @brief Gets or sets the provider ids.
	 */
	Q_PROPERTY(QJsonObject providerIds READ providerIds WRITE setProviderIds NOTIFY providerIdsChanged)
	/**
	 * @brief Gets or sets the year.
	 */
	Q_PROPERTY(qint32 year READ year WRITE setYear NOTIFY yearChanged)
	Q_PROPERTY(qint32 indexNumber READ indexNumber WRITE setIndexNumber NOTIFY indexNumberChanged)
	Q_PROPERTY(qint32 parentIndexNumber READ parentIndexNumber WRITE setParentIndexNumber NOTIFY parentIndexNumberChanged)
	Q_PROPERTY(QDateTime premiereDate READ premiereDate WRITE setPremiereDate NOTIFY premiereDateChanged)
	Q_PROPERTY(bool isAutomated READ isAutomated WRITE setIsAutomated NOTIFY isAutomatedChanged)

	QString name() const;
	void setName(QString newName);
	
	QString path() const;
	void setPath(QString newPath);
	
	QString metadataLanguage() const;
	void setMetadataLanguage(QString newMetadataLanguage);
	
	QString metadataCountryCode() const;
	void setMetadataCountryCode(QString newMetadataCountryCode);
	
	QJsonObject providerIds() const;
	void setProviderIds(QJsonObject newProviderIds);
	
	qint32 year() const;
	void setYear(qint32 newYear);
	
	qint32 indexNumber() const;
	void setIndexNumber(qint32 newIndexNumber);
	
	qint32 parentIndexNumber() const;
	void setParentIndexNumber(qint32 newParentIndexNumber);
	
	QDateTime premiereDate() const;
	void setPremiereDate(QDateTime newPremiereDate);
	
	bool isAutomated() const;
	void setIsAutomated(bool newIsAutomated);
	
signals:
	void nameChanged(QString newName);
	void pathChanged(QString newPath);
	void metadataLanguageChanged(QString newMetadataLanguage);
	void metadataCountryCodeChanged(QString newMetadataCountryCode);
	void providerIdsChanged(QJsonObject newProviderIds);
	void yearChanged(qint32 newYear);
	void indexNumberChanged(qint32 newIndexNumber);
	void parentIndexNumberChanged(qint32 newParentIndexNumber);
	void premiereDateChanged(QDateTime newPremiereDate);
	void isAutomatedChanged(bool newIsAutomated);
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
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PERSONLOOKUPINFO_H
