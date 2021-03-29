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

#include "JellyfinQt/loader/getlineupsparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetLineupsParams

const QString &GetLineupsParams::country() const {
	return m_country;
}

void GetLineupsParams::setCountry(QString newCountry)  {
	m_country = newCountry;
}

bool GetLineupsParams::countryNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_country.isNull();
}

void GetLineupsParams::setCountryNull() {
	m_country.clear();
}


const QString &GetLineupsParams::jellyfinId() const {
	return m_jellyfinId;
}

void GetLineupsParams::setJellyfinId(QString newJellyfinId)  {
	m_jellyfinId = newJellyfinId;
}

bool GetLineupsParams::jellyfinIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_jellyfinId.isNull();
}

void GetLineupsParams::setJellyfinIdNull() {
	m_jellyfinId.clear();
}


const QString &GetLineupsParams::location() const {
	return m_location;
}

void GetLineupsParams::setLocation(QString newLocation)  {
	m_location = newLocation;
}

bool GetLineupsParams::locationNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_location.isNull();
}

void GetLineupsParams::setLocationNull() {
	m_location.clear();
}


const QString &GetLineupsParams::type() const {
	return m_type;
}

void GetLineupsParams::setType(QString newType)  {
	m_type = newType;
}

bool GetLineupsParams::typeNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_type.isNull();
}

void GetLineupsParams::setTypeNull() {
	m_type.clear();
}



} // NS Loader
} // NS Jellyfin
