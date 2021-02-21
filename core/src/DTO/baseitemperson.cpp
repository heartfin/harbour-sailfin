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

#include <JellyfinQt/DTO/baseitemperson.h>

namespace Jellyfin {
namespace DTO {

BaseItemPerson::BaseItemPerson(QObject *parent) : QObject(parent) {}

BaseItemPerson *BaseItemPerson::fromJSON(QJsonObject source, QObject *parent) {
	BaseItemPerson *instance = new BaseItemPerson(parent);
	instance->updateFromJSON(source);
	return instance;
}

void BaseItemPerson::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject BaseItemPerson::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString BaseItemPerson::name() const { return m_name; }
void BaseItemPerson::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString BaseItemPerson::jellyfinId() const { return m_jellyfinId; }
void BaseItemPerson::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

QString BaseItemPerson::role() const { return m_role; }
void BaseItemPerson::setRole(QString newRole) {
	m_role = newRole;
	emit roleChanged(newRole);
}

QString BaseItemPerson::type() const { return m_type; }
void BaseItemPerson::setType(QString newType) {
	m_type = newType;
	emit typeChanged(newType);
}

QString BaseItemPerson::primaryImageTag() const { return m_primaryImageTag; }
void BaseItemPerson::setPrimaryImageTag(QString newPrimaryImageTag) {
	m_primaryImageTag = newPrimaryImageTag;
	emit primaryImageTagChanged(newPrimaryImageTag);
}

QJsonObject BaseItemPerson::imageBlurHashes() const { return m_imageBlurHashes; }
void BaseItemPerson::setImageBlurHashes(QJsonObject newImageBlurHashes) {
	m_imageBlurHashes = newImageBlurHashes;
	emit imageBlurHashesChanged(newImageBlurHashes);
}


} // NS Jellyfin
} // NS DTO
