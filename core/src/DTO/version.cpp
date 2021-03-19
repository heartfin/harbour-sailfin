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

#include <JellyfinQt/DTO/version.h>

namespace Jellyfin {
namespace DTO {

Version::Version(QObject *parent) : QObject(parent) {}

Version *Version::fromJSON(QJsonObject source, QObject *parent) {
	Version *instance = new Version(parent);
	instance->updateFromJSON(source);
	return instance;
}

void Version::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject Version::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
qint32 Version::major() const { return m_major; }
void Version::setMajor(qint32 newMajor) {
	m_major = newMajor;
	emit majorChanged(newMajor);
}

qint32 Version::minor() const { return m_minor; }
void Version::setMinor(qint32 newMinor) {
	m_minor = newMinor;
	emit minorChanged(newMinor);
}

qint32 Version::build() const { return m_build; }
void Version::setBuild(qint32 newBuild) {
	m_build = newBuild;
	emit buildChanged(newBuild);
}

qint32 Version::revision() const { return m_revision; }
void Version::setRevision(qint32 newRevision) {
	m_revision = newRevision;
	emit revisionChanged(newRevision);
}

qint32 Version::majorRevision() const { return m_majorRevision; }
void Version::setMajorRevision(qint32 newMajorRevision) {
	m_majorRevision = newMajorRevision;
	emit majorRevisionChanged(newMajorRevision);
}

qint32 Version::minorRevision() const { return m_minorRevision; }
void Version::setMinorRevision(qint32 newMinorRevision) {
	m_minorRevision = newMinorRevision;
	emit minorRevisionChanged(newMinorRevision);
}


} // NS Jellyfin
} // NS DTO
