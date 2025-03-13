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

#include <JellyfinQt/dto/culturedto.h>

namespace Jellyfin {
namespace DTO {

CultureDto::CultureDto() {}
CultureDto::CultureDto (
		QString name, 
		QString displayName, 
		QString twoLetterISOLanguageName, 
		QStringList threeLetterISOLanguageNames 
		) :
	m_name(name),
	m_displayName(displayName),
	m_twoLetterISOLanguageName(twoLetterISOLanguageName),
	m_threeLetterISOLanguageNames(threeLetterISOLanguageNames) { }



CultureDto::CultureDto(const CultureDto &other) :

	m_name(other.m_name),
	m_displayName(other.m_displayName),
	m_twoLetterISOLanguageName(other.m_twoLetterISOLanguageName),
	m_threeLetterISOLanguageName(other.m_threeLetterISOLanguageName),
	m_threeLetterISOLanguageNames(other.m_threeLetterISOLanguageNames){}


void CultureDto::replaceData(CultureDto &other) {
	m_name = other.m_name;
	m_displayName = other.m_displayName;
	m_twoLetterISOLanguageName = other.m_twoLetterISOLanguageName;
	m_threeLetterISOLanguageName = other.m_threeLetterISOLanguageName;
	m_threeLetterISOLanguageNames = other.m_threeLetterISOLanguageNames;
}

CultureDto CultureDto::fromJson(QJsonObject source) {
	CultureDto instance;
	instance.setFromJson(source);
	return instance;
}


void CultureDto::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_displayName = Jellyfin::Support::fromJsonValue<QString>(source["DisplayName"]);
	m_twoLetterISOLanguageName = Jellyfin::Support::fromJsonValue<QString>(source["TwoLetterISOLanguageName"]);
	m_threeLetterISOLanguageName = Jellyfin::Support::fromJsonValue<QString>(source["ThreeLetterISOLanguageName"]);
	m_threeLetterISOLanguageNames = Jellyfin::Support::fromJsonValue<QStringList>(source["ThreeLetterISOLanguageNames"]);

}
	
QJsonObject CultureDto::toJson() const {
	QJsonObject result;
	
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);		
	result["DisplayName"] = Jellyfin::Support::toJsonValue<QString>(m_displayName);		
	result["TwoLetterISOLanguageName"] = Jellyfin::Support::toJsonValue<QString>(m_twoLetterISOLanguageName);		
	
	if (!(m_threeLetterISOLanguageName.isNull())) {
		result["ThreeLetterISOLanguageName"] = Jellyfin::Support::toJsonValue<QString>(m_threeLetterISOLanguageName);
	}
			
	result["ThreeLetterISOLanguageNames"] = Jellyfin::Support::toJsonValue<QStringList>(m_threeLetterISOLanguageNames);	
	return result;
}

QString CultureDto::name() const { return m_name; }

void CultureDto::setName(QString newName) {
	m_name = newName;
}

QString CultureDto::displayName() const { return m_displayName; }

void CultureDto::setDisplayName(QString newDisplayName) {
	m_displayName = newDisplayName;
}

QString CultureDto::twoLetterISOLanguageName() const { return m_twoLetterISOLanguageName; }

void CultureDto::setTwoLetterISOLanguageName(QString newTwoLetterISOLanguageName) {
	m_twoLetterISOLanguageName = newTwoLetterISOLanguageName;
}

QString CultureDto::threeLetterISOLanguageName() const { return m_threeLetterISOLanguageName; }

void CultureDto::setThreeLetterISOLanguageName(QString newThreeLetterISOLanguageName) {
	m_threeLetterISOLanguageName = newThreeLetterISOLanguageName;
}
bool CultureDto::threeLetterISOLanguageNameNull() const {
	return m_threeLetterISOLanguageName.isNull();
}

void CultureDto::setThreeLetterISOLanguageNameNull() {
	m_threeLetterISOLanguageName.clear();

}
QStringList CultureDto::threeLetterISOLanguageNames() const { return m_threeLetterISOLanguageNames; }

void CultureDto::setThreeLetterISOLanguageNames(QStringList newThreeLetterISOLanguageNames) {
	m_threeLetterISOLanguageNames = newThreeLetterISOLanguageNames;
}


} // NS DTO

namespace Support {

using CultureDto = Jellyfin::DTO::CultureDto;

template <>
CultureDto fromJsonValue(const QJsonValue &source, convertType<CultureDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return CultureDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const CultureDto &source, convertType<CultureDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
