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

#include <JellyfinQt/dto/xbmcmetadataoptions.h>

namespace Jellyfin {
namespace DTO {

XbmcMetadataOptions::XbmcMetadataOptions() {}
XbmcMetadataOptions::XbmcMetadataOptions (
		QString releaseDateFormat, 
		bool saveImagePathsInNfo, 
		bool enablePathSubstitution, 
		bool enableExtraThumbsDuplication 
		) :
	m_releaseDateFormat(releaseDateFormat),
	m_saveImagePathsInNfo(saveImagePathsInNfo),
	m_enablePathSubstitution(enablePathSubstitution),
	m_enableExtraThumbsDuplication(enableExtraThumbsDuplication) { }



XbmcMetadataOptions::XbmcMetadataOptions(const XbmcMetadataOptions &other) :

	m_userId(other.m_userId),
	m_releaseDateFormat(other.m_releaseDateFormat),
	m_saveImagePathsInNfo(other.m_saveImagePathsInNfo),
	m_enablePathSubstitution(other.m_enablePathSubstitution),
	m_enableExtraThumbsDuplication(other.m_enableExtraThumbsDuplication){}


void XbmcMetadataOptions::replaceData(XbmcMetadataOptions &other) {
	m_userId = other.m_userId;
	m_releaseDateFormat = other.m_releaseDateFormat;
	m_saveImagePathsInNfo = other.m_saveImagePathsInNfo;
	m_enablePathSubstitution = other.m_enablePathSubstitution;
	m_enableExtraThumbsDuplication = other.m_enableExtraThumbsDuplication;
}

XbmcMetadataOptions XbmcMetadataOptions::fromJson(QJsonObject source) {
	XbmcMetadataOptions instance;
	instance.setFromJson(source);
	return instance;
}


void XbmcMetadataOptions::setFromJson(QJsonObject source) {
	m_userId = Jellyfin::Support::fromJsonValue<QString>(source["UserId"]);
	m_releaseDateFormat = Jellyfin::Support::fromJsonValue<QString>(source["ReleaseDateFormat"]);
	m_saveImagePathsInNfo = Jellyfin::Support::fromJsonValue<bool>(source["SaveImagePathsInNfo"]);
	m_enablePathSubstitution = Jellyfin::Support::fromJsonValue<bool>(source["EnablePathSubstitution"]);
	m_enableExtraThumbsDuplication = Jellyfin::Support::fromJsonValue<bool>(source["EnableExtraThumbsDuplication"]);

}
	
QJsonObject XbmcMetadataOptions::toJson() const {
	QJsonObject result;
	
	
	if (!(m_userId.isNull())) {
		result["UserId"] = Jellyfin::Support::toJsonValue<QString>(m_userId);
	}
			
	result["ReleaseDateFormat"] = Jellyfin::Support::toJsonValue<QString>(m_releaseDateFormat);		
	result["SaveImagePathsInNfo"] = Jellyfin::Support::toJsonValue<bool>(m_saveImagePathsInNfo);		
	result["EnablePathSubstitution"] = Jellyfin::Support::toJsonValue<bool>(m_enablePathSubstitution);		
	result["EnableExtraThumbsDuplication"] = Jellyfin::Support::toJsonValue<bool>(m_enableExtraThumbsDuplication);	
	return result;
}

QString XbmcMetadataOptions::userId() const { return m_userId; }

void XbmcMetadataOptions::setUserId(QString newUserId) {
	m_userId = newUserId;
}
bool XbmcMetadataOptions::userIdNull() const {
	return m_userId.isNull();
}

void XbmcMetadataOptions::setUserIdNull() {
	m_userId.clear();

}
QString XbmcMetadataOptions::releaseDateFormat() const { return m_releaseDateFormat; }

void XbmcMetadataOptions::setReleaseDateFormat(QString newReleaseDateFormat) {
	m_releaseDateFormat = newReleaseDateFormat;
}

bool XbmcMetadataOptions::saveImagePathsInNfo() const { return m_saveImagePathsInNfo; }

void XbmcMetadataOptions::setSaveImagePathsInNfo(bool newSaveImagePathsInNfo) {
	m_saveImagePathsInNfo = newSaveImagePathsInNfo;
}

bool XbmcMetadataOptions::enablePathSubstitution() const { return m_enablePathSubstitution; }

void XbmcMetadataOptions::setEnablePathSubstitution(bool newEnablePathSubstitution) {
	m_enablePathSubstitution = newEnablePathSubstitution;
}

bool XbmcMetadataOptions::enableExtraThumbsDuplication() const { return m_enableExtraThumbsDuplication; }

void XbmcMetadataOptions::setEnableExtraThumbsDuplication(bool newEnableExtraThumbsDuplication) {
	m_enableExtraThumbsDuplication = newEnableExtraThumbsDuplication;
}


} // NS DTO

namespace Support {

using XbmcMetadataOptions = Jellyfin::DTO::XbmcMetadataOptions;

template <>
XbmcMetadataOptions fromJsonValue(const QJsonValue &source, convertType<XbmcMetadataOptions>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return XbmcMetadataOptions::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const XbmcMetadataOptions &source, convertType<XbmcMetadataOptions>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
