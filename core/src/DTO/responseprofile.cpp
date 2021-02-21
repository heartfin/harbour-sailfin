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

#include <JellyfinQt/DTO/responseprofile.h>

#include <JellyfinQt/DTO/dlnaprofiletype.h>

namespace Jellyfin {
namespace DTO {

ResponseProfile::ResponseProfile(QObject *parent) : QObject(parent) {}

ResponseProfile *ResponseProfile::fromJSON(QJsonObject source, QObject *parent) {
	ResponseProfile *instance = new ResponseProfile(parent);
	instance->updateFromJSON(source);
	return instance;
}

void ResponseProfile::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject ResponseProfile::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString ResponseProfile::container() const { return m_container; }
void ResponseProfile::setContainer(QString newContainer) {
	m_container = newContainer;
	emit containerChanged(newContainer);
}

QString ResponseProfile::audioCodec() const { return m_audioCodec; }
void ResponseProfile::setAudioCodec(QString newAudioCodec) {
	m_audioCodec = newAudioCodec;
	emit audioCodecChanged(newAudioCodec);
}

QString ResponseProfile::videoCodec() const { return m_videoCodec; }
void ResponseProfile::setVideoCodec(QString newVideoCodec) {
	m_videoCodec = newVideoCodec;
	emit videoCodecChanged(newVideoCodec);
}

DlnaProfileType ResponseProfile::type() const { return m_type; }
void ResponseProfile::setType(DlnaProfileType newType) {
	m_type = newType;
	emit typeChanged(newType);
}

QString ResponseProfile::orgPn() const { return m_orgPn; }
void ResponseProfile::setOrgPn(QString newOrgPn) {
	m_orgPn = newOrgPn;
	emit orgPnChanged(newOrgPn);
}

QString ResponseProfile::mimeType() const { return m_mimeType; }
void ResponseProfile::setMimeType(QString newMimeType) {
	m_mimeType = newMimeType;
	emit mimeTypeChanged(newMimeType);
}

QList<ProfileCondition *> ResponseProfile::conditions() const { return m_conditions; }
void ResponseProfile::setConditions(QList<ProfileCondition *> newConditions) {
	m_conditions = newConditions;
	emit conditionsChanged(newConditions);
}


} // NS Jellyfin
} // NS DTO
