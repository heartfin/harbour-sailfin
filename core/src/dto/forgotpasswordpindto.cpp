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

#include <JellyfinQt/dto/forgotpasswordpindto.h>

namespace Jellyfin {
namespace DTO {

ForgotPasswordPinDto::ForgotPasswordPinDto() {}
ForgotPasswordPinDto::ForgotPasswordPinDto (
		QString pin 
		) :
	m_pin(pin) { }



ForgotPasswordPinDto::ForgotPasswordPinDto(const ForgotPasswordPinDto &other) :

	m_pin(other.m_pin){}


void ForgotPasswordPinDto::replaceData(ForgotPasswordPinDto &other) {
	m_pin = other.m_pin;
}

ForgotPasswordPinDto ForgotPasswordPinDto::fromJson(QJsonObject source) {
	ForgotPasswordPinDto instance;
	instance.setFromJson(source);
	return instance;
}


void ForgotPasswordPinDto::setFromJson(QJsonObject source) {
	m_pin = Jellyfin::Support::fromJsonValue<QString>(source["Pin"]);

}
	
QJsonObject ForgotPasswordPinDto::toJson() const {
	QJsonObject result;
	
	result["Pin"] = Jellyfin::Support::toJsonValue<QString>(m_pin);	
	return result;
}

QString ForgotPasswordPinDto::pin() const { return m_pin; }

void ForgotPasswordPinDto::setPin(QString newPin) {
	m_pin = newPin;
}


} // NS DTO

namespace Support {

using ForgotPasswordPinDto = Jellyfin::DTO::ForgotPasswordPinDto;

template <>
ForgotPasswordPinDto fromJsonValue(const QJsonValue &source, convertType<ForgotPasswordPinDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ForgotPasswordPinDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ForgotPasswordPinDto &source, convertType<ForgotPasswordPinDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
