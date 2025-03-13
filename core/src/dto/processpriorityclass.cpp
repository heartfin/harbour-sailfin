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

#include <JellyfinQt/dto/processpriorityclass.h>

namespace Jellyfin {
namespace DTO {

ProcessPriorityClassClass::ProcessPriorityClassClass() {}

} // NS DTO

namespace Support {

using ProcessPriorityClass = Jellyfin::DTO::ProcessPriorityClass;

template <>
ProcessPriorityClass fromJsonValue(const QJsonValue &source, convertType<ProcessPriorityClass>) {
	if (!source.isString()) return ProcessPriorityClass::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Normal")) {
		return ProcessPriorityClass::Normal;
	}
	if (str == QStringLiteral("Idle")) {
		return ProcessPriorityClass::Idle;
	}
	if (str == QStringLiteral("High")) {
		return ProcessPriorityClass::High;
	}
	if (str == QStringLiteral("RealTime")) {
		return ProcessPriorityClass::RealTime;
	}
	if (str == QStringLiteral("BelowNormal")) {
		return ProcessPriorityClass::BelowNormal;
	}
	if (str == QStringLiteral("AboveNormal")) {
		return ProcessPriorityClass::AboveNormal;
	}
	
	return ProcessPriorityClass::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const ProcessPriorityClass &source, convertType<ProcessPriorityClass>) {
	switch(source) {
	case ProcessPriorityClass::Normal:
		return QStringLiteral("Normal");
	case ProcessPriorityClass::Idle:
		return QStringLiteral("Idle");
	case ProcessPriorityClass::High:
		return QStringLiteral("High");
	case ProcessPriorityClass::RealTime:
		return QStringLiteral("RealTime");
	case ProcessPriorityClass::BelowNormal:
		return QStringLiteral("BelowNormal");
	case ProcessPriorityClass::AboveNormal:
		return QStringLiteral("AboveNormal");

	case ProcessPriorityClass::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
