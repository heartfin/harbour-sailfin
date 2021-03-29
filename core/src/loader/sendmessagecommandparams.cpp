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

#include "JellyfinQt/loader/sendmessagecommandparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// SendMessageCommandParams

const QString &SendMessageCommandParams::sessionId() const {
	return m_sessionId;
}

void SendMessageCommandParams::setSessionId(QString newSessionId) {
	m_sessionId = newSessionId;
}


const QString &SendMessageCommandParams::text() const {
	return m_text;
}

void SendMessageCommandParams::setText(QString newText) {
	m_text = newText;
}


const QString &SendMessageCommandParams::header() const {
	return m_header;
}

void SendMessageCommandParams::setHeader(QString newHeader)  {
	m_header = newHeader;
}

bool SendMessageCommandParams::headerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_header.isNull();
}

void SendMessageCommandParams::setHeaderNull() {
	m_header.clear();
}


const qint64 &SendMessageCommandParams::timeoutMs() const {
	return m_timeoutMs.value();
}

void SendMessageCommandParams::setTimeoutMs(qint64 newTimeoutMs)  {
	m_timeoutMs = newTimeoutMs;
}

bool SendMessageCommandParams::timeoutMsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_timeoutMs.has_value();
}

void SendMessageCommandParams::setTimeoutMsNull() {
	m_timeoutMs = std::nullopt;
}



} // NS Loader
} // NS Jellyfin
