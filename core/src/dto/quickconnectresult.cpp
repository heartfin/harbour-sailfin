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

#include <JellyfinQt/dto/quickconnectresult.h>

namespace Jellyfin {
namespace DTO {

QuickConnectResult::QuickConnectResult() {}

QuickConnectResult::QuickConnectResult(const QuickConnectResult &other) :

	m_authenticated(other.m_authenticated),
	m_secret(other.m_secret),
	m_code(other.m_code),
	m_authentication(other.m_authentication),
	m_error(other.m_error),
	m_dateAdded(other.m_dateAdded){}


void QuickConnectResult::replaceData(QuickConnectResult &other) {
	m_authenticated = other.m_authenticated;
	m_secret = other.m_secret;
	m_code = other.m_code;
	m_authentication = other.m_authentication;
	m_error = other.m_error;
	m_dateAdded = other.m_dateAdded;
}

QuickConnectResult QuickConnectResult::fromJson(QJsonObject source) {
	QuickConnectResult instance;
	instance.setFromJson(source);
	return instance;
}


void QuickConnectResult::setFromJson(QJsonObject source) {
	m_authenticated = Jellyfin::Support::fromJsonValue<bool>(source["Authenticated"]);
	m_secret = Jellyfin::Support::fromJsonValue<QString>(source["Secret"]);
	m_code = Jellyfin::Support::fromJsonValue<QString>(source["Code"]);
	m_authentication = Jellyfin::Support::fromJsonValue<QString>(source["Authentication"]);
	m_error = Jellyfin::Support::fromJsonValue<QString>(source["Error"]);
	m_dateAdded = Jellyfin::Support::fromJsonValue<QDateTime>(source["DateAdded"]);

}
	
QJsonObject QuickConnectResult::toJson() const {
	QJsonObject result;
	
	result["Authenticated"] = Jellyfin::Support::toJsonValue<bool>(m_authenticated);		
	
	if (!(m_secret.isNull())) {
		result["Secret"] = Jellyfin::Support::toJsonValue<QString>(m_secret);
	}
			
	
	if (!(m_code.isNull())) {
		result["Code"] = Jellyfin::Support::toJsonValue<QString>(m_code);
	}
			
	
	if (!(m_authentication.isNull())) {
		result["Authentication"] = Jellyfin::Support::toJsonValue<QString>(m_authentication);
	}
			
	
	if (!(m_error.isNull())) {
		result["Error"] = Jellyfin::Support::toJsonValue<QString>(m_error);
	}
			
	
	if (!(m_dateAdded.isNull())) {
		result["DateAdded"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateAdded);
	}
		
	return result;
}

bool QuickConnectResult::authenticated() const { return m_authenticated; }

void QuickConnectResult::setAuthenticated(bool newAuthenticated) {
	m_authenticated = newAuthenticated;
}

QString QuickConnectResult::secret() const { return m_secret; }

void QuickConnectResult::setSecret(QString newSecret) {
	m_secret = newSecret;
}
bool QuickConnectResult::secretNull() const {
	return m_secret.isNull();
}

void QuickConnectResult::setSecretNull() {
	m_secret.clear();

}
QString QuickConnectResult::code() const { return m_code; }

void QuickConnectResult::setCode(QString newCode) {
	m_code = newCode;
}
bool QuickConnectResult::codeNull() const {
	return m_code.isNull();
}

void QuickConnectResult::setCodeNull() {
	m_code.clear();

}
QString QuickConnectResult::authentication() const { return m_authentication; }

void QuickConnectResult::setAuthentication(QString newAuthentication) {
	m_authentication = newAuthentication;
}
bool QuickConnectResult::authenticationNull() const {
	return m_authentication.isNull();
}

void QuickConnectResult::setAuthenticationNull() {
	m_authentication.clear();

}
QString QuickConnectResult::error() const { return m_error; }

void QuickConnectResult::setError(QString newError) {
	m_error = newError;
}
bool QuickConnectResult::errorNull() const {
	return m_error.isNull();
}

void QuickConnectResult::setErrorNull() {
	m_error.clear();

}
QDateTime QuickConnectResult::dateAdded() const { return m_dateAdded; }

void QuickConnectResult::setDateAdded(QDateTime newDateAdded) {
	m_dateAdded = newDateAdded;
}
bool QuickConnectResult::dateAddedNull() const {
	return m_dateAdded.isNull();
}

void QuickConnectResult::setDateAddedNull() {
	m_dateAdded= QDateTime();

}

} // NS DTO

namespace Support {

using QuickConnectResult = Jellyfin::DTO::QuickConnectResult;

template <>
QuickConnectResult fromJsonValue(const QJsonValue &source, convertType<QuickConnectResult>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return QuickConnectResult::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const QuickConnectResult &source, convertType<QuickConnectResult>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
