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

#include <JellyfinQt/dto/version.h>

namespace Jellyfin {
namespace DTO {

Version::Version() {}

Version::Version(const Version &other) :

	m_major(other.m_major),
	m_minor(other.m_minor),
	m_build(other.m_build),
	m_revision(other.m_revision),
	m_majorRevision(other.m_majorRevision),
	m_minorRevision(other.m_minorRevision){}


void Version::replaceData(Version &other) {
	m_major = other.m_major;
	m_minor = other.m_minor;
	m_build = other.m_build;
	m_revision = other.m_revision;
	m_majorRevision = other.m_majorRevision;
	m_minorRevision = other.m_minorRevision;
}

Version Version::fromJson(QJsonObject source) {
	Version instance;
	instance.setFromJson(source);
	return instance;
}


void Version::setFromJson(QJsonObject source) {
	m_major = Jellyfin::Support::fromJsonValue<qint32>(source["Major"]);
	m_minor = Jellyfin::Support::fromJsonValue<qint32>(source["Minor"]);
	m_build = Jellyfin::Support::fromJsonValue<qint32>(source["Build"]);
	m_revision = Jellyfin::Support::fromJsonValue<qint32>(source["Revision"]);
	m_majorRevision = Jellyfin::Support::fromJsonValue<qint32>(source["MajorRevision"]);
	m_minorRevision = Jellyfin::Support::fromJsonValue<qint32>(source["MinorRevision"]);

}
	
QJsonObject Version::toJson() const {
	QJsonObject result;
	
	result["Major"] = Jellyfin::Support::toJsonValue<qint32>(m_major);		
	result["Minor"] = Jellyfin::Support::toJsonValue<qint32>(m_minor);		
	result["Build"] = Jellyfin::Support::toJsonValue<qint32>(m_build);		
	result["Revision"] = Jellyfin::Support::toJsonValue<qint32>(m_revision);		
	result["MajorRevision"] = Jellyfin::Support::toJsonValue<qint32>(m_majorRevision);		
	result["MinorRevision"] = Jellyfin::Support::toJsonValue<qint32>(m_minorRevision);	
	return result;
}

qint32 Version::major() const { return m_major; }

void Version::setMajor(qint32 newMajor) {
	m_major = newMajor;
}

qint32 Version::minor() const { return m_minor; }

void Version::setMinor(qint32 newMinor) {
	m_minor = newMinor;
}

qint32 Version::build() const { return m_build; }

void Version::setBuild(qint32 newBuild) {
	m_build = newBuild;
}

qint32 Version::revision() const { return m_revision; }

void Version::setRevision(qint32 newRevision) {
	m_revision = newRevision;
}

qint32 Version::majorRevision() const { return m_majorRevision; }

void Version::setMajorRevision(qint32 newMajorRevision) {
	m_majorRevision = newMajorRevision;
}

qint32 Version::minorRevision() const { return m_minorRevision; }

void Version::setMinorRevision(qint32 newMinorRevision) {
	m_minorRevision = newMinorRevision;
}


} // NS DTO

namespace Support {

using Version = Jellyfin::DTO::Version;

template <>
Version fromJsonValue(const QJsonValue &source, convertType<Version>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return Version::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const Version &source, convertType<Version>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
