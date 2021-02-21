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

#ifndef JELLYFIN_DTO_STARTUPCONFIGURATIONDTO_H
#define JELLYFIN_DTO_STARTUPCONFIGURATIONDTO_H

#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class StartupConfigurationDto : public QObject {
	Q_OBJECT
public:
	explicit StartupConfigurationDto(QObject *parent = nullptr);
	static StartupConfigurationDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets UI language culture.
	 */
	Q_PROPERTY(QString uICulture READ uICulture WRITE setUICulture NOTIFY uICultureChanged)
	/**
	 * @brief Gets or sets the metadata country code.
	 */
	Q_PROPERTY(QString metadataCountryCode READ metadataCountryCode WRITE setMetadataCountryCode NOTIFY metadataCountryCodeChanged)
	/**
	 * @brief Gets or sets the preferred language for the metadata.
	 */
	Q_PROPERTY(QString preferredMetadataLanguage READ preferredMetadataLanguage WRITE setPreferredMetadataLanguage NOTIFY preferredMetadataLanguageChanged)

	QString uICulture() const;
	void setUICulture(QString newUICulture);
	
	QString metadataCountryCode() const;
	void setMetadataCountryCode(QString newMetadataCountryCode);
	
	QString preferredMetadataLanguage() const;
	void setPreferredMetadataLanguage(QString newPreferredMetadataLanguage);
	
signals:
	void uICultureChanged(QString newUICulture);
	void metadataCountryCodeChanged(QString newMetadataCountryCode);
	void preferredMetadataLanguageChanged(QString newPreferredMetadataLanguage);
protected:
	QString m_uICulture;
	QString m_metadataCountryCode;
	QString m_preferredMetadataLanguage;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_STARTUPCONFIGURATIONDTO_H
