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

#include <JellyfinQt/dto/createuserbyname.h>

namespace Jellyfin {
namespace DTO {

CreateUserByName::CreateUserByName() {}
CreateUserByName::CreateUserByName (
		QString name 
		) :
	m_name(name) { }



CreateUserByName::CreateUserByName(const CreateUserByName &other) :

	m_name(other.m_name),
	m_password(other.m_password){}


void CreateUserByName::replaceData(CreateUserByName &other) {
	m_name = other.m_name;
	m_password = other.m_password;
}

CreateUserByName CreateUserByName::fromJson(QJsonObject source) {
	CreateUserByName instance;
	instance.setFromJson(source);
	return instance;
}


void CreateUserByName::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_password = Jellyfin::Support::fromJsonValue<QString>(source["Password"]);

}
	
QJsonObject CreateUserByName::toJson() const {
	QJsonObject result;
	
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);		
	
	if (!(m_password.isNull())) {
		result["Password"] = Jellyfin::Support::toJsonValue<QString>(m_password);
	}
		
	return result;
}

QString CreateUserByName::name() const { return m_name; }

void CreateUserByName::setName(QString newName) {
	m_name = newName;
}

QString CreateUserByName::password() const { return m_password; }

void CreateUserByName::setPassword(QString newPassword) {
	m_password = newPassword;
}
bool CreateUserByName::passwordNull() const {
	return m_password.isNull();
}

void CreateUserByName::setPasswordNull() {
	m_password.clear();

}

} // NS DTO

namespace Support {

using CreateUserByName = Jellyfin::DTO::CreateUserByName;

template <>
CreateUserByName fromJsonValue(const QJsonValue &source, convertType<CreateUserByName>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return CreateUserByName::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const CreateUserByName &source, convertType<CreateUserByName>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
