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

#include "JellyfinQt/loader/createadminnotificationparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// CreateAdminNotificationParams

const QString &CreateAdminNotificationParams::description() const {
	return m_description;
}

void CreateAdminNotificationParams::setDescription(QString newDescription)  {
	m_description = newDescription;
}

bool CreateAdminNotificationParams::descriptionNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_description.isNull();
}

void CreateAdminNotificationParams::setDescriptionNull() {
	m_description.clear();
}


const NotificationLevel &CreateAdminNotificationParams::level() const {
	return m_level;
}

void CreateAdminNotificationParams::setLevel(NotificationLevel newLevel)  {
	m_level = newLevel;
}

bool CreateAdminNotificationParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level== NotificationLevel::EnumNotSet;
}

void CreateAdminNotificationParams::setLevelNull() {
	m_level= NotificationLevel::EnumNotSet;
}


const QString &CreateAdminNotificationParams::name() const {
	return m_name;
}

void CreateAdminNotificationParams::setName(QString newName)  {
	m_name = newName;
}

bool CreateAdminNotificationParams::nameNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_name.isNull();
}

void CreateAdminNotificationParams::setNameNull() {
	m_name.clear();
}


const QString &CreateAdminNotificationParams::url() const {
	return m_url;
}

void CreateAdminNotificationParams::setUrl(QString newUrl)  {
	m_url = newUrl;
}

bool CreateAdminNotificationParams::urlNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_url.isNull();
}

void CreateAdminNotificationParams::setUrlNull() {
	m_url.clear();
}



} // NS Loader
} // NS Jellyfin
