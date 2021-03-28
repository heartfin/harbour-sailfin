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

#include <JellyfinQt/dto/generalcommand.h>

namespace Jellyfin {
namespace DTO {

GeneralCommand::GeneralCommand() {}

GeneralCommand::GeneralCommand(const GeneralCommand &other) :

	m_name(other.m_name),
	m_controllingUserId(other.m_controllingUserId),
	m_arguments(other.m_arguments){}


void GeneralCommand::replaceData(GeneralCommand &other) {
	m_name = other.m_name;
	m_controllingUserId = other.m_controllingUserId;
	m_arguments = other.m_arguments;
}

GeneralCommand GeneralCommand::fromJson(QJsonObject source) {
	GeneralCommand instance;
	instance.setFromJson(source);
	return instance;
}


void GeneralCommand::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<GeneralCommandType>(source["Name"]);
	m_controllingUserId = Jellyfin::Support::fromJsonValue<QString>(source["ControllingUserId"]);
	m_arguments = Jellyfin::Support::fromJsonValue<QJsonObject>(source["Arguments"]);

}
	
QJsonObject GeneralCommand::toJson() const {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<GeneralCommandType>(m_name);
	result["ControllingUserId"] = Jellyfin::Support::toJsonValue<QString>(m_controllingUserId);
	result["Arguments"] = Jellyfin::Support::toJsonValue<QJsonObject>(m_arguments);

	return result;
}

GeneralCommandType GeneralCommand::name() const { return m_name; }

void GeneralCommand::setName(GeneralCommandType newName) {
	m_name = newName;
}

QString GeneralCommand::controllingUserId() const { return m_controllingUserId; }

void GeneralCommand::setControllingUserId(QString newControllingUserId) {
	m_controllingUserId = newControllingUserId;
}

QJsonObject GeneralCommand::arguments() const { return m_arguments; }

void GeneralCommand::setArguments(QJsonObject newArguments) {
	m_arguments = newArguments;
}
bool GeneralCommand::argumentsNull() const {
	return m_arguments.isEmpty();
}

void GeneralCommand::setArgumentsNull() {
	m_arguments= QJsonObject();

}

} // NS DTO

namespace Support {

using GeneralCommand = Jellyfin::DTO::GeneralCommand;

template <>
GeneralCommand fromJsonValue(const QJsonValue &source, convertType<GeneralCommand>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return GeneralCommand::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const GeneralCommand &source, convertType<GeneralCommand>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
