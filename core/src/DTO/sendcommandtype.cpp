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

#include <JellyfinQt/DTO/sendcommandtype.h>

namespace Jellyfin {
namespace DTO {

SendCommandTypeClass::SendCommandTypeClass() {}


} // NS DTO

namespace Support {

using SendCommandType = Jellyfin::DTO::SendCommandType;

template <>
SendCommandType fromJsonValue<SendCommandType>(const QJsonValue &source) {
	if (!source.isString()) return SendCommandType::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Unpause")) {
		return SendCommandType::Unpause;
	}
	if (str == QStringLiteral("Pause")) {
		return SendCommandType::Pause;
	}
	if (str == QStringLiteral("Stop")) {
		return SendCommandType::Stop;
	}
	if (str == QStringLiteral("Seek")) {
		return SendCommandType::Seek;
	}
	
	return SendCommandType::EnumNotSet;
}

} // NS Jellyfin
} // NS DTO
