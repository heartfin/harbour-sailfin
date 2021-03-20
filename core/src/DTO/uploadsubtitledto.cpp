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

#include <JellyfinQt/DTO/uploadsubtitledto.h>

namespace Jellyfin {
namespace DTO {

UploadSubtitleDto::UploadSubtitleDto(QObject *parent) {}

UploadSubtitleDto UploadSubtitleDto::fromJson(QJsonObject source) {UploadSubtitleDto instance;
	instance->setFromJson(source, false);
	return instance;
}


void UploadSubtitleDto::setFromJson(QJsonObject source) {
	m_language = fromJsonValue<QString>(source["Language"]);
	m_format = fromJsonValue<QString>(source["Format"]);
	m_isForced = fromJsonValue<bool>(source["IsForced"]);
	m_data = fromJsonValue<QString>(source["Data"]);

}
	
QJsonObject UploadSubtitleDto::toJson() {
	QJsonObject result;
	result["Language"] = toJsonValue<QString>(m_language);
	result["Format"] = toJsonValue<QString>(m_format);
	result["IsForced"] = toJsonValue<bool>(m_isForced);
	result["Data"] = toJsonValue<QString>(m_data);

	return result;
}

QString UploadSubtitleDto::language() const { return m_language; }

void UploadSubtitleDto::setLanguage(QString newLanguage) {
	m_language = newLanguage;
}
QString UploadSubtitleDto::format() const { return m_format; }

void UploadSubtitleDto::setFormat(QString newFormat) {
	m_format = newFormat;
}
bool UploadSubtitleDto::isForced() const { return m_isForced; }

void UploadSubtitleDto::setIsForced(bool newIsForced) {
	m_isForced = newIsForced;
}
QString UploadSubtitleDto::data() const { return m_data; }

void UploadSubtitleDto::setData(QString newData) {
	m_data = newData;
}


} // NS Jellyfin
} // NS DTO
