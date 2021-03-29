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

#include "JellyfinQt/loader/addlistingproviderparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// AddListingProviderParams

const QString &AddListingProviderParams::pw() const {
	return m_pw;
}

void AddListingProviderParams::setPw(QString newPw)  {
	m_pw = newPw;
}

bool AddListingProviderParams::pwNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_pw.isNull();
}

void AddListingProviderParams::setPwNull() {
	m_pw.clear();
}


const bool &AddListingProviderParams::validateListings() const {
	return m_validateListings.value();
}

void AddListingProviderParams::setValidateListings(bool newValidateListings)  {
	m_validateListings = newValidateListings;
}

bool AddListingProviderParams::validateListingsNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_validateListings.has_value();
}

void AddListingProviderParams::setValidateListingsNull() {
	m_validateListings = std::nullopt;
}


const bool &AddListingProviderParams::validateLogin() const {
	return m_validateLogin.value();
}

void AddListingProviderParams::setValidateLogin(bool newValidateLogin)  {
	m_validateLogin = newValidateLogin;
}

bool AddListingProviderParams::validateLoginNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_validateLogin.has_value();
}

void AddListingProviderParams::setValidateLoginNull() {
	m_validateLogin = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
