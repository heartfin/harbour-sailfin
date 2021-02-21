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

#include <JellyfinQt/DTO/notificationtypeinfo.h>

namespace Jellyfin {
namespace DTO {

NotificationTypeInfo::NotificationTypeInfo(QObject *parent) : QObject(parent) {}

NotificationTypeInfo *NotificationTypeInfo::fromJSON(QJsonObject source, QObject *parent) {
	NotificationTypeInfo *instance = new NotificationTypeInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void NotificationTypeInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject NotificationTypeInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString NotificationTypeInfo::type() const { return m_type; }
void NotificationTypeInfo::setType(QString newType) {
	m_type = newType;
	emit typeChanged(newType);
}

QString NotificationTypeInfo::name() const { return m_name; }
void NotificationTypeInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

bool NotificationTypeInfo::enabled() const { return m_enabled; }
void NotificationTypeInfo::setEnabled(bool newEnabled) {
	m_enabled = newEnabled;
	emit enabledChanged(newEnabled);
}

QString NotificationTypeInfo::category() const { return m_category; }
void NotificationTypeInfo::setCategory(QString newCategory) {
	m_category = newCategory;
	emit categoryChanged(newCategory);
}

bool NotificationTypeInfo::isBasedOnUserEvent() const { return m_isBasedOnUserEvent; }
void NotificationTypeInfo::setIsBasedOnUserEvent(bool newIsBasedOnUserEvent) {
	m_isBasedOnUserEvent = newIsBasedOnUserEvent;
	emit isBasedOnUserEventChanged(newIsBasedOnUserEvent);
}


} // NS Jellyfin
} // NS DTO
