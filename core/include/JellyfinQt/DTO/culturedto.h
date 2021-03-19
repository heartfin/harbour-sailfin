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

#ifndef JELLYFIN_DTO_CULTUREDTO_H
#define JELLYFIN_DTO_CULTUREDTO_H

#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class CultureDto : public QObject {
	Q_OBJECT
public:
	explicit CultureDto(QObject *parent = nullptr);
	static CultureDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the display name.
	 */
	Q_PROPERTY(QString displayName READ displayName WRITE setDisplayName NOTIFY displayNameChanged)
	/**
	 * @brief Gets or sets the name of the two letter ISO language.
	 */
	Q_PROPERTY(QString twoLetterISOLanguageName READ twoLetterISOLanguageName WRITE setTwoLetterISOLanguageName NOTIFY twoLetterISOLanguageNameChanged)
	/**
	 * @brief Gets or sets the name of the three letter ISO language.
	 */
	Q_PROPERTY(QString threeLetterISOLanguageName READ threeLetterISOLanguageName WRITE setThreeLetterISOLanguageName NOTIFY threeLetterISOLanguageNameChanged)
	Q_PROPERTY(QStringList threeLetterISOLanguageNames READ threeLetterISOLanguageNames WRITE setThreeLetterISOLanguageNames NOTIFY threeLetterISOLanguageNamesChanged)

	QString name() const;
	void setName(QString newName);
	
	QString displayName() const;
	void setDisplayName(QString newDisplayName);
	
	QString twoLetterISOLanguageName() const;
	void setTwoLetterISOLanguageName(QString newTwoLetterISOLanguageName);
	
	QString threeLetterISOLanguageName() const;
	void setThreeLetterISOLanguageName(QString newThreeLetterISOLanguageName);
	
	QStringList threeLetterISOLanguageNames() const;
	void setThreeLetterISOLanguageNames(QStringList newThreeLetterISOLanguageNames);
	
signals:
	void nameChanged(QString newName);
	void displayNameChanged(QString newDisplayName);
	void twoLetterISOLanguageNameChanged(QString newTwoLetterISOLanguageName);
	void threeLetterISOLanguageNameChanged(QString newThreeLetterISOLanguageName);
	void threeLetterISOLanguageNamesChanged(QStringList newThreeLetterISOLanguageNames);
protected:
	QString m_name;
	QString m_displayName;
	QString m_twoLetterISOLanguageName;
	QString m_threeLetterISOLanguageName;
	QStringList m_threeLetterISOLanguageNames;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_CULTUREDTO_H
