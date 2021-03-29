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

#include "JellyfinQt/loader/postcapabilitiesparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// PostCapabilitiesParams

const QString &PostCapabilitiesParams::jellyfinId() const {
	return m_jellyfinId;
}

void PostCapabilitiesParams::setJellyfinId(QString newJellyfinId)  {
	m_jellyfinId = newJellyfinId;
}

bool PostCapabilitiesParams::jellyfinIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_jellyfinId.isNull();
}

void PostCapabilitiesParams::setJellyfinIdNull() {
	m_jellyfinId.clear();
}


const QStringList &PostCapabilitiesParams::playableMediaTypes() const {
	return m_playableMediaTypes;
}

void PostCapabilitiesParams::setPlayableMediaTypes(QStringList newPlayableMediaTypes)  {
	m_playableMediaTypes = newPlayableMediaTypes;
}

bool PostCapabilitiesParams::playableMediaTypesNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playableMediaTypes.size() == 0;
}

void PostCapabilitiesParams::setPlayableMediaTypesNull() {
	m_playableMediaTypes.clear();
}


const QList<GeneralCommandType> &PostCapabilitiesParams::supportedCommands() const {
	return m_supportedCommands;
}

void PostCapabilitiesParams::setSupportedCommands(QList<GeneralCommandType> newSupportedCommands)  {
	m_supportedCommands = newSupportedCommands;
}

bool PostCapabilitiesParams::supportedCommandsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_supportedCommands.size() == 0;
}

void PostCapabilitiesParams::setSupportedCommandsNull() {
	m_supportedCommands.clear();
}


const bool &PostCapabilitiesParams::supportsMediaControl() const {
	return m_supportsMediaControl.value();
}

void PostCapabilitiesParams::setSupportsMediaControl(bool newSupportsMediaControl)  {
	m_supportsMediaControl = newSupportsMediaControl;
}

bool PostCapabilitiesParams::supportsMediaControlNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_supportsMediaControl.has_value();
}

void PostCapabilitiesParams::setSupportsMediaControlNull() {
	m_supportsMediaControl = std::nullopt;
}


const bool &PostCapabilitiesParams::supportsPersistentIdentifier() const {
	return m_supportsPersistentIdentifier.value();
}

void PostCapabilitiesParams::setSupportsPersistentIdentifier(bool newSupportsPersistentIdentifier)  {
	m_supportsPersistentIdentifier = newSupportsPersistentIdentifier;
}

bool PostCapabilitiesParams::supportsPersistentIdentifierNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_supportsPersistentIdentifier.has_value();
}

void PostCapabilitiesParams::setSupportsPersistentIdentifierNull() {
	m_supportsPersistentIdentifier = std::nullopt;
}


const bool &PostCapabilitiesParams::supportsSync() const {
	return m_supportsSync.value();
}

void PostCapabilitiesParams::setSupportsSync(bool newSupportsSync)  {
	m_supportsSync = newSupportsSync;
}

bool PostCapabilitiesParams::supportsSyncNull() const {
	// Nullable: false
	// Type Nullable: false
	

	return !m_supportsSync.has_value();
}

void PostCapabilitiesParams::setSupportsSyncNull() {
	m_supportsSync = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
