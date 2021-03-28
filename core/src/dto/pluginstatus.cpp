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

#include <JellyfinQt/dto/pluginstatus.h>

namespace Jellyfin {
namespace DTO {

PluginStatusClass::PluginStatusClass() {}

} // NS DTO

namespace Support {

using PluginStatus = Jellyfin::DTO::PluginStatus;

template <>
PluginStatus fromJsonValue(const QJsonValue &source, convertType<PluginStatus>) {
	if (!source.isString()) return PluginStatus::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Active")) {
		return PluginStatus::Active;
	}
	if (str == QStringLiteral("Restart")) {
		return PluginStatus::Restart;
	}
	if (str == QStringLiteral("Deleted")) {
		return PluginStatus::Deleted;
	}
	if (str == QStringLiteral("Superceded")) {
		return PluginStatus::Superceded;
	}
	if (str == QStringLiteral("Malfunctioned")) {
		return PluginStatus::Malfunctioned;
	}
	if (str == QStringLiteral("NotSupported")) {
		return PluginStatus::NotSupported;
	}
	if (str == QStringLiteral("Disabled")) {
		return PluginStatus::Disabled;
	}
	
	return PluginStatus::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const PluginStatus &source, convertType<PluginStatus>) {
	switch(source) {
	case PluginStatus::Active:
		return QStringLiteral("Active");
	case PluginStatus::Restart:
		return QStringLiteral("Restart");
	case PluginStatus::Deleted:
		return QStringLiteral("Deleted");
	case PluginStatus::Superceded:
		return QStringLiteral("Superceded");
	case PluginStatus::Malfunctioned:
		return QStringLiteral("Malfunctioned");
	case PluginStatus::NotSupported:
		return QStringLiteral("NotSupported");
	case PluginStatus::Disabled:
		return QStringLiteral("Disabled");

	case PluginStatus::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
